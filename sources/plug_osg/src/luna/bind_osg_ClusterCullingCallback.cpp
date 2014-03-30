#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ClusterCullingCallback.h>

class luna_wrapper_osg_ClusterCullingCallback {
public:
	typedef Luna< osg::ClusterCullingCallback > luna_t;

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

		osg::ClusterCullingCallback* self= (osg::ClusterCullingCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ClusterCullingCallback >::push(L,self,false);
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
		//osg::ClusterCullingCallback* ptr= dynamic_cast< osg::ClusterCullingCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::ClusterCullingCallback* ptr= luna_caster< osg::Referenced, osg::ClusterCullingCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ClusterCullingCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeFrom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setControlPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getControlPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDeviation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDeviation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_cull(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_cull(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::ClusterCullingCallback::ClusterCullingCallback()
	static osg::ClusterCullingCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ClusterCullingCallback::ClusterCullingCallback() function, expected prototype:\nosg::ClusterCullingCallback::ClusterCullingCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ClusterCullingCallback();
	}

	// osg::ClusterCullingCallback::ClusterCullingCallback(const osg::ClusterCullingCallback & ccc, const osg::CopyOp & copyop)
	static osg::ClusterCullingCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ClusterCullingCallback::ClusterCullingCallback(const osg::ClusterCullingCallback & ccc, const osg::CopyOp & copyop) function, expected prototype:\nosg::ClusterCullingCallback::ClusterCullingCallback(const osg::ClusterCullingCallback & ccc, const osg::CopyOp & copyop)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ClusterCullingCallback* ccc_ptr=(Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1));
		if( !ccc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ccc in osg::ClusterCullingCallback::ClusterCullingCallback function");
		}
		const osg::ClusterCullingCallback & ccc=*ccc_ptr;
		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ClusterCullingCallback::ClusterCullingCallback function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		return new osg::ClusterCullingCallback(ccc, copyop);
	}

	// osg::ClusterCullingCallback::ClusterCullingCallback(const osg::Vec3f & controlPoint, const osg::Vec3f & normal, float deviation)
	static osg::ClusterCullingCallback* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::ClusterCullingCallback::ClusterCullingCallback(const osg::Vec3f & controlPoint, const osg::Vec3f & normal, float deviation) function, expected prototype:\nosg::ClusterCullingCallback::ClusterCullingCallback(const osg::Vec3f & controlPoint, const osg::Vec3f & normal, float deviation)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* controlPoint_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !controlPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg controlPoint in osg::ClusterCullingCallback::ClusterCullingCallback function");
		}
		const osg::Vec3f & controlPoint=*controlPoint_ptr;
		const osg::Vec3f* normal_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in osg::ClusterCullingCallback::ClusterCullingCallback function");
		}
		const osg::Vec3f & normal=*normal_ptr;
		float deviation=(float)lua_tonumber(L,3);

		return new osg::ClusterCullingCallback(controlPoint, normal, deviation);
	}

	// osg::ClusterCullingCallback::ClusterCullingCallback(const osg::Drawable * drawable)
	static osg::ClusterCullingCallback* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::ClusterCullingCallback::ClusterCullingCallback(const osg::Drawable * drawable) function, expected prototype:\nosg::ClusterCullingCallback::ClusterCullingCallback(const osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1));

		return new osg::ClusterCullingCallback(drawable);
	}

	// osg::ClusterCullingCallback::ClusterCullingCallback(lua_Table * data)
	static osg::ClusterCullingCallback* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::ClusterCullingCallback::ClusterCullingCallback(lua_Table * data) function, expected prototype:\nosg::ClusterCullingCallback::ClusterCullingCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_ClusterCullingCallback(L,NULL);
	}

	// osg::ClusterCullingCallback::ClusterCullingCallback(lua_Table * data, const osg::ClusterCullingCallback & ccc, const osg::CopyOp & copyop)
	static osg::ClusterCullingCallback* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::ClusterCullingCallback::ClusterCullingCallback(lua_Table * data, const osg::ClusterCullingCallback & ccc, const osg::CopyOp & copyop) function, expected prototype:\nosg::ClusterCullingCallback::ClusterCullingCallback(lua_Table * data, const osg::ClusterCullingCallback & ccc, const osg::CopyOp & copyop)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ClusterCullingCallback* ccc_ptr=(Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,2));
		if( !ccc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ccc in osg::ClusterCullingCallback::ClusterCullingCallback function");
		}
		const osg::ClusterCullingCallback & ccc=*ccc_ptr;
		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,3));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ClusterCullingCallback::ClusterCullingCallback function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		return new wrapper_osg_ClusterCullingCallback(L,NULL, ccc, copyop);
	}

	// osg::ClusterCullingCallback::ClusterCullingCallback(lua_Table * data, const osg::Vec3f & controlPoint, const osg::Vec3f & normal, float deviation)
	static osg::ClusterCullingCallback* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in osg::ClusterCullingCallback::ClusterCullingCallback(lua_Table * data, const osg::Vec3f & controlPoint, const osg::Vec3f & normal, float deviation) function, expected prototype:\nosg::ClusterCullingCallback::ClusterCullingCallback(lua_Table * data, const osg::Vec3f & controlPoint, const osg::Vec3f & normal, float deviation)\nClass arguments details:\narg 2 ID = 92303204\narg 3 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* controlPoint_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !controlPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg controlPoint in osg::ClusterCullingCallback::ClusterCullingCallback function");
		}
		const osg::Vec3f & controlPoint=*controlPoint_ptr;
		const osg::Vec3f* normal_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in osg::ClusterCullingCallback::ClusterCullingCallback function");
		}
		const osg::Vec3f & normal=*normal_ptr;
		float deviation=(float)lua_tonumber(L,4);

		return new wrapper_osg_ClusterCullingCallback(L,NULL, controlPoint, normal, deviation);
	}

	// osg::ClusterCullingCallback::ClusterCullingCallback(lua_Table * data, const osg::Drawable * drawable)
	static osg::ClusterCullingCallback* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in osg::ClusterCullingCallback::ClusterCullingCallback(lua_Table * data, const osg::Drawable * drawable) function, expected prototype:\nosg::ClusterCullingCallback::ClusterCullingCallback(lua_Table * data, const osg::Drawable * drawable)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));

		return new wrapper_osg_ClusterCullingCallback(L,NULL, drawable);
	}

	// Overload binder for osg::ClusterCullingCallback::ClusterCullingCallback
	static osg::ClusterCullingCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function ClusterCullingCallback, cannot match any of the overloads for function ClusterCullingCallback:\n  ClusterCullingCallback()\n  ClusterCullingCallback(const osg::ClusterCullingCallback &, const osg::CopyOp &)\n  ClusterCullingCallback(const osg::Vec3f &, const osg::Vec3f &, float)\n  ClusterCullingCallback(const osg::Drawable *)\n  ClusterCullingCallback(lua_Table *)\n  ClusterCullingCallback(lua_Table *, const osg::ClusterCullingCallback &, const osg::CopyOp &)\n  ClusterCullingCallback(lua_Table *, const osg::Vec3f &, const osg::Vec3f &, float)\n  ClusterCullingCallback(lua_Table *, const osg::Drawable *)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ClusterCullingCallback::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClusterCullingCallback::cloneType() const function, expected prototype:\nosg::Object * osg::ClusterCullingCallback::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClusterCullingCallback::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ClusterCullingCallback::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClusterCullingCallback::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ClusterCullingCallback::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ClusterCullingCallback::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClusterCullingCallback::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ClusterCullingCallback::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ClusterCullingCallback::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ClusterCullingCallback::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ClusterCullingCallback::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ClusterCullingCallback::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ClusterCullingCallback::libraryName() const function, expected prototype:\nconst char * osg::ClusterCullingCallback::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ClusterCullingCallback::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ClusterCullingCallback::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ClusterCullingCallback::className() const function, expected prototype:\nconst char * osg::ClusterCullingCallback::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ClusterCullingCallback::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::ClusterCullingCallback::computeFrom(const osg::Drawable * drawable)
	static int _bind_computeFrom(lua_State *L) {
		if (!_lg_typecheck_computeFrom(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::computeFrom(const osg::Drawable * drawable) function, expected prototype:\nvoid osg::ClusterCullingCallback::computeFrom(const osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));

		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::computeFrom(const osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->computeFrom(drawable);

		return 0;
	}

	// void osg::ClusterCullingCallback::transform(const osg::Matrixd & matrix)
	static int _bind_transform(lua_State *L) {
		if (!_lg_typecheck_transform(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::transform(const osg::Matrixd & matrix) function, expected prototype:\nvoid osg::ClusterCullingCallback::transform(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::ClusterCullingCallback::transform function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::transform(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->transform(matrix);

		return 0;
	}

	// void osg::ClusterCullingCallback::set(const osg::Vec3f & controlPoint, const osg::Vec3f & normal, float deviation, float radius)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::set(const osg::Vec3f & controlPoint, const osg::Vec3f & normal, float deviation, float radius) function, expected prototype:\nvoid osg::ClusterCullingCallback::set(const osg::Vec3f & controlPoint, const osg::Vec3f & normal, float deviation, float radius)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* controlPoint_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !controlPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg controlPoint in osg::ClusterCullingCallback::set function");
		}
		const osg::Vec3f & controlPoint=*controlPoint_ptr;
		const osg::Vec3f* normal_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in osg::ClusterCullingCallback::set function");
		}
		const osg::Vec3f & normal=*normal_ptr;
		float deviation=(float)lua_tonumber(L,4);
		float radius=(float)lua_tonumber(L,5);

		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::set(const osg::Vec3f &, const osg::Vec3f &, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(controlPoint, normal, deviation, radius);

		return 0;
	}

	// void osg::ClusterCullingCallback::setControlPoint(const osg::Vec3f & controlPoint)
	static int _bind_setControlPoint(lua_State *L) {
		if (!_lg_typecheck_setControlPoint(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::setControlPoint(const osg::Vec3f & controlPoint) function, expected prototype:\nvoid osg::ClusterCullingCallback::setControlPoint(const osg::Vec3f & controlPoint)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* controlPoint_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !controlPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg controlPoint in osg::ClusterCullingCallback::setControlPoint function");
		}
		const osg::Vec3f & controlPoint=*controlPoint_ptr;

		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::setControlPoint(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setControlPoint(controlPoint);

		return 0;
	}

	// const osg::Vec3f & osg::ClusterCullingCallback::getControlPoint() const
	static int _bind_getControlPoint(lua_State *L) {
		if (!_lg_typecheck_getControlPoint(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::ClusterCullingCallback::getControlPoint() const function, expected prototype:\nconst osg::Vec3f & osg::ClusterCullingCallback::getControlPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::ClusterCullingCallback::getControlPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getControlPoint();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::ClusterCullingCallback::setNormal(const osg::Vec3f & normal)
	static int _bind_setNormal(lua_State *L) {
		if (!_lg_typecheck_setNormal(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::setNormal(const osg::Vec3f & normal) function, expected prototype:\nvoid osg::ClusterCullingCallback::setNormal(const osg::Vec3f & normal)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* normal_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in osg::ClusterCullingCallback::setNormal function");
		}
		const osg::Vec3f & normal=*normal_ptr;

		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::setNormal(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNormal(normal);

		return 0;
	}

	// const osg::Vec3f & osg::ClusterCullingCallback::getNormal() const
	static int _bind_getNormal(lua_State *L) {
		if (!_lg_typecheck_getNormal(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::ClusterCullingCallback::getNormal() const function, expected prototype:\nconst osg::Vec3f & osg::ClusterCullingCallback::getNormal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::ClusterCullingCallback::getNormal() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getNormal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::ClusterCullingCallback::setRadius(float radius)
	static int _bind_setRadius(lua_State *L) {
		if (!_lg_typecheck_setRadius(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::setRadius(float radius) function, expected prototype:\nvoid osg::ClusterCullingCallback::setRadius(float radius)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float radius=(float)lua_tonumber(L,2);

		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::setRadius(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRadius(radius);

		return 0;
	}

	// float osg::ClusterCullingCallback::getRadius() const
	static int _bind_getRadius(lua_State *L) {
		if (!_lg_typecheck_getRadius(L)) {
			luaL_error(L, "luna typecheck failed in float osg::ClusterCullingCallback::getRadius() const function, expected prototype:\nfloat osg::ClusterCullingCallback::getRadius() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::ClusterCullingCallback::getRadius() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ClusterCullingCallback::setDeviation(float deviation)
	static int _bind_setDeviation(lua_State *L) {
		if (!_lg_typecheck_setDeviation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::setDeviation(float deviation) function, expected prototype:\nvoid osg::ClusterCullingCallback::setDeviation(float deviation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float deviation=(float)lua_tonumber(L,2);

		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::setDeviation(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDeviation(deviation);

		return 0;
	}

	// float osg::ClusterCullingCallback::getDeviation() const
	static int _bind_getDeviation(lua_State *L) {
		if (!_lg_typecheck_getDeviation(L)) {
			luaL_error(L, "luna typecheck failed in float osg::ClusterCullingCallback::getDeviation() const function, expected prototype:\nfloat osg::ClusterCullingCallback::getDeviation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::ClusterCullingCallback::getDeviation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getDeviation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::ClusterCullingCallback::cull(osg::NodeVisitor * arg1, osg::Drawable * arg2, osg::State * arg3) const
	static int _bind_cull(lua_State *L) {
		if (!_lg_typecheck_cull(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ClusterCullingCallback::cull(osg::NodeVisitor * arg1, osg::Drawable * arg2, osg::State * arg3) const function, expected prototype:\nbool osg::ClusterCullingCallback::cull(osg::NodeVisitor * arg1, osg::Drawable * arg2, osg::State * arg3) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* _arg2=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));
		osg::State* _arg3=(Luna< osg::Referenced >::checkSubType< osg::State >(L,4));

		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ClusterCullingCallback::cull(osg::NodeVisitor *, osg::Drawable *, osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->cull(_arg1, _arg2, _arg3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ClusterCullingCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::ClusterCullingCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClusterCullingCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::ClusterCullingCallback::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::base_setName(const std::string & name) function, expected prototype:\nvoid osg::ClusterCullingCallback::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClusterCullingCallback::setName(name);

		return 0;
	}

	// void osg::ClusterCullingCallback::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::base_computeDataVariance() function, expected prototype:\nvoid osg::ClusterCullingCallback::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClusterCullingCallback::computeDataVariance();

		return 0;
	}

	// void osg::ClusterCullingCallback::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::ClusterCullingCallback::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClusterCullingCallback::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::ClusterCullingCallback::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::ClusterCullingCallback::base_getUserData() function, expected prototype:\nosg::Referenced * osg::ClusterCullingCallback::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::ClusterCullingCallback::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ClusterCullingCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::ClusterCullingCallback::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::ClusterCullingCallback::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::ClusterCullingCallback::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::ClusterCullingCallback::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ClusterCullingCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ClusterCullingCallback::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::ClusterCullingCallback::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::ClusterCullingCallback::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClusterCullingCallback::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::ClusterCullingCallback::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClusterCullingCallback::base_cloneType() const function, expected prototype:\nosg::Object * osg::ClusterCullingCallback::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClusterCullingCallback::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ClusterCullingCallback::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ClusterCullingCallback::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClusterCullingCallback::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ClusterCullingCallback::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ClusterCullingCallback::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClusterCullingCallback::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ClusterCullingCallback::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ClusterCullingCallback::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ClusterCullingCallback::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ClusterCullingCallback::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ClusterCullingCallback::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ClusterCullingCallback::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ClusterCullingCallback::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ClusterCullingCallback::base_libraryName() const function, expected prototype:\nconst char * osg::ClusterCullingCallback::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ClusterCullingCallback::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ClusterCullingCallback::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ClusterCullingCallback::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ClusterCullingCallback::base_className() const function, expected prototype:\nconst char * osg::ClusterCullingCallback::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ClusterCullingCallback::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ClusterCullingCallback::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osg::ClusterCullingCallback::base_cull(osg::NodeVisitor * arg1, osg::Drawable * arg2, osg::State * arg3) const
	static int _bind_base_cull(lua_State *L) {
		if (!_lg_typecheck_base_cull(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ClusterCullingCallback::base_cull(osg::NodeVisitor * arg1, osg::Drawable * arg2, osg::State * arg3) const function, expected prototype:\nbool osg::ClusterCullingCallback::base_cull(osg::NodeVisitor * arg1, osg::Drawable * arg2, osg::State * arg3) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* _arg2=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));
		osg::State* _arg3=(Luna< osg::Referenced >::checkSubType< osg::State >(L,4));

		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ClusterCullingCallback::base_cull(osg::NodeVisitor *, osg::Drawable *, osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ClusterCullingCallback::cull(_arg1, _arg2, _arg3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// void osg::ClusterCullingCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClusterCullingCallback::operator()(osg::Node * node, osg::NodeVisitor * nv) function, expected prototype:\nvoid osg::ClusterCullingCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::ClusterCullingCallback* self=Luna< osg::Referenced >::checkSubType< osg::ClusterCullingCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClusterCullingCallback::operator()(osg::Node *, osg::NodeVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(node, nv);

		return 0;
	}


};

osg::ClusterCullingCallback* LunaTraits< osg::ClusterCullingCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ClusterCullingCallback::_bind_ctor(L);
}

void LunaTraits< osg::ClusterCullingCallback >::_bind_dtor(osg::ClusterCullingCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ClusterCullingCallback >::className[] = "ClusterCullingCallback";
const char LunaTraits< osg::ClusterCullingCallback >::fullName[] = "osg::ClusterCullingCallback";
const char LunaTraits< osg::ClusterCullingCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::ClusterCullingCallback >::parents[] = {"osg.Drawable_CullCallback", "osg.NodeCallback", 0};
const int LunaTraits< osg::ClusterCullingCallback >::hash = 69111348;
const int LunaTraits< osg::ClusterCullingCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ClusterCullingCallback >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ClusterCullingCallback::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ClusterCullingCallback::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ClusterCullingCallback::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ClusterCullingCallback::_bind_libraryName},
	{"className", &luna_wrapper_osg_ClusterCullingCallback::_bind_className},
	{"computeFrom", &luna_wrapper_osg_ClusterCullingCallback::_bind_computeFrom},
	{"transform", &luna_wrapper_osg_ClusterCullingCallback::_bind_transform},
	{"set", &luna_wrapper_osg_ClusterCullingCallback::_bind_set},
	{"setControlPoint", &luna_wrapper_osg_ClusterCullingCallback::_bind_setControlPoint},
	{"getControlPoint", &luna_wrapper_osg_ClusterCullingCallback::_bind_getControlPoint},
	{"setNormal", &luna_wrapper_osg_ClusterCullingCallback::_bind_setNormal},
	{"getNormal", &luna_wrapper_osg_ClusterCullingCallback::_bind_getNormal},
	{"setRadius", &luna_wrapper_osg_ClusterCullingCallback::_bind_setRadius},
	{"getRadius", &luna_wrapper_osg_ClusterCullingCallback::_bind_getRadius},
	{"setDeviation", &luna_wrapper_osg_ClusterCullingCallback::_bind_setDeviation},
	{"getDeviation", &luna_wrapper_osg_ClusterCullingCallback::_bind_getDeviation},
	{"cull", &luna_wrapper_osg_ClusterCullingCallback::_bind_cull},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_ClusterCullingCallback::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_ClusterCullingCallback::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_ClusterCullingCallback::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_ClusterCullingCallback::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_ClusterCullingCallback::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_ClusterCullingCallback::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_ClusterCullingCallback::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_ClusterCullingCallback::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_ClusterCullingCallback::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_ClusterCullingCallback::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_ClusterCullingCallback::_bind_base_className},
	{"base_cull", &luna_wrapper_osg_ClusterCullingCallback::_bind_base_cull},
	{"op_call", &luna_wrapper_osg_ClusterCullingCallback::_bind_op_call},
	{"fromVoid", &luna_wrapper_osg_ClusterCullingCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ClusterCullingCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ClusterCullingCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ClusterCullingCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ClusterCullingCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ClusterCullingCallback >::enumValues[] = {
	{0,0}
};


