#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_RefMatrixd.h>

class luna_wrapper_osg_RefMatrixd {
public:
	typedef Luna< osg::RefMatrixd > luna_t;

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

		osg::RefMatrixd* self= (osg::RefMatrixd*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::RefMatrixd >::push(L,self,false);
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
		//osg::RefMatrixd* ptr= dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,1));
		osg::RefMatrixd* ptr= luna_caster< osg::Referenced, osg::RefMatrixd >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::RefMatrixd >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1))) ) return false;
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
		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2))) ) return false;
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
	// osg::RefMatrixd::RefMatrixd()
	static osg::RefMatrixd* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd::RefMatrixd() function, expected prototype:\nosg::RefMatrixd::RefMatrixd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::RefMatrixd();
	}

	// osg::RefMatrixd::RefMatrixd(const osg::Matrixd & other)
	static osg::RefMatrixd* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd::RefMatrixd(const osg::Matrixd & other) function, expected prototype:\nosg::RefMatrixd::RefMatrixd(const osg::Matrixd & other)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* other_ptr=(Luna< osg::Matrixd >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixd::RefMatrixd function");
		}
		const osg::Matrixd & other=*other_ptr;

		return new osg::RefMatrixd(other);
	}

	// osg::RefMatrixd::RefMatrixd(const osg::Matrixf & other)
	static osg::RefMatrixd* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd::RefMatrixd(const osg::Matrixf & other) function, expected prototype:\nosg::RefMatrixd::RefMatrixd(const osg::Matrixf & other)\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixf* other_ptr=(Luna< osg::Matrixf >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixd::RefMatrixd function");
		}
		const osg::Matrixf & other=*other_ptr;

		return new osg::RefMatrixd(other);
	}

	// osg::RefMatrixd::RefMatrixd(const osg::RefMatrixd & other)
	static osg::RefMatrixd* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd::RefMatrixd(const osg::RefMatrixd & other) function, expected prototype:\nosg::RefMatrixd::RefMatrixd(const osg::RefMatrixd & other)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::RefMatrixd* other_ptr=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixd::RefMatrixd function");
		}
		const osg::RefMatrixd & other=*other_ptr;

		return new osg::RefMatrixd(other);
	}

	// osg::RefMatrixd::RefMatrixd(double a00, double a01, double a02, double a03, double a10, double a11, double a12, double a13, double a20, double a21, double a22, double a23, double a30, double a31, double a32, double a33)
	static osg::RefMatrixd* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd::RefMatrixd(double a00, double a01, double a02, double a03, double a10, double a11, double a12, double a13, double a20, double a21, double a22, double a23, double a30, double a31, double a32, double a33) function, expected prototype:\nosg::RefMatrixd::RefMatrixd(double a00, double a01, double a02, double a03, double a10, double a11, double a12, double a13, double a20, double a21, double a22, double a23, double a30, double a31, double a32, double a33)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double a00=(double)lua_tonumber(L,1);
		double a01=(double)lua_tonumber(L,2);
		double a02=(double)lua_tonumber(L,3);
		double a03=(double)lua_tonumber(L,4);
		double a10=(double)lua_tonumber(L,5);
		double a11=(double)lua_tonumber(L,6);
		double a12=(double)lua_tonumber(L,7);
		double a13=(double)lua_tonumber(L,8);
		double a20=(double)lua_tonumber(L,9);
		double a21=(double)lua_tonumber(L,10);
		double a22=(double)lua_tonumber(L,11);
		double a23=(double)lua_tonumber(L,12);
		double a30=(double)lua_tonumber(L,13);
		double a31=(double)lua_tonumber(L,14);
		double a32=(double)lua_tonumber(L,15);
		double a33=(double)lua_tonumber(L,16);

		return new osg::RefMatrixd(a00, a01, a02, a03, a10, a11, a12, a13, a20, a21, a22, a23, a30, a31, a32, a33);
	}

	// osg::RefMatrixd::RefMatrixd(lua_Table * data)
	static osg::RefMatrixd* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd::RefMatrixd(lua_Table * data) function, expected prototype:\nosg::RefMatrixd::RefMatrixd(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_RefMatrixd(L,NULL);
	}

	// osg::RefMatrixd::RefMatrixd(lua_Table * data, const osg::Matrixd & other)
	static osg::RefMatrixd* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd::RefMatrixd(lua_Table * data, const osg::Matrixd & other) function, expected prototype:\nosg::RefMatrixd::RefMatrixd(lua_Table * data, const osg::Matrixd & other)\nClass arguments details:\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* other_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixd::RefMatrixd function");
		}
		const osg::Matrixd & other=*other_ptr;

		return new wrapper_osg_RefMatrixd(L,NULL, other);
	}

	// osg::RefMatrixd::RefMatrixd(lua_Table * data, const osg::Matrixf & other)
	static osg::RefMatrixd* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd::RefMatrixd(lua_Table * data, const osg::Matrixf & other) function, expected prototype:\nosg::RefMatrixd::RefMatrixd(lua_Table * data, const osg::Matrixf & other)\nClass arguments details:\narg 2 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixf* other_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixd::RefMatrixd function");
		}
		const osg::Matrixf & other=*other_ptr;

		return new wrapper_osg_RefMatrixd(L,NULL, other);
	}

	// osg::RefMatrixd::RefMatrixd(lua_Table * data, const osg::RefMatrixd & other)
	static osg::RefMatrixd* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd::RefMatrixd(lua_Table * data, const osg::RefMatrixd & other) function, expected prototype:\nosg::RefMatrixd::RefMatrixd(lua_Table * data, const osg::RefMatrixd & other)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::RefMatrixd* other_ptr=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixd::RefMatrixd function");
		}
		const osg::RefMatrixd & other=*other_ptr;

		return new wrapper_osg_RefMatrixd(L,NULL, other);
	}

	// osg::RefMatrixd::RefMatrixd(lua_Table * data, double a00, double a01, double a02, double a03, double a10, double a11, double a12, double a13, double a20, double a21, double a22, double a23, double a30, double a31, double a32, double a33)
	static osg::RefMatrixd* _bind_ctor_overload_10(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd::RefMatrixd(lua_Table * data, double a00, double a01, double a02, double a03, double a10, double a11, double a12, double a13, double a20, double a21, double a22, double a23, double a30, double a31, double a32, double a33) function, expected prototype:\nosg::RefMatrixd::RefMatrixd(lua_Table * data, double a00, double a01, double a02, double a03, double a10, double a11, double a12, double a13, double a20, double a21, double a22, double a23, double a30, double a31, double a32, double a33)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double a00=(double)lua_tonumber(L,2);
		double a01=(double)lua_tonumber(L,3);
		double a02=(double)lua_tonumber(L,4);
		double a03=(double)lua_tonumber(L,5);
		double a10=(double)lua_tonumber(L,6);
		double a11=(double)lua_tonumber(L,7);
		double a12=(double)lua_tonumber(L,8);
		double a13=(double)lua_tonumber(L,9);
		double a20=(double)lua_tonumber(L,10);
		double a21=(double)lua_tonumber(L,11);
		double a22=(double)lua_tonumber(L,12);
		double a23=(double)lua_tonumber(L,13);
		double a30=(double)lua_tonumber(L,14);
		double a31=(double)lua_tonumber(L,15);
		double a32=(double)lua_tonumber(L,16);
		double a33=(double)lua_tonumber(L,17);

		return new wrapper_osg_RefMatrixd(L,NULL, a00, a01, a02, a03, a10, a11, a12, a13, a20, a21, a22, a23, a30, a31, a32, a33);
	}

	// Overload binder for osg::RefMatrixd::RefMatrixd
	static osg::RefMatrixd* _bind_ctor(lua_State *L) {
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

		luaL_error(L, "error in function RefMatrixd, cannot match any of the overloads for function RefMatrixd:\n  RefMatrixd()\n  RefMatrixd(const osg::Matrixd &)\n  RefMatrixd(const osg::Matrixf &)\n  RefMatrixd(const osg::RefMatrixd &)\n  RefMatrixd(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double)\n  RefMatrixd(lua_Table *)\n  RefMatrixd(lua_Table *, const osg::Matrixd &)\n  RefMatrixd(lua_Table *, const osg::Matrixf &)\n  RefMatrixd(lua_Table *, const osg::RefMatrixd &)\n  RefMatrixd(lua_Table *, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::RefMatrixd::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::RefMatrixd::cloneType() const function, expected prototype:\nosg::Object * osg::RefMatrixd::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RefMatrixd* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::RefMatrixd::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::RefMatrixd::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::RefMatrixd::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::RefMatrixd::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::RefMatrixd::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::RefMatrixd* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::RefMatrixd::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::RefMatrixd::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::RefMatrixd::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::RefMatrixd::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::RefMatrixd* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::RefMatrixd::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::RefMatrixd::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::RefMatrixd::libraryName() const function, expected prototype:\nconst char * osg::RefMatrixd::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RefMatrixd* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::RefMatrixd::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::RefMatrixd::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::RefMatrixd::className() const function, expected prototype:\nconst char * osg::RefMatrixd::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RefMatrixd* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::RefMatrixd::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::RefMatrixd::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RefMatrixd::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::RefMatrixd::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::RefMatrixd* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RefMatrixd::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefMatrixd::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::RefMatrixd::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RefMatrixd::base_setName(const std::string & name) function, expected prototype:\nvoid osg::RefMatrixd::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::RefMatrixd* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RefMatrixd::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefMatrixd::setName(name);

		return 0;
	}

	// void osg::RefMatrixd::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RefMatrixd::base_computeDataVariance() function, expected prototype:\nvoid osg::RefMatrixd::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RefMatrixd* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RefMatrixd::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefMatrixd::computeDataVariance();

		return 0;
	}

	// void osg::RefMatrixd::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RefMatrixd::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::RefMatrixd::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::RefMatrixd* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RefMatrixd::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefMatrixd::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::RefMatrixd::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::RefMatrixd::base_getUserData() function, expected prototype:\nosg::Referenced * osg::RefMatrixd::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RefMatrixd* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::RefMatrixd::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->RefMatrixd::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::RefMatrixd::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::RefMatrixd::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::RefMatrixd::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RefMatrixd* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::RefMatrixd::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->RefMatrixd::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::RefMatrixd::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::RefMatrixd::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RefMatrixd::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::RefMatrixd::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::RefMatrixd* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RefMatrixd::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefMatrixd::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::RefMatrixd::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::RefMatrixd::base_cloneType() const function, expected prototype:\nosg::Object * osg::RefMatrixd::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RefMatrixd* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::RefMatrixd::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->RefMatrixd::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::RefMatrixd::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::RefMatrixd::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::RefMatrixd::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::RefMatrixd::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::RefMatrixd* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::RefMatrixd::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->RefMatrixd::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::RefMatrixd::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::RefMatrixd::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::RefMatrixd::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::RefMatrixd* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::RefMatrixd::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RefMatrixd::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::RefMatrixd::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::RefMatrixd::base_libraryName() const function, expected prototype:\nconst char * osg::RefMatrixd::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RefMatrixd* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::RefMatrixd::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->RefMatrixd::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::RefMatrixd::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::RefMatrixd::base_className() const function, expected prototype:\nconst char * osg::RefMatrixd::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RefMatrixd* self=Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::RefMatrixd::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->RefMatrixd::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_osg_Matrixd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_osg_Matrixd(lua_State *L) {
		if (!_lg_typecheck_baseCast_osg_Matrixd(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_osg_Matrixd function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		osg::Matrixd* res = luna_caster<osg::Referenced,osg::Matrixd>::cast(self); // dynamic_cast<osg::Matrixd*>(self);
		if(!res)
			return 0;
			
		Luna< osg::Matrixd >::push(L,res,false);
		return 1;

	}

};

