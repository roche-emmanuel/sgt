#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_AlphaFunc.h>

class luna_wrapper_osg_AlphaFunc {
public:
	typedef Luna< osg::AlphaFunc > luna_t;

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

		osg::AlphaFunc* self= (osg::AlphaFunc*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::AlphaFunc >::push(L,self,false);
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
		//osg::AlphaFunc* ptr= dynamic_cast< osg::AlphaFunc* >(Luna< osg::Referenced >::check(L,1));
		osg::AlphaFunc* ptr= luna_caster< osg::Referenced, osg::AlphaFunc >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::AlphaFunc >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFunction_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFunction_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFunction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReferenceValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceValue(lua_State *L) {
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

	inline static bool _lg_typecheck_base_asTexture_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTexture_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_checkValidityOfAssociatedModes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
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
	// osg::AlphaFunc::AlphaFunc()
	static osg::AlphaFunc* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::AlphaFunc::AlphaFunc() function, expected prototype:\nosg::AlphaFunc::AlphaFunc()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::AlphaFunc();
	}

	// osg::AlphaFunc::AlphaFunc(osg::AlphaFunc::ComparisonFunction func, float ref)
	static osg::AlphaFunc* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::AlphaFunc::AlphaFunc(osg::AlphaFunc::ComparisonFunction func, float ref) function, expected prototype:\nosg::AlphaFunc::AlphaFunc(osg::AlphaFunc::ComparisonFunction func, float ref)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::AlphaFunc::ComparisonFunction func=(osg::AlphaFunc::ComparisonFunction)lua_tointeger(L,1);
		float ref=(float)lua_tonumber(L,2);

		return new osg::AlphaFunc(func, ref);
	}

