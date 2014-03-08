#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_UserDataContainer.h>

class luna_wrapper_osg_UserDataContainer {
public:
	typedef Luna< osg::UserDataContainer > luna_t;

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

		osg::UserDataContainer* self= (osg::UserDataContainer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::UserDataContainer >::push(L,self,false);
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
		//osg::UserDataContainer* ptr= dynamic_cast< osg::UserDataContainer* >(Luna< osg::Referenced >::check(L,1));
		osg::UserDataContainer* ptr= luna_caster< osg::Referenced, osg::UserDataContainer >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::UserDataContainer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
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

	inline static bool _lg_typecheck_getUserObject_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserObject_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_getUserObject_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserObject_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::UserDataContainer::UserDataContainer(lua_Table * data)
	static osg::UserDataContainer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::UserDataContainer::UserDataContainer(lua_Table * data) function, expected prototype:\nosg::UserDataContainer::UserDataContainer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_UserDataContainer(L,NULL);
	}

	// osg::UserDataContainer::UserDataContainer(lua_Table * data, const osg::UserDataContainer & udc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::UserDataContainer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::UserDataContainer::UserDataContainer(lua_Table * data, const osg::UserDataContainer & udc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::UserDataContainer::UserDataContainer(lua_Table * data, const osg::UserDataContainer & udc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::UserDataContainer* udc_ptr=(Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,2));
		if( !udc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg udc in osg::UserDataContainer::UserDataContainer function");
		}
		const osg::UserDataContainer & udc=*udc_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::UserDataContainer::UserDataContainer function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_UserDataContainer(L,NULL, udc, copyop);
	}

	// Overload binder for osg::UserDataContainer::UserDataContainer
	static osg::UserDataContainer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function UserDataContainer, cannot match any of the overloads for function UserDataContainer:\n  UserDataContainer(lua_Table *)\n  UserDataContainer(lua_Table *, const osg::UserDataContainer &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// bool osg::UserDataContainer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::UserDataContainer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::UserDataContainer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::UserDataContainer::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::UserDataContainer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::UserDataContainer::libraryName() const function, expected prototype:\nconst char * osg::UserDataContainer::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::UserDataContainer::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::UserDataContainer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::UserDataContainer::className() const function, expected prototype:\nconst char * osg::UserDataContainer::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::UserDataContainer::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::UserDataContainer::setUserData(osg::Referenced * obj)
	static int _bind_setUserData(lua_State *L) {
		if (!_lg_typecheck_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::UserDataContainer::setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::UserDataContainer::setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::UserDataContainer::setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::UserDataContainer::getUserData()
	static int _bind_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::UserDataContainer::getUserData() function, expected prototype:\nosg::Referenced * osg::UserDataContainer::getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::UserDataContainer::getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::UserDataContainer::getUserData() const
	static int _bind_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::UserDataContainer::getUserData() const function, expected prototype:\nconst osg::Referenced * osg::UserDataContainer::getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::UserDataContainer::getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::UserDataContainer::getUserData
	static int _bind_getUserData(lua_State *L) {
		if (_lg_typecheck_getUserData_overload_1(L)) return _bind_getUserData_overload_1(L);
		if (_lg_typecheck_getUserData_overload_2(L)) return _bind_getUserData_overload_2(L);

		luaL_error(L, "error in function getUserData, cannot match any of the overloads for function getUserData:\n  getUserData()\n  getUserData()\n");
		return 0;
	}

	// unsigned int osg::UserDataContainer::addUserObject(osg::Object * obj)
	static int _bind_addUserObject(lua_State *L) {
		if (!_lg_typecheck_addUserObject(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::UserDataContainer::addUserObject(osg::Object * obj) function, expected prototype:\nunsigned int osg::UserDataContainer::addUserObject(osg::Object * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::UserDataContainer::addUserObject(osg::Object *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->addUserObject(obj);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::UserDataContainer::setUserObject(unsigned int i, osg::Object * obj)
	static int _bind_setUserObject(lua_State *L) {
		if (!_lg_typecheck_setUserObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::UserDataContainer::setUserObject(unsigned int i, osg::Object * obj) function, expected prototype:\nvoid osg::UserDataContainer::setUserObject(unsigned int i, osg::Object * obj)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,3));

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::UserDataContainer::setUserObject(unsigned int, osg::Object *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUserObject(i, obj);

		return 0;
	}

	// void osg::UserDataContainer::removeUserObject(unsigned int i)
	static int _bind_removeUserObject(lua_State *L) {
		if (!_lg_typecheck_removeUserObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::UserDataContainer::removeUserObject(unsigned int i) function, expected prototype:\nvoid osg::UserDataContainer::removeUserObject(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::UserDataContainer::removeUserObject(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeUserObject(i);

		return 0;
	}

	// osg::Object * osg::UserDataContainer::getUserObject(unsigned int i)
	static int _bind_getUserObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUserObject_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::UserDataContainer::getUserObject(unsigned int i) function, expected prototype:\nosg::Object * osg::UserDataContainer::getUserObject(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::UserDataContainer::getUserObject(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->getUserObject(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// const osg::Object * osg::UserDataContainer::getUserObject(unsigned int i) const
	static int _bind_getUserObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUserObject_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Object * osg::UserDataContainer::getUserObject(unsigned int i) const function, expected prototype:\nconst osg::Object * osg::UserDataContainer::getUserObject(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Object * osg::UserDataContainer::getUserObject(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Object * lret = self->getUserObject(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::UserDataContainer::getUserObject(const std::string & name, unsigned int startPos = 0)
	static int _bind_getUserObject_overload_3(lua_State *L) {
		if (!_lg_typecheck_getUserObject_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::UserDataContainer::getUserObject(const std::string & name, unsigned int startPos = 0) function, expected prototype:\nosg::Object * osg::UserDataContainer::getUserObject(const std::string & name, unsigned int startPos = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int startPos=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::UserDataContainer::getUserObject(const std::string &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->getUserObject(name, startPos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// const osg::Object * osg::UserDataContainer::getUserObject(const std::string & name, unsigned int startPos = 0) const
	static int _bind_getUserObject_overload_4(lua_State *L) {
		if (!_lg_typecheck_getUserObject_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Object * osg::UserDataContainer::getUserObject(const std::string & name, unsigned int startPos = 0) const function, expected prototype:\nconst osg::Object * osg::UserDataContainer::getUserObject(const std::string & name, unsigned int startPos = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int startPos=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Object * osg::UserDataContainer::getUserObject(const std::string &, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Object * lret = self->getUserObject(name, startPos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::UserDataContainer::getUserObject
	static int _bind_getUserObject(lua_State *L) {
		if (_lg_typecheck_getUserObject_overload_1(L)) return _bind_getUserObject_overload_1(L);
		if (_lg_typecheck_getUserObject_overload_2(L)) return _bind_getUserObject_overload_2(L);
		if (_lg_typecheck_getUserObject_overload_3(L)) return _bind_getUserObject_overload_3(L);
		if (_lg_typecheck_getUserObject_overload_4(L)) return _bind_getUserObject_overload_4(L);

		luaL_error(L, "error in function getUserObject, cannot match any of the overloads for function getUserObject:\n  getUserObject(unsigned int)\n  getUserObject(unsigned int)\n  getUserObject(const std::string &, unsigned int)\n  getUserObject(const std::string &, unsigned int)\n");
		return 0;
	}

	// unsigned int osg::UserDataContainer::getNumUserObjects() const
	static int _bind_getNumUserObjects(lua_State *L) {
		if (!_lg_typecheck_getNumUserObjects(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::UserDataContainer::getNumUserObjects() const function, expected prototype:\nunsigned int osg::UserDataContainer::getNumUserObjects() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::UserDataContainer::getNumUserObjects() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumUserObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::UserDataContainer::getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const
	static int _bind_getUserObjectIndex_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUserObjectIndex_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::UserDataContainer::getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const function, expected prototype:\nunsigned int osg::UserDataContainer::getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		unsigned int startPos=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::UserDataContainer::getUserObjectIndex(const osg::Object *, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getUserObjectIndex(obj, startPos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::UserDataContainer::getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const
	static int _bind_getUserObjectIndex_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUserObjectIndex_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::UserDataContainer::getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const function, expected prototype:\nunsigned int osg::UserDataContainer::getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int startPos=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::UserDataContainer::getUserObjectIndex(const std::string &, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getUserObjectIndex(name, startPos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::UserDataContainer::getUserObjectIndex
	static int _bind_getUserObjectIndex(lua_State *L) {
		if (_lg_typecheck_getUserObjectIndex_overload_1(L)) return _bind_getUserObjectIndex_overload_1(L);
		if (_lg_typecheck_getUserObjectIndex_overload_2(L)) return _bind_getUserObjectIndex_overload_2(L);

		luaL_error(L, "error in function getUserObjectIndex, cannot match any of the overloads for function getUserObjectIndex:\n  getUserObjectIndex(const osg::Object *, unsigned int)\n  getUserObjectIndex(const std::string &, unsigned int)\n");
		return 0;
	}

	// void osg::UserDataContainer::setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions)
	static int _bind_setDescriptions(lua_State *L) {
		if (!_lg_typecheck_setDescriptions(L)) {
			luaL_error(L, "luna typecheck failed in void osg::UserDataContainer::setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions) function, expected prototype:\nvoid osg::UserDataContainer::setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions)\nClass arguments details:\narg 1 ID = 13881074\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::UserDataContainer::DescriptionList* descriptions_ptr=(Luna< std::vector< std::string > >::checkSubType< osg::UserDataContainer::DescriptionList >(L,2));
		if( !descriptions_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg descriptions in osg::UserDataContainer::setDescriptions function");
		}
		const osg::UserDataContainer::DescriptionList & descriptions=*descriptions_ptr;

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::UserDataContainer::setDescriptions(const osg::UserDataContainer::DescriptionList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDescriptions(descriptions);

		return 0;
	}

	// osg::UserDataContainer::DescriptionList & osg::UserDataContainer::getDescriptions()
	static int _bind_getDescriptions_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDescriptions_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::UserDataContainer::DescriptionList & osg::UserDataContainer::getDescriptions() function, expected prototype:\nosg::UserDataContainer::DescriptionList & osg::UserDataContainer::getDescriptions()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::UserDataContainer::DescriptionList & osg::UserDataContainer::getDescriptions(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::UserDataContainer::DescriptionList* lret = &self->getDescriptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::UserDataContainer::DescriptionList >::push(L,lret,false);

		return 1;
	}

	// const osg::UserDataContainer::DescriptionList & osg::UserDataContainer::getDescriptions() const
	static int _bind_getDescriptions_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDescriptions_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::UserDataContainer::DescriptionList & osg::UserDataContainer::getDescriptions() const function, expected prototype:\nconst osg::UserDataContainer::DescriptionList & osg::UserDataContainer::getDescriptions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::UserDataContainer::DescriptionList & osg::UserDataContainer::getDescriptions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::UserDataContainer::DescriptionList* lret = &self->getDescriptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::UserDataContainer::DescriptionList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::UserDataContainer::getDescriptions
	static int _bind_getDescriptions(lua_State *L) {
		if (_lg_typecheck_getDescriptions_overload_1(L)) return _bind_getDescriptions_overload_1(L);
		if (_lg_typecheck_getDescriptions_overload_2(L)) return _bind_getDescriptions_overload_2(L);

		luaL_error(L, "error in function getDescriptions, cannot match any of the overloads for function getDescriptions:\n  getDescriptions()\n  getDescriptions()\n");
		return 0;
	}

	// unsigned int osg::UserDataContainer::getNumDescriptions() const
	static int _bind_getNumDescriptions(lua_State *L) {
		if (!_lg_typecheck_getNumDescriptions(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::UserDataContainer::getNumDescriptions() const function, expected prototype:\nunsigned int osg::UserDataContainer::getNumDescriptions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::UserDataContainer::getNumDescriptions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumDescriptions();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::UserDataContainer::addDescription(const std::string & desc)
	static int _bind_addDescription(lua_State *L) {
		if (!_lg_typecheck_addDescription(L)) {
			luaL_error(L, "luna typecheck failed in void osg::UserDataContainer::addDescription(const std::string & desc) function, expected prototype:\nvoid osg::UserDataContainer::addDescription(const std::string & desc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string desc(lua_tostring(L,2),lua_objlen(L,2));

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::UserDataContainer::addDescription(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addDescription(desc);

		return 0;
	}

	// void osg::UserDataContainer::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::UserDataContainer::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::UserDataContainer::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::UserDataContainer::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UserDataContainer::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::UserDataContainer::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::UserDataContainer::base_setName(const std::string & name) function, expected prototype:\nvoid osg::UserDataContainer::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::UserDataContainer::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UserDataContainer::setName(name);

		return 0;
	}

	// void osg::UserDataContainer::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::UserDataContainer::base_computeDataVariance() function, expected prototype:\nvoid osg::UserDataContainer::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::UserDataContainer::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UserDataContainer::computeDataVariance();

		return 0;
	}

	// void osg::UserDataContainer::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::UserDataContainer::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::UserDataContainer::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::UserDataContainer::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UserDataContainer::releaseGLObjects(_arg1);

		return 0;
	}

	// bool osg::UserDataContainer::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::UserDataContainer::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::UserDataContainer::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::UserDataContainer::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->UserDataContainer::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::UserDataContainer::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::UserDataContainer::base_libraryName() const function, expected prototype:\nconst char * osg::UserDataContainer::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::UserDataContainer::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->UserDataContainer::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::UserDataContainer::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::UserDataContainer::base_className() const function, expected prototype:\nconst char * osg::UserDataContainer::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::UserDataContainer::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->UserDataContainer::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Object * osg::UserDataContainer::base_getUserObject(const std::string & name, unsigned int startPos = 0)
	static int _bind_base_getUserObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserObject_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::UserDataContainer::base_getUserObject(const std::string & name, unsigned int startPos = 0) function, expected prototype:\nosg::Object * osg::UserDataContainer::base_getUserObject(const std::string & name, unsigned int startPos = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int startPos=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::UserDataContainer::base_getUserObject(const std::string &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->UserDataContainer::getUserObject(name, startPos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// const osg::Object * osg::UserDataContainer::base_getUserObject(const std::string & name, unsigned int startPos = 0) const
	static int _bind_base_getUserObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserObject_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Object * osg::UserDataContainer::base_getUserObject(const std::string & name, unsigned int startPos = 0) const function, expected prototype:\nconst osg::Object * osg::UserDataContainer::base_getUserObject(const std::string & name, unsigned int startPos = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int startPos=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::UserDataContainer* self=Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Object * osg::UserDataContainer::base_getUserObject(const std::string &, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Object * lret = self->UserDataContainer::getUserObject(name, startPos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::UserDataContainer::base_getUserObject
	static int _bind_base_getUserObject(lua_State *L) {
		if (_lg_typecheck_base_getUserObject_overload_1(L)) return _bind_base_getUserObject_overload_1(L);
		if (_lg_typecheck_base_getUserObject_overload_2(L)) return _bind_base_getUserObject_overload_2(L);

		luaL_error(L, "error in function base_getUserObject, cannot match any of the overloads for function base_getUserObject:\n  base_getUserObject(const std::string &, unsigned int)\n  base_getUserObject(const std::string &, unsigned int)\n");
		return 0;
	}


	// Operator binds:

};

osg::UserDataContainer* LunaTraits< osg::UserDataContainer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_UserDataContainer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osg::UserDataContainer::setUserData(osg::Referenced * obj)
	// osg::Referenced * osg::UserDataContainer::getUserData()
	// const osg::Referenced * osg::UserDataContainer::getUserData() const
	// unsigned int osg::UserDataContainer::addUserObject(osg::Object * obj)
	// void osg::UserDataContainer::setUserObject(unsigned int i, osg::Object * obj)
	// void osg::UserDataContainer::removeUserObject(unsigned int i)
	// osg::Object * osg::UserDataContainer::getUserObject(unsigned int i)
	// const osg::Object * osg::UserDataContainer::getUserObject(unsigned int i) const
	// unsigned int osg::UserDataContainer::getNumUserObjects() const
	// unsigned int osg::UserDataContainer::getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const
	// unsigned int osg::UserDataContainer::getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const
	// void osg::UserDataContainer::setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions)
	// osg::UserDataContainer::DescriptionList & osg::UserDataContainer::getDescriptions()
	// const osg::UserDataContainer::DescriptionList & osg::UserDataContainer::getDescriptions() const
	// unsigned int osg::UserDataContainer::getNumDescriptions() const
	// void osg::UserDataContainer::addDescription(const std::string & desc)
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osg::UserDataContainer >::_bind_dtor(osg::UserDataContainer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::UserDataContainer >::className[] = "UserDataContainer";
const char LunaTraits< osg::UserDataContainer >::fullName[] = "osg::UserDataContainer";
const char LunaTraits< osg::UserDataContainer >::moduleName[] = "osg";
const char* LunaTraits< osg::UserDataContainer >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::UserDataContainer >::hash = 87260941;
const int LunaTraits< osg::UserDataContainer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::UserDataContainer >::methods[] = {
	{"isSameKindAs", &luna_wrapper_osg_UserDataContainer::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_UserDataContainer::_bind_libraryName},
	{"className", &luna_wrapper_osg_UserDataContainer::_bind_className},
	{"setUserData", &luna_wrapper_osg_UserDataContainer::_bind_setUserData},
	{"getUserData", &luna_wrapper_osg_UserDataContainer::_bind_getUserData},
	{"addUserObject", &luna_wrapper_osg_UserDataContainer::_bind_addUserObject},
	{"setUserObject", &luna_wrapper_osg_UserDataContainer::_bind_setUserObject},
	{"removeUserObject", &luna_wrapper_osg_UserDataContainer::_bind_removeUserObject},
	{"getUserObject", &luna_wrapper_osg_UserDataContainer::_bind_getUserObject},
	{"getNumUserObjects", &luna_wrapper_osg_UserDataContainer::_bind_getNumUserObjects},
	{"getUserObjectIndex", &luna_wrapper_osg_UserDataContainer::_bind_getUserObjectIndex},
	{"setDescriptions", &luna_wrapper_osg_UserDataContainer::_bind_setDescriptions},
	{"getDescriptions", &luna_wrapper_osg_UserDataContainer::_bind_getDescriptions},
	{"getNumDescriptions", &luna_wrapper_osg_UserDataContainer::_bind_getNumDescriptions},
	{"addDescription", &luna_wrapper_osg_UserDataContainer::_bind_addDescription},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_UserDataContainer::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_UserDataContainer::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_UserDataContainer::_bind_base_computeDataVariance},
	{"base_releaseGLObjects", &luna_wrapper_osg_UserDataContainer::_bind_base_releaseGLObjects},
	{"base_isSameKindAs", &luna_wrapper_osg_UserDataContainer::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_UserDataContainer::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_UserDataContainer::_bind_base_className},
	{"base_getUserObject", &luna_wrapper_osg_UserDataContainer::_bind_base_getUserObject},
	{"fromVoid", &luna_wrapper_osg_UserDataContainer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_UserDataContainer::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_UserDataContainer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::UserDataContainer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_UserDataContainer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::UserDataContainer >::enumValues[] = {
	{0,0}
};


