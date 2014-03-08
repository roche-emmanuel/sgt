#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_RefMatrixf.h>

class luna_wrapper_osg_RefMatrixf {
public:
	typedef Luna< osg::RefMatrixf > luna_t;

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

		osg::RefMatrixf* self= (osg::RefMatrixf*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::RefMatrixf >::push(L,self,false);
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
		//osg::RefMatrixf* ptr= dynamic_cast< osg::RefMatrixf* >(Luna< osg::Referenced >::check(L,1));
		osg::RefMatrixf* ptr= luna_caster< osg::Referenced, osg::RefMatrixf >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::RefMatrixf >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=16 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( lua_type(L,10)!=LUA_TNUMBER ) return false;
		if( lua_type(L,11)!=LUA_TNUMBER ) return false;
		if( lua_type(L,12)!=LUA_TNUMBER ) return false;
		if( lua_type(L,13)!=LUA_TNUMBER ) return false;
		if( lua_type(L,14)!=LUA_TNUMBER ) return false;
		if( lua_type(L,15)!=LUA_TNUMBER ) return false;
		if( lua_type(L,16)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_10(lua_State *L) {
		if( lua_gettop(L)!=17 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( lua_type(L,10)!=LUA_TNUMBER ) return false;
		if( lua_type(L,11)!=LUA_TNUMBER ) return false;
		if( lua_type(L,12)!=LUA_TNUMBER ) return false;
		if( lua_type(L,13)!=LUA_TNUMBER ) return false;
		if( lua_type(L,14)!=LUA_TNUMBER ) return false;
		if( lua_type(L,15)!=LUA_TNUMBER ) return false;
		if( lua_type(L,16)!=LUA_TNUMBER ) return false;
		if( lua_type(L,17)!=LUA_TNUMBER ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::RefMatrixf::RefMatrixf()
	static osg::RefMatrixf* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf() function, expected prototype:\nosg::RefMatrixf::RefMatrixf()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::RefMatrixf();
	}

	// osg::RefMatrixf::RefMatrixf(const osg::Matrixf & other)
	static osg::RefMatrixf* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf(const osg::Matrixf & other) function, expected prototype:\nosg::RefMatrixf::RefMatrixf(const osg::Matrixf & other)\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixf* other_ptr=(Luna< osg::Matrixf >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixf::RefMatrixf function");
		}
		const osg::Matrixf & other=*other_ptr;

		return new osg::RefMatrixf(other);
	}

	// osg::RefMatrixf::RefMatrixf(const osg::Matrixd & other)
	static osg::RefMatrixf* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf(const osg::Matrixd & other) function, expected prototype:\nosg::RefMatrixf::RefMatrixf(const osg::Matrixd & other)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* other_ptr=(Luna< osg::Matrixd >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixf::RefMatrixf function");
		}
		const osg::Matrixd & other=*other_ptr;

		return new osg::RefMatrixf(other);
	}

	// osg::RefMatrixf::RefMatrixf(const osg::RefMatrixf & other)
	static osg::RefMatrixf* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf(const osg::RefMatrixf & other) function, expected prototype:\nosg::RefMatrixf::RefMatrixf(const osg::RefMatrixf & other)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::RefMatrixf* other_ptr=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixf::RefMatrixf function");
		}
		const osg::RefMatrixf & other=*other_ptr;

		return new osg::RefMatrixf(other);
	}

	// osg::RefMatrixf::RefMatrixf(float a00, float a01, float a02, float a03, float a10, float a11, float a12, float a13, float a20, float a21, float a22, float a23, float a30, float a31, float a32, float a33)
	static osg::RefMatrixf* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf(float a00, float a01, float a02, float a03, float a10, float a11, float a12, float a13, float a20, float a21, float a22, float a23, float a30, float a31, float a32, float a33) function, expected prototype:\nosg::RefMatrixf::RefMatrixf(float a00, float a01, float a02, float a03, float a10, float a11, float a12, float a13, float a20, float a21, float a22, float a23, float a30, float a31, float a32, float a33)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float a00=(float)lua_tonumber(L,1);
		float a01=(float)lua_tonumber(L,2);
		float a02=(float)lua_tonumber(L,3);
		float a03=(float)lua_tonumber(L,4);
		float a10=(float)lua_tonumber(L,5);
		float a11=(float)lua_tonumber(L,6);
		float a12=(float)lua_tonumber(L,7);
		float a13=(float)lua_tonumber(L,8);
		float a20=(float)lua_tonumber(L,9);
		float a21=(float)lua_tonumber(L,10);
		float a22=(float)lua_tonumber(L,11);
		float a23=(float)lua_tonumber(L,12);
		float a30=(float)lua_tonumber(L,13);
		float a31=(float)lua_tonumber(L,14);
		float a32=(float)lua_tonumber(L,15);
		float a33=(float)lua_tonumber(L,16);

