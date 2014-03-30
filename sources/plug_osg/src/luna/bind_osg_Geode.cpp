#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Geode.h>

class luna_wrapper_osg_Geode {
public:
	typedef Luna< osg::Geode > luna_t;

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

		osg::Geode* self= (osg::Geode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Geode >::push(L,self,false);
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
		//osg::Geode* ptr= dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		osg::Geode* ptr= luna_caster< osg::Referenced, osg::Geode >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Geode >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_asGeode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asGeode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeDrawables(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_replaceDrawable(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDrawable(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumDrawables(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrawable_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawable_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_containsDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawableIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawableList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compileDrawables(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBoundingBox(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_asGeode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_addDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Geode::Geode()
	static osg::Geode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode::Geode() function, expected prototype:\nosg::Geode::Geode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Geode();
	}

	// osg::Geode::Geode(const osg::Geode & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Geode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode::Geode(const osg::Geode & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Geode::Geode(const osg::Geode & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Geode* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Geode::Geode function");
		}
		const osg::Geode & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Geode::Geode function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Geode(_arg1, copyop);
	}

	// osg::Geode::Geode(lua_Table * data)
	static osg::Geode* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode::Geode(lua_Table * data) function, expected prototype:\nosg::Geode::Geode(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Geode(L,NULL);
	}

	// osg::Geode::Geode(lua_Table * data, const osg::Geode & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Geode* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode::Geode(lua_Table * data, const osg::Geode & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Geode::Geode(lua_Table * data, const osg::Geode & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Geode* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Geode::Geode function");
		}
		const osg::Geode & _arg2=*_arg2_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Geode::Geode function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Geode(L,NULL, _arg2, copyop);
	}

	// Overload binder for osg::Geode::Geode
	static osg::Geode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Geode, cannot match any of the overloads for function Geode:\n  Geode()\n  Geode(const osg::Geode &, const osg::CopyOp &)\n  Geode(lua_Table *)\n  Geode(lua_Table *, const osg::Geode &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Geode::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Geode::cloneType() const function, expected prototype:\nosg::Object * osg::Geode::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Geode::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Geode::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Geode::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Geode::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Geode::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Geode::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Geode::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geode::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Geode::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geode::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Geode::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Geode::className() const function, expected prototype:\nconst char * osg::Geode::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Geode::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Geode::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Geode::libraryName() const function, expected prototype:\nconst char * osg::Geode::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Geode::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Geode::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geode::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Geode::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Geode::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geode::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// osg::Geode * osg::Geode::asGeode()
	static int _bind_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::Geode::asGeode() function, expected prototype:\nosg::Geode * osg::Geode::asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::Geode::asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::Geode::asGeode() const
	static int _bind_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::Geode::asGeode() const function, expected prototype:\nconst osg::Geode * osg::Geode::asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::Geode::asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geode::asGeode
	static int _bind_asGeode(lua_State *L) {
		if (_lg_typecheck_asGeode_overload_1(L)) return _bind_asGeode_overload_1(L);
		if (_lg_typecheck_asGeode_overload_2(L)) return _bind_asGeode_overload_2(L);

		luaL_error(L, "error in function asGeode, cannot match any of the overloads for function asGeode:\n  asGeode()\n  asGeode()\n");
		return 0;
	}

	// bool osg::Geode::addDrawable(osg::Drawable * drawable)
	static int _bind_addDrawable(lua_State *L) {
		if (!_lg_typecheck_addDrawable(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geode::addDrawable(osg::Drawable * drawable) function, expected prototype:\nbool osg::Geode::addDrawable(osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geode::addDrawable(osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addDrawable(drawable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geode::removeDrawable(osg::Drawable * drawable)
	static int _bind_removeDrawable(lua_State *L) {
		if (!_lg_typecheck_removeDrawable(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geode::removeDrawable(osg::Drawable * drawable) function, expected prototype:\nbool osg::Geode::removeDrawable(osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geode::removeDrawable(osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeDrawable(drawable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geode::removeDrawables(unsigned int i, unsigned int numDrawablesToRemove = 1)
	static int _bind_removeDrawables(lua_State *L) {
		if (!_lg_typecheck_removeDrawables(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geode::removeDrawables(unsigned int i, unsigned int numDrawablesToRemove = 1) function, expected prototype:\nbool osg::Geode::removeDrawables(unsigned int i, unsigned int numDrawablesToRemove = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		unsigned int numDrawablesToRemove=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)1;

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geode::removeDrawables(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeDrawables(i, numDrawablesToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geode::replaceDrawable(osg::Drawable * origDraw, osg::Drawable * newDraw)
	static int _bind_replaceDrawable(lua_State *L) {
		if (!_lg_typecheck_replaceDrawable(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geode::replaceDrawable(osg::Drawable * origDraw, osg::Drawable * newDraw) function, expected prototype:\nbool osg::Geode::replaceDrawable(osg::Drawable * origDraw, osg::Drawable * newDraw)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* origDraw=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		osg::Drawable* newDraw=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geode::replaceDrawable(osg::Drawable *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->replaceDrawable(origDraw, newDraw);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geode::setDrawable(unsigned int i, osg::Drawable * drawable)
	static int _bind_setDrawable(lua_State *L) {
		if (!_lg_typecheck_setDrawable(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geode::setDrawable(unsigned int i, osg::Drawable * drawable) function, expected prototype:\nbool osg::Geode::setDrawable(unsigned int i, osg::Drawable * drawable)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geode::setDrawable(unsigned int, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setDrawable(i, drawable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Geode::getNumDrawables() const
	static int _bind_getNumDrawables(lua_State *L) {
		if (!_lg_typecheck_getNumDrawables(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Geode::getNumDrawables() const function, expected prototype:\nunsigned int osg::Geode::getNumDrawables() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Geode::getNumDrawables() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumDrawables();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Drawable * osg::Geode::getDrawable(unsigned int i)
	static int _bind_getDrawable_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDrawable_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable * osg::Geode::getDrawable(unsigned int i) function, expected prototype:\nosg::Drawable * osg::Geode::getDrawable(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Drawable * osg::Geode::getDrawable(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Drawable * lret = self->getDrawable(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable >::push(L,lret,false);

		return 1;
	}

	// const osg::Drawable * osg::Geode::getDrawable(unsigned int i) const
	static int _bind_getDrawable_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDrawable_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Drawable * osg::Geode::getDrawable(unsigned int i) const function, expected prototype:\nconst osg::Drawable * osg::Geode::getDrawable(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Drawable * osg::Geode::getDrawable(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Drawable * lret = self->getDrawable(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geode::getDrawable
	static int _bind_getDrawable(lua_State *L) {
		if (_lg_typecheck_getDrawable_overload_1(L)) return _bind_getDrawable_overload_1(L);
		if (_lg_typecheck_getDrawable_overload_2(L)) return _bind_getDrawable_overload_2(L);

		luaL_error(L, "error in function getDrawable, cannot match any of the overloads for function getDrawable:\n  getDrawable(unsigned int)\n  getDrawable(unsigned int)\n");
		return 0;
	}

	// bool osg::Geode::containsDrawable(const osg::Drawable * gset) const
	static int _bind_containsDrawable(lua_State *L) {
		if (!_lg_typecheck_containsDrawable(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geode::containsDrawable(const osg::Drawable * gset) const function, expected prototype:\nbool osg::Geode::containsDrawable(const osg::Drawable * gset) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Drawable* gset=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geode::containsDrawable(const osg::Drawable *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->containsDrawable(gset);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Geode::getDrawableIndex(const osg::Drawable * drawable) const
	static int _bind_getDrawableIndex(lua_State *L) {
		if (!_lg_typecheck_getDrawableIndex(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Geode::getDrawableIndex(const osg::Drawable * drawable) const function, expected prototype:\nunsigned int osg::Geode::getDrawableIndex(const osg::Drawable * drawable) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Geode::getDrawableIndex(const osg::Drawable *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getDrawableIndex(drawable);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osg::Geode::DrawableList & osg::Geode::getDrawableList() const
	static int _bind_getDrawableList(lua_State *L) {
		if (!_lg_typecheck_getDrawableList(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode::DrawableList & osg::Geode::getDrawableList() const function, expected prototype:\nconst osg::Geode::DrawableList & osg::Geode::getDrawableList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode::DrawableList & osg::Geode::getDrawableList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode::DrawableList* lret = &self->getDrawableList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode::DrawableList >::push(L,lret,false);

		return 1;
	}

	// void osg::Geode::compileDrawables(osg::RenderInfo & renderInfo)
	static int _bind_compileDrawables(lua_State *L) {
		if (!_lg_typecheck_compileDrawables(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geode::compileDrawables(osg::RenderInfo & renderInfo) function, expected prototype:\nvoid osg::Geode::compileDrawables(osg::RenderInfo & renderInfo)\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::Geode::compileDrawables function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geode::compileDrawables(osg::RenderInfo &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->compileDrawables(renderInfo);

		return 0;
	}

	// const osg::BoundingBoxd & osg::Geode::getBoundingBox() const
	static int _bind_getBoundingBox(lua_State *L) {
		if (!_lg_typecheck_getBoundingBox(L)) {
			luaL_error(L, "luna typecheck failed in const osg::BoundingBoxd & osg::Geode::getBoundingBox() const function, expected prototype:\nconst osg::BoundingBoxd & osg::Geode::getBoundingBox() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::BoundingBoxd & osg::Geode::getBoundingBox() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::BoundingBoxd* lret = &self->getBoundingBox();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,false);

		return 1;
	}

	// osg::BoundingSphered osg::Geode::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::Geode::computeBound() const function, expected prototype:\nosg::BoundingSphered osg::Geode::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::Geode::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osg::Geode::setThreadSafeRefUnref(bool threadSafe)
	static int _bind_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geode::setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Geode::setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geode::setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Geode::releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geode::releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Geode::releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geode::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(_arg1);

		return 0;
	}

	// void osg::Geode::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geode::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Geode::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geode::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geode::setName(name);

		return 0;
	}

	// void osg::Geode::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geode::base_computeDataVariance() function, expected prototype:\nvoid osg::Geode::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geode::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geode::computeDataVariance();

		return 0;
	}

	// void osg::Geode::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geode::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Geode::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geode::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geode::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Geode::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Geode::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Geode::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Geode::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Geode::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Geode::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Geode::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Geode::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Geode::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Geode::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geode::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Group * osg::Geode::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::Geode::base_asGroup() function, expected prototype:\nosg::Group * osg::Geode::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::Geode::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->Geode::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::Geode::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::Geode::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::Geode::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::Geode::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->Geode::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geode::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// osg::Transform * osg::Geode::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::Geode::base_asTransform() function, expected prototype:\nosg::Transform * osg::Geode::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::Geode::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->Geode::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::Geode::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::Geode::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::Geode::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::Geode::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->Geode::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geode::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osg::Geode::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::Geode::base_asCamera() function, expected prototype:\nosg::Camera * osg::Geode::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::Geode::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->Geode::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::Geode::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::Geode::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::Geode::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::Geode::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->Geode::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geode::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osg::Geode::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::Geode::base_asSwitch() function, expected prototype:\nosg::Switch * osg::Geode::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::Geode::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->Geode::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::Geode::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::Geode::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::Geode::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::Geode::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->Geode::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geode::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// void osg::Geode::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geode::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Geode::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Geode::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geode::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geode::ascend(nv);

		return 0;
	}

	// void osg::Geode::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geode::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::Geode::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Geode::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geode::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geode::traverse(_arg1);

		return 0;
	}

	// osg::Object * osg::Geode::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Geode::base_cloneType() const function, expected prototype:\nosg::Object * osg::Geode::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Geode::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Geode::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Geode::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Geode::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Geode::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Geode::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Geode::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Geode::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Geode::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geode::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Geode::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geode::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Geode::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Geode::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Geode::base_className() const function, expected prototype:\nconst char * osg::Geode::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Geode::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Geode::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Geode::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Geode::base_libraryName() const function, expected prototype:\nconst char * osg::Geode::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Geode::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Geode::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Geode::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geode::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Geode::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Geode::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geode::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geode::accept(nv);

		return 0;
	}

	// osg::Geode * osg::Geode::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::Geode::base_asGeode() function, expected prototype:\nosg::Geode * osg::Geode::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::Geode::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->Geode::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::Geode::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::Geode::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::Geode::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::Geode::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->Geode::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geode::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// bool osg::Geode::base_addDrawable(osg::Drawable * drawable)
	static int _bind_base_addDrawable(lua_State *L) {
		if (!_lg_typecheck_base_addDrawable(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geode::base_addDrawable(osg::Drawable * drawable) function, expected prototype:\nbool osg::Geode::base_addDrawable(osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geode::base_addDrawable(osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Geode::addDrawable(drawable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geode::base_removeDrawable(osg::Drawable * drawable)
	static int _bind_base_removeDrawable(lua_State *L) {
		if (!_lg_typecheck_base_removeDrawable(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geode::base_removeDrawable(osg::Drawable * drawable) function, expected prototype:\nbool osg::Geode::base_removeDrawable(osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geode::base_removeDrawable(osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Geode::removeDrawable(drawable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geode::base_removeDrawables(unsigned int i, unsigned int numDrawablesToRemove = 1)
	static int _bind_base_removeDrawables(lua_State *L) {
		if (!_lg_typecheck_base_removeDrawables(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geode::base_removeDrawables(unsigned int i, unsigned int numDrawablesToRemove = 1) function, expected prototype:\nbool osg::Geode::base_removeDrawables(unsigned int i, unsigned int numDrawablesToRemove = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		unsigned int numDrawablesToRemove=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)1;

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geode::base_removeDrawables(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Geode::removeDrawables(i, numDrawablesToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geode::base_replaceDrawable(osg::Drawable * origDraw, osg::Drawable * newDraw)
	static int _bind_base_replaceDrawable(lua_State *L) {
		if (!_lg_typecheck_base_replaceDrawable(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geode::base_replaceDrawable(osg::Drawable * origDraw, osg::Drawable * newDraw) function, expected prototype:\nbool osg::Geode::base_replaceDrawable(osg::Drawable * origDraw, osg::Drawable * newDraw)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* origDraw=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		osg::Drawable* newDraw=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geode::base_replaceDrawable(osg::Drawable *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Geode::replaceDrawable(origDraw, newDraw);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geode::base_setDrawable(unsigned int i, osg::Drawable * drawable)
	static int _bind_base_setDrawable(lua_State *L) {
		if (!_lg_typecheck_base_setDrawable(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geode::base_setDrawable(unsigned int i, osg::Drawable * drawable) function, expected prototype:\nbool osg::Geode::base_setDrawable(unsigned int i, osg::Drawable * drawable)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geode::base_setDrawable(unsigned int, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Geode::setDrawable(i, drawable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::BoundingSphered osg::Geode::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::Geode::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::Geode::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::Geode::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->Geode::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osg::Geode::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geode::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Geode::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geode::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geode::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Geode::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geode::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Geode::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Geode* self=Luna< osg::Referenced >::checkSubType< osg::Geode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geode::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geode::releaseGLObjects(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::Geode* LunaTraits< osg::Geode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Geode::_bind_ctor(L);
}

void LunaTraits< osg::Geode >::_bind_dtor(osg::Geode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Geode >::className[] = "Geode";
const char LunaTraits< osg::Geode >::fullName[] = "osg::Geode";
const char LunaTraits< osg::Geode >::moduleName[] = "osg";
const char* LunaTraits< osg::Geode >::parents[] = {"osg.Node", 0};
const int LunaTraits< osg::Geode >::hash = 78463439;
const int LunaTraits< osg::Geode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Geode >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Geode::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Geode::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Geode::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_Geode::_bind_className},
	{"libraryName", &luna_wrapper_osg_Geode::_bind_libraryName},
	{"accept", &luna_wrapper_osg_Geode::_bind_accept},
	{"asGeode", &luna_wrapper_osg_Geode::_bind_asGeode},
	{"addDrawable", &luna_wrapper_osg_Geode::_bind_addDrawable},
	{"removeDrawable", &luna_wrapper_osg_Geode::_bind_removeDrawable},
	{"removeDrawables", &luna_wrapper_osg_Geode::_bind_removeDrawables},
	{"replaceDrawable", &luna_wrapper_osg_Geode::_bind_replaceDrawable},
	{"setDrawable", &luna_wrapper_osg_Geode::_bind_setDrawable},
	{"getNumDrawables", &luna_wrapper_osg_Geode::_bind_getNumDrawables},
	{"getDrawable", &luna_wrapper_osg_Geode::_bind_getDrawable},
	{"containsDrawable", &luna_wrapper_osg_Geode::_bind_containsDrawable},
	{"getDrawableIndex", &luna_wrapper_osg_Geode::_bind_getDrawableIndex},
	{"getDrawableList", &luna_wrapper_osg_Geode::_bind_getDrawableList},
	{"compileDrawables", &luna_wrapper_osg_Geode::_bind_compileDrawables},
	{"getBoundingBox", &luna_wrapper_osg_Geode::_bind_getBoundingBox},
	{"computeBound", &luna_wrapper_osg_Geode::_bind_computeBound},
	{"setThreadSafeRefUnref", &luna_wrapper_osg_Geode::_bind_setThreadSafeRefUnref},
	{"releaseGLObjects", &luna_wrapper_osg_Geode::_bind_releaseGLObjects},
	{"base_setName", &luna_wrapper_osg_Geode::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Geode::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Geode::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Geode::_bind_base_getUserData},
	{"base_asGroup", &luna_wrapper_osg_Geode::_bind_base_asGroup},
	{"base_asTransform", &luna_wrapper_osg_Geode::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osg_Geode::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osg_Geode::_bind_base_asSwitch},
	{"base_ascend", &luna_wrapper_osg_Geode::_bind_base_ascend},
	{"base_traverse", &luna_wrapper_osg_Geode::_bind_base_traverse},
	{"base_cloneType", &luna_wrapper_osg_Geode::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Geode::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Geode::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_Geode::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_Geode::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_Geode::_bind_base_accept},
	{"base_asGeode", &luna_wrapper_osg_Geode::_bind_base_asGeode},
	{"base_addDrawable", &luna_wrapper_osg_Geode::_bind_base_addDrawable},
	{"base_removeDrawable", &luna_wrapper_osg_Geode::_bind_base_removeDrawable},
	{"base_removeDrawables", &luna_wrapper_osg_Geode::_bind_base_removeDrawables},
	{"base_replaceDrawable", &luna_wrapper_osg_Geode::_bind_base_replaceDrawable},
	{"base_setDrawable", &luna_wrapper_osg_Geode::_bind_base_setDrawable},
	{"base_computeBound", &luna_wrapper_osg_Geode::_bind_base_computeBound},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Geode::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_Geode::_bind_base_releaseGLObjects},
	{"fromVoid", &luna_wrapper_osg_Geode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Geode::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Geode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Geode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Geode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Geode >::enumValues[] = {
	{0,0}
};


