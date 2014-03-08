#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_BufferIndexBinding.h>

class luna_wrapper_osg_BufferIndexBinding {
public:
	typedef Luna< osg::BufferIndexBinding > luna_t;

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

		osg::BufferIndexBinding* self= (osg::BufferIndexBinding*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::BufferIndexBinding >::push(L,self,false);
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
		//osg::BufferIndexBinding* ptr= dynamic_cast< osg::BufferIndexBinding* >(Luna< osg::Referenced >::check(L,1));
		osg::BufferIndexBinding* ptr= luna_caster< osg::Referenced, osg::BufferIndexBinding >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BufferIndexBinding >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBufferObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
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

	inline static bool _lg_typecheck_base_asTexture_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTexture_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
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

	inline static bool _lg_typecheck_base_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	// Function binds:
	// unsigned int osg::BufferIndexBinding::getMember() const
	static int _bind_getMember(lua_State *L) {
		if (!_lg_typecheck_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferIndexBinding::getMember() const function, expected prototype:\nunsigned int osg::BufferIndexBinding::getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferIndexBinding::getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::BufferIndexBinding::getTarget() const
	static int _bind_getTarget(lua_State *L) {
		if (!_lg_typecheck_getTarget(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferIndexBinding::getTarget() const function, expected prototype:\nunsigned int osg::BufferIndexBinding::getTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferIndexBinding::getTarget() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::BufferIndexBinding::getIndex() const
	static int _bind_getIndex(lua_State *L) {
		if (!_lg_typecheck_getIndex(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferIndexBinding::getIndex() const function, expected prototype:\nunsigned int osg::BufferIndexBinding::getIndex() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferIndexBinding::getIndex() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BufferIndexBinding::setBufferObject(osg::BufferObject * bo)
	static int _bind_setBufferObject(lua_State *L) {
		if (!_lg_typecheck_setBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::setBufferObject(osg::BufferObject * bo) function, expected prototype:\nvoid osg::BufferIndexBinding::setBufferObject(osg::BufferObject * bo)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::BufferObject* bo=(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,2));

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::setBufferObject(osg::BufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBufferObject(bo);

		return 0;
	}

	// osg::BufferObject * osg::BufferIndexBinding::getBufferObject() const
	static int _bind_getBufferObject(lua_State *L) {
		if (!_lg_typecheck_getBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in osg::BufferObject * osg::BufferIndexBinding::getBufferObject() const function, expected prototype:\nosg::BufferObject * osg::BufferIndexBinding::getBufferObject() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BufferObject * osg::BufferIndexBinding::getBufferObject() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BufferObject * lret = self->getBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BufferObject >::push(L,lret,false);

		return 1;
	}

	// void osg::BufferIndexBinding::setOffset(int offset)
	static int _bind_setOffset(lua_State *L) {
		if (!_lg_typecheck_setOffset(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::setOffset(int offset) function, expected prototype:\nvoid osg::BufferIndexBinding::setOffset(int offset)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int offset=(int)lua_tointeger(L,2);

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::setOffset(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOffset(offset);

		return 0;
	}

	// int osg::BufferIndexBinding::getOffset() const
	static int _bind_getOffset(lua_State *L) {
		if (!_lg_typecheck_getOffset(L)) {
			luaL_error(L, "luna typecheck failed in int osg::BufferIndexBinding::getOffset() const function, expected prototype:\nint osg::BufferIndexBinding::getOffset() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::BufferIndexBinding::getOffset() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getOffset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BufferIndexBinding::setSize(int size)
	static int _bind_setSize(lua_State *L) {
		if (!_lg_typecheck_setSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::setSize(int size) function, expected prototype:\nvoid osg::BufferIndexBinding::setSize(int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int size=(int)lua_tointeger(L,2);

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::setSize(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSize(size);

		return 0;
	}

	// int osg::BufferIndexBinding::getSize() const
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luaL_error(L, "luna typecheck failed in int osg::BufferIndexBinding::getSize() const function, expected prototype:\nint osg::BufferIndexBinding::getSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::BufferIndexBinding::getSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BufferIndexBinding::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::BufferIndexBinding::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BufferIndexBinding::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::BufferIndexBinding::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::BufferIndexBinding::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BufferIndexBinding::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::BufferIndexBinding::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::base_setName(const std::string & name) function, expected prototype:\nvoid osg::BufferIndexBinding::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BufferIndexBinding::setName(name);

		return 0;
	}

	// void osg::BufferIndexBinding::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::base_computeDataVariance() function, expected prototype:\nvoid osg::BufferIndexBinding::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BufferIndexBinding::computeDataVariance();

		return 0;
	}

	// void osg::BufferIndexBinding::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::BufferIndexBinding::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BufferIndexBinding::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::BufferIndexBinding::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::BufferIndexBinding::base_getUserData() function, expected prototype:\nosg::Referenced * osg::BufferIndexBinding::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::BufferIndexBinding::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->BufferIndexBinding::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::BufferIndexBinding::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::BufferIndexBinding::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::BufferIndexBinding::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::BufferIndexBinding::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->BufferIndexBinding::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::BufferIndexBinding::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// bool osg::BufferIndexBinding::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BufferIndexBinding::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::BufferIndexBinding::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BufferIndexBinding::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BufferIndexBinding::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::BufferIndexBinding::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::BufferIndexBinding::base_libraryName() const function, expected prototype:\nconst char * osg::BufferIndexBinding::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::BufferIndexBinding::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->BufferIndexBinding::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::BufferIndexBinding::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::BufferIndexBinding::base_className() const function, expected prototype:\nconst char * osg::BufferIndexBinding::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::BufferIndexBinding::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->BufferIndexBinding::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Texture * osg::BufferIndexBinding::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::BufferIndexBinding::base_asTexture() function, expected prototype:\nosg::Texture * osg::BufferIndexBinding::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::BufferIndexBinding::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->BufferIndexBinding::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::BufferIndexBinding::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::BufferIndexBinding::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::BufferIndexBinding::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::BufferIndexBinding::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->BufferIndexBinding::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::BufferIndexBinding::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// bool osg::BufferIndexBinding::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BufferIndexBinding::base_isTextureAttribute() const function, expected prototype:\nbool osg::BufferIndexBinding::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BufferIndexBinding::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BufferIndexBinding::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::BufferIndexBinding::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BufferIndexBinding::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::BufferIndexBinding::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BufferIndexBinding::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BufferIndexBinding::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BufferIndexBinding::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::BufferIndexBinding::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BufferIndexBinding::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::BufferIndexBinding::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BufferIndexBinding::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BufferIndexBinding::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BufferIndexBinding::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BufferIndexBinding::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::BufferIndexBinding::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BufferIndexBinding::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BufferIndexBinding::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::BufferIndexBinding::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::BufferIndexBinding::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BufferIndexBinding::releaseGLObjects(_arg1);

		return 0;
	}

	// unsigned int osg::BufferIndexBinding::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferIndexBinding::base_getMember() const function, expected prototype:\nunsigned int osg::BufferIndexBinding::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferIndexBinding::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->BufferIndexBinding::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BufferIndexBinding::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BufferIndexBinding::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::BufferIndexBinding::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BufferIndexBinding::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BufferIndexBinding* self=Luna< osg::Referenced >::checkSubType< osg::BufferIndexBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BufferIndexBinding::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BufferIndexBinding::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::BufferIndexBinding* LunaTraits< osg::BufferIndexBinding >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// osg::Object * osg::StateAttribute::cloneType() const
	// osg::Object * osg::StateAttribute::clone(const osg::CopyOp & arg1) const
	// osg::StateAttribute::Type osg::StateAttribute::getType() const
	// int osg::StateAttribute::compare(const osg::StateAttribute & sa) const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osg::BufferIndexBinding >::_bind_dtor(osg::BufferIndexBinding* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BufferIndexBinding >::className[] = "BufferIndexBinding";
const char LunaTraits< osg::BufferIndexBinding >::fullName[] = "osg::BufferIndexBinding";
const char LunaTraits< osg::BufferIndexBinding >::moduleName[] = "osg";
const char* LunaTraits< osg::BufferIndexBinding >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::BufferIndexBinding >::hash = 73994525;
const int LunaTraits< osg::BufferIndexBinding >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::BufferIndexBinding >::methods[] = {
	{"getMember", &luna_wrapper_osg_BufferIndexBinding::_bind_getMember},
	{"getTarget", &luna_wrapper_osg_BufferIndexBinding::_bind_getTarget},
	{"getIndex", &luna_wrapper_osg_BufferIndexBinding::_bind_getIndex},
	{"setBufferObject", &luna_wrapper_osg_BufferIndexBinding::_bind_setBufferObject},
	{"getBufferObject", &luna_wrapper_osg_BufferIndexBinding::_bind_getBufferObject},
	{"setOffset", &luna_wrapper_osg_BufferIndexBinding::_bind_setOffset},
	{"getOffset", &luna_wrapper_osg_BufferIndexBinding::_bind_getOffset},
	{"setSize", &luna_wrapper_osg_BufferIndexBinding::_bind_setSize},
	{"getSize", &luna_wrapper_osg_BufferIndexBinding::_bind_getSize},
	{"apply", &luna_wrapper_osg_BufferIndexBinding::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_BufferIndexBinding::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_BufferIndexBinding::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_BufferIndexBinding::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_BufferIndexBinding::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_BufferIndexBinding::_bind_base_getUserData},
	{"base_isSameKindAs", &luna_wrapper_osg_BufferIndexBinding::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_BufferIndexBinding::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_BufferIndexBinding::_bind_base_className},
	{"base_asTexture", &luna_wrapper_osg_BufferIndexBinding::_bind_base_asTexture},
	{"base_isTextureAttribute", &luna_wrapper_osg_BufferIndexBinding::_bind_base_isTextureAttribute},
	{"base_getModeUsage", &luna_wrapper_osg_BufferIndexBinding::_bind_base_getModeUsage},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_BufferIndexBinding::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_BufferIndexBinding::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_BufferIndexBinding::_bind_base_releaseGLObjects},
	{"base_getMember", &luna_wrapper_osg_BufferIndexBinding::_bind_base_getMember},
	{"base_apply", &luna_wrapper_osg_BufferIndexBinding::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_BufferIndexBinding::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_BufferIndexBinding::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_BufferIndexBinding::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BufferIndexBinding >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BufferIndexBinding::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BufferIndexBinding >::enumValues[] = {
	{0,0}
};