		return new osg::RefMatrixf(a00, a01, a02, a03, a10, a11, a12, a13, a20, a21, a22, a23, a30, a31, a32, a33);
	}

	// osg::RefMatrixf::RefMatrixf(lua_Table * data)
	static osg::RefMatrixf* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf(lua_Table * data) function, expected prototype:\nosg::RefMatrixf::RefMatrixf(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_RefMatrixf(L,NULL);
	}

	// osg::RefMatrixf::RefMatrixf(lua_Table * data, const osg::Matrixf & other)
	static osg::RefMatrixf* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf(lua_Table * data, const osg::Matrixf & other) function, expected prototype:\nosg::RefMatrixf::RefMatrixf(lua_Table * data, const osg::Matrixf & other)\nClass arguments details:\narg 2 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixf* other_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixf::RefMatrixf function");
		}
		const osg::Matrixf & other=*other_ptr;

		return new wrapper_osg_RefMatrixf(L,NULL, other);
	}

	// osg::RefMatrixf::RefMatrixf(lua_Table * data, const osg::Matrixd & other)
	static osg::RefMatrixf* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf(lua_Table * data, const osg::Matrixd & other) function, expected prototype:\nosg::RefMatrixf::RefMatrixf(lua_Table * data, const osg::Matrixd & other)\nClass arguments details:\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* other_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixf::RefMatrixf function");
		}
		const osg::Matrixd & other=*other_ptr;

		return new wrapper_osg_RefMatrixf(L,NULL, other);
	}

	// osg::RefMatrixf::RefMatrixf(lua_Table * data, const osg::RefMatrixf & other)
	static osg::RefMatrixf* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf(lua_Table * data, const osg::RefMatrixf & other) function, expected prototype:\nosg::RefMatrixf::RefMatrixf(lua_Table * data, const osg::RefMatrixf & other)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::RefMatrixf* other_ptr=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixf::RefMatrixf function");
		}
		const osg::RefMatrixf & other=*other_ptr;

		return new wrapper_osg_RefMatrixf(L,NULL, other);
	}

	// osg::RefMatrixf::RefMatrixf(lua_Table * data, float a00, float a01, float a02, float a03, float a10, float a11, float a12, float a13, float a20, float a21, float a22, float a23, float a30, float a31, float a32, float a33)
	static osg::RefMatrixf* _bind_ctor_overload_10(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf(lua_Table * data, float a00, float a01, float a02, float a03, float a10, float a11, float a12, float a13, float a20, float a21, float a22, float a23, float a30, float a31, float a32, float a33) function, expected prototype:\nosg::RefMatrixf::RefMatrixf(lua_Table * data, float a00, float a01, float a02, float a03, float a10, float a11, float a12, float a13, float a20, float a21, float a22, float a23, float a30, float a31, float a32, float a33)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float a00=(float)lua_tonumber(L,2);
		float a01=(float)lua_tonumber(L,3);
		float a02=(float)lua_tonumber(L,4);
		float a03=(float)lua_tonumber(L,5);
		float a10=(float)lua_tonumber(L,6);
		float a11=(float)lua_tonumber(L,7);
		float a12=(float)lua_tonumber(L,8);
		float a13=(float)lua_tonumber(L,9);
		float a20=(float)lua_tonumber(L,10);
		float a21=(float)lua_tonumber(L,11);
		float a22=(float)lua_tonumber(L,12);
		float a23=(float)lua_tonumber(L,13);
		float a30=(float)lua_tonumber(L,14);
		float a31=(float)lua_tonumber(L,15);
		float a32=(float)lua_tonumber(L,16);
		float a33=(float)lua_tonumber(L,17);

		return new wrapper_osg_RefMatrixf(L,NULL, a00, a01, a02, a03, a10, a11, a12, a13, a20, a21, a22, a23, a30, a31, a32, a33);
	}

	// Overload binder for osg::RefMatrixf::RefMatrixf
	static osg::RefMatrixf* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);
		if (_lg_typecheck_ctor_overload_9(L)) return _bind_ctor_overload_9(L);
		if (_lg_typecheck_ctor_overload_10(L)) return _bind_ctor_overload_10(L);

		luaL_error(L, "error in function RefMatrixf, cannot match any of the overloads for function RefMatrixf:\n  RefMatrixf()\n  RefMatrixf(const osg::Matrixf &)\n  RefMatrixf(const osg::Matrixd &)\n  RefMatrixf(const osg::RefMatrixf &)\n  RefMatrixf(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)\n  RefMatrixf(lua_Table *)\n  RefMatrixf(lua_Table *, const osg::Matrixf &)\n  RefMatrixf(lua_Table *, const osg::Matrixd &)\n  RefMatrixf(lua_Table *, const osg::RefMatrixf &)\n  RefMatrixf(lua_Table *, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::RefMatrixf::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::RefMatrixf::cloneType() const function, expected prototype:\nosg::Object * osg::RefMatrixf::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RefMatrixf* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::RefMatrixf::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::RefMatrixf::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::RefMatrixf::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::RefMatrixf::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::RefMatrixf::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::RefMatrixf* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::RefMatrixf::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::RefMatrixf::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::RefMatrixf::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::RefMatrixf::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::RefMatrixf* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::RefMatrixf::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::RefMatrixf::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::RefMatrixf::libraryName() const function, expected prototype:\nconst char * osg::RefMatrixf::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RefMatrixf* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::RefMatrixf::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::RefMatrixf::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::RefMatrixf::className() const function, expected prototype:\nconst char * osg::RefMatrixf::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RefMatrixf* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::RefMatrixf::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::RefMatrixf::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RefMatrixf::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::RefMatrixf::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::RefMatrixf* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RefMatrixf::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefMatrixf::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::RefMatrixf::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RefMatrixf::base_setName(const std::string & name) function, expected prototype:\nvoid osg::RefMatrixf::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::RefMatrixf* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RefMatrixf::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefMatrixf::setName(name);

		return 0;
	}

	// void osg::RefMatrixf::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RefMatrixf::base_computeDataVariance() function, expected prototype:\nvoid osg::RefMatrixf::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RefMatrixf* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RefMatrixf::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefMatrixf::computeDataVariance();

		return 0;
	}

	// void osg::RefMatrixf::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RefMatrixf::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::RefMatrixf::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::RefMatrixf* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RefMatrixf::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefMatrixf::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::RefMatrixf::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::RefMatrixf::base_getUserData() function, expected prototype:\nosg::Referenced * osg::RefMatrixf::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RefMatrixf* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::RefMatrixf::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->RefMatrixf::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::RefMatrixf::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::RefMatrixf::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::RefMatrixf::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RefMatrixf* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::RefMatrixf::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->RefMatrixf::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::RefMatrixf::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::RefMatrixf::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RefMatrixf::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::RefMatrixf::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::RefMatrixf* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RefMatrixf::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefMatrixf::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::RefMatrixf::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::RefMatrixf::base_cloneType() const function, expected prototype:\nosg::Object * osg::RefMatrixf::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RefMatrixf* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::RefMatrixf::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->RefMatrixf::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::RefMatrixf::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::RefMatrixf::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::RefMatrixf::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::RefMatrixf::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::RefMatrixf* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::RefMatrixf::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->RefMatrixf::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::RefMatrixf::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::RefMatrixf::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::RefMatrixf::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::RefMatrixf* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::RefMatrixf::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RefMatrixf::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::RefMatrixf::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::RefMatrixf::base_libraryName() const function, expected prototype:\nconst char * osg::RefMatrixf::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RefMatrixf* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::RefMatrixf::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->RefMatrixf::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::RefMatrixf::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::RefMatrixf::base_className() const function, expected prototype:\nconst char * osg::RefMatrixf::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RefMatrixf* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::RefMatrixf::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->RefMatrixf::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_osg_Matrixf(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_osg_Matrixf(lua_State *L) {
		if (!_lg_typecheck_baseCast_osg_Matrixf(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_osg_Matrixf function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		osg::Matrixf* res = luna_caster<osg::Referenced,osg::Matrixf>::cast(self); // dynamic_cast<osg::Matrixf*>(self);
		if(!res)
			return 0;
			
		Luna< osg::Matrixf >::push(L,res,false);
		return 1;

	}

};

