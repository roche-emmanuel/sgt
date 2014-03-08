#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Group.h>

class luna_wrapper_osg_Group {
public:
	typedef Luna< osg::Group > luna_t;

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

		osg::Group* self= (osg::Group*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Group >::push(L,self,false);
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
		//osg::Group* ptr= dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		osg::Group* ptr= luna_caster< osg::Referenced, osg::Group >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Group >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Group >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_asGroup_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asGroup_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_insertChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChild_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChildren(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_replaceChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumChildren(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_containsNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChildIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_asGroup_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGroup_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_insertChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeChildren(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Group::Group()
	static osg::Group* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group::Group() function, expected prototype:\nosg::Group::Group()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Group();
	}

	// osg::Group::Group(const osg::Group & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Group* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group::Group(const osg::Group & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Group::Group(const osg::Group & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Group* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Group::Group function");
		}
		const osg::Group & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Group::Group function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Group(_arg1, copyop);
	}

	// osg::Group::Group(lua_Table * data)
	static osg::Group* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group::Group(lua_Table * data) function, expected prototype:\nosg::Group::Group(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Group(L,NULL);
	}

	// osg::Group::Group(lua_Table * data, const osg::Group & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Group* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group::Group(lua_Table * data, const osg::Group & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Group::Group(lua_Table * data, const osg::Group & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Group* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Group::Group function");
		}
		const osg::Group & _arg2=*_arg2_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Group::Group function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Group(L,NULL, _arg2, copyop);
	}

	// Overload binder for osg::Group::Group
	static osg::Group* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Group, cannot match any of the overloads for function Group:\n  Group()\n  Group(const osg::Group &, const osg::CopyOp &)\n  Group(lua_Table *)\n  Group(lua_Table *, const osg::Group &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Group::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Group::cloneType() const function, expected prototype:\nosg::Object * osg::Group::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Group::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Group::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Group::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Group::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Group::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Group::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Group::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Group::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Group::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Group::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Group::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Group::className() const function, expected prototype:\nconst char * osg::Group::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Group::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Group::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Group::libraryName() const function, expected prototype:\nconst char * osg::Group::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Group::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Group::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Group::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Group::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Group::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Group::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// osg::Group * osg::Group::asGroup()
	static int _bind_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::Group::asGroup() function, expected prototype:\nosg::Group * osg::Group::asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::Group::asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::Group::asGroup() const
	static int _bind_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::Group::asGroup() const function, expected prototype:\nconst osg::Group * osg::Group::asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::Group::asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Group::asGroup
	static int _bind_asGroup(lua_State *L) {
		if (_lg_typecheck_asGroup_overload_1(L)) return _bind_asGroup_overload_1(L);
		if (_lg_typecheck_asGroup_overload_2(L)) return _bind_asGroup_overload_2(L);

		luaL_error(L, "error in function asGroup, cannot match any of the overloads for function asGroup:\n  asGroup()\n  asGroup()\n");
		return 0;
	}

	// void osg::Group::traverse(osg::NodeVisitor & arg1)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Group::traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::Group::traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Group::traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Group::traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->traverse(_arg1);

		return 0;
	}

	// bool osg::Group::addChild(osg::Node * child)
	static int _bind_addChild(lua_State *L) {
		if (!_lg_typecheck_addChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Group::addChild(osg::Node * child) function, expected prototype:\nbool osg::Group::addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Group::addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Group::insertChild(unsigned int index, osg::Node * child)
	static int _bind_insertChild(lua_State *L) {
		if (!_lg_typecheck_insertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Group::insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::Group::insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Group::insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Group::removeChild(osg::Node * child)
	static int _bind_removeChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_removeChild_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Group::removeChild(osg::Node * child) function, expected prototype:\nbool osg::Group::removeChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Group::removeChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Group::removeChild(unsigned int pos, unsigned int numChildrenToRemove = 1)
	static int _bind_removeChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_removeChild_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Group::removeChild(unsigned int pos, unsigned int numChildrenToRemove = 1) function, expected prototype:\nbool osg::Group::removeChild(unsigned int pos, unsigned int numChildrenToRemove = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)1;

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Group::removeChild(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeChild(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Group::removeChild
	static int _bind_removeChild(lua_State *L) {
		if (_lg_typecheck_removeChild_overload_1(L)) return _bind_removeChild_overload_1(L);
		if (_lg_typecheck_removeChild_overload_2(L)) return _bind_removeChild_overload_2(L);

		luaL_error(L, "error in function removeChild, cannot match any of the overloads for function removeChild:\n  removeChild(osg::Node *)\n  removeChild(unsigned int, unsigned int)\n");
		return 0;
	}

	// bool osg::Group::removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_removeChildren(lua_State *L) {
		if (!_lg_typecheck_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Group::removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::Group::removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Group::removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Group::replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_replaceChild(lua_State *L) {
		if (!_lg_typecheck_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Group::replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::Group::replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Group::replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Group::getNumChildren() const
	static int _bind_getNumChildren(lua_State *L) {
		if (!_lg_typecheck_getNumChildren(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Group::getNumChildren() const function, expected prototype:\nunsigned int osg::Group::getNumChildren() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Group::getNumChildren() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumChildren();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Group::setChild(unsigned int i, osg::Node * node)
	static int _bind_setChild(lua_State *L) {
		if (!_lg_typecheck_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Group::setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::Group::setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Group::setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Node * osg::Group::getChild(unsigned int i)
	static int _bind_getChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_getChild_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osg::Group::getChild(unsigned int i) function, expected prototype:\nosg::Node * osg::Group::getChild(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osg::Group::getChild(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->getChild(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// const osg::Node * osg::Group::getChild(unsigned int i) const
	static int _bind_getChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_getChild_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Node * osg::Group::getChild(unsigned int i) const function, expected prototype:\nconst osg::Node * osg::Group::getChild(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Node * osg::Group::getChild(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Node * lret = self->getChild(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Group::getChild
	static int _bind_getChild(lua_State *L) {
		if (_lg_typecheck_getChild_overload_1(L)) return _bind_getChild_overload_1(L);
		if (_lg_typecheck_getChild_overload_2(L)) return _bind_getChild_overload_2(L);

		luaL_error(L, "error in function getChild, cannot match any of the overloads for function getChild:\n  getChild(unsigned int)\n  getChild(unsigned int)\n");
		return 0;
	}

	// bool osg::Group::containsNode(const osg::Node * node) const
	static int _bind_containsNode(lua_State *L) {
		if (!_lg_typecheck_containsNode(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Group::containsNode(const osg::Node * node) const function, expected prototype:\nbool osg::Group::containsNode(const osg::Node * node) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Group::containsNode(const osg::Node *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->containsNode(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Group::getChildIndex(const osg::Node * node) const
	static int _bind_getChildIndex(lua_State *L) {
		if (!_lg_typecheck_getChildIndex(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Group::getChildIndex(const osg::Node * node) const function, expected prototype:\nunsigned int osg::Group::getChildIndex(const osg::Node * node) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Group::getChildIndex(const osg::Node *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getChildIndex(node);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Group::setThreadSafeRefUnref(bool threadSafe)
	static int _bind_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Group::setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Group::setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Group::setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Group::releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Group::releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Group::releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Group::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(_arg1);

		return 0;
	}

	// osg::BoundingSphered osg::Group::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::Group::computeBound() const function, expected prototype:\nosg::BoundingSphered osg::Group::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::Group::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osg::Group::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Group::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Group::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Group::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Group::setName(name);

		return 0;
	}

	// void osg::Group::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Group::base_computeDataVariance() function, expected prototype:\nvoid osg::Group::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Group::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Group::computeDataVariance();

		return 0;
	}

	// void osg::Group::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Group::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Group::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Group::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Group::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Group::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Group::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Group::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Group::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Group::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Group::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Group::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Group::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Group::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Group::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Group::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Transform * osg::Group::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::Group::base_asTransform() function, expected prototype:\nosg::Transform * osg::Group::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::Group::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->Group::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::Group::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::Group::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::Group::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::Group::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->Group::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Group::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osg::Group::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::Group::base_asCamera() function, expected prototype:\nosg::Camera * osg::Group::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::Group::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->Group::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::Group::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::Group::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::Group::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::Group::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->Group::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Group::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osg::Group::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::Group::base_asSwitch() function, expected prototype:\nosg::Switch * osg::Group::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::Group::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->Group::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::Group::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::Group::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::Group::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::Group::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->Group::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Group::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osg::Group::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::Group::base_asGeode() function, expected prototype:\nosg::Geode * osg::Group::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::Group::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->Group::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::Group::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::Group::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::Group::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::Group::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->Group::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Group::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osg::Group::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Group::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Group::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Group::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Group::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Group::ascend(nv);

		return 0;
	}

	// osg::Object * osg::Group::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Group::base_cloneType() const function, expected prototype:\nosg::Object * osg::Group::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Group::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Group::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Group::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Group::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Group::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Group::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Group::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Group::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Group::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Group::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Group::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Group::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Group::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Group::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Group::base_className() const function, expected prototype:\nconst char * osg::Group::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Group::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Group::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Group::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Group::base_libraryName() const function, expected prototype:\nconst char * osg::Group::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Group::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Group::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Group::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Group::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Group::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Group::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Group::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Group::accept(nv);

		return 0;
	}

	// osg::Group * osg::Group::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::Group::base_asGroup() function, expected prototype:\nosg::Group * osg::Group::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::Group::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->Group::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::Group::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::Group::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::Group::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::Group::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->Group::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Group::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// void osg::Group::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Group::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::Group::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Group::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Group::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Group::traverse(_arg1);

		return 0;
	}

	// bool osg::Group::base_addChild(osg::Node * child)
	static int _bind_base_addChild(lua_State *L) {
		if (!_lg_typecheck_base_addChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Group::base_addChild(osg::Node * child) function, expected prototype:\nbool osg::Group::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Group::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Group::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Group::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Group::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::Group::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Group::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Group::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Group::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Group::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::Group::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Group::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Group::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Group::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Group::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::Group::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Group::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Group::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Group::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Group::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::Group::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Group::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Group::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Group::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Group::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Group::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Group::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Group::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Group::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Group::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Group::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Group::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Group::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::BoundingSphered osg::Group::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::Group::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::Group::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Group* self=Luna< osg::Referenced >::checkSubType< osg::Group >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::Group::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->Group::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::Group* LunaTraits< osg::Group >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Group::_bind_ctor(L);
}

void LunaTraits< osg::Group >::_bind_dtor(osg::Group* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Group >::className[] = "Group";
const char LunaTraits< osg::Group >::fullName[] = "osg::Group";
const char LunaTraits< osg::Group >::moduleName[] = "osg";
const char* LunaTraits< osg::Group >::parents[] = {"osg.Node", 0};
const int LunaTraits< osg::Group >::hash = 78851260;
const int LunaTraits< osg::Group >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Group >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Group::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Group::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Group::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_Group::_bind_className},
	{"libraryName", &luna_wrapper_osg_Group::_bind_libraryName},
	{"accept", &luna_wrapper_osg_Group::_bind_accept},
	{"asGroup", &luna_wrapper_osg_Group::_bind_asGroup},
	{"traverse", &luna_wrapper_osg_Group::_bind_traverse},
	{"addChild", &luna_wrapper_osg_Group::_bind_addChild},
	{"insertChild", &luna_wrapper_osg_Group::_bind_insertChild},
	{"removeChild", &luna_wrapper_osg_Group::_bind_removeChild},
	{"removeChildren", &luna_wrapper_osg_Group::_bind_removeChildren},
	{"replaceChild", &luna_wrapper_osg_Group::_bind_replaceChild},
	{"getNumChildren", &luna_wrapper_osg_Group::_bind_getNumChildren},
	{"setChild", &luna_wrapper_osg_Group::_bind_setChild},
	{"getChild", &luna_wrapper_osg_Group::_bind_getChild},
	{"containsNode", &luna_wrapper_osg_Group::_bind_containsNode},
	{"getChildIndex", &luna_wrapper_osg_Group::_bind_getChildIndex},
	{"setThreadSafeRefUnref", &luna_wrapper_osg_Group::_bind_setThreadSafeRefUnref},
	{"releaseGLObjects", &luna_wrapper_osg_Group::_bind_releaseGLObjects},
	{"computeBound", &luna_wrapper_osg_Group::_bind_computeBound},
	{"base_setName", &luna_wrapper_osg_Group::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Group::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Group::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Group::_bind_base_getUserData},
	{"base_asTransform", &luna_wrapper_osg_Group::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osg_Group::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osg_Group::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osg_Group::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osg_Group::_bind_base_ascend},
	{"base_cloneType", &luna_wrapper_osg_Group::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Group::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Group::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_Group::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_Group::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_Group::_bind_base_accept},
	{"base_asGroup", &luna_wrapper_osg_Group::_bind_base_asGroup},
	{"base_traverse", &luna_wrapper_osg_Group::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osg_Group::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osg_Group::_bind_base_insertChild},
	{"base_removeChildren", &luna_wrapper_osg_Group::_bind_base_removeChildren},
	{"base_replaceChild", &luna_wrapper_osg_Group::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osg_Group::_bind_base_setChild},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Group::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_Group::_bind_base_releaseGLObjects},
	{"base_computeBound", &luna_wrapper_osg_Group::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_osg_Group::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Group::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Group::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Group >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Group::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Group >::enumValues[] = {
	{0,0}
};


