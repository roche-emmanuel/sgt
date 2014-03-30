#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_DefaultUserDataContainer.h>

class luna_wrapper_osg_DefaultUserDataContainer {
public:
	typedef Luna< osg::DefaultUserDataContainer > luna_t;

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

		osg::DefaultUserDataContainer* self= (osg::DefaultUserDataContainer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::DefaultUserDataContainer >::push(L,self,false);
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
		//osg::DefaultUserDataContainer* ptr= dynamic_cast< osg::DefaultUserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		osg::DefaultUserDataContainer* ptr= luna_caster< osg::Referenced, osg::DefaultUserDataContainer >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::DefaultUserDataContainer >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addUserObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUserObject(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeUserObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumUserObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserObjectIndex_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserObjectIndex_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDescriptions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95416160) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDescriptions_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDescriptions_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumDescriptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addDescription(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_addUserObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setUserObject(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeUserObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNumUserObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserObjectIndex_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserObjectIndex_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setDescriptions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95416160) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDescriptions_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDescriptions_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNumDescriptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_addDescription(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::DefaultUserDataContainer::DefaultUserDataContainer()
	static osg::DefaultUserDataContainer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::DefaultUserDataContainer::DefaultUserDataContainer() function, expected prototype:\nosg::DefaultUserDataContainer::DefaultUserDataContainer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::DefaultUserDataContainer();
	}