osg::RefMatrixf* LunaTraits< osg::RefMatrixf >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_RefMatrixf::_bind_ctor(L);
}

void LunaTraits< osg::RefMatrixf >::_bind_dtor(osg::RefMatrixf* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::RefMatrixf >::className[] = "RefMatrixf";
const char LunaTraits< osg::RefMatrixf >::fullName[] = "osg::RefMatrixf";
const char LunaTraits< osg::RefMatrixf >::moduleName[] = "osg";
const char* LunaTraits< osg::RefMatrixf >::parents[] = {"osg.Object", "osg.Matrixf", 0};
const int LunaTraits< osg::RefMatrixf >::hash = 77367129;
const int LunaTraits< osg::RefMatrixf >::uniqueIDs[] = {50169651, 18903840,0};

luna_RegType LunaTraits< osg::RefMatrixf >::methods[] = {
	{"cloneType", &luna_wrapper_osg_RefMatrixf::_bind_cloneType},
	{"clone", &luna_wrapper_osg_RefMatrixf::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_RefMatrixf::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_RefMatrixf::_bind_libraryName},
	{"className", &luna_wrapper_osg_RefMatrixf::_bind_className},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_RefMatrixf::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_RefMatrixf::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_RefMatrixf::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_RefMatrixf::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_RefMatrixf::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_RefMatrixf::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_RefMatrixf::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_RefMatrixf::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_RefMatrixf::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_RefMatrixf::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_RefMatrixf::_bind_base_className},
	{"fromVoid", &luna_wrapper_osg_RefMatrixf::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_RefMatrixf::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_RefMatrixf::_bind_getTable},
	{"asMatrixf", &luna_wrapper_osg_RefMatrixf::_bind_baseCast_osg_Matrixf},
	{0,0}
};

luna_ConverterType LunaTraits< osg::RefMatrixf >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_RefMatrixf::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::RefMatrixf >::enumValues[] = {
	{0,0}
};


