#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_LOD.h>

class luna_wrapper_osg_LOD {
public:
	typedef Luna< osg::LOD > luna_t;

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

		osg::LOD* self= (osg::LOD*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::LOD >::push(L,self,false);
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
		//osg::LOD* ptr= dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		osg::LOD* ptr= luna_caster< osg::Referenced, osg::LOD >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::LOD >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChildren(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRangeMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRangeMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRange(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinRange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxRange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumRanges(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRangeList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15056692) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRangeList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_asTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asCamera_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asCamera_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asSwitch_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asSwitch_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ascend(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_asGroup_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGroup_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_insertChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_replaceChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeChildren(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::LOD::LOD()
	static osg::LOD* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::LOD::LOD() function, expected prototype:\nosg::LOD::LOD()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::LOD();
	}

	// osg::LOD::LOD(const osg::LOD & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::LOD* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::LOD::LOD(const osg::LOD & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::LOD::LOD(const osg::LOD & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::LOD* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LOD::LOD function");
		}
		const osg::LOD & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LOD::LOD function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::LOD(_arg1, copyop);
	}

	// osg::LOD::LOD(lua_Table * data)
	static osg::LOD* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::LOD::LOD(lua_Table * data) function, expected prototype:\nosg::LOD::LOD(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_LOD(L,NULL);
	}

	// osg::LOD::LOD(lua_Table * data, const osg::LOD & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::LOD* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::LOD::LOD(lua_Table * data, const osg::LOD & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::LOD::LOD(lua_Table * data, const osg::LOD & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::LOD* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::LOD::LOD function");
		}
		const osg::LOD & _arg2=*_arg2_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LOD::LOD function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_LOD(L,NULL, _arg2, copyop);
	}

	// Overload binder for osg::LOD::LOD
	static osg::LOD* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function LOD, cannot match any of the overloads for function LOD:\n  LOD()\n  LOD(const osg::LOD &, const osg::CopyOp &)\n  LOD(lua_Table *)\n  LOD(lua_Table *, const osg::LOD &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::LOD::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LOD::cloneType() const function, expected prototype:\nosg::Object * osg::LOD::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::LOD::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::LOD::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LOD::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::LOD::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LOD::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::LOD::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::LOD::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LOD::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::LOD::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LOD::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::LOD::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::LOD::className() const function, expected prototype:\nconst char * osg::LOD::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::LOD::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::LOD::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::LOD::libraryName() const function, expected prototype:\nconst char * osg::LOD::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::LOD::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::LOD::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LOD::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::LOD::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::LOD::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LOD::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// void osg::LOD::traverse(osg::NodeVisitor & arg1)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LOD::traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::LOD::traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LOD::traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LOD::traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->traverse(_arg1);

		return 0;
	}

	// bool osg::LOD::addChild(osg::Node * child)
	static int _bind_addChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LOD::addChild(osg::Node * child) function, expected prototype:\nbool osg::LOD::addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LOD::addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LOD::addChild(osg::Node * child, float min, float max)
	static int _bind_addChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LOD::addChild(osg::Node * child, float min, float max) function, expected prototype:\nbool osg::LOD::addChild(osg::Node * child, float min, float max)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		float min=(float)lua_tonumber(L,3);
		float max=(float)lua_tonumber(L,4);

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LOD::addChild(osg::Node *, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addChild(child, min, max);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::LOD::addChild
	static int _bind_addChild(lua_State *L) {
		if (_lg_typecheck_addChild_overload_1(L)) return _bind_addChild_overload_1(L);
		if (_lg_typecheck_addChild_overload_2(L)) return _bind_addChild_overload_2(L);

		luaL_error(L, "error in function addChild, cannot match any of the overloads for function addChild:\n  addChild(osg::Node *)\n  addChild(osg::Node *, float, float)\n");
		return 0;
	}

	// bool osg::LOD::removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1)
	static int _bind_removeChildren(lua_State *L) {
		if (!_lg_typecheck_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LOD::removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1) function, expected prototype:\nbool osg::LOD::removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)1;

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LOD::removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::LOD::setRangeMode(osg::LOD::RangeMode mode)
	static int _bind_setRangeMode(lua_State *L) {
		if (!_lg_typecheck_setRangeMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LOD::setRangeMode(osg::LOD::RangeMode mode) function, expected prototype:\nvoid osg::LOD::setRangeMode(osg::LOD::RangeMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::LOD::RangeMode mode=(osg::LOD::RangeMode)lua_tointeger(L,2);

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LOD::setRangeMode(osg::LOD::RangeMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRangeMode(mode);

		return 0;
	}

	// osg::LOD::RangeMode osg::LOD::getRangeMode() const
	static int _bind_getRangeMode(lua_State *L) {
		if (!_lg_typecheck_getRangeMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::LOD::RangeMode osg::LOD::getRangeMode() const function, expected prototype:\nosg::LOD::RangeMode osg::LOD::getRangeMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::LOD::RangeMode osg::LOD::getRangeMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::LOD::RangeMode lret = self->getRangeMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::LOD::setRange(unsigned int childNo, float min, float max)
	static int _bind_setRange(lua_State *L) {
		if (!_lg_typecheck_setRange(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LOD::setRange(unsigned int childNo, float min, float max) function, expected prototype:\nvoid osg::LOD::setRange(unsigned int childNo, float min, float max)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);
		float min=(float)lua_tonumber(L,3);
		float max=(float)lua_tonumber(L,4);

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LOD::setRange(unsigned int, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRange(childNo, min, max);

		return 0;
	}

	// float osg::LOD::getMinRange(unsigned int childNo) const
	static int _bind_getMinRange(lua_State *L) {
		if (!_lg_typecheck_getMinRange(L)) {
			luaL_error(L, "luna typecheck failed in float osg::LOD::getMinRange(unsigned int childNo) const function, expected prototype:\nfloat osg::LOD::getMinRange(unsigned int childNo) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::LOD::getMinRange(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getMinRange(childNo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::LOD::getMaxRange(unsigned int childNo) const
	static int _bind_getMaxRange(lua_State *L) {
		if (!_lg_typecheck_getMaxRange(L)) {
			luaL_error(L, "luna typecheck failed in float osg::LOD::getMaxRange(unsigned int childNo) const function, expected prototype:\nfloat osg::LOD::getMaxRange(unsigned int childNo) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::LOD::getMaxRange(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getMaxRange(childNo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::LOD::getNumRanges() const
	static int _bind_getNumRanges(lua_State *L) {
		if (!_lg_typecheck_getNumRanges(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::LOD::getNumRanges() const function, expected prototype:\nunsigned int osg::LOD::getNumRanges() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::LOD::getNumRanges() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumRanges();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::LOD::setRangeList(const osg::LOD::RangeList & rangeList)
	static int _bind_setRangeList(lua_State *L) {
		if (!_lg_typecheck_setRangeList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LOD::setRangeList(const osg::LOD::RangeList & rangeList) function, expected prototype:\nvoid osg::LOD::setRangeList(const osg::LOD::RangeList & rangeList)\nClass arguments details:\narg 1 ID = 74660837\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::LOD::RangeList* rangeList_ptr=(Luna< std::vector< osg::LOD::MinMaxPair > >::checkSubType< osg::LOD::RangeList >(L,2));
		if( !rangeList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rangeList in osg::LOD::setRangeList function");
		}
		const osg::LOD::RangeList & rangeList=*rangeList_ptr;

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LOD::setRangeList(const osg::LOD::RangeList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRangeList(rangeList);

		return 0;
	}

	// const osg::LOD::RangeList & osg::LOD::getRangeList() const
	static int _bind_getRangeList(lua_State *L) {
		if (!_lg_typecheck_getRangeList(L)) {
			luaL_error(L, "luna typecheck failed in const osg::LOD::RangeList & osg::LOD::getRangeList() const function, expected prototype:\nconst osg::LOD::RangeList & osg::LOD::getRangeList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::LOD::RangeList & osg::LOD::getRangeList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::LOD::RangeList* lret = &self->getRangeList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::LOD::RangeList >::push(L,lret,false);

		return 1;
	}

	// osg::BoundingSphered osg::LOD::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::LOD::computeBound() const function, expected prototype:\nosg::BoundingSphered osg::LOD::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::LOD::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osg::LOD::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LOD::base_setName(const std::string & name) function, expected prototype:\nvoid osg::LOD::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LOD::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LOD::setName(name);

		return 0;
	}

	// void osg::LOD::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LOD::base_computeDataVariance() function, expected prototype:\nvoid osg::LOD::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LOD::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LOD::computeDataVariance();

		return 0;
	}

	// void osg::LOD::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LOD::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::LOD::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LOD::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LOD::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::LOD::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::LOD::base_getUserData() function, expected prototype:\nosg::Referenced * osg::LOD::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::LOD::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->LOD::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::LOD::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::LOD::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::LOD::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::LOD::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->LOD::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LOD::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Transform * osg::LOD::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::LOD::base_asTransform() function, expected prototype:\nosg::Transform * osg::LOD::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::LOD::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->LOD::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::LOD::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::LOD::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::LOD::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::LOD::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->LOD::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LOD::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osg::LOD::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::LOD::base_asCamera() function, expected prototype:\nosg::Camera * osg::LOD::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::LOD::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->LOD::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::LOD::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::LOD::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::LOD::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::LOD::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->LOD::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LOD::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osg::LOD::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::LOD::base_asSwitch() function, expected prototype:\nosg::Switch * osg::LOD::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::LOD::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->LOD::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::LOD::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::LOD::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::LOD::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::LOD::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->LOD::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LOD::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osg::LOD::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::LOD::base_asGeode() function, expected prototype:\nosg::Geode * osg::LOD::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::LOD::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->LOD::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::LOD::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::LOD::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::LOD::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::LOD::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->LOD::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LOD::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osg::LOD::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LOD::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::LOD::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::LOD::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LOD::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LOD::ascend(nv);

		return 0;
	}

	// osg::Group * osg::LOD::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::LOD::base_asGroup() function, expected prototype:\nosg::Group * osg::LOD::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::LOD::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->LOD::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::LOD::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::LOD::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::LOD::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::LOD::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->LOD::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LOD::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// bool osg::LOD::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LOD::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::LOD::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LOD::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LOD::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LOD::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LOD::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::LOD::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LOD::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LOD::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LOD::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LOD::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::LOD::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LOD::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LOD::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::LOD::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LOD::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::LOD::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LOD::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LOD::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::LOD::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LOD::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::LOD::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LOD::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LOD::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::LOD::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LOD::base_cloneType() const function, expected prototype:\nosg::Object * osg::LOD::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::LOD::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->LOD::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::LOD::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LOD::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::LOD::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LOD::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::LOD::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->LOD::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::LOD::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LOD::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::LOD::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LOD::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LOD::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::LOD::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::LOD::base_className() const function, expected prototype:\nconst char * osg::LOD::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::LOD::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LOD::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::LOD::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::LOD::base_libraryName() const function, expected prototype:\nconst char * osg::LOD::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::LOD::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LOD::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::LOD::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LOD::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::LOD::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::LOD::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LOD::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LOD::accept(nv);

		return 0;
	}

	// void osg::LOD::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LOD::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::LOD::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LOD::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LOD::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LOD::traverse(_arg1);

		return 0;
	}

	// bool osg::LOD::base_addChild(osg::Node * child)
	static int _bind_base_addChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_addChild_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LOD::base_addChild(osg::Node * child) function, expected prototype:\nbool osg::LOD::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LOD::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LOD::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LOD::base_addChild(osg::Node * child, float min, float max)
	static int _bind_base_addChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_addChild_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LOD::base_addChild(osg::Node * child, float min, float max) function, expected prototype:\nbool osg::LOD::base_addChild(osg::Node * child, float min, float max)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		float min=(float)lua_tonumber(L,3);
		float max=(float)lua_tonumber(L,4);

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LOD::base_addChild(osg::Node *, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LOD::addChild(child, min, max);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::LOD::base_addChild
	static int _bind_base_addChild(lua_State *L) {
		if (_lg_typecheck_base_addChild_overload_1(L)) return _bind_base_addChild_overload_1(L);
		if (_lg_typecheck_base_addChild_overload_2(L)) return _bind_base_addChild_overload_2(L);

		luaL_error(L, "error in function base_addChild, cannot match any of the overloads for function base_addChild:\n  base_addChild(osg::Node *)\n  base_addChild(osg::Node *, float, float)\n");
		return 0;
	}

	// bool osg::LOD::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LOD::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1) function, expected prototype:\nbool osg::LOD::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)1;

		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LOD::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LOD::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::BoundingSphered osg::LOD::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::LOD::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::LOD::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LOD* self=Luna< osg::Referenced >::checkSubType< osg::LOD >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::LOD::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->LOD::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::LOD* LunaTraits< osg::LOD >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_LOD::_bind_ctor(L);
}

void LunaTraits< osg::LOD >::_bind_dtor(osg::LOD* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::LOD >::className[] = "LOD";
const char LunaTraits< osg::LOD >::fullName[] = "osg::LOD";
const char LunaTraits< osg::LOD >::moduleName[] = "osg";
const char* LunaTraits< osg::LOD >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::LOD >::hash = 67099258;
const int LunaTraits< osg::LOD >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::LOD >::methods[] = {
	{"cloneType", &luna_wrapper_osg_LOD::_bind_cloneType},
	{"clone", &luna_wrapper_osg_LOD::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_LOD::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_LOD::_bind_className},
	{"libraryName", &luna_wrapper_osg_LOD::_bind_libraryName},
	{"accept", &luna_wrapper_osg_LOD::_bind_accept},
	{"traverse", &luna_wrapper_osg_LOD::_bind_traverse},
	{"addChild", &luna_wrapper_osg_LOD::_bind_addChild},
	{"removeChildren", &luna_wrapper_osg_LOD::_bind_removeChildren},
	{"setRangeMode", &luna_wrapper_osg_LOD::_bind_setRangeMode},
	{"getRangeMode", &luna_wrapper_osg_LOD::_bind_getRangeMode},
	{"setRange", &luna_wrapper_osg_LOD::_bind_setRange},
	{"getMinRange", &luna_wrapper_osg_LOD::_bind_getMinRange},
	{"getMaxRange", &luna_wrapper_osg_LOD::_bind_getMaxRange},
	{"getNumRanges", &luna_wrapper_osg_LOD::_bind_getNumRanges},
	{"setRangeList", &luna_wrapper_osg_LOD::_bind_setRangeList},
	{"getRangeList", &luna_wrapper_osg_LOD::_bind_getRangeList},
	{"computeBound", &luna_wrapper_osg_LOD::_bind_computeBound},
	{"base_setName", &luna_wrapper_osg_LOD::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_LOD::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_LOD::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_LOD::_bind_base_getUserData},
	{"base_asTransform", &luna_wrapper_osg_LOD::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osg_LOD::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osg_LOD::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osg_LOD::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osg_LOD::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osg_LOD::_bind_base_asGroup},
	{"base_insertChild", &luna_wrapper_osg_LOD::_bind_base_insertChild},
	{"base_replaceChild", &luna_wrapper_osg_LOD::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osg_LOD::_bind_base_setChild},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_LOD::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_LOD::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_LOD::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_LOD::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_LOD::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_LOD::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_LOD::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_LOD::_bind_base_accept},
	{"base_traverse", &luna_wrapper_osg_LOD::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osg_LOD::_bind_base_addChild},
	{"base_removeChildren", &luna_wrapper_osg_LOD::_bind_base_removeChildren},
	{"base_computeBound", &luna_wrapper_osg_LOD::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_osg_LOD::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_LOD::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_LOD::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::LOD >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_LOD::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::LOD >::enumValues[] = {
	{"USE_BOUNDING_SPHERE_CENTER", osg::LOD::USE_BOUNDING_SPHERE_CENTER},
	{"USER_DEFINED_CENTER", osg::LOD::USER_DEFINED_CENTER},
	{"UNION_OF_BOUNDING_SPHERE_AND_USER_DEFINED", osg::LOD::UNION_OF_BOUNDING_SPHERE_AND_USER_DEFINED},
	{"DISTANCE_FROM_EYE_POINT", osg::LOD::DISTANCE_FROM_EYE_POINT},
	{"PIXEL_SIZE_ON_SCREEN", osg::LOD::PIXEL_SIZE_ON_SCREEN},
	{0,0}
};


