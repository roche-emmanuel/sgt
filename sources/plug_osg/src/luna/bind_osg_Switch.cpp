#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Switch.h>

class luna_wrapper_osg_Switch {
public:
	typedef Luna< osg::Switch > luna_t;

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

		osg::Switch* self= (osg::Switch*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Switch >::push(L,self,false);
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
		//osg::Switch* ptr= dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,1));
		osg::Switch* ptr= luna_caster< osg::Referenced, osg::Switch >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Switch >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_asSwitch_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asSwitch_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

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

	inline static bool _lg_typecheck_setNewChildDefaultValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNewChildDefaultValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_insertChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_insertChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3)) ) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChildren(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setChildValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChildValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAllChildrenOff(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAllChildrenOn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSingleChildOn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setValueList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61721661) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getValueList(lua_State *L) {
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

	inline static bool _lg_typecheck_base_asSwitch_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asSwitch_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_insertChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_insertChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3)) ) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeChildren(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Switch::Switch()
	static osg::Switch* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch::Switch() function, expected prototype:\nosg::Switch::Switch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Switch();
	}

	// osg::Switch::Switch(const osg::Switch & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Switch* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch::Switch(const osg::Switch & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Switch::Switch(const osg::Switch & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Switch* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Switch::Switch function");
		}
		const osg::Switch & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Switch::Switch function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Switch(_arg1, copyop);
	}

	// osg::Switch::Switch(lua_Table * data)
	static osg::Switch* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch::Switch(lua_Table * data) function, expected prototype:\nosg::Switch::Switch(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Switch(L,NULL);
	}

	// osg::Switch::Switch(lua_Table * data, const osg::Switch & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Switch* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch::Switch(lua_Table * data, const osg::Switch & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Switch::Switch(lua_Table * data, const osg::Switch & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Switch* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::Switch >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Switch::Switch function");
		}
		const osg::Switch & _arg2=*_arg2_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Switch::Switch function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Switch(L,NULL, _arg2, copyop);
	}

	// Overload binder for osg::Switch::Switch
	static osg::Switch* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Switch, cannot match any of the overloads for function Switch:\n  Switch()\n  Switch(const osg::Switch &, const osg::CopyOp &)\n  Switch(lua_Table *)\n  Switch(lua_Table *, const osg::Switch &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Switch * osg::Switch::asSwitch()
	static int _bind_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::Switch::asSwitch() function, expected prototype:\nosg::Switch * osg::Switch::asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::Switch::asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::Switch::asSwitch() const
	static int _bind_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::Switch::asSwitch() const function, expected prototype:\nconst osg::Switch * osg::Switch::asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::Switch::asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Switch::asSwitch
	static int _bind_asSwitch(lua_State *L) {
		if (_lg_typecheck_asSwitch_overload_1(L)) return _bind_asSwitch_overload_1(L);
		if (_lg_typecheck_asSwitch_overload_2(L)) return _bind_asSwitch_overload_2(L);

		luaL_error(L, "error in function asSwitch, cannot match any of the overloads for function asSwitch:\n  asSwitch()\n  asSwitch()\n");
		return 0;
	}

	// osg::Object * osg::Switch::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Switch::cloneType() const function, expected prototype:\nosg::Object * osg::Switch::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Switch::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Switch::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Switch::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Switch::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Switch::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Switch::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Switch::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Switch::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Switch::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Switch::className() const function, expected prototype:\nconst char * osg::Switch::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Switch::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Switch::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Switch::libraryName() const function, expected prototype:\nconst char * osg::Switch::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Switch::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Switch::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Switch::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Switch::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Switch::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Switch::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// void osg::Switch::traverse(osg::NodeVisitor & arg1)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Switch::traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::Switch::traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Switch::traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Switch::traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->traverse(_arg1);

		return 0;
	}

	// void osg::Switch::setNewChildDefaultValue(bool value)
	static int _bind_setNewChildDefaultValue(lua_State *L) {
		if (!_lg_typecheck_setNewChildDefaultValue(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Switch::setNewChildDefaultValue(bool value) function, expected prototype:\nvoid osg::Switch::setNewChildDefaultValue(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Switch::setNewChildDefaultValue(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNewChildDefaultValue(value);

		return 0;
	}

	// bool osg::Switch::getNewChildDefaultValue() const
	static int _bind_getNewChildDefaultValue(lua_State *L) {
		if (!_lg_typecheck_getNewChildDefaultValue(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::getNewChildDefaultValue() const function, expected prototype:\nbool osg::Switch::getNewChildDefaultValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::getNewChildDefaultValue() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getNewChildDefaultValue();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Switch::addChild(osg::Node * child)
	static int _bind_addChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::addChild(osg::Node * child) function, expected prototype:\nbool osg::Switch::addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Switch::addChild(osg::Node * child, bool value)
	static int _bind_addChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::addChild(osg::Node * child, bool value) function, expected prototype:\nbool osg::Switch::addChild(osg::Node * child, bool value)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		bool value=(bool)(lua_toboolean(L,3)==1);

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::addChild(osg::Node *, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addChild(child, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Switch::addChild
	static int _bind_addChild(lua_State *L) {
		if (_lg_typecheck_addChild_overload_1(L)) return _bind_addChild_overload_1(L);
		if (_lg_typecheck_addChild_overload_2(L)) return _bind_addChild_overload_2(L);

		luaL_error(L, "error in function addChild, cannot match any of the overloads for function addChild:\n  addChild(osg::Node *)\n  addChild(osg::Node *, bool)\n");
		return 0;
	}

	// bool osg::Switch::insertChild(unsigned int index, osg::Node * child)
	static int _bind_insertChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_insertChild_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::Switch::insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Switch::insertChild(unsigned int index, osg::Node * child, bool value)
	static int _bind_insertChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_insertChild_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::insertChild(unsigned int index, osg::Node * child, bool value) function, expected prototype:\nbool osg::Switch::insertChild(unsigned int index, osg::Node * child, bool value)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));
		bool value=(bool)(lua_toboolean(L,4)==1);

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::insertChild(unsigned int, osg::Node *, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->insertChild(index, child, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Switch::insertChild
	static int _bind_insertChild(lua_State *L) {
		if (_lg_typecheck_insertChild_overload_1(L)) return _bind_insertChild_overload_1(L);
		if (_lg_typecheck_insertChild_overload_2(L)) return _bind_insertChild_overload_2(L);

		luaL_error(L, "error in function insertChild, cannot match any of the overloads for function insertChild:\n  insertChild(unsigned int, osg::Node *)\n  insertChild(unsigned int, osg::Node *, bool)\n");
		return 0;
	}

	// bool osg::Switch::removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_removeChildren(lua_State *L) {
		if (!_lg_typecheck_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::Switch::removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Switch::setValue(unsigned int pos, bool value)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Switch::setValue(unsigned int pos, bool value) function, expected prototype:\nvoid osg::Switch::setValue(unsigned int pos, bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		bool value=(bool)(lua_toboolean(L,3)==1);

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Switch::setValue(unsigned int, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setValue(pos, value);

		return 0;
	}

	// bool osg::Switch::getValue(unsigned int pos) const
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::getValue(unsigned int pos) const function, expected prototype:\nbool osg::Switch::getValue(unsigned int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::getValue(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getValue(pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Switch::setChildValue(const osg::Node * child, bool value)
	static int _bind_setChildValue(lua_State *L) {
		if (!_lg_typecheck_setChildValue(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Switch::setChildValue(const osg::Node * child, bool value) function, expected prototype:\nvoid osg::Switch::setChildValue(const osg::Node * child, bool value)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		bool value=(bool)(lua_toboolean(L,3)==1);

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Switch::setChildValue(const osg::Node *, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setChildValue(child, value);

		return 0;
	}

	// bool osg::Switch::getChildValue(const osg::Node * child) const
	static int _bind_getChildValue(lua_State *L) {
		if (!_lg_typecheck_getChildValue(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::getChildValue(const osg::Node * child) const function, expected prototype:\nbool osg::Switch::getChildValue(const osg::Node * child) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::getChildValue(const osg::Node *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getChildValue(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Switch::setAllChildrenOff()
	static int _bind_setAllChildrenOff(lua_State *L) {
		if (!_lg_typecheck_setAllChildrenOff(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::setAllChildrenOff() function, expected prototype:\nbool osg::Switch::setAllChildrenOff()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::setAllChildrenOff(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setAllChildrenOff();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Switch::setAllChildrenOn()
	static int _bind_setAllChildrenOn(lua_State *L) {
		if (!_lg_typecheck_setAllChildrenOn(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::setAllChildrenOn() function, expected prototype:\nbool osg::Switch::setAllChildrenOn()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::setAllChildrenOn(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setAllChildrenOn();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Switch::setSingleChildOn(unsigned int pos)
	static int _bind_setSingleChildOn(lua_State *L) {
		if (!_lg_typecheck_setSingleChildOn(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::setSingleChildOn(unsigned int pos) function, expected prototype:\nbool osg::Switch::setSingleChildOn(unsigned int pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::setSingleChildOn(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setSingleChildOn(pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Switch::setValueList(const osg::Switch::ValueList & values)
	static int _bind_setValueList(lua_State *L) {
		if (!_lg_typecheck_setValueList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Switch::setValueList(const osg::Switch::ValueList & values) function, expected prototype:\nvoid osg::Switch::setValueList(const osg::Switch::ValueList & values)\nClass arguments details:\narg 1 ID = 23153681\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Switch::ValueList* values_ptr=(Luna< std::vector< bool > >::checkSubType< osg::Switch::ValueList >(L,2));
		if( !values_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg values in osg::Switch::setValueList function");
		}
		const osg::Switch::ValueList & values=*values_ptr;

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Switch::setValueList(const osg::Switch::ValueList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setValueList(values);

		return 0;
	}

	// const osg::Switch::ValueList & osg::Switch::getValueList() const
	static int _bind_getValueList(lua_State *L) {
		if (!_lg_typecheck_getValueList(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch::ValueList & osg::Switch::getValueList() const function, expected prototype:\nconst osg::Switch::ValueList & osg::Switch::getValueList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch::ValueList & osg::Switch::getValueList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch::ValueList* lret = &self->getValueList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch::ValueList >::push(L,lret,false);

		return 1;
	}

	// osg::BoundingSphered osg::Switch::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::Switch::computeBound() const function, expected prototype:\nosg::BoundingSphered osg::Switch::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::Switch::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osg::Switch::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Switch::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Switch::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Switch::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Switch::setName(name);

		return 0;
	}

	// void osg::Switch::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Switch::base_computeDataVariance() function, expected prototype:\nvoid osg::Switch::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Switch::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Switch::computeDataVariance();

		return 0;
	}

	// void osg::Switch::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Switch::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Switch::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Switch::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Switch::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Switch::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Switch::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Switch::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Switch::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Switch::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Switch::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Switch::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Switch::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Switch::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Switch::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Switch::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Transform * osg::Switch::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::Switch::base_asTransform() function, expected prototype:\nosg::Transform * osg::Switch::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::Switch::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->Switch::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::Switch::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::Switch::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::Switch::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::Switch::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->Switch::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Switch::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osg::Switch::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::Switch::base_asCamera() function, expected prototype:\nosg::Camera * osg::Switch::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::Switch::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->Switch::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::Switch::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::Switch::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::Switch::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::Switch::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->Switch::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Switch::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Geode * osg::Switch::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::Switch::base_asGeode() function, expected prototype:\nosg::Geode * osg::Switch::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::Switch::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->Switch::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::Switch::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::Switch::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::Switch::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::Switch::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->Switch::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Switch::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osg::Switch::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Switch::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Switch::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Switch::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Switch::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Switch::ascend(nv);

		return 0;
	}

	// osg::Group * osg::Switch::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::Switch::base_asGroup() function, expected prototype:\nosg::Group * osg::Switch::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::Switch::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->Switch::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::Switch::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::Switch::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::Switch::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::Switch::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->Switch::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Switch::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// bool osg::Switch::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::Switch::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Switch::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Switch::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::Switch::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Switch::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Switch::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Switch::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Switch::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Switch::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Switch::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Switch::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Switch::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Switch::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Switch::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Switch::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Switch * osg::Switch::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::Switch::base_asSwitch() function, expected prototype:\nosg::Switch * osg::Switch::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::Switch::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->Switch::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::Switch::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::Switch::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::Switch::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::Switch::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->Switch::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Switch::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Object * osg::Switch::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Switch::base_cloneType() const function, expected prototype:\nosg::Object * osg::Switch::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Switch::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Switch::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Switch::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Switch::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Switch::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Switch::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Switch::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Switch::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Switch::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Switch::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Switch::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Switch::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Switch::base_className() const function, expected prototype:\nconst char * osg::Switch::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Switch::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Switch::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Switch::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Switch::base_libraryName() const function, expected prototype:\nconst char * osg::Switch::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Switch::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Switch::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Switch::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Switch::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Switch::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Switch::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Switch::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Switch::accept(nv);

		return 0;
	}

	// void osg::Switch::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Switch::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::Switch::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Switch::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Switch::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Switch::traverse(_arg1);

		return 0;
	}

	// bool osg::Switch::base_addChild(osg::Node * child)
	static int _bind_base_addChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_addChild_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::base_addChild(osg::Node * child) function, expected prototype:\nbool osg::Switch::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Switch::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Switch::base_addChild(osg::Node * child, bool value)
	static int _bind_base_addChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_addChild_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::base_addChild(osg::Node * child, bool value) function, expected prototype:\nbool osg::Switch::base_addChild(osg::Node * child, bool value)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		bool value=(bool)(lua_toboolean(L,3)==1);

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::base_addChild(osg::Node *, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Switch::addChild(child, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Switch::base_addChild
	static int _bind_base_addChild(lua_State *L) {
		if (_lg_typecheck_base_addChild_overload_1(L)) return _bind_base_addChild_overload_1(L);
		if (_lg_typecheck_base_addChild_overload_2(L)) return _bind_base_addChild_overload_2(L);

		luaL_error(L, "error in function base_addChild, cannot match any of the overloads for function base_addChild:\n  base_addChild(osg::Node *)\n  base_addChild(osg::Node *, bool)\n");
		return 0;
	}

	// bool osg::Switch::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_insertChild_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::Switch::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Switch::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Switch::base_insertChild(unsigned int index, osg::Node * child, bool value)
	static int _bind_base_insertChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_insertChild_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::base_insertChild(unsigned int index, osg::Node * child, bool value) function, expected prototype:\nbool osg::Switch::base_insertChild(unsigned int index, osg::Node * child, bool value)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));
		bool value=(bool)(lua_toboolean(L,4)==1);

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::base_insertChild(unsigned int, osg::Node *, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Switch::insertChild(index, child, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Switch::base_insertChild
	static int _bind_base_insertChild(lua_State *L) {
		if (_lg_typecheck_base_insertChild_overload_1(L)) return _bind_base_insertChild_overload_1(L);
		if (_lg_typecheck_base_insertChild_overload_2(L)) return _bind_base_insertChild_overload_2(L);

		luaL_error(L, "error in function base_insertChild, cannot match any of the overloads for function base_insertChild:\n  base_insertChild(unsigned int, osg::Node *)\n  base_insertChild(unsigned int, osg::Node *, bool)\n");
		return 0;
	}

	// bool osg::Switch::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Switch::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::Switch::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Switch::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Switch::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::BoundingSphered osg::Switch::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::Switch::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::Switch::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Switch* self=Luna< osg::Referenced >::checkSubType< osg::Switch >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::Switch::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->Switch::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::Switch* LunaTraits< osg::Switch >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Switch::_bind_ctor(L);
}

void LunaTraits< osg::Switch >::_bind_dtor(osg::Switch* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Switch >::className[] = "Switch";
const char LunaTraits< osg::Switch >::fullName[] = "osg::Switch";
const char LunaTraits< osg::Switch >::moduleName[] = "osg";
const char* LunaTraits< osg::Switch >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::Switch >::hash = 92376174;
const int LunaTraits< osg::Switch >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Switch >::methods[] = {
	{"asSwitch", &luna_wrapper_osg_Switch::_bind_asSwitch},
	{"cloneType", &luna_wrapper_osg_Switch::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Switch::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Switch::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_Switch::_bind_className},
	{"libraryName", &luna_wrapper_osg_Switch::_bind_libraryName},
	{"accept", &luna_wrapper_osg_Switch::_bind_accept},
	{"traverse", &luna_wrapper_osg_Switch::_bind_traverse},
	{"setNewChildDefaultValue", &luna_wrapper_osg_Switch::_bind_setNewChildDefaultValue},
	{"getNewChildDefaultValue", &luna_wrapper_osg_Switch::_bind_getNewChildDefaultValue},
	{"addChild", &luna_wrapper_osg_Switch::_bind_addChild},
	{"insertChild", &luna_wrapper_osg_Switch::_bind_insertChild},
	{"removeChildren", &luna_wrapper_osg_Switch::_bind_removeChildren},
	{"setValue", &luna_wrapper_osg_Switch::_bind_setValue},
	{"getValue", &luna_wrapper_osg_Switch::_bind_getValue},
	{"setChildValue", &luna_wrapper_osg_Switch::_bind_setChildValue},
	{"getChildValue", &luna_wrapper_osg_Switch::_bind_getChildValue},
	{"setAllChildrenOff", &luna_wrapper_osg_Switch::_bind_setAllChildrenOff},
	{"setAllChildrenOn", &luna_wrapper_osg_Switch::_bind_setAllChildrenOn},
	{"setSingleChildOn", &luna_wrapper_osg_Switch::_bind_setSingleChildOn},
	{"setValueList", &luna_wrapper_osg_Switch::_bind_setValueList},
	{"getValueList", &luna_wrapper_osg_Switch::_bind_getValueList},
	{"computeBound", &luna_wrapper_osg_Switch::_bind_computeBound},
	{"base_setName", &luna_wrapper_osg_Switch::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Switch::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Switch::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Switch::_bind_base_getUserData},
	{"base_asTransform", &luna_wrapper_osg_Switch::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osg_Switch::_bind_base_asCamera},
	{"base_asGeode", &luna_wrapper_osg_Switch::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osg_Switch::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osg_Switch::_bind_base_asGroup},
	{"base_replaceChild", &luna_wrapper_osg_Switch::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osg_Switch::_bind_base_setChild},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Switch::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_Switch::_bind_base_releaseGLObjects},
	{"base_asSwitch", &luna_wrapper_osg_Switch::_bind_base_asSwitch},
	{"base_cloneType", &luna_wrapper_osg_Switch::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Switch::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Switch::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_Switch::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_Switch::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_Switch::_bind_base_accept},
	{"base_traverse", &luna_wrapper_osg_Switch::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osg_Switch::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osg_Switch::_bind_base_insertChild},
	{"base_removeChildren", &luna_wrapper_osg_Switch::_bind_base_removeChildren},
	{"base_computeBound", &luna_wrapper_osg_Switch::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_osg_Switch::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Switch::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Switch::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Switch >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Switch::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Switch >::enumValues[] = {
	{0,0}
};


