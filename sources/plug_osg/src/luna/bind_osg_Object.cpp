#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Object.h>

class luna_wrapper_osg_Object {
public:
	typedef Luna< osg::Object > luna_t;

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

		osg::Object* self= (osg::Object*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Object >::push(L,self,false);
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
		//osg::Object* ptr= dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,1));
		osg::Object* ptr= luna_caster< osg::Referenced, osg::Object >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Object >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setName_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setName_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDataVariance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUserDataContainer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserDataContainer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserDataContainer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrCreateUserDataContainer(lua_State *L) {
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

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Object::Object(lua_Table * data)
	static osg::Object* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object::Object(lua_Table * data) function, expected prototype:\nosg::Object::Object(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Object(L,NULL);
	}

	// osg::Object::Object(lua_Table * data, bool threadSafeRefUnref)
	static osg::Object* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object::Object(lua_Table * data, bool threadSafeRefUnref) function, expected prototype:\nosg::Object::Object(lua_Table * data, bool threadSafeRefUnref)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafeRefUnref=(bool)(lua_toboolean(L,2)==1);

		return new wrapper_osg_Object(L,NULL, threadSafeRefUnref);
	}

	// osg::Object::Object(lua_Table * data, const osg::Object & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Object* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object::Object(lua_Table * data, const osg::Object & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Object::Object(lua_Table * data, const osg::Object & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Object* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Object::Object function");
		}
		const osg::Object & _arg2=*_arg2_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Object::Object function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Object(L,NULL, _arg2, copyop);
	}

	// Overload binder for osg::Object::Object
	static osg::Object* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function Object, cannot match any of the overloads for function Object:\n  Object(lua_Table *)\n  Object(lua_Table *, bool)\n  Object(lua_Table *, const osg::Object &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Object::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Object::cloneType() const function, expected prototype:\nosg::Object * osg::Object::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Object::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Object::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Object::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Object::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Object::isSameKindAs(const osg::Object * arg1) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Object::isSameKindAs(const osg::Object * arg1) const function, expected prototype:\nbool osg::Object::isSameKindAs(const osg::Object * arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* _arg1=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Object::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Object::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Object::libraryName() const function, expected prototype:\nconst char * osg::Object::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Object::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Object::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Object::className() const function, expected prototype:\nconst char * osg::Object::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Object::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	static int _bind_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Object::setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Object::setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Object::setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Object::setName(const std::string & name)
	static int _bind_setName_overload_1(lua_State *L) {
		if (!_lg_typecheck_setName_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Object::setName(const std::string & name) function, expected prototype:\nvoid osg::Object::setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Object::setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setName(name);

		return 0;
	}

	// void osg::Object::setName(const char * name)
	static int _bind_setName_overload_2(lua_State *L) {
		if (!_lg_typecheck_setName_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Object::setName(const char * name) function, expected prototype:\nvoid osg::Object::setName(const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);

		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Object::setName(const char *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setName(name);

		return 0;
	}

	// Overload binder for osg::Object::setName
	static int _bind_setName(lua_State *L) {
		if (_lg_typecheck_setName_overload_1(L)) return _bind_setName_overload_1(L);
		if (_lg_typecheck_setName_overload_2(L)) return _bind_setName_overload_2(L);

		luaL_error(L, "error in function setName, cannot match any of the overloads for function setName:\n  setName(const std::string &)\n  setName(const char *)\n");
		return 0;
	}

	// const std::string & osg::Object::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osg::Object::getName() const function, expected prototype:\nconst std::string & osg::Object::getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osg::Object::getName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::Object::setDataVariance(osg::Object::DataVariance dv)
	static int _bind_setDataVariance(lua_State *L) {
		if (!_lg_typecheck_setDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Object::setDataVariance(osg::Object::DataVariance dv) function, expected prototype:\nvoid osg::Object::setDataVariance(osg::Object::DataVariance dv)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Object::DataVariance dv=(osg::Object::DataVariance)lua_tointeger(L,2);

		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Object::setDataVariance(osg::Object::DataVariance). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDataVariance(dv);

		return 0;
	}

	// osg::Object::DataVariance osg::Object::getDataVariance() const
	static int _bind_getDataVariance(lua_State *L) {
		if (!_lg_typecheck_getDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object::DataVariance osg::Object::getDataVariance() const function, expected prototype:\nosg::Object::DataVariance osg::Object::getDataVariance() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object::DataVariance osg::Object::getDataVariance() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object::DataVariance lret = self->getDataVariance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Object::computeDataVariance()
	static int _bind_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Object::computeDataVariance() function, expected prototype:\nvoid osg::Object::computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Object::computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->computeDataVariance();

		return 0;
	}

	// void osg::Object::setUserDataContainer(osg::UserDataContainer * udc)
	static int _bind_setUserDataContainer(lua_State *L) {
		if (!_lg_typecheck_setUserDataContainer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Object::setUserDataContainer(osg::UserDataContainer * udc) function, expected prototype:\nvoid osg::Object::setUserDataContainer(osg::UserDataContainer * udc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::UserDataContainer* udc=(Luna< osg::Referenced >::checkSubType< osg::UserDataContainer >(L,2));

		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Object::setUserDataContainer(osg::UserDataContainer *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUserDataContainer(udc);

		return 0;
	}

	// osg::UserDataContainer * osg::Object::getUserDataContainer()
	static int _bind_getUserDataContainer_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUserDataContainer_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::UserDataContainer * osg::Object::getUserDataContainer() function, expected prototype:\nosg::UserDataContainer * osg::Object::getUserDataContainer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::UserDataContainer * osg::Object::getUserDataContainer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::UserDataContainer * lret = self->getUserDataContainer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::UserDataContainer >::push(L,lret,false);

		return 1;
	}

	// const osg::UserDataContainer * osg::Object::getUserDataContainer() const
	static int _bind_getUserDataContainer_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUserDataContainer_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::UserDataContainer * osg::Object::getUserDataContainer() const function, expected prototype:\nconst osg::UserDataContainer * osg::Object::getUserDataContainer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::UserDataContainer * osg::Object::getUserDataContainer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::UserDataContainer * lret = self->getUserDataContainer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::UserDataContainer >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Object::getUserDataContainer
	static int _bind_getUserDataContainer(lua_State *L) {
		if (_lg_typecheck_getUserDataContainer_overload_1(L)) return _bind_getUserDataContainer_overload_1(L);
		if (_lg_typecheck_getUserDataContainer_overload_2(L)) return _bind_getUserDataContainer_overload_2(L);

		luaL_error(L, "error in function getUserDataContainer, cannot match any of the overloads for function getUserDataContainer:\n  getUserDataContainer()\n  getUserDataContainer()\n");
		return 0;
	}

	// osg::UserDataContainer * osg::Object::getOrCreateUserDataContainer()
	static int _bind_getOrCreateUserDataContainer(lua_State *L) {
		if (!_lg_typecheck_getOrCreateUserDataContainer(L)) {
			luaL_error(L, "luna typecheck failed in osg::UserDataContainer * osg::Object::getOrCreateUserDataContainer() function, expected prototype:\nosg::UserDataContainer * osg::Object::getOrCreateUserDataContainer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::UserDataContainer * osg::Object::getOrCreateUserDataContainer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::UserDataContainer * lret = self->getOrCreateUserDataContainer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::UserDataContainer >::push(L,lret,false);

		return 1;
	}

	// void osg::Object::setUserData(osg::Referenced * obj)
	static int _bind_setUserData(lua_State *L) {
		if (!_lg_typecheck_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Object::setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Object::setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Object::setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Object::getUserData()
	static int _bind_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Object::getUserData() function, expected prototype:\nosg::Referenced * osg::Object::getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Object::getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Object::getUserData() const
	static int _bind_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Object::getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Object::getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Object::getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Object::getUserData
	static int _bind_getUserData(lua_State *L) {
		if (_lg_typecheck_getUserData_overload_1(L)) return _bind_getUserData_overload_1(L);
		if (_lg_typecheck_getUserData_overload_2(L)) return _bind_getUserData_overload_2(L);

		luaL_error(L, "error in function getUserData, cannot match any of the overloads for function getUserData:\n  getUserData()\n  getUserData()\n");
		return 0;
	}

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Object::releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Object::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(_arg1);

		return 0;
	}

	// bool osg::Object::base_isSameKindAs(const osg::Object * arg1) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Object::base_isSameKindAs(const osg::Object * arg1) const function, expected prototype:\nbool osg::Object::base_isSameKindAs(const osg::Object * arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* _arg1=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Object::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Object::isSameKindAs(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Object::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Object::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Object::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Object::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Object::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Object::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Object::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Object::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Object::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Object::setName(name);

		return 0;
	}

	// void osg::Object::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Object::base_computeDataVariance() function, expected prototype:\nvoid osg::Object::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Object::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Object::computeDataVariance();

		return 0;
	}

	// void osg::Object::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Object::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Object::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Object::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Object::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Object::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Object::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Object::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Object::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Object::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Object::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Object::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Object::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Object::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Object::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Object::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::Object::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Object::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Object::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Object* self=Luna< osg::Referenced >::checkSubType< osg::Object >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Object::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Object::releaseGLObjects(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::Object* LunaTraits< osg::Object >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Object::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
	// const char * osg::Object::libraryName() const
	// const char * osg::Object::className() const
}

void LunaTraits< osg::Object >::_bind_dtor(osg::Object* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Object >::className[] = "Object";
const char LunaTraits< osg::Object >::fullName[] = "osg::Object";
const char LunaTraits< osg::Object >::moduleName[] = "osg";
const char* LunaTraits< osg::Object >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Object >::hash = 58481028;
const int LunaTraits< osg::Object >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Object >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Object::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Object::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Object::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Object::_bind_libraryName},
	{"className", &luna_wrapper_osg_Object::_bind_className},
	{"setThreadSafeRefUnref", &luna_wrapper_osg_Object::_bind_setThreadSafeRefUnref},
	{"setName", &luna_wrapper_osg_Object::_bind_setName},
	{"getName", &luna_wrapper_osg_Object::_bind_getName},
	{"setDataVariance", &luna_wrapper_osg_Object::_bind_setDataVariance},
	{"getDataVariance", &luna_wrapper_osg_Object::_bind_getDataVariance},
	{"computeDataVariance", &luna_wrapper_osg_Object::_bind_computeDataVariance},
	{"setUserDataContainer", &luna_wrapper_osg_Object::_bind_setUserDataContainer},
	{"getUserDataContainer", &luna_wrapper_osg_Object::_bind_getUserDataContainer},
	{"getOrCreateUserDataContainer", &luna_wrapper_osg_Object::_bind_getOrCreateUserDataContainer},
	{"setUserData", &luna_wrapper_osg_Object::_bind_setUserData},
	{"getUserData", &luna_wrapper_osg_Object::_bind_getUserData},
	{"releaseGLObjects", &luna_wrapper_osg_Object::_bind_releaseGLObjects},
	{"base_isSameKindAs", &luna_wrapper_osg_Object::_bind_base_isSameKindAs},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Object::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_Object::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Object::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Object::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Object::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_Object::_bind_base_releaseGLObjects},
	{"fromVoid", &luna_wrapper_osg_Object::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Object::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Object::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Object >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Object::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Object >::enumValues[] = {
	{"DYNAMIC", osg::Object::DYNAMIC},
	{"STATIC", osg::Object::STATIC},
	{"UNSPECIFIED", osg::Object::UNSPECIFIED},
	{0,0}
};