	// osg::AlphaFunc::AlphaFunc(const osg::AlphaFunc & af, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::AlphaFunc* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::AlphaFunc::AlphaFunc(const osg::AlphaFunc & af, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::AlphaFunc::AlphaFunc(const osg::AlphaFunc & af, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::AlphaFunc* af_ptr=(Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1));
		if( !af_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg af in osg::AlphaFunc::AlphaFunc function");
		}
		const osg::AlphaFunc & af=*af_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AlphaFunc::AlphaFunc function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::AlphaFunc(af, copyop);
	}

	// osg::AlphaFunc::AlphaFunc(lua_Table * data)
	static osg::AlphaFunc* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::AlphaFunc::AlphaFunc(lua_Table * data) function, expected prototype:\nosg::AlphaFunc::AlphaFunc(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_AlphaFunc(L,NULL);
	}

	// osg::AlphaFunc::AlphaFunc(lua_Table * data, osg::AlphaFunc::ComparisonFunction func, float ref)
	static osg::AlphaFunc* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::AlphaFunc::AlphaFunc(lua_Table * data, osg::AlphaFunc::ComparisonFunction func, float ref) function, expected prototype:\nosg::AlphaFunc::AlphaFunc(lua_Table * data, osg::AlphaFunc::ComparisonFunction func, float ref)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::AlphaFunc::ComparisonFunction func=(osg::AlphaFunc::ComparisonFunction)lua_tointeger(L,2);
		float ref=(float)lua_tonumber(L,3);

		return new wrapper_osg_AlphaFunc(L,NULL, func, ref);
	}

	// osg::AlphaFunc::AlphaFunc(lua_Table * data, const osg::AlphaFunc & af, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::AlphaFunc* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::AlphaFunc::AlphaFunc(lua_Table * data, const osg::AlphaFunc & af, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::AlphaFunc::AlphaFunc(lua_Table * data, const osg::AlphaFunc & af, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::AlphaFunc* af_ptr=(Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,2));
		if( !af_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg af in osg::AlphaFunc::AlphaFunc function");
		}
		const osg::AlphaFunc & af=*af_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AlphaFunc::AlphaFunc function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_AlphaFunc(L,NULL, af, copyop);
	}

	// Overload binder for osg::AlphaFunc::AlphaFunc
	static osg::AlphaFunc* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function AlphaFunc, cannot match any of the overloads for function AlphaFunc:\n  AlphaFunc()\n  AlphaFunc(osg::AlphaFunc::ComparisonFunction, float)\n  AlphaFunc(const osg::AlphaFunc &, const osg::CopyOp &)\n  AlphaFunc(lua_Table *)\n  AlphaFunc(lua_Table *, osg::AlphaFunc::ComparisonFunction, float)\n  AlphaFunc(lua_Table *, const osg::AlphaFunc &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::AlphaFunc::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AlphaFunc::cloneType() const function, expected prototype:\nosg::Object * osg::AlphaFunc::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AlphaFunc::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::AlphaFunc::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AlphaFunc::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::AlphaFunc::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AlphaFunc::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AlphaFunc::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::AlphaFunc::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AlphaFunc::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::AlphaFunc::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AlphaFunc::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::AlphaFunc::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AlphaFunc::libraryName() const function, expected prototype:\nconst char * osg::AlphaFunc::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AlphaFunc::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AlphaFunc::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AlphaFunc::className() const function, expected prototype:\nconst char * osg::AlphaFunc::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AlphaFunc::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::AlphaFunc::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::AlphaFunc::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::AlphaFunc::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::AlphaFunc::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::AlphaFunc::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::AlphaFunc::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::AlphaFunc::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::AlphaFunc::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::AlphaFunc::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::AlphaFunc::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AlphaFunc::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::AlphaFunc::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AlphaFunc::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AlphaFunc::getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::AlphaFunc::setFunction(osg::AlphaFunc::ComparisonFunction func, float ref)
	static int _bind_setFunction_overload_1(lua_State *L) {
		if (!_lg_typecheck_setFunction_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AlphaFunc::setFunction(osg::AlphaFunc::ComparisonFunction func, float ref) function, expected prototype:\nvoid osg::AlphaFunc::setFunction(osg::AlphaFunc::ComparisonFunction func, float ref)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::AlphaFunc::ComparisonFunction func=(osg::AlphaFunc::ComparisonFunction)lua_tointeger(L,2);
		float ref=(float)lua_tonumber(L,3);

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AlphaFunc::setFunction(osg::AlphaFunc::ComparisonFunction, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFunction(func, ref);

		return 0;
	}

	// void osg::AlphaFunc::setFunction(osg::AlphaFunc::ComparisonFunction func)
	static int _bind_setFunction_overload_2(lua_State *L) {
		if (!_lg_typecheck_setFunction_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AlphaFunc::setFunction(osg::AlphaFunc::ComparisonFunction func) function, expected prototype:\nvoid osg::AlphaFunc::setFunction(osg::AlphaFunc::ComparisonFunction func)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::AlphaFunc::ComparisonFunction func=(osg::AlphaFunc::ComparisonFunction)lua_tointeger(L,2);

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AlphaFunc::setFunction(osg::AlphaFunc::ComparisonFunction). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFunction(func);

		return 0;
	}

	// Overload binder for osg::AlphaFunc::setFunction
	static int _bind_setFunction(lua_State *L) {
		if (_lg_typecheck_setFunction_overload_1(L)) return _bind_setFunction_overload_1(L);
		if (_lg_typecheck_setFunction_overload_2(L)) return _bind_setFunction_overload_2(L);

		luaL_error(L, "error in function setFunction, cannot match any of the overloads for function setFunction:\n  setFunction(osg::AlphaFunc::ComparisonFunction, float)\n  setFunction(osg::AlphaFunc::ComparisonFunction)\n");
		return 0;
	}

	// osg::AlphaFunc::ComparisonFunction osg::AlphaFunc::getFunction() const
	static int _bind_getFunction(lua_State *L) {
		if (!_lg_typecheck_getFunction(L)) {
			luaL_error(L, "luna typecheck failed in osg::AlphaFunc::ComparisonFunction osg::AlphaFunc::getFunction() const function, expected prototype:\nosg::AlphaFunc::ComparisonFunction osg::AlphaFunc::getFunction() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::AlphaFunc::ComparisonFunction osg::AlphaFunc::getFunction() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::AlphaFunc::ComparisonFunction lret = self->getFunction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AlphaFunc::setReferenceValue(float value)
	static int _bind_setReferenceValue(lua_State *L) {
		if (!_lg_typecheck_setReferenceValue(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AlphaFunc::setReferenceValue(float value) function, expected prototype:\nvoid osg::AlphaFunc::setReferenceValue(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AlphaFunc::setReferenceValue(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReferenceValue(value);

		return 0;
	}

	// float osg::AlphaFunc::getReferenceValue() const
	static int _bind_getReferenceValue(lua_State *L) {
		if (!_lg_typecheck_getReferenceValue(L)) {
			luaL_error(L, "luna typecheck failed in float osg::AlphaFunc::getReferenceValue() const function, expected prototype:\nfloat osg::AlphaFunc::getReferenceValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::AlphaFunc::getReferenceValue() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getReferenceValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AlphaFunc::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AlphaFunc::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::AlphaFunc::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AlphaFunc::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AlphaFunc::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::AlphaFunc::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AlphaFunc::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::AlphaFunc::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AlphaFunc::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AlphaFunc::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::AlphaFunc::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AlphaFunc::base_setName(const std::string & name) function, expected prototype:\nvoid osg::AlphaFunc::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AlphaFunc::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AlphaFunc::setName(name);

		return 0;
	}

	// void osg::AlphaFunc::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AlphaFunc::base_computeDataVariance() function, expected prototype:\nvoid osg::AlphaFunc::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AlphaFunc::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AlphaFunc::computeDataVariance();

		return 0;
	}

	// void osg::AlphaFunc::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AlphaFunc::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::AlphaFunc::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AlphaFunc::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AlphaFunc::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::AlphaFunc::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::AlphaFunc::base_getUserData() function, expected prototype:\nosg::Referenced * osg::AlphaFunc::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::AlphaFunc::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->AlphaFunc::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::AlphaFunc::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::AlphaFunc::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::AlphaFunc::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::AlphaFunc::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->AlphaFunc::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AlphaFunc::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::AlphaFunc::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::AlphaFunc::base_asTexture() function, expected prototype:\nosg::Texture * osg::AlphaFunc::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::AlphaFunc::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->AlphaFunc::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::AlphaFunc::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::AlphaFunc::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::AlphaFunc::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::AlphaFunc::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->AlphaFunc::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AlphaFunc::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::AlphaFunc::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::AlphaFunc::base_getMember() const function, expected prototype:\nunsigned int osg::AlphaFunc::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::AlphaFunc::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->AlphaFunc::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::AlphaFunc::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AlphaFunc::base_isTextureAttribute() const function, expected prototype:\nbool osg::AlphaFunc::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AlphaFunc::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AlphaFunc::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::AlphaFunc::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AlphaFunc::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::AlphaFunc::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AlphaFunc::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AlphaFunc::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AlphaFunc::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::AlphaFunc::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AlphaFunc::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::AlphaFunc::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AlphaFunc::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AlphaFunc::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AlphaFunc::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::AlphaFunc::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AlphaFunc::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::AlphaFunc::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AlphaFunc::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AlphaFunc::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::AlphaFunc::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AlphaFunc::base_cloneType() const function, expected prototype:\nosg::Object * osg::AlphaFunc::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AlphaFunc::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->AlphaFunc::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::AlphaFunc::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AlphaFunc::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::AlphaFunc::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AlphaFunc::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AlphaFunc::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->AlphaFunc::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::AlphaFunc::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AlphaFunc::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::AlphaFunc::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AlphaFunc::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AlphaFunc::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::AlphaFunc::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AlphaFunc::base_libraryName() const function, expected prototype:\nconst char * osg::AlphaFunc::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AlphaFunc::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AlphaFunc::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AlphaFunc::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AlphaFunc::base_className() const function, expected prototype:\nconst char * osg::AlphaFunc::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AlphaFunc::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AlphaFunc::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::AlphaFunc::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::AlphaFunc::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::AlphaFunc::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::AlphaFunc::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->AlphaFunc::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::AlphaFunc::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::AlphaFunc::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::AlphaFunc::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::AlphaFunc::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::AlphaFunc::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->AlphaFunc::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::AlphaFunc::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AlphaFunc::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::AlphaFunc::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AlphaFunc::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AlphaFunc::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AlphaFunc::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::AlphaFunc::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AlphaFunc::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::AlphaFunc::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AlphaFunc::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::AlphaFunc* self=Luna< osg::Referenced >::checkSubType< osg::AlphaFunc >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AlphaFunc::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AlphaFunc::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::AlphaFunc* LunaTraits< osg::AlphaFunc >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_AlphaFunc::_bind_ctor(L);
}

void LunaTraits< osg::AlphaFunc >::_bind_dtor(osg::AlphaFunc* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::AlphaFunc >::className[] = "AlphaFunc";
const char LunaTraits< osg::AlphaFunc >::fullName[] = "osg::AlphaFunc";
const char LunaTraits< osg::AlphaFunc >::moduleName[] = "osg";
const char* LunaTraits< osg::AlphaFunc >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::AlphaFunc >::hash = 68800325;
const int LunaTraits< osg::AlphaFunc >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::AlphaFunc >::methods[] = {
	{"cloneType", &luna_wrapper_osg_AlphaFunc::_bind_cloneType},
	{"clone", &luna_wrapper_osg_AlphaFunc::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_AlphaFunc::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_AlphaFunc::_bind_libraryName},
	{"className", &luna_wrapper_osg_AlphaFunc::_bind_className},
	{"getType", &luna_wrapper_osg_AlphaFunc::_bind_getType},
	{"compare", &luna_wrapper_osg_AlphaFunc::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_AlphaFunc::_bind_getModeUsage},
	{"setFunction", &luna_wrapper_osg_AlphaFunc::_bind_setFunction},
	{"getFunction", &luna_wrapper_osg_AlphaFunc::_bind_getFunction},
	{"setReferenceValue", &luna_wrapper_osg_AlphaFunc::_bind_setReferenceValue},
	{"getReferenceValue", &luna_wrapper_osg_AlphaFunc::_bind_getReferenceValue},
	{"apply", &luna_wrapper_osg_AlphaFunc::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_AlphaFunc::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_AlphaFunc::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_AlphaFunc::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_AlphaFunc::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_AlphaFunc::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_AlphaFunc::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_AlphaFunc::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_AlphaFunc::_bind_base_isTextureAttribute},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_AlphaFunc::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_AlphaFunc::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_AlphaFunc::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_AlphaFunc::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_AlphaFunc::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_AlphaFunc::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_AlphaFunc::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_AlphaFunc::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_AlphaFunc::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_AlphaFunc::_bind_base_compare},
	{"base_getModeUsage", &luna_wrapper_osg_AlphaFunc::_bind_base_getModeUsage},
	{"base_apply", &luna_wrapper_osg_AlphaFunc::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_AlphaFunc::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_AlphaFunc::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_AlphaFunc::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::AlphaFunc >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_AlphaFunc::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::AlphaFunc >::enumValues[] = {
	{"NEVER", osg::AlphaFunc::NEVER},
	{"LESS", osg::AlphaFunc::LESS},
	{"EQUAL", osg::AlphaFunc::EQUAL},
	{"LEQUAL", osg::AlphaFunc::LEQUAL},
	{"GREATER", osg::AlphaFunc::GREATER},
	{"NOTEQUAL", osg::AlphaFunc::NOTEQUAL},
	{"GEQUAL", osg::AlphaFunc::GEQUAL},
	{"ALWAYS", osg::AlphaFunc::ALWAYS},
	{0,0}
};