	// osg::DefaultUserDataContainer::DefaultUserDataContainer(const osg::DefaultUserDataContainer & udc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DefaultUserDataContainer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::DefaultUserDataContainer::DefaultUserDataContainer(const osg::DefaultUserDataContainer & udc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DefaultUserDataContainer::DefaultUserDataContainer(const osg::DefaultUserDataContainer & udc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::DefaultUserDataContainer* udc_ptr=(Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1));
		if( !udc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg udc in osg::DefaultUserDataContainer::DefaultUserDataContainer function");
		}
		const osg::DefaultUserDataContainer & udc=*udc_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DefaultUserDataContainer::DefaultUserDataContainer function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::DefaultUserDataContainer(udc, copyop);
	}

	// osg::DefaultUserDataContainer::DefaultUserDataContainer(lua_Table * data)
	static osg::DefaultUserDataContainer* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::DefaultUserDataContainer::DefaultUserDataContainer(lua_Table * data) function, expected prototype:\nosg::DefaultUserDataContainer::DefaultUserDataContainer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_DefaultUserDataContainer(L,NULL);
	}

	// osg::DefaultUserDataContainer::DefaultUserDataContainer(lua_Table * data, const osg::DefaultUserDataContainer & udc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DefaultUserDataContainer* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::DefaultUserDataContainer::DefaultUserDataContainer(lua_Table * data, const osg::DefaultUserDataContainer & udc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DefaultUserDataContainer::DefaultUserDataContainer(lua_Table * data, const osg::DefaultUserDataContainer & udc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::DefaultUserDataContainer* udc_ptr=(Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,2));
		if( !udc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg udc in osg::DefaultUserDataContainer::DefaultUserDataContainer function");
		}
		const osg::DefaultUserDataContainer & udc=*udc_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DefaultUserDataContainer::DefaultUserDataContainer function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_DefaultUserDataContainer(L,NULL, udc, copyop);
	}

	// Overload binder for osg::DefaultUserDataContainer::DefaultUserDataContainer
	static osg::DefaultUserDataContainer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function DefaultUserDataContainer, cannot match any of the overloads for function DefaultUserDataContainer:\n  DefaultUserDataContainer()\n  DefaultUserDataContainer(const osg::DefaultUserDataContainer &, const osg::CopyOp &)\n  DefaultUserDataContainer(lua_Table *)\n  DefaultUserDataContainer(lua_Table *, const osg::DefaultUserDataContainer &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::DefaultUserDataContainer::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DefaultUserDataContainer::cloneType() const function, expected prototype:\nosg::Object * osg::DefaultUserDataContainer::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DefaultUserDataContainer::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::DefaultUserDataContainer::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DefaultUserDataContainer::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::DefaultUserDataContainer::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::DefaultUserDataContainer::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DefaultUserDataContainer::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::DefaultUserDataContainer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::DefaultUserDataContainer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::DefaultUserDataContainer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::DefaultUserDataContainer::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::DefaultUserDataContainer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DefaultUserDataContainer::libraryName() const function, expected prototype:\nconst char * osg::DefaultUserDataContainer::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DefaultUserDataContainer::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::DefaultUserDataContainer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DefaultUserDataContainer::className() const function, expected prototype:\nconst char * osg::DefaultUserDataContainer::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DefaultUserDataContainer::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::DefaultUserDataContainer::setThreadSafeRefUnref(bool threadSafe)
	static int _bind_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::DefaultUserDataContainer::setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::DefaultUserDataContainer::setUserData(osg::Referenced * obj)
	static int _bind_setUserData(lua_State *L) {
		if (!_lg_typecheck_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::DefaultUserDataContainer::setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::DefaultUserDataContainer::getUserData()
	static int _bind_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::DefaultUserDataContainer::getUserData() function, expected prototype:\nosg::Referenced * osg::DefaultUserDataContainer::getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::DefaultUserDataContainer::getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::DefaultUserDataContainer::getUserData() const
	static int _bind_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::DefaultUserDataContainer::getUserData() const function, expected prototype:\nconst osg::Referenced * osg::DefaultUserDataContainer::getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::DefaultUserDataContainer::getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DefaultUserDataContainer::getUserData
	static int _bind_getUserData(lua_State *L) {
		if (_lg_typecheck_getUserData_overload_1(L)) return _bind_getUserData_overload_1(L);
		if (_lg_typecheck_getUserData_overload_2(L)) return _bind_getUserData_overload_2(L);

		luaL_error(L, "error in function getUserData, cannot match any of the overloads for function getUserData:\n  getUserData()\n  getUserData()\n");
		return 0;
	}

	// unsigned int osg::DefaultUserDataContainer::addUserObject(osg::Object * obj)
	static int _bind_addUserObject(lua_State *L) {
		if (!_lg_typecheck_addUserObject(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DefaultUserDataContainer::addUserObject(osg::Object * obj) function, expected prototype:\nunsigned int osg::DefaultUserDataContainer::addUserObject(osg::Object * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DefaultUserDataContainer::addUserObject(osg::Object *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->addUserObject(obj);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DefaultUserDataContainer::setUserObject(unsigned int i, osg::Object * obj)
	static int _bind_setUserObject(lua_State *L) {
		if (!_lg_typecheck_setUserObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::setUserObject(unsigned int i, osg::Object * obj) function, expected prototype:\nvoid osg::DefaultUserDataContainer::setUserObject(unsigned int i, osg::Object * obj)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,3));

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::setUserObject(unsigned int, osg::Object *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUserObject(i, obj);

		return 0;
	}

	// void osg::DefaultUserDataContainer::removeUserObject(unsigned int i)
	static int _bind_removeUserObject(lua_State *L) {
		if (!_lg_typecheck_removeUserObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::removeUserObject(unsigned int i) function, expected prototype:\nvoid osg::DefaultUserDataContainer::removeUserObject(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::removeUserObject(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeUserObject(i);

		return 0;
	}

	// osg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int i)
	static int _bind_getUserObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUserObject_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int i) function, expected prototype:\nosg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->getUserObject(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// const osg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int i) const
	static int _bind_getUserObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUserObject_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int i) const function, expected prototype:\nconst osg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Object * lret = self->getUserObject(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DefaultUserDataContainer::getUserObject
	static int _bind_getUserObject(lua_State *L) {
		if (_lg_typecheck_getUserObject_overload_1(L)) return _bind_getUserObject_overload_1(L);
		if (_lg_typecheck_getUserObject_overload_2(L)) return _bind_getUserObject_overload_2(L);

		luaL_error(L, "error in function getUserObject, cannot match any of the overloads for function getUserObject:\n  getUserObject(unsigned int)\n  getUserObject(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::DefaultUserDataContainer::getNumUserObjects() const
	static int _bind_getNumUserObjects(lua_State *L) {
		if (!_lg_typecheck_getNumUserObjects(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DefaultUserDataContainer::getNumUserObjects() const function, expected prototype:\nunsigned int osg::DefaultUserDataContainer::getNumUserObjects() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DefaultUserDataContainer::getNumUserObjects() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumUserObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const
	static int _bind_getUserObjectIndex_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUserObjectIndex_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const function, expected prototype:\nunsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		unsigned int startPos=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const osg::Object *, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getUserObjectIndex(obj, startPos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const
	static int _bind_getUserObjectIndex_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUserObjectIndex_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const function, expected prototype:\nunsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int startPos=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const std::string &, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getUserObjectIndex(name, startPos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::DefaultUserDataContainer::getUserObjectIndex
	static int _bind_getUserObjectIndex(lua_State *L) {
		if (_lg_typecheck_getUserObjectIndex_overload_1(L)) return _bind_getUserObjectIndex_overload_1(L);
		if (_lg_typecheck_getUserObjectIndex_overload_2(L)) return _bind_getUserObjectIndex_overload_2(L);

		luaL_error(L, "error in function getUserObjectIndex, cannot match any of the overloads for function getUserObjectIndex:\n  getUserObjectIndex(const osg::Object *, unsigned int)\n  getUserObjectIndex(const std::string &, unsigned int)\n");
		return 0;
	}

	// void osg::DefaultUserDataContainer::setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions)
	static int _bind_setDescriptions(lua_State *L) {
		if (!_lg_typecheck_setDescriptions(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions) function, expected prototype:\nvoid osg::DefaultUserDataContainer::setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions)\nClass arguments details:\narg 1 ID = 95416160\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::UserDataContainer::DescriptionList* descriptions_ptr=(Luna< std::vector< std::string > >::checkSubType< osg::UserDataContainer::DescriptionList >(L,2));
		if( !descriptions_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg descriptions in osg::DefaultUserDataContainer::setDescriptions function");
		}
		const osg::UserDataContainer::DescriptionList & descriptions=*descriptions_ptr;

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::setDescriptions(const osg::UserDataContainer::DescriptionList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDescriptions(descriptions);

		return 0;
	}

	// osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions()
	static int _bind_getDescriptions_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDescriptions_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions() function, expected prototype:\nosg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::UserDataContainer::DescriptionList* lret = &self->getDescriptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::UserDataContainer::DescriptionList >::push(L,lret,false);

		return 1;
	}

	// const osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions() const
	static int _bind_getDescriptions_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDescriptions_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions() const function, expected prototype:\nconst osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::UserDataContainer::DescriptionList* lret = &self->getDescriptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::UserDataContainer::DescriptionList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DefaultUserDataContainer::getDescriptions
	static int _bind_getDescriptions(lua_State *L) {
		if (_lg_typecheck_getDescriptions_overload_1(L)) return _bind_getDescriptions_overload_1(L);
		if (_lg_typecheck_getDescriptions_overload_2(L)) return _bind_getDescriptions_overload_2(L);

		luaL_error(L, "error in function getDescriptions, cannot match any of the overloads for function getDescriptions:\n  getDescriptions()\n  getDescriptions()\n");
		return 0;
	}

	// unsigned int osg::DefaultUserDataContainer::getNumDescriptions() const
	static int _bind_getNumDescriptions(lua_State *L) {
		if (!_lg_typecheck_getNumDescriptions(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DefaultUserDataContainer::getNumDescriptions() const function, expected prototype:\nunsigned int osg::DefaultUserDataContainer::getNumDescriptions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DefaultUserDataContainer::getNumDescriptions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumDescriptions();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DefaultUserDataContainer::addDescription(const std::string & desc)
	static int _bind_addDescription(lua_State *L) {
		if (!_lg_typecheck_addDescription(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::addDescription(const std::string & desc) function, expected prototype:\nvoid osg::DefaultUserDataContainer::addDescription(const std::string & desc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string desc(lua_tostring(L,2),lua_objlen(L,2));

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::addDescription(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addDescription(desc);

		return 0;
	}

	// void osg::DefaultUserDataContainer::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::base_setName(const std::string & name) function, expected prototype:\nvoid osg::DefaultUserDataContainer::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DefaultUserDataContainer::setName(name);

		return 0;
	}

	// void osg::DefaultUserDataContainer::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::base_computeDataVariance() function, expected prototype:\nvoid osg::DefaultUserDataContainer::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DefaultUserDataContainer::computeDataVariance();

		return 0;
	}

	// void osg::DefaultUserDataContainer::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::DefaultUserDataContainer::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DefaultUserDataContainer::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::DefaultUserDataContainer::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DefaultUserDataContainer::base_cloneType() const function, expected prototype:\nosg::Object * osg::DefaultUserDataContainer::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DefaultUserDataContainer::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DefaultUserDataContainer::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::DefaultUserDataContainer::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DefaultUserDataContainer::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::DefaultUserDataContainer::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::DefaultUserDataContainer::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DefaultUserDataContainer::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DefaultUserDataContainer::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::DefaultUserDataContainer::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::DefaultUserDataContainer::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::DefaultUserDataContainer::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::DefaultUserDataContainer::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DefaultUserDataContainer::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::DefaultUserDataContainer::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DefaultUserDataContainer::base_libraryName() const function, expected prototype:\nconst char * osg::DefaultUserDataContainer::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DefaultUserDataContainer::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DefaultUserDataContainer::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::DefaultUserDataContainer::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DefaultUserDataContainer::base_className() const function, expected prototype:\nconst char * osg::DefaultUserDataContainer::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DefaultUserDataContainer::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DefaultUserDataContainer::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::DefaultUserDataContainer::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::DefaultUserDataContainer::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DefaultUserDataContainer::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::DefaultUserDataContainer::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::DefaultUserDataContainer::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DefaultUserDataContainer::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::DefaultUserDataContainer::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::DefaultUserDataContainer::base_getUserData() function, expected prototype:\nosg::Referenced * osg::DefaultUserDataContainer::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::DefaultUserDataContainer::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->DefaultUserDataContainer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::DefaultUserDataContainer::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::DefaultUserDataContainer::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::DefaultUserDataContainer::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::DefaultUserDataContainer::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->DefaultUserDataContainer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DefaultUserDataContainer::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// unsigned int osg::DefaultUserDataContainer::base_addUserObject(osg::Object * obj)
	static int _bind_base_addUserObject(lua_State *L) {
		if (!_lg_typecheck_base_addUserObject(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DefaultUserDataContainer::base_addUserObject(osg::Object * obj) function, expected prototype:\nunsigned int osg::DefaultUserDataContainer::base_addUserObject(osg::Object * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DefaultUserDataContainer::base_addUserObject(osg::Object *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DefaultUserDataContainer::addUserObject(obj);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DefaultUserDataContainer::base_setUserObject(unsigned int i, osg::Object * obj)
	static int _bind_base_setUserObject(lua_State *L) {
		if (!_lg_typecheck_base_setUserObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::base_setUserObject(unsigned int i, osg::Object * obj) function, expected prototype:\nvoid osg::DefaultUserDataContainer::base_setUserObject(unsigned int i, osg::Object * obj)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,3));

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::base_setUserObject(unsigned int, osg::Object *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DefaultUserDataContainer::setUserObject(i, obj);

		return 0;
	}

	// void osg::DefaultUserDataContainer::base_removeUserObject(unsigned int i)
	static int _bind_base_removeUserObject(lua_State *L) {
		if (!_lg_typecheck_base_removeUserObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::base_removeUserObject(unsigned int i) function, expected prototype:\nvoid osg::DefaultUserDataContainer::base_removeUserObject(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::base_removeUserObject(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DefaultUserDataContainer::removeUserObject(i);

		return 0;
	}

	// osg::Object * osg::DefaultUserDataContainer::base_getUserObject(unsigned int i)
	static int _bind_base_getUserObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserObject_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DefaultUserDataContainer::base_getUserObject(unsigned int i) function, expected prototype:\nosg::Object * osg::DefaultUserDataContainer::base_getUserObject(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DefaultUserDataContainer::base_getUserObject(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DefaultUserDataContainer::getUserObject(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// const osg::Object * osg::DefaultUserDataContainer::base_getUserObject(unsigned int i) const
	static int _bind_base_getUserObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserObject_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Object * osg::DefaultUserDataContainer::base_getUserObject(unsigned int i) const function, expected prototype:\nconst osg::Object * osg::DefaultUserDataContainer::base_getUserObject(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Object * osg::DefaultUserDataContainer::base_getUserObject(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Object * lret = self->DefaultUserDataContainer::getUserObject(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DefaultUserDataContainer::base_getUserObject
	static int _bind_base_getUserObject(lua_State *L) {
		if (_lg_typecheck_base_getUserObject_overload_1(L)) return _bind_base_getUserObject_overload_1(L);
		if (_lg_typecheck_base_getUserObject_overload_2(L)) return _bind_base_getUserObject_overload_2(L);

		luaL_error(L, "error in function base_getUserObject, cannot match any of the overloads for function base_getUserObject:\n  base_getUserObject(unsigned int)\n  base_getUserObject(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::DefaultUserDataContainer::base_getNumUserObjects() const
	static int _bind_base_getNumUserObjects(lua_State *L) {
		if (!_lg_typecheck_base_getNumUserObjects(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DefaultUserDataContainer::base_getNumUserObjects() const function, expected prototype:\nunsigned int osg::DefaultUserDataContainer::base_getNumUserObjects() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DefaultUserDataContainer::base_getNumUserObjects() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DefaultUserDataContainer::getNumUserObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DefaultUserDataContainer::base_getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const
	static int _bind_base_getUserObjectIndex_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserObjectIndex_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DefaultUserDataContainer::base_getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const function, expected prototype:\nunsigned int osg::DefaultUserDataContainer::base_getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		unsigned int startPos=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DefaultUserDataContainer::base_getUserObjectIndex(const osg::Object *, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DefaultUserDataContainer::getUserObjectIndex(obj, startPos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DefaultUserDataContainer::base_getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const
	static int _bind_base_getUserObjectIndex_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserObjectIndex_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DefaultUserDataContainer::base_getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const function, expected prototype:\nunsigned int osg::DefaultUserDataContainer::base_getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int startPos=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DefaultUserDataContainer::base_getUserObjectIndex(const std::string &, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DefaultUserDataContainer::getUserObjectIndex(name, startPos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::DefaultUserDataContainer::base_getUserObjectIndex
	static int _bind_base_getUserObjectIndex(lua_State *L) {
		if (_lg_typecheck_base_getUserObjectIndex_overload_1(L)) return _bind_base_getUserObjectIndex_overload_1(L);
		if (_lg_typecheck_base_getUserObjectIndex_overload_2(L)) return _bind_base_getUserObjectIndex_overload_2(L);

		luaL_error(L, "error in function base_getUserObjectIndex, cannot match any of the overloads for function base_getUserObjectIndex:\n  base_getUserObjectIndex(const osg::Object *, unsigned int)\n  base_getUserObjectIndex(const std::string &, unsigned int)\n");
		return 0;
	}

	// void osg::DefaultUserDataContainer::base_setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions)
	static int _bind_base_setDescriptions(lua_State *L) {
		if (!_lg_typecheck_base_setDescriptions(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::base_setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions) function, expected prototype:\nvoid osg::DefaultUserDataContainer::base_setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions)\nClass arguments details:\narg 1 ID = 95416160\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::UserDataContainer::DescriptionList* descriptions_ptr=(Luna< std::vector< std::string > >::checkSubType< osg::UserDataContainer::DescriptionList >(L,2));
		if( !descriptions_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg descriptions in osg::DefaultUserDataContainer::base_setDescriptions function");
		}
		const osg::UserDataContainer::DescriptionList & descriptions=*descriptions_ptr;

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::base_setDescriptions(const osg::UserDataContainer::DescriptionList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DefaultUserDataContainer::setDescriptions(descriptions);

		return 0;
	}

	// osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::base_getDescriptions()
	static int _bind_base_getDescriptions_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getDescriptions_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::base_getDescriptions() function, expected prototype:\nosg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::base_getDescriptions()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::base_getDescriptions(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::UserDataContainer::DescriptionList* lret = &self->DefaultUserDataContainer::getDescriptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::UserDataContainer::DescriptionList >::push(L,lret,false);

		return 1;
	}

	// const osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::base_getDescriptions() const
	static int _bind_base_getDescriptions_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getDescriptions_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::base_getDescriptions() const function, expected prototype:\nconst osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::base_getDescriptions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::base_getDescriptions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::UserDataContainer::DescriptionList* lret = &self->DefaultUserDataContainer::getDescriptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::UserDataContainer::DescriptionList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DefaultUserDataContainer::base_getDescriptions
	static int _bind_base_getDescriptions(lua_State *L) {
		if (_lg_typecheck_base_getDescriptions_overload_1(L)) return _bind_base_getDescriptions_overload_1(L);
		if (_lg_typecheck_base_getDescriptions_overload_2(L)) return _bind_base_getDescriptions_overload_2(L);

		luaL_error(L, "error in function base_getDescriptions, cannot match any of the overloads for function base_getDescriptions:\n  base_getDescriptions()\n  base_getDescriptions()\n");
		return 0;
	}

	// unsigned int osg::DefaultUserDataContainer::base_getNumDescriptions() const
	static int _bind_base_getNumDescriptions(lua_State *L) {
		if (!_lg_typecheck_base_getNumDescriptions(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DefaultUserDataContainer::base_getNumDescriptions() const function, expected prototype:\nunsigned int osg::DefaultUserDataContainer::base_getNumDescriptions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DefaultUserDataContainer::base_getNumDescriptions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DefaultUserDataContainer::getNumDescriptions();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DefaultUserDataContainer::base_addDescription(const std::string & desc)
	static int _bind_base_addDescription(lua_State *L) {
		if (!_lg_typecheck_base_addDescription(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DefaultUserDataContainer::base_addDescription(const std::string & desc) function, expected prototype:\nvoid osg::DefaultUserDataContainer::base_addDescription(const std::string & desc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string desc(lua_tostring(L,2),lua_objlen(L,2));

		osg::DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::DefaultUserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DefaultUserDataContainer::base_addDescription(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DefaultUserDataContainer::addDescription(desc);

		return 0;
	}


	// Operator binds:

};

osg::DefaultUserDataContainer* LunaTraits< osg::DefaultUserDataContainer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_DefaultUserDataContainer::_bind_ctor(L);
}

void LunaTraits< osg::DefaultUserDataContainer >::_bind_dtor(osg::DefaultUserDataContainer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::DefaultUserDataContainer >::className[] = "DefaultUserDataContainer";
const char LunaTraits< osg::DefaultUserDataContainer >::fullName[] = "osg::DefaultUserDataContainer";
const char LunaTraits< osg::DefaultUserDataContainer >::moduleName[] = "osg";
const char* LunaTraits< osg::DefaultUserDataContainer >::parents[] = {"osg.UserDataContainer", 0};
const int LunaTraits< osg::DefaultUserDataContainer >::hash = 14029964;
const int LunaTraits< osg::DefaultUserDataContainer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::DefaultUserDataContainer >::methods[] = {
	{"cloneType", &luna_wrapper_osg_DefaultUserDataContainer::_bind_cloneType},
	{"clone", &luna_wrapper_osg_DefaultUserDataContainer::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_DefaultUserDataContainer::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_DefaultUserDataContainer::_bind_libraryName},
	{"className", &luna_wrapper_osg_DefaultUserDataContainer::_bind_className},
	{"setThreadSafeRefUnref", &luna_wrapper_osg_DefaultUserDataContainer::_bind_setThreadSafeRefUnref},
	{"setUserData", &luna_wrapper_osg_DefaultUserDataContainer::_bind_setUserData},
	{"getUserData", &luna_wrapper_osg_DefaultUserDataContainer::_bind_getUserData},
	{"addUserObject", &luna_wrapper_osg_DefaultUserDataContainer::_bind_addUserObject},
	{"setUserObject", &luna_wrapper_osg_DefaultUserDataContainer::_bind_setUserObject},
	{"removeUserObject", &luna_wrapper_osg_DefaultUserDataContainer::_bind_removeUserObject},
	{"getUserObject", &luna_wrapper_osg_DefaultUserDataContainer::_bind_getUserObject},
	{"getNumUserObjects", &luna_wrapper_osg_DefaultUserDataContainer::_bind_getNumUserObjects},
	{"getUserObjectIndex", &luna_wrapper_osg_DefaultUserDataContainer::_bind_getUserObjectIndex},
	{"setDescriptions", &luna_wrapper_osg_DefaultUserDataContainer::_bind_setDescriptions},
	{"getDescriptions", &luna_wrapper_osg_DefaultUserDataContainer::_bind_getDescriptions},
	{"getNumDescriptions", &luna_wrapper_osg_DefaultUserDataContainer::_bind_getNumDescriptions},
	{"addDescription", &luna_wrapper_osg_DefaultUserDataContainer::_bind_addDescription},
	{"base_setName", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_computeDataVariance},
	{"base_releaseGLObjects", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_className},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_setThreadSafeRefUnref},
	{"base_setUserData", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_getUserData},
	{"base_addUserObject", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_addUserObject},
	{"base_setUserObject", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_setUserObject},
	{"base_removeUserObject", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_removeUserObject},
	{"base_getUserObject", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_getUserObject},
	{"base_getNumUserObjects", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_getNumUserObjects},
	{"base_getUserObjectIndex", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_getUserObjectIndex},
	{"base_setDescriptions", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_setDescriptions},
	{"base_getDescriptions", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_getDescriptions},
	{"base_getNumDescriptions", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_getNumDescriptions},
	{"base_addDescription", &luna_wrapper_osg_DefaultUserDataContainer::_bind_base_addDescription},
	{"fromVoid", &luna_wrapper_osg_DefaultUserDataContainer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_DefaultUserDataContainer::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_DefaultUserDataContainer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DefaultUserDataContainer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_DefaultUserDataContainer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DefaultUserDataContainer >::enumValues[] = {
	{0,0}
};


