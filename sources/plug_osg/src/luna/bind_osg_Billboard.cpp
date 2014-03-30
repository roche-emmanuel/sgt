#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Billboard.h>

class luna_wrapper_osg_Billboard {
public:
	typedef Luna< osg::Billboard > luna_t;

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

		osg::Billboard* self= (osg::Billboard*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Billboard >::push(L,self,false);
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
		//osg::Billboard* ptr= dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,1));
		osg::Billboard* ptr= luna_caster< osg::Referenced, osg::Billboard >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Billboard >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAxis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAxis(lua_State *L) {
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

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPositionList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30220088) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPositionList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPositionList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addDrawable_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addDrawable_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeMatrix(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
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

	inline static bool _lg_typecheck_base_asGroup_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGroup_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_base_ascend(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_removeDrawables(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_replaceDrawable(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setDrawable(lua_State *L) {
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

	inline static bool _lg_typecheck_base_addDrawable_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addDrawable_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Billboard::Billboard()
	static osg::Billboard* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Billboard::Billboard() function, expected prototype:\nosg::Billboard::Billboard()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Billboard();
	}

	// osg::Billboard::Billboard(const osg::Billboard & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Billboard* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Billboard::Billboard(const osg::Billboard & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Billboard::Billboard(const osg::Billboard & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Billboard* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Billboard::Billboard function");
		}
		const osg::Billboard & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Billboard::Billboard function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Billboard(_arg1, copyop);
	}

	// osg::Billboard::Billboard(lua_Table * data)
	static osg::Billboard* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Billboard::Billboard(lua_Table * data) function, expected prototype:\nosg::Billboard::Billboard(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Billboard(L,NULL);
	}

	// osg::Billboard::Billboard(lua_Table * data, const osg::Billboard & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Billboard* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Billboard::Billboard(lua_Table * data, const osg::Billboard & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Billboard::Billboard(lua_Table * data, const osg::Billboard & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Billboard* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Billboard::Billboard function");
		}
		const osg::Billboard & _arg2=*_arg2_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Billboard::Billboard function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Billboard(L,NULL, _arg2, copyop);
	}

	// Overload binder for osg::Billboard::Billboard
	static osg::Billboard* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Billboard, cannot match any of the overloads for function Billboard:\n  Billboard()\n  Billboard(const osg::Billboard &, const osg::CopyOp &)\n  Billboard(lua_Table *)\n  Billboard(lua_Table *, const osg::Billboard &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Billboard::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Billboard::cloneType() const function, expected prototype:\nosg::Object * osg::Billboard::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Billboard::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Billboard::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Billboard::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Billboard::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Billboard::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Billboard::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Billboard::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Billboard::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Billboard::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Billboard::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Billboard::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Billboard::className() const function, expected prototype:\nconst char * osg::Billboard::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Billboard::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Billboard::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Billboard::libraryName() const function, expected prototype:\nconst char * osg::Billboard::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Billboard::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Billboard::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Billboard::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Billboard::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Billboard::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Billboard::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// void osg::Billboard::setMode(osg::Billboard::Mode mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Billboard::setMode(osg::Billboard::Mode mode) function, expected prototype:\nvoid osg::Billboard::setMode(osg::Billboard::Mode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Billboard::Mode mode=(osg::Billboard::Mode)lua_tointeger(L,2);

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Billboard::setMode(osg::Billboard::Mode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMode(mode);

		return 0;
	}

	// osg::Billboard::Mode osg::Billboard::getMode() const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::Billboard::Mode osg::Billboard::getMode() const function, expected prototype:\nosg::Billboard::Mode osg::Billboard::getMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Billboard::Mode osg::Billboard::getMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Billboard::Mode lret = self->getMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Billboard::setAxis(const osg::Vec3f & axis)
	static int _bind_setAxis(lua_State *L) {
		if (!_lg_typecheck_setAxis(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Billboard::setAxis(const osg::Vec3f & axis) function, expected prototype:\nvoid osg::Billboard::setAxis(const osg::Vec3f & axis)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* axis_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in osg::Billboard::setAxis function");
		}
		const osg::Vec3f & axis=*axis_ptr;

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Billboard::setAxis(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAxis(axis);

		return 0;
	}

	// const osg::Vec3f & osg::Billboard::getAxis() const
	static int _bind_getAxis(lua_State *L) {
		if (!_lg_typecheck_getAxis(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::Billboard::getAxis() const function, expected prototype:\nconst osg::Vec3f & osg::Billboard::getAxis() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::Billboard::getAxis() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getAxis();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::Billboard::setNormal(const osg::Vec3f & normal)
	static int _bind_setNormal(lua_State *L) {
		if (!_lg_typecheck_setNormal(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Billboard::setNormal(const osg::Vec3f & normal) function, expected prototype:\nvoid osg::Billboard::setNormal(const osg::Vec3f & normal)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* normal_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in osg::Billboard::setNormal function");
		}
		const osg::Vec3f & normal=*normal_ptr;

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Billboard::setNormal(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNormal(normal);

		return 0;
	}

	// const osg::Vec3f & osg::Billboard::getNormal() const
	static int _bind_getNormal(lua_State *L) {
		if (!_lg_typecheck_getNormal(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::Billboard::getNormal() const function, expected prototype:\nconst osg::Vec3f & osg::Billboard::getNormal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::Billboard::getNormal() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getNormal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::Billboard::setPosition(unsigned int i, const osg::Vec3f & pos)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Billboard::setPosition(unsigned int i, const osg::Vec3f & pos) function, expected prototype:\nvoid osg::Billboard::setPosition(unsigned int i, const osg::Vec3f & pos)\nClass arguments details:\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osg::Billboard::setPosition function");
		}
		const osg::Vec3f & pos=*pos_ptr;

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Billboard::setPosition(unsigned int, const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPosition(i, pos);

		return 0;
	}

	// const osg::Vec3f & osg::Billboard::getPosition(unsigned int i) const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::Billboard::getPosition(unsigned int i) const function, expected prototype:\nconst osg::Vec3f & osg::Billboard::getPosition(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::Billboard::getPosition(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getPosition(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::Billboard::setPositionList(osg::Billboard::PositionList & pl)
	static int _bind_setPositionList(lua_State *L) {
		if (!_lg_typecheck_setPositionList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Billboard::setPositionList(osg::Billboard::PositionList & pl) function, expected prototype:\nvoid osg::Billboard::setPositionList(osg::Billboard::PositionList & pl)\nClass arguments details:\narg 1 ID = 75373010\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Billboard::PositionList* pl_ptr=(Luna< std::vector< osg::Vec3f > >::checkSubType< osg::Billboard::PositionList >(L,2));
		if( !pl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pl in osg::Billboard::setPositionList function");
		}
		osg::Billboard::PositionList & pl=*pl_ptr;

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Billboard::setPositionList(osg::Billboard::PositionList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPositionList(pl);

		return 0;
	}

	// osg::Billboard::PositionList & osg::Billboard::getPositionList()
	static int _bind_getPositionList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPositionList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Billboard::PositionList & osg::Billboard::getPositionList() function, expected prototype:\nosg::Billboard::PositionList & osg::Billboard::getPositionList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Billboard::PositionList & osg::Billboard::getPositionList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Billboard::PositionList* lret = &self->getPositionList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Billboard::PositionList >::push(L,lret,false);

		return 1;
	}

	// const osg::Billboard::PositionList & osg::Billboard::getPositionList() const
	static int _bind_getPositionList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPositionList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Billboard::PositionList & osg::Billboard::getPositionList() const function, expected prototype:\nconst osg::Billboard::PositionList & osg::Billboard::getPositionList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Billboard::PositionList & osg::Billboard::getPositionList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Billboard::PositionList* lret = &self->getPositionList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Billboard::PositionList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Billboard::getPositionList
	static int _bind_getPositionList(lua_State *L) {
		if (_lg_typecheck_getPositionList_overload_1(L)) return _bind_getPositionList_overload_1(L);
		if (_lg_typecheck_getPositionList_overload_2(L)) return _bind_getPositionList_overload_2(L);

		luaL_error(L, "error in function getPositionList, cannot match any of the overloads for function getPositionList:\n  getPositionList()\n  getPositionList()\n");
		return 0;
	}

	// bool osg::Billboard::addDrawable(osg::Drawable * gset)
	static int _bind_addDrawable_overload_1(lua_State *L) {
		if (!_lg_typecheck_addDrawable_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Billboard::addDrawable(osg::Drawable * gset) function, expected prototype:\nbool osg::Billboard::addDrawable(osg::Drawable * gset)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* gset=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Billboard::addDrawable(osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addDrawable(gset);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Billboard::addDrawable(osg::Drawable * gset, const osg::Vec3f & pos)
	static int _bind_addDrawable_overload_2(lua_State *L) {
		if (!_lg_typecheck_addDrawable_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Billboard::addDrawable(osg::Drawable * gset, const osg::Vec3f & pos) function, expected prototype:\nbool osg::Billboard::addDrawable(osg::Drawable * gset, const osg::Vec3f & pos)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* gset=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osg::Billboard::addDrawable function");
		}
		const osg::Vec3f & pos=*pos_ptr;

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Billboard::addDrawable(osg::Drawable *, const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addDrawable(gset, pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Billboard::addDrawable
	static int _bind_addDrawable(lua_State *L) {
		if (_lg_typecheck_addDrawable_overload_1(L)) return _bind_addDrawable_overload_1(L);
		if (_lg_typecheck_addDrawable_overload_2(L)) return _bind_addDrawable_overload_2(L);

		luaL_error(L, "error in function addDrawable, cannot match any of the overloads for function addDrawable:\n  addDrawable(osg::Drawable *)\n  addDrawable(osg::Drawable *, const osg::Vec3f &)\n");
		return 0;
	}

	// bool osg::Billboard::removeDrawable(osg::Drawable * gset)
	static int _bind_removeDrawable(lua_State *L) {
		if (!_lg_typecheck_removeDrawable(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Billboard::removeDrawable(osg::Drawable * gset) function, expected prototype:\nbool osg::Billboard::removeDrawable(osg::Drawable * gset)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* gset=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Billboard::removeDrawable(osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeDrawable(gset);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Billboard::computeMatrix(osg::Matrixd & modelview, const osg::Vec3f & eye_local, const osg::Vec3f & pos_local) const
	static int _bind_computeMatrix(lua_State *L) {
		if (!_lg_typecheck_computeMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Billboard::computeMatrix(osg::Matrixd & modelview, const osg::Vec3f & eye_local, const osg::Vec3f & pos_local) const function, expected prototype:\nbool osg::Billboard::computeMatrix(osg::Matrixd & modelview, const osg::Vec3f & eye_local, const osg::Vec3f & pos_local) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 92303204\narg 3 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* modelview_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !modelview_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg modelview in osg::Billboard::computeMatrix function");
		}
		osg::Matrixd & modelview=*modelview_ptr;
		const osg::Vec3f* eye_local_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !eye_local_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye_local in osg::Billboard::computeMatrix function");
		}
		const osg::Vec3f & eye_local=*eye_local_ptr;
		const osg::Vec3f* pos_local_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !pos_local_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos_local in osg::Billboard::computeMatrix function");
		}
		const osg::Vec3f & pos_local=*pos_local_ptr;

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Billboard::computeMatrix(osg::Matrixd &, const osg::Vec3f &, const osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->computeMatrix(modelview, eye_local, pos_local);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::BoundingSphered osg::Billboard::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::Billboard::computeBound() const function, expected prototype:\nosg::BoundingSphered osg::Billboard::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::Billboard::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osg::Billboard::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Billboard::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Billboard::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Billboard::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Billboard::setName(name);

		return 0;
	}

	// void osg::Billboard::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Billboard::base_computeDataVariance() function, expected prototype:\nvoid osg::Billboard::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Billboard::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Billboard::computeDataVariance();

		return 0;
	}

	// void osg::Billboard::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Billboard::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Billboard::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Billboard::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Billboard::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Billboard::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Billboard::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Billboard::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Billboard::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Billboard::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Billboard::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Billboard::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Billboard::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Billboard::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Billboard::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Billboard::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Group * osg::Billboard::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::Billboard::base_asGroup() function, expected prototype:\nosg::Group * osg::Billboard::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::Billboard::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->Billboard::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::Billboard::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::Billboard::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::Billboard::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::Billboard::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->Billboard::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Billboard::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// osg::Transform * osg::Billboard::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::Billboard::base_asTransform() function, expected prototype:\nosg::Transform * osg::Billboard::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::Billboard::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->Billboard::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::Billboard::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::Billboard::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::Billboard::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::Billboard::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->Billboard::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Billboard::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osg::Billboard::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::Billboard::base_asCamera() function, expected prototype:\nosg::Camera * osg::Billboard::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::Billboard::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->Billboard::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::Billboard::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::Billboard::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::Billboard::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::Billboard::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->Billboard::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Billboard::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osg::Billboard::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::Billboard::base_asSwitch() function, expected prototype:\nosg::Switch * osg::Billboard::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::Billboard::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->Billboard::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::Billboard::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::Billboard::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::Billboard::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::Billboard::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->Billboard::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Billboard::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// void osg::Billboard::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Billboard::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Billboard::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Billboard::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Billboard::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Billboard::ascend(nv);

		return 0;
	}

	// void osg::Billboard::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Billboard::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::Billboard::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Billboard::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Billboard::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Billboard::traverse(_arg1);

		return 0;
	}

	// osg::Geode * osg::Billboard::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::Billboard::base_asGeode() function, expected prototype:\nosg::Geode * osg::Billboard::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::Billboard::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->Billboard::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::Billboard::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::Billboard::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::Billboard::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::Billboard::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->Billboard::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Billboard::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// bool osg::Billboard::base_removeDrawables(unsigned int i, unsigned int numDrawablesToRemove = 1)
	static int _bind_base_removeDrawables(lua_State *L) {
		if (!_lg_typecheck_base_removeDrawables(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Billboard::base_removeDrawables(unsigned int i, unsigned int numDrawablesToRemove = 1) function, expected prototype:\nbool osg::Billboard::base_removeDrawables(unsigned int i, unsigned int numDrawablesToRemove = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		unsigned int numDrawablesToRemove=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)1;

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Billboard::base_removeDrawables(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Billboard::removeDrawables(i, numDrawablesToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Billboard::base_replaceDrawable(osg::Drawable * origDraw, osg::Drawable * newDraw)
	static int _bind_base_replaceDrawable(lua_State *L) {
		if (!_lg_typecheck_base_replaceDrawable(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Billboard::base_replaceDrawable(osg::Drawable * origDraw, osg::Drawable * newDraw) function, expected prototype:\nbool osg::Billboard::base_replaceDrawable(osg::Drawable * origDraw, osg::Drawable * newDraw)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* origDraw=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		osg::Drawable* newDraw=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Billboard::base_replaceDrawable(osg::Drawable *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Billboard::replaceDrawable(origDraw, newDraw);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Billboard::base_setDrawable(unsigned int i, osg::Drawable * drawable)
	static int _bind_base_setDrawable(lua_State *L) {
		if (!_lg_typecheck_base_setDrawable(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Billboard::base_setDrawable(unsigned int i, osg::Drawable * drawable) function, expected prototype:\nbool osg::Billboard::base_setDrawable(unsigned int i, osg::Drawable * drawable)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Billboard::base_setDrawable(unsigned int, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Billboard::setDrawable(i, drawable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Billboard::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Billboard::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Billboard::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Billboard::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Billboard::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Billboard::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Billboard::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Billboard::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Billboard::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Billboard::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Billboard::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Billboard::base_cloneType() const function, expected prototype:\nosg::Object * osg::Billboard::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Billboard::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Billboard::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Billboard::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Billboard::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Billboard::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Billboard::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Billboard::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Billboard::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Billboard::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Billboard::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Billboard::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Billboard::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Billboard::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Billboard::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Billboard::base_className() const function, expected prototype:\nconst char * osg::Billboard::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Billboard::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Billboard::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Billboard::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Billboard::base_libraryName() const function, expected prototype:\nconst char * osg::Billboard::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Billboard::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Billboard::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Billboard::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Billboard::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Billboard::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Billboard::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Billboard::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Billboard::accept(nv);

		return 0;
	}

	// bool osg::Billboard::base_addDrawable(osg::Drawable * gset)
	static int _bind_base_addDrawable_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_addDrawable_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Billboard::base_addDrawable(osg::Drawable * gset) function, expected prototype:\nbool osg::Billboard::base_addDrawable(osg::Drawable * gset)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* gset=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Billboard::base_addDrawable(osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Billboard::addDrawable(gset);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Billboard::base_addDrawable(osg::Drawable * gset, const osg::Vec3f & pos)
	static int _bind_base_addDrawable_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_addDrawable_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Billboard::base_addDrawable(osg::Drawable * gset, const osg::Vec3f & pos) function, expected prototype:\nbool osg::Billboard::base_addDrawable(osg::Drawable * gset, const osg::Vec3f & pos)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* gset=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osg::Billboard::base_addDrawable function");
		}
		const osg::Vec3f & pos=*pos_ptr;

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Billboard::base_addDrawable(osg::Drawable *, const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Billboard::addDrawable(gset, pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Billboard::base_addDrawable
	static int _bind_base_addDrawable(lua_State *L) {
		if (_lg_typecheck_base_addDrawable_overload_1(L)) return _bind_base_addDrawable_overload_1(L);
		if (_lg_typecheck_base_addDrawable_overload_2(L)) return _bind_base_addDrawable_overload_2(L);

		luaL_error(L, "error in function base_addDrawable, cannot match any of the overloads for function base_addDrawable:\n  base_addDrawable(osg::Drawable *)\n  base_addDrawable(osg::Drawable *, const osg::Vec3f &)\n");
		return 0;
	}

	// bool osg::Billboard::base_removeDrawable(osg::Drawable * gset)
	static int _bind_base_removeDrawable(lua_State *L) {
		if (!_lg_typecheck_base_removeDrawable(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Billboard::base_removeDrawable(osg::Drawable * gset) function, expected prototype:\nbool osg::Billboard::base_removeDrawable(osg::Drawable * gset)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* gset=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));

		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Billboard::base_removeDrawable(osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Billboard::removeDrawable(gset);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::BoundingSphered osg::Billboard::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::Billboard::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::Billboard::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Billboard* self=Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::Billboard::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->Billboard::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::Billboard* LunaTraits< osg::Billboard >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Billboard::_bind_ctor(L);
}

void LunaTraits< osg::Billboard >::_bind_dtor(osg::Billboard* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Billboard >::className[] = "Billboard";
const char LunaTraits< osg::Billboard >::fullName[] = "osg::Billboard";
const char LunaTraits< osg::Billboard >::moduleName[] = "osg";
const char* LunaTraits< osg::Billboard >::parents[] = {"osg.Geode", 0};
const int LunaTraits< osg::Billboard >::hash = 88531180;
const int LunaTraits< osg::Billboard >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Billboard >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Billboard::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Billboard::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Billboard::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_Billboard::_bind_className},
	{"libraryName", &luna_wrapper_osg_Billboard::_bind_libraryName},
	{"accept", &luna_wrapper_osg_Billboard::_bind_accept},
	{"setMode", &luna_wrapper_osg_Billboard::_bind_setMode},
	{"getMode", &luna_wrapper_osg_Billboard::_bind_getMode},
	{"setAxis", &luna_wrapper_osg_Billboard::_bind_setAxis},
	{"getAxis", &luna_wrapper_osg_Billboard::_bind_getAxis},
	{"setNormal", &luna_wrapper_osg_Billboard::_bind_setNormal},
	{"getNormal", &luna_wrapper_osg_Billboard::_bind_getNormal},
	{"setPosition", &luna_wrapper_osg_Billboard::_bind_setPosition},
	{"getPosition", &luna_wrapper_osg_Billboard::_bind_getPosition},
	{"setPositionList", &luna_wrapper_osg_Billboard::_bind_setPositionList},
	{"getPositionList", &luna_wrapper_osg_Billboard::_bind_getPositionList},
	{"addDrawable", &luna_wrapper_osg_Billboard::_bind_addDrawable},
	{"removeDrawable", &luna_wrapper_osg_Billboard::_bind_removeDrawable},
	{"computeMatrix", &luna_wrapper_osg_Billboard::_bind_computeMatrix},
	{"computeBound", &luna_wrapper_osg_Billboard::_bind_computeBound},
	{"base_setName", &luna_wrapper_osg_Billboard::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Billboard::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Billboard::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Billboard::_bind_base_getUserData},
	{"base_asGroup", &luna_wrapper_osg_Billboard::_bind_base_asGroup},
	{"base_asTransform", &luna_wrapper_osg_Billboard::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osg_Billboard::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osg_Billboard::_bind_base_asSwitch},
	{"base_ascend", &luna_wrapper_osg_Billboard::_bind_base_ascend},
	{"base_traverse", &luna_wrapper_osg_Billboard::_bind_base_traverse},
	{"base_asGeode", &luna_wrapper_osg_Billboard::_bind_base_asGeode},
	{"base_removeDrawables", &luna_wrapper_osg_Billboard::_bind_base_removeDrawables},
	{"base_replaceDrawable", &luna_wrapper_osg_Billboard::_bind_base_replaceDrawable},
	{"base_setDrawable", &luna_wrapper_osg_Billboard::_bind_base_setDrawable},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Billboard::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_Billboard::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Billboard::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Billboard::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Billboard::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_Billboard::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_Billboard::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_Billboard::_bind_base_accept},
	{"base_addDrawable", &luna_wrapper_osg_Billboard::_bind_base_addDrawable},
	{"base_removeDrawable", &luna_wrapper_osg_Billboard::_bind_base_removeDrawable},
	{"base_computeBound", &luna_wrapper_osg_Billboard::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_osg_Billboard::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Billboard::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Billboard::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Billboard >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Billboard::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Billboard >::enumValues[] = {
	{"POINT_ROT_EYE", osg::Billboard::POINT_ROT_EYE},
	{"POINT_ROT_WORLD", osg::Billboard::POINT_ROT_WORLD},
	{"AXIAL_ROT", osg::Billboard::AXIAL_ROT},
	{0,0}
};


