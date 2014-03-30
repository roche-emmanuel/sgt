#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_FrameBufferObject.h>

class luna_wrapper_osg_FrameBufferObject {
public:
	typedef Luna< osg::FrameBufferObject > luna_t;

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

		osg::FrameBufferObject* self= (osg::FrameBufferObject*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::FrameBufferObject >::push(L,self,false);
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
		//osg::FrameBufferObject* ptr= dynamic_cast< osg::FrameBufferObject* >(Luna< osg::Referenced >::check(L,1));
		osg::FrameBufferObject* ptr= luna_caster< osg::Referenced, osg::FrameBufferObject >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::FrameBufferObject >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getAttachmentMap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAttachment(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,90669884) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAttachment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasAttachment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasMultipleRenderingTargets(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMultipleRenderingTargets(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isMultisample(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::State >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::State >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_deleteFrameBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flushDeletedFrameBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_discardDeletedFrameBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
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

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::FrameBufferObject::FrameBufferObject()
	static osg::FrameBufferObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameBufferObject::FrameBufferObject() function, expected prototype:\nosg::FrameBufferObject::FrameBufferObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::FrameBufferObject();
	}

	// osg::FrameBufferObject::FrameBufferObject(const osg::FrameBufferObject & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::FrameBufferObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameBufferObject::FrameBufferObject(const osg::FrameBufferObject & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::FrameBufferObject::FrameBufferObject(const osg::FrameBufferObject & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::FrameBufferObject* copy_ptr=(Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osg::FrameBufferObject::FrameBufferObject function");
		}
		const osg::FrameBufferObject & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::FrameBufferObject::FrameBufferObject function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::FrameBufferObject(copy, copyop);
	}

	// osg::FrameBufferObject::FrameBufferObject(lua_Table * data)
	static osg::FrameBufferObject* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameBufferObject::FrameBufferObject(lua_Table * data) function, expected prototype:\nosg::FrameBufferObject::FrameBufferObject(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_FrameBufferObject(L,NULL);
	}

	// osg::FrameBufferObject::FrameBufferObject(lua_Table * data, const osg::FrameBufferObject & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::FrameBufferObject* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameBufferObject::FrameBufferObject(lua_Table * data, const osg::FrameBufferObject & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::FrameBufferObject::FrameBufferObject(lua_Table * data, const osg::FrameBufferObject & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::FrameBufferObject* copy_ptr=(Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osg::FrameBufferObject::FrameBufferObject function");
		}
		const osg::FrameBufferObject & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::FrameBufferObject::FrameBufferObject function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_FrameBufferObject(L,NULL, copy, copyop);
	}

	// Overload binder for osg::FrameBufferObject::FrameBufferObject
	static osg::FrameBufferObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function FrameBufferObject, cannot match any of the overloads for function FrameBufferObject:\n  FrameBufferObject()\n  FrameBufferObject(const osg::FrameBufferObject &, const osg::CopyOp &)\n  FrameBufferObject(lua_Table *)\n  FrameBufferObject(lua_Table *, const osg::FrameBufferObject &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::FrameBufferObject::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::FrameBufferObject::cloneType() const function, expected prototype:\nosg::Object * osg::FrameBufferObject::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::FrameBufferObject::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::FrameBufferObject::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::FrameBufferObject::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::FrameBufferObject::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FrameBufferObject::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::FrameBufferObject::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::FrameBufferObject::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FrameBufferObject::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::FrameBufferObject::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FrameBufferObject::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::FrameBufferObject::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::FrameBufferObject::libraryName() const function, expected prototype:\nconst char * osg::FrameBufferObject::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::FrameBufferObject::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::FrameBufferObject::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::FrameBufferObject::className() const function, expected prototype:\nconst char * osg::FrameBufferObject::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::FrameBufferObject::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::FrameBufferObject::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::FrameBufferObject::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::FrameBufferObject::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::FrameBufferObject::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osg::FrameBufferObject::AttachmentMap & osg::FrameBufferObject::getAttachmentMap() const
	static int _bind_getAttachmentMap(lua_State *L) {
		if (!_lg_typecheck_getAttachmentMap(L)) {
			luaL_error(L, "luna typecheck failed in const osg::FrameBufferObject::AttachmentMap & osg::FrameBufferObject::getAttachmentMap() const function, expected prototype:\nconst osg::FrameBufferObject::AttachmentMap & osg::FrameBufferObject::getAttachmentMap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::FrameBufferObject::AttachmentMap & osg::FrameBufferObject::getAttachmentMap() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::FrameBufferObject::AttachmentMap* lret = &self->getAttachmentMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameBufferObject::AttachmentMap >::push(L,lret,false);

		return 1;
	}

	// void osg::FrameBufferObject::setAttachment(osg::Camera::BufferComponent attachment_point, const osg::FrameBufferAttachment & attachment)
	static int _bind_setAttachment(lua_State *L) {
		if (!_lg_typecheck_setAttachment(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferObject::setAttachment(osg::Camera::BufferComponent attachment_point, const osg::FrameBufferAttachment & attachment) function, expected prototype:\nvoid osg::FrameBufferObject::setAttachment(osg::Camera::BufferComponent attachment_point, const osg::FrameBufferAttachment & attachment)\nClass arguments details:\narg 2 ID = 90669884\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera::BufferComponent attachment_point=(osg::Camera::BufferComponent)lua_tointeger(L,2);
		const osg::FrameBufferAttachment* attachment_ptr=(Luna< osg::FrameBufferAttachment >::check(L,3));
		if( !attachment_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attachment in osg::FrameBufferObject::setAttachment function");
		}
		const osg::FrameBufferAttachment & attachment=*attachment_ptr;

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrameBufferObject::setAttachment(osg::Camera::BufferComponent, const osg::FrameBufferAttachment &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAttachment(attachment_point, attachment);

		return 0;
	}

	// const osg::FrameBufferAttachment & osg::FrameBufferObject::getAttachment(osg::Camera::BufferComponent attachment_point) const
	static int _bind_getAttachment(lua_State *L) {
		if (!_lg_typecheck_getAttachment(L)) {
			luaL_error(L, "luna typecheck failed in const osg::FrameBufferAttachment & osg::FrameBufferObject::getAttachment(osg::Camera::BufferComponent attachment_point) const function, expected prototype:\nconst osg::FrameBufferAttachment & osg::FrameBufferObject::getAttachment(osg::Camera::BufferComponent attachment_point) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera::BufferComponent attachment_point=(osg::Camera::BufferComponent)lua_tointeger(L,2);

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::FrameBufferAttachment & osg::FrameBufferObject::getAttachment(osg::Camera::BufferComponent) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::FrameBufferAttachment* lret = &self->getAttachment(attachment_point);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameBufferAttachment >::push(L,lret,false);

		return 1;
	}

	// bool osg::FrameBufferObject::hasAttachment(osg::Camera::BufferComponent attachment_point) const
	static int _bind_hasAttachment(lua_State *L) {
		if (!_lg_typecheck_hasAttachment(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FrameBufferObject::hasAttachment(osg::Camera::BufferComponent attachment_point) const function, expected prototype:\nbool osg::FrameBufferObject::hasAttachment(osg::Camera::BufferComponent attachment_point) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera::BufferComponent attachment_point=(osg::Camera::BufferComponent)lua_tointeger(L,2);

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FrameBufferObject::hasAttachment(osg::Camera::BufferComponent) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasAttachment(attachment_point);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::FrameBufferObject::hasMultipleRenderingTargets() const
	static int _bind_hasMultipleRenderingTargets(lua_State *L) {
		if (!_lg_typecheck_hasMultipleRenderingTargets(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FrameBufferObject::hasMultipleRenderingTargets() const function, expected prototype:\nbool osg::FrameBufferObject::hasMultipleRenderingTargets() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FrameBufferObject::hasMultipleRenderingTargets() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasMultipleRenderingTargets();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const osg::FrameBufferObject::MultipleRenderingTargets & osg::FrameBufferObject::getMultipleRenderingTargets() const
	static int _bind_getMultipleRenderingTargets(lua_State *L) {
		if (!_lg_typecheck_getMultipleRenderingTargets(L)) {
			luaL_error(L, "luna typecheck failed in const osg::FrameBufferObject::MultipleRenderingTargets & osg::FrameBufferObject::getMultipleRenderingTargets() const function, expected prototype:\nconst osg::FrameBufferObject::MultipleRenderingTargets & osg::FrameBufferObject::getMultipleRenderingTargets() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::FrameBufferObject::MultipleRenderingTargets & osg::FrameBufferObject::getMultipleRenderingTargets() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::FrameBufferObject::MultipleRenderingTargets* lret = &self->getMultipleRenderingTargets();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameBufferObject::MultipleRenderingTargets >::push(L,lret,false);

		return 1;
	}

	// bool osg::FrameBufferObject::isMultisample() const
	static int _bind_isMultisample(lua_State *L) {
		if (!_lg_typecheck_isMultisample(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FrameBufferObject::isMultisample() const function, expected prototype:\nbool osg::FrameBufferObject::isMultisample() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FrameBufferObject::isMultisample() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isMultisample();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osg::FrameBufferObject::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::FrameBufferObject::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::FrameBufferObject::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::FrameBufferObject::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::FrameBufferObject::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::FrameBufferObject::apply(osg::State & arg1) const
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferObject::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::FrameBufferObject::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FrameBufferObject::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrameBufferObject::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::FrameBufferObject::apply(osg::State & state, osg::FrameBufferObject::BindTarget target) const
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferObject::apply(osg::State & state, osg::FrameBufferObject::BindTarget target) const function, expected prototype:\nvoid osg::FrameBufferObject::apply(osg::State & state, osg::FrameBufferObject::BindTarget target) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::FrameBufferObject::apply function");
		}
		osg::State & state=*state_ptr;
		osg::FrameBufferObject::BindTarget target=(osg::FrameBufferObject::BindTarget)lua_tointeger(L,3);

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrameBufferObject::apply(osg::State &, osg::FrameBufferObject::BindTarget) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(state, target);

		return 0;
	}

	// Overload binder for osg::FrameBufferObject::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::State &)\n  apply(osg::State &, osg::FrameBufferObject::BindTarget)\n");
		return 0;
	}

	// void osg::FrameBufferObject::releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferObject::releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::FrameBufferObject::releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrameBufferObject::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(_arg1);

		return 0;
	}

	// static void osg::FrameBufferObject::deleteFrameBufferObject(unsigned int contextID, unsigned int program)
	static int _bind_deleteFrameBufferObject(lua_State *L) {
		if (!_lg_typecheck_deleteFrameBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::FrameBufferObject::deleteFrameBufferObject(unsigned int contextID, unsigned int program) function, expected prototype:\nstatic void osg::FrameBufferObject::deleteFrameBufferObject(unsigned int contextID, unsigned int program)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		unsigned int program=(unsigned int)lua_tointeger(L,2);

		osg::FrameBufferObject::deleteFrameBufferObject(contextID, program);

		return 0;
	}

	// static void osg::FrameBufferObject::flushDeletedFrameBufferObjects(unsigned int contextID, double currentTime, double & availableTime)
	static int _bind_flushDeletedFrameBufferObjects(lua_State *L) {
		if (!_lg_typecheck_flushDeletedFrameBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::FrameBufferObject::flushDeletedFrameBufferObjects(unsigned int contextID, double currentTime, double & availableTime) function, expected prototype:\nstatic void osg::FrameBufferObject::flushDeletedFrameBufferObjects(unsigned int contextID, double currentTime, double & availableTime)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		double currentTime=(double)lua_tonumber(L,2);
		double availableTime=(double)lua_tonumber(L,3);

		osg::FrameBufferObject::flushDeletedFrameBufferObjects(contextID, currentTime, availableTime);

		lua_pushnumber(L,availableTime);
		return 1;
	}

	// static void osg::FrameBufferObject::discardDeletedFrameBufferObjects(unsigned int contextID)
	static int _bind_discardDeletedFrameBufferObjects(lua_State *L) {
		if (!_lg_typecheck_discardDeletedFrameBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::FrameBufferObject::discardDeletedFrameBufferObjects(unsigned int contextID) function, expected prototype:\nstatic void osg::FrameBufferObject::discardDeletedFrameBufferObjects(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::FrameBufferObject::discardDeletedFrameBufferObjects(contextID);

		return 0;
	}

	// void osg::FrameBufferObject::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferObject::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::FrameBufferObject::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrameBufferObject::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FrameBufferObject::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::FrameBufferObject::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferObject::base_setName(const std::string & name) function, expected prototype:\nvoid osg::FrameBufferObject::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrameBufferObject::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FrameBufferObject::setName(name);

		return 0;
	}

	// void osg::FrameBufferObject::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferObject::base_computeDataVariance() function, expected prototype:\nvoid osg::FrameBufferObject::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrameBufferObject::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FrameBufferObject::computeDataVariance();

		return 0;
	}

	// void osg::FrameBufferObject::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferObject::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::FrameBufferObject::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrameBufferObject::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FrameBufferObject::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::FrameBufferObject::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::FrameBufferObject::base_getUserData() function, expected prototype:\nosg::Referenced * osg::FrameBufferObject::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::FrameBufferObject::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->FrameBufferObject::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::FrameBufferObject::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::FrameBufferObject::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::FrameBufferObject::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::FrameBufferObject::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->FrameBufferObject::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::FrameBufferObject::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::FrameBufferObject::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::FrameBufferObject::base_asTexture() function, expected prototype:\nosg::Texture * osg::FrameBufferObject::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::FrameBufferObject::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->FrameBufferObject::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::FrameBufferObject::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::FrameBufferObject::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::FrameBufferObject::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::FrameBufferObject::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->FrameBufferObject::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::FrameBufferObject::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::FrameBufferObject::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::FrameBufferObject::base_getMember() const function, expected prototype:\nunsigned int osg::FrameBufferObject::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::FrameBufferObject::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->FrameBufferObject::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::FrameBufferObject::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FrameBufferObject::base_isTextureAttribute() const function, expected prototype:\nbool osg::FrameBufferObject::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FrameBufferObject::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FrameBufferObject::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::FrameBufferObject::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FrameBufferObject::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::FrameBufferObject::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FrameBufferObject::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FrameBufferObject::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FrameBufferObject::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::FrameBufferObject::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FrameBufferObject::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::FrameBufferObject::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FrameBufferObject::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FrameBufferObject::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FrameBufferObject::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::FrameBufferObject::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferObject::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::FrameBufferObject::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FrameBufferObject::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrameBufferObject::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FrameBufferObject::compileGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::FrameBufferObject::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::FrameBufferObject::base_cloneType() const function, expected prototype:\nosg::Object * osg::FrameBufferObject::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::FrameBufferObject::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->FrameBufferObject::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::FrameBufferObject::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::FrameBufferObject::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::FrameBufferObject::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FrameBufferObject::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::FrameBufferObject::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->FrameBufferObject::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::FrameBufferObject::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FrameBufferObject::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::FrameBufferObject::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FrameBufferObject::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FrameBufferObject::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::FrameBufferObject::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::FrameBufferObject::base_libraryName() const function, expected prototype:\nconst char * osg::FrameBufferObject::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::FrameBufferObject::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->FrameBufferObject::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::FrameBufferObject::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::FrameBufferObject::base_className() const function, expected prototype:\nconst char * osg::FrameBufferObject::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::FrameBufferObject::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->FrameBufferObject::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::FrameBufferObject::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::FrameBufferObject::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::FrameBufferObject::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::FrameBufferObject::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->FrameBufferObject::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::FrameBufferObject::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::FrameBufferObject::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::FrameBufferObject::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::FrameBufferObject::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::FrameBufferObject::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->FrameBufferObject::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::FrameBufferObject::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferObject::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::FrameBufferObject::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FrameBufferObject::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrameBufferObject::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FrameBufferObject::apply(_arg1);

		return 0;
	}

	// void osg::FrameBufferObject::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferObject::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::FrameBufferObject::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::FrameBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrameBufferObject::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FrameBufferObject::releaseGLObjects(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::FrameBufferObject* LunaTraits< osg::FrameBufferObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_FrameBufferObject::_bind_ctor(L);
}

void LunaTraits< osg::FrameBufferObject >::_bind_dtor(osg::FrameBufferObject* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::FrameBufferObject >::className[] = "FrameBufferObject";
const char LunaTraits< osg::FrameBufferObject >::fullName[] = "osg::FrameBufferObject";
const char LunaTraits< osg::FrameBufferObject >::moduleName[] = "osg";
const char* LunaTraits< osg::FrameBufferObject >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::FrameBufferObject >::hash = 73385588;
const int LunaTraits< osg::FrameBufferObject >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::FrameBufferObject >::methods[] = {
	{"cloneType", &luna_wrapper_osg_FrameBufferObject::_bind_cloneType},
	{"clone", &luna_wrapper_osg_FrameBufferObject::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_FrameBufferObject::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_FrameBufferObject::_bind_libraryName},
	{"className", &luna_wrapper_osg_FrameBufferObject::_bind_className},
	{"getType", &luna_wrapper_osg_FrameBufferObject::_bind_getType},
	{"getAttachmentMap", &luna_wrapper_osg_FrameBufferObject::_bind_getAttachmentMap},
	{"setAttachment", &luna_wrapper_osg_FrameBufferObject::_bind_setAttachment},
	{"getAttachment", &luna_wrapper_osg_FrameBufferObject::_bind_getAttachment},
	{"hasAttachment", &luna_wrapper_osg_FrameBufferObject::_bind_hasAttachment},
	{"hasMultipleRenderingTargets", &luna_wrapper_osg_FrameBufferObject::_bind_hasMultipleRenderingTargets},
	{"getMultipleRenderingTargets", &luna_wrapper_osg_FrameBufferObject::_bind_getMultipleRenderingTargets},
	{"isMultisample", &luna_wrapper_osg_FrameBufferObject::_bind_isMultisample},
	{"compare", &luna_wrapper_osg_FrameBufferObject::_bind_compare},
	{"apply", &luna_wrapper_osg_FrameBufferObject::_bind_apply},
	{"releaseGLObjects", &luna_wrapper_osg_FrameBufferObject::_bind_releaseGLObjects},
	{"deleteFrameBufferObject", &luna_wrapper_osg_FrameBufferObject::_bind_deleteFrameBufferObject},
	{"flushDeletedFrameBufferObjects", &luna_wrapper_osg_FrameBufferObject::_bind_flushDeletedFrameBufferObjects},
	{"discardDeletedFrameBufferObjects", &luna_wrapper_osg_FrameBufferObject::_bind_discardDeletedFrameBufferObjects},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_FrameBufferObject::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_FrameBufferObject::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_FrameBufferObject::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_FrameBufferObject::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_FrameBufferObject::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_FrameBufferObject::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_FrameBufferObject::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_FrameBufferObject::_bind_base_isTextureAttribute},
	{"base_getModeUsage", &luna_wrapper_osg_FrameBufferObject::_bind_base_getModeUsage},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_FrameBufferObject::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_FrameBufferObject::_bind_base_compileGLObjects},
	{"base_cloneType", &luna_wrapper_osg_FrameBufferObject::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_FrameBufferObject::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_FrameBufferObject::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_FrameBufferObject::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_FrameBufferObject::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_FrameBufferObject::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_FrameBufferObject::_bind_base_compare},
	{"base_apply", &luna_wrapper_osg_FrameBufferObject::_bind_base_apply},
	{"base_releaseGLObjects", &luna_wrapper_osg_FrameBufferObject::_bind_base_releaseGLObjects},
	{"fromVoid", &luna_wrapper_osg_FrameBufferObject::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_FrameBufferObject::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_FrameBufferObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FrameBufferObject >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_FrameBufferObject::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FrameBufferObject >::enumValues[] = {
	{"READ_FRAMEBUFFER", osg::FrameBufferObject::READ_FRAMEBUFFER},
	{"DRAW_FRAMEBUFFER", osg::FrameBufferObject::DRAW_FRAMEBUFFER},
	{"READ_DRAW_FRAMEBUFFER", osg::FrameBufferObject::READ_DRAW_FRAMEBUFFER},
	{0,0}
};


