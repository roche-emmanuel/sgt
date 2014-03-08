#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_AnimationPath.h>

class luna_wrapper_osg_AnimationPath {
public:
	typedef Luna< osg::AnimationPath > luna_t;

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

		osg::AnimationPath* self= (osg::AnimationPath*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::AnimationPath >::push(L,self,false);
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
		//osg::AnimationPath* ptr= dynamic_cast< osg::AnimationPath* >(Luna< osg::Referenced >::check(L,1));
		osg::AnimationPath* ptr= luna_caster< osg::Referenced, osg::AnimationPath >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::AnimationPath >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_getMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInverse_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInverse_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInterpolatedControlPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,19942584) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_insert(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,19942584) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFirstTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLastTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPeriod(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLoopMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLoopMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimeControlPointMap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75051431) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeControlPointMap_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTimeControlPointMap_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_read(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77972206) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_write(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
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

	inline static bool _lg_typecheck_base_getInterpolatedControlPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,19942584) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::AnimationPath::AnimationPath()
	static osg::AnimationPath* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::AnimationPath::AnimationPath() function, expected prototype:\nosg::AnimationPath::AnimationPath()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::AnimationPath();
	}

	// osg::AnimationPath::AnimationPath(const osg::AnimationPath & ap, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::AnimationPath* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::AnimationPath::AnimationPath(const osg::AnimationPath & ap, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::AnimationPath::AnimationPath(const osg::AnimationPath & ap, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::AnimationPath* ap_ptr=(Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1));
		if( !ap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ap in osg::AnimationPath::AnimationPath function");
		}
		const osg::AnimationPath & ap=*ap_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AnimationPath::AnimationPath function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::AnimationPath(ap, copyop);
	}

	// osg::AnimationPath::AnimationPath(lua_Table * data)
	static osg::AnimationPath* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::AnimationPath::AnimationPath(lua_Table * data) function, expected prototype:\nosg::AnimationPath::AnimationPath(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_AnimationPath(L,NULL);
	}

	// osg::AnimationPath::AnimationPath(lua_Table * data, const osg::AnimationPath & ap, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::AnimationPath* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::AnimationPath::AnimationPath(lua_Table * data, const osg::AnimationPath & ap, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::AnimationPath::AnimationPath(lua_Table * data, const osg::AnimationPath & ap, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::AnimationPath* ap_ptr=(Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,2));
		if( !ap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ap in osg::AnimationPath::AnimationPath function");
		}
		const osg::AnimationPath & ap=*ap_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AnimationPath::AnimationPath function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_AnimationPath(L,NULL, ap, copyop);
	}

	// Overload binder for osg::AnimationPath::AnimationPath
	static osg::AnimationPath* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function AnimationPath, cannot match any of the overloads for function AnimationPath:\n  AnimationPath()\n  AnimationPath(const osg::AnimationPath &, const osg::CopyOp &)\n  AnimationPath(lua_Table *)\n  AnimationPath(lua_Table *, const osg::AnimationPath &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::AnimationPath::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AnimationPath::cloneType() const function, expected prototype:\nosg::Object * osg::AnimationPath::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AnimationPath::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::AnimationPath::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AnimationPath::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::AnimationPath::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AnimationPath::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AnimationPath::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::AnimationPath::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPath::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::AnimationPath::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AnimationPath::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::AnimationPath::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AnimationPath::libraryName() const function, expected prototype:\nconst char * osg::AnimationPath::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AnimationPath::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AnimationPath::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AnimationPath::className() const function, expected prototype:\nconst char * osg::AnimationPath::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AnimationPath::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osg::AnimationPath::getMatrix(double time, osg::Matrixf & matrix) const
	static int _bind_getMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMatrix_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPath::getMatrix(double time, osg::Matrixf & matrix) const function, expected prototype:\nbool osg::AnimationPath::getMatrix(double time, osg::Matrixf & matrix) const\nClass arguments details:\narg 2 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		double time=(double)lua_tonumber(L,2);
		osg::Matrixf* matrix_ptr=(Luna< osg::Matrixf >::check(L,3));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::AnimationPath::getMatrix function");
		}
		osg::Matrixf & matrix=*matrix_ptr;

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AnimationPath::getMatrix(double, osg::Matrixf &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getMatrix(time, matrix);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::AnimationPath::getMatrix(double time, osg::Matrixd & matrix) const
	static int _bind_getMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMatrix_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPath::getMatrix(double time, osg::Matrixd & matrix) const function, expected prototype:\nbool osg::AnimationPath::getMatrix(double time, osg::Matrixd & matrix) const\nClass arguments details:\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		double time=(double)lua_tonumber(L,2);
		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::AnimationPath::getMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AnimationPath::getMatrix(double, osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getMatrix(time, matrix);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::AnimationPath::getMatrix
	static int _bind_getMatrix(lua_State *L) {
		if (_lg_typecheck_getMatrix_overload_1(L)) return _bind_getMatrix_overload_1(L);
		if (_lg_typecheck_getMatrix_overload_2(L)) return _bind_getMatrix_overload_2(L);

		luaL_error(L, "error in function getMatrix, cannot match any of the overloads for function getMatrix:\n  getMatrix(double, osg::Matrixf &)\n  getMatrix(double, osg::Matrixd &)\n");
		return 0;
	}

	// bool osg::AnimationPath::getInverse(double time, osg::Matrixf & matrix) const
	static int _bind_getInverse_overload_1(lua_State *L) {
		if (!_lg_typecheck_getInverse_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPath::getInverse(double time, osg::Matrixf & matrix) const function, expected prototype:\nbool osg::AnimationPath::getInverse(double time, osg::Matrixf & matrix) const\nClass arguments details:\narg 2 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		double time=(double)lua_tonumber(L,2);
		osg::Matrixf* matrix_ptr=(Luna< osg::Matrixf >::check(L,3));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::AnimationPath::getInverse function");
		}
		osg::Matrixf & matrix=*matrix_ptr;

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AnimationPath::getInverse(double, osg::Matrixf &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getInverse(time, matrix);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::AnimationPath::getInverse(double time, osg::Matrixd & matrix) const
	static int _bind_getInverse_overload_2(lua_State *L) {
		if (!_lg_typecheck_getInverse_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPath::getInverse(double time, osg::Matrixd & matrix) const function, expected prototype:\nbool osg::AnimationPath::getInverse(double time, osg::Matrixd & matrix) const\nClass arguments details:\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		double time=(double)lua_tonumber(L,2);
		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::AnimationPath::getInverse function");
		}
		osg::Matrixd & matrix=*matrix_ptr;

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AnimationPath::getInverse(double, osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getInverse(time, matrix);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::AnimationPath::getInverse
	static int _bind_getInverse(lua_State *L) {
		if (_lg_typecheck_getInverse_overload_1(L)) return _bind_getInverse_overload_1(L);
		if (_lg_typecheck_getInverse_overload_2(L)) return _bind_getInverse_overload_2(L);

		luaL_error(L, "error in function getInverse, cannot match any of the overloads for function getInverse:\n  getInverse(double, osg::Matrixf &)\n  getInverse(double, osg::Matrixd &)\n");
		return 0;
	}

	// bool osg::AnimationPath::getInterpolatedControlPoint(double time, osg::AnimationPath::ControlPoint & controlPoint) const
	static int _bind_getInterpolatedControlPoint(lua_State *L) {
		if (!_lg_typecheck_getInterpolatedControlPoint(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPath::getInterpolatedControlPoint(double time, osg::AnimationPath::ControlPoint & controlPoint) const function, expected prototype:\nbool osg::AnimationPath::getInterpolatedControlPoint(double time, osg::AnimationPath::ControlPoint & controlPoint) const\nClass arguments details:\narg 2 ID = 19942584\n\n%s",luna_dumpStack(L).c_str());
		}

		double time=(double)lua_tonumber(L,2);
		osg::AnimationPath::ControlPoint* controlPoint_ptr=(Luna< osg::AnimationPath::ControlPoint >::check(L,3));
		if( !controlPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg controlPoint in osg::AnimationPath::getInterpolatedControlPoint function");
		}
		osg::AnimationPath::ControlPoint & controlPoint=*controlPoint_ptr;

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AnimationPath::getInterpolatedControlPoint(double, osg::AnimationPath::ControlPoint &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getInterpolatedControlPoint(time, controlPoint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::AnimationPath::insert(double time, const osg::AnimationPath::ControlPoint & controlPoint)
	static int _bind_insert(lua_State *L) {
		if (!_lg_typecheck_insert(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::insert(double time, const osg::AnimationPath::ControlPoint & controlPoint) function, expected prototype:\nvoid osg::AnimationPath::insert(double time, const osg::AnimationPath::ControlPoint & controlPoint)\nClass arguments details:\narg 2 ID = 19942584\n\n%s",luna_dumpStack(L).c_str());
		}

		double time=(double)lua_tonumber(L,2);
		const osg::AnimationPath::ControlPoint* controlPoint_ptr=(Luna< osg::AnimationPath::ControlPoint >::check(L,3));
		if( !controlPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg controlPoint in osg::AnimationPath::insert function");
		}
		const osg::AnimationPath::ControlPoint & controlPoint=*controlPoint_ptr;

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::insert(double, const osg::AnimationPath::ControlPoint &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->insert(time, controlPoint);

		return 0;
	}

	// double osg::AnimationPath::getFirstTime() const
	static int _bind_getFirstTime(lua_State *L) {
		if (!_lg_typecheck_getFirstTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::AnimationPath::getFirstTime() const function, expected prototype:\ndouble osg::AnimationPath::getFirstTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::AnimationPath::getFirstTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getFirstTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::AnimationPath::getLastTime() const
	static int _bind_getLastTime(lua_State *L) {
		if (!_lg_typecheck_getLastTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::AnimationPath::getLastTime() const function, expected prototype:\ndouble osg::AnimationPath::getLastTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::AnimationPath::getLastTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getLastTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::AnimationPath::getPeriod() const
	static int _bind_getPeriod(lua_State *L) {
		if (!_lg_typecheck_getPeriod(L)) {
			luaL_error(L, "luna typecheck failed in double osg::AnimationPath::getPeriod() const function, expected prototype:\ndouble osg::AnimationPath::getPeriod() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::AnimationPath::getPeriod() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getPeriod();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AnimationPath::setLoopMode(osg::AnimationPath::LoopMode lm)
	static int _bind_setLoopMode(lua_State *L) {
		if (!_lg_typecheck_setLoopMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::setLoopMode(osg::AnimationPath::LoopMode lm) function, expected prototype:\nvoid osg::AnimationPath::setLoopMode(osg::AnimationPath::LoopMode lm)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::AnimationPath::LoopMode lm=(osg::AnimationPath::LoopMode)lua_tointeger(L,2);

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::setLoopMode(osg::AnimationPath::LoopMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLoopMode(lm);

		return 0;
	}

	// osg::AnimationPath::LoopMode osg::AnimationPath::getLoopMode() const
	static int _bind_getLoopMode(lua_State *L) {
		if (!_lg_typecheck_getLoopMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::AnimationPath::LoopMode osg::AnimationPath::getLoopMode() const function, expected prototype:\nosg::AnimationPath::LoopMode osg::AnimationPath::getLoopMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::AnimationPath::LoopMode osg::AnimationPath::getLoopMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::AnimationPath::LoopMode lret = self->getLoopMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AnimationPath::setTimeControlPointMap(osg::AnimationPath::TimeControlPointMap & tcpm)
	static int _bind_setTimeControlPointMap(lua_State *L) {
		if (!_lg_typecheck_setTimeControlPointMap(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::setTimeControlPointMap(osg::AnimationPath::TimeControlPointMap & tcpm) function, expected prototype:\nvoid osg::AnimationPath::setTimeControlPointMap(osg::AnimationPath::TimeControlPointMap & tcpm)\nClass arguments details:\narg 1 ID = 87612809\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::AnimationPath::TimeControlPointMap* tcpm_ptr=(Luna< std::map< double, osg::AnimationPath::ControlPoint > >::checkSubType< osg::AnimationPath::TimeControlPointMap >(L,2));
		if( !tcpm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tcpm in osg::AnimationPath::setTimeControlPointMap function");
		}
		osg::AnimationPath::TimeControlPointMap & tcpm=*tcpm_ptr;

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::setTimeControlPointMap(osg::AnimationPath::TimeControlPointMap &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTimeControlPointMap(tcpm);

		return 0;
	}

	// osg::AnimationPath::TimeControlPointMap & osg::AnimationPath::getTimeControlPointMap()
	static int _bind_getTimeControlPointMap_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTimeControlPointMap_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::AnimationPath::TimeControlPointMap & osg::AnimationPath::getTimeControlPointMap() function, expected prototype:\nosg::AnimationPath::TimeControlPointMap & osg::AnimationPath::getTimeControlPointMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::AnimationPath::TimeControlPointMap & osg::AnimationPath::getTimeControlPointMap(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::AnimationPath::TimeControlPointMap* lret = &self->getTimeControlPointMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AnimationPath::TimeControlPointMap >::push(L,lret,false);

		return 1;
	}

	// const osg::AnimationPath::TimeControlPointMap & osg::AnimationPath::getTimeControlPointMap() const
	static int _bind_getTimeControlPointMap_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTimeControlPointMap_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::AnimationPath::TimeControlPointMap & osg::AnimationPath::getTimeControlPointMap() const function, expected prototype:\nconst osg::AnimationPath::TimeControlPointMap & osg::AnimationPath::getTimeControlPointMap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::AnimationPath::TimeControlPointMap & osg::AnimationPath::getTimeControlPointMap() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::AnimationPath::TimeControlPointMap* lret = &self->getTimeControlPointMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AnimationPath::TimeControlPointMap >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AnimationPath::getTimeControlPointMap
	static int _bind_getTimeControlPointMap(lua_State *L) {
		if (_lg_typecheck_getTimeControlPointMap_overload_1(L)) return _bind_getTimeControlPointMap_overload_1(L);
		if (_lg_typecheck_getTimeControlPointMap_overload_2(L)) return _bind_getTimeControlPointMap_overload_2(L);

		luaL_error(L, "error in function getTimeControlPointMap, cannot match any of the overloads for function getTimeControlPointMap:\n  getTimeControlPointMap()\n  getTimeControlPointMap()\n");
		return 0;
	}

	// bool osg::AnimationPath::empty() const
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPath::empty() const function, expected prototype:\nbool osg::AnimationPath::empty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AnimationPath::empty() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::AnimationPath::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::clear() function, expected prototype:\nvoid osg::AnimationPath::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::clear(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// void osg::AnimationPath::read(std::istream & in)
	static int _bind_read(lua_State *L) {
		if (!_lg_typecheck_read(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::read(std::istream & in) function, expected prototype:\nvoid osg::AnimationPath::read(std::istream & in)\nClass arguments details:\narg 1 ID = 77972206\n\n%s",luna_dumpStack(L).c_str());
		}

		std::istream* in_ptr=(Luna< std::istream >::check(L,2));
		if( !in_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg in in osg::AnimationPath::read function");
		}
		std::istream & in=*in_ptr;

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::read(std::istream &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->read(in);

		return 0;
	}

	// void osg::AnimationPath::write(std::ostream & out) const
	static int _bind_write(lua_State *L) {
		if (!_lg_typecheck_write(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::write(std::ostream & out) const function, expected prototype:\nvoid osg::AnimationPath::write(std::ostream & out) const\nClass arguments details:\narg 1 ID = 2993706\n\n%s",luna_dumpStack(L).c_str());
		}

		std::ostream* out_ptr=(Luna< std::ostream >::check(L,2));
		if( !out_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg out in osg::AnimationPath::write function");
		}
		std::ostream & out=*out_ptr;

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::write(std::ostream &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->write(out);

		return 0;
	}

	// void osg::AnimationPath::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::AnimationPath::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPath::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::AnimationPath::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::base_setName(const std::string & name) function, expected prototype:\nvoid osg::AnimationPath::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPath::setName(name);

		return 0;
	}

	// void osg::AnimationPath::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::base_computeDataVariance() function, expected prototype:\nvoid osg::AnimationPath::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPath::computeDataVariance();

		return 0;
	}

	// void osg::AnimationPath::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::AnimationPath::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPath::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::AnimationPath::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::AnimationPath::base_getUserData() function, expected prototype:\nosg::Referenced * osg::AnimationPath::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::AnimationPath::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->AnimationPath::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::AnimationPath::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::AnimationPath::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::AnimationPath::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::AnimationPath::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->AnimationPath::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AnimationPath::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::AnimationPath::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AnimationPath::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::AnimationPath::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AnimationPath::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimationPath::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::AnimationPath::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AnimationPath::base_cloneType() const function, expected prototype:\nosg::Object * osg::AnimationPath::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AnimationPath::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->AnimationPath::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::AnimationPath::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AnimationPath::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::AnimationPath::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AnimationPath::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AnimationPath::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->AnimationPath::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::AnimationPath::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPath::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::AnimationPath::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AnimationPath::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AnimationPath::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::AnimationPath::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AnimationPath::base_libraryName() const function, expected prototype:\nconst char * osg::AnimationPath::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AnimationPath::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AnimationPath::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AnimationPath::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AnimationPath::base_className() const function, expected prototype:\nconst char * osg::AnimationPath::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AnimationPath::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AnimationPath::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osg::AnimationPath::base_getInterpolatedControlPoint(double time, osg::AnimationPath::ControlPoint & controlPoint) const
	static int _bind_base_getInterpolatedControlPoint(lua_State *L) {
		if (!_lg_typecheck_base_getInterpolatedControlPoint(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AnimationPath::base_getInterpolatedControlPoint(double time, osg::AnimationPath::ControlPoint & controlPoint) const function, expected prototype:\nbool osg::AnimationPath::base_getInterpolatedControlPoint(double time, osg::AnimationPath::ControlPoint & controlPoint) const\nClass arguments details:\narg 2 ID = 19942584\n\n%s",luna_dumpStack(L).c_str());
		}

		double time=(double)lua_tonumber(L,2);
		osg::AnimationPath::ControlPoint* controlPoint_ptr=(Luna< osg::AnimationPath::ControlPoint >::check(L,3));
		if( !controlPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg controlPoint in osg::AnimationPath::base_getInterpolatedControlPoint function");
		}
		osg::AnimationPath::ControlPoint & controlPoint=*controlPoint_ptr;

		osg::AnimationPath* self=Luna< osg::Referenced >::checkSubType< osg::AnimationPath >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AnimationPath::base_getInterpolatedControlPoint(double, osg::AnimationPath::ControlPoint &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AnimationPath::getInterpolatedControlPoint(time, controlPoint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::AnimationPath* LunaTraits< osg::AnimationPath >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_AnimationPath::_bind_ctor(L);
}

void LunaTraits< osg::AnimationPath >::_bind_dtor(osg::AnimationPath* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::AnimationPath >::className[] = "AnimationPath";
const char LunaTraits< osg::AnimationPath >::fullName[] = "osg::AnimationPath";
const char LunaTraits< osg::AnimationPath >::moduleName[] = "osg";
const char* LunaTraits< osg::AnimationPath >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::AnimationPath >::hash = 17776116;
const int LunaTraits< osg::AnimationPath >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::AnimationPath >::methods[] = {
	{"cloneType", &luna_wrapper_osg_AnimationPath::_bind_cloneType},
	{"clone", &luna_wrapper_osg_AnimationPath::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_AnimationPath::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_AnimationPath::_bind_libraryName},
	{"className", &luna_wrapper_osg_AnimationPath::_bind_className},
	{"getMatrix", &luna_wrapper_osg_AnimationPath::_bind_getMatrix},
	{"getInverse", &luna_wrapper_osg_AnimationPath::_bind_getInverse},
	{"getInterpolatedControlPoint", &luna_wrapper_osg_AnimationPath::_bind_getInterpolatedControlPoint},
	{"insert", &luna_wrapper_osg_AnimationPath::_bind_insert},
	{"getFirstTime", &luna_wrapper_osg_AnimationPath::_bind_getFirstTime},
	{"getLastTime", &luna_wrapper_osg_AnimationPath::_bind_getLastTime},
	{"getPeriod", &luna_wrapper_osg_AnimationPath::_bind_getPeriod},
	{"setLoopMode", &luna_wrapper_osg_AnimationPath::_bind_setLoopMode},
	{"getLoopMode", &luna_wrapper_osg_AnimationPath::_bind_getLoopMode},
	{"setTimeControlPointMap", &luna_wrapper_osg_AnimationPath::_bind_setTimeControlPointMap},
	{"getTimeControlPointMap", &luna_wrapper_osg_AnimationPath::_bind_getTimeControlPointMap},
	{"empty", &luna_wrapper_osg_AnimationPath::_bind_empty},
	{"clear", &luna_wrapper_osg_AnimationPath::_bind_clear},
	{"read", &luna_wrapper_osg_AnimationPath::_bind_read},
	{"write", &luna_wrapper_osg_AnimationPath::_bind_write},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_AnimationPath::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_AnimationPath::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_AnimationPath::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_AnimationPath::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_AnimationPath::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_AnimationPath::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_AnimationPath::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_AnimationPath::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_AnimationPath::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_AnimationPath::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_AnimationPath::_bind_base_className},
	{"base_getInterpolatedControlPoint", &luna_wrapper_osg_AnimationPath::_bind_base_getInterpolatedControlPoint},
	{"fromVoid", &luna_wrapper_osg_AnimationPath::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_AnimationPath::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_AnimationPath::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::AnimationPath >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_AnimationPath::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::AnimationPath >::enumValues[] = {
	{"SWING", osg::AnimationPath::SWING},
	{"LOOP", osg::AnimationPath::LOOP},
	{"NO_LOOPING", osg::AnimationPath::NO_LOOPING},
	{0,0}
};