osg::RefMatrixd* LunaTraits< osg::RefMatrixd >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_RefMatrixd::_bind_ctor(L);
}

void LunaTraits< osg::RefMatrixd >::_bind_dtor(osg::RefMatrixd* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::RefMatrixd >::className[] = "RefMatrixd";
const char LunaTraits< osg::RefMatrixd >::fullName[] = "osg::RefMatrixd";
const char LunaTraits< osg::RefMatrixd >::moduleName[] = "osg";
const char* LunaTraits< osg::RefMatrixd >::parents[] = {"osg.Object", "osg.Matrixd", 0};
const int LunaTraits< osg::RefMatrixd >::hash = 77367127;
const int LunaTraits< osg::RefMatrixd >::uniqueIDs[] = {50169651, 18903838,0};

luna_RegType LunaTraits< osg::RefMatrixd >::methods[] = {
	{"cloneType", &luna_wrapper_osg_RefMatrixd::_bind_cloneType},
	{"clone", &luna_wrapper_osg_RefMatrixd::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_RefMatrixd::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_RefMatrixd::_bind_libraryName},
	{"className", &luna_wrapper_osg_RefMatrixd::_bind_className},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_RefMatrixd::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_RefMatrixd::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_RefMatrixd::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_RefMatrixd::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_RefMatrixd::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_RefMatrixd::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_RefMatrixd::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_RefMatrixd::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_RefMatrixd::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_RefMatrixd::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_RefMatrixd::_bind_base_className},
	{"fromVoid", &luna_wrapper_osg_RefMatrixd::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_RefMatrixd::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_RefMatrixd::_bind_getTable},
	{"asMatrixd", &luna_wrapper_osg_RefMatrixd::_bind_baseCast_osg_Matrixd},
	{0,0}
};

luna_ConverterType LunaTraits< osg::RefMatrixd >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_RefMatrixd::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::RefMatrixd >::enumValues[] = {
	{0,0}
};


