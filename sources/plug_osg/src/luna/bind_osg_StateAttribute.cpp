#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_StateAttribute.h>

class luna_wrapper_osg_StateAttribute {
public:
	typedef Luna< osg::StateAttribute > luna_t;

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

		osg::StateAttribute* self= (osg::StateAttribute*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::StateAttribute >::push(L,self,false);
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
		//osg::StateAttribute* ptr= dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,1));
		osg::StateAttribute* ptr= luna_caster< osg::Referenced, osg::StateAttribute >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::StateAttribute >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_asTexture_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asTexture_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTypeMemberPair(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParent_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumParents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShaderComponent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShaderComponent_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShaderComponent_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_checkValidityOfAssociatedModes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUpdateCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUpdateCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpdateCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEventCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEventCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEventCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
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


	// Operator checkers:
	// (found 3 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::StateAttribute::StateAttribute(lua_Table * data)
	static osg::StateAttribute* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::StateAttribute(lua_Table * data) function, expected prototype:\nosg::StateAttribute::StateAttribute(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_StateAttribute(L,NULL);
	}

	// osg::StateAttribute::StateAttribute(lua_Table * data, const osg::StateAttribute & sa, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::StateAttribute* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::StateAttribute(lua_Table * data, const osg::StateAttribute & sa, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::StateAttribute::StateAttribute(lua_Table * data, const osg::StateAttribute & sa, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::StateAttribute::StateAttribute function");
		}
		const osg::StateAttribute & sa=*sa_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::StateAttribute::StateAttribute function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_StateAttribute(L,NULL, sa, copyop);
	}

	// Overload binder for osg::StateAttribute::StateAttribute
	static osg::StateAttribute* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function StateAttribute, cannot match any of the overloads for function StateAttribute:\n  StateAttribute(lua_Table *)\n  StateAttribute(lua_Table *, const osg::StateAttribute &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::StateAttribute::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StateAttribute::cloneType() const function, expected prototype:\nosg::Object * osg::StateAttribute::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::StateAttribute::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::StateAttribute::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StateAttribute::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::StateAttribute::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StateAttribute::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::StateAttribute::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::StateAttribute::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateAttribute::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::StateAttribute::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateAttribute::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::StateAttribute::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::StateAttribute::libraryName() const function, expected prototype:\nconst char * osg::StateAttribute::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::StateAttribute::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::StateAttribute::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::StateAttribute::className() const function, expected prototype:\nconst char * osg::StateAttribute::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::StateAttribute::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Texture * osg::StateAttribute::asTexture()
	static int _bind_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::StateAttribute::asTexture() function, expected prototype:\nosg::Texture * osg::StateAttribute::asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::StateAttribute::asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::StateAttribute::asTexture() const
	static int _bind_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::StateAttribute::asTexture() const function, expected prototype:\nconst osg::Texture * osg::StateAttribute::asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::StateAttribute::asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateAttribute::asTexture
	static int _bind_asTexture(lua_State *L) {
		if (_lg_typecheck_asTexture_overload_1(L)) return _bind_asTexture_overload_1(L);
		if (_lg_typecheck_asTexture_overload_2(L)) return _bind_asTexture_overload_2(L);

		luaL_error(L, "error in function asTexture, cannot match any of the overloads for function asTexture:\n  asTexture()\n  asTexture()\n");
		return 0;
	}

	// osg::StateAttribute::Type osg::StateAttribute::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::StateAttribute::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::StateAttribute::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::StateAttribute::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::StateAttribute::getMember() const
	static int _bind_getMember(lua_State *L) {
		if (!_lg_typecheck_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::StateAttribute::getMember() const function, expected prototype:\nunsigned int osg::StateAttribute::getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::StateAttribute::getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::StateAttribute::TypeMemberPair osg::StateAttribute::getTypeMemberPair() const
	static int _bind_getTypeMemberPair(lua_State *L) {
		if (!_lg_typecheck_getTypeMemberPair(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::TypeMemberPair osg::StateAttribute::getTypeMemberPair() const function, expected prototype:\nosg::StateAttribute::TypeMemberPair osg::StateAttribute::getTypeMemberPair() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::TypeMemberPair osg::StateAttribute::getTypeMemberPair() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::TypeMemberPair stack_lret = self->getTypeMemberPair();
		osg::StateAttribute::TypeMemberPair* lret = new osg::StateAttribute::TypeMemberPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttribute::TypeMemberPair >::push(L,lret,true);

		return 1;
	}

	// bool osg::StateAttribute::isTextureAttribute() const
	static int _bind_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateAttribute::isTextureAttribute() const function, expected prototype:\nbool osg::StateAttribute::isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateAttribute::isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osg::StateAttribute::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::StateAttribute::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::StateAttribute::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::StateAttribute::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::StateAttribute::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osg::StateAttribute::ParentList & osg::StateAttribute::getParents() const
	static int _bind_getParents(lua_State *L) {
		if (!_lg_typecheck_getParents(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateAttribute::ParentList & osg::StateAttribute::getParents() const function, expected prototype:\nconst osg::StateAttribute::ParentList & osg::StateAttribute::getParents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateAttribute::ParentList & osg::StateAttribute::getParents() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateAttribute::ParentList* lret = &self->getParents();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttribute::ParentList >::push(L,lret,false);

		return 1;
	}

	// osg::StateSet * osg::StateAttribute::getParent(unsigned int i)
	static int _bind_getParent_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParent_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osg::StateAttribute::getParent(unsigned int i) function, expected prototype:\nosg::StateSet * osg::StateAttribute::getParent(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osg::StateAttribute::getParent(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getParent(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet * osg::StateAttribute::getParent(unsigned int i) const
	static int _bind_getParent_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParent_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet * osg::StateAttribute::getParent(unsigned int i) const function, expected prototype:\nconst osg::StateSet * osg::StateAttribute::getParent(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet * osg::StateAttribute::getParent(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet * lret = self->getParent(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateAttribute::getParent
	static int _bind_getParent(lua_State *L) {
		if (_lg_typecheck_getParent_overload_1(L)) return _bind_getParent_overload_1(L);
		if (_lg_typecheck_getParent_overload_2(L)) return _bind_getParent_overload_2(L);

		luaL_error(L, "error in function getParent, cannot match any of the overloads for function getParent:\n  getParent(unsigned int)\n  getParent(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::StateAttribute::getNumParents() const
	static int _bind_getNumParents(lua_State *L) {
		if (!_lg_typecheck_getNumParents(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::StateAttribute::getNumParents() const function, expected prototype:\nunsigned int osg::StateAttribute::getNumParents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::StateAttribute::getNumParents() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumParents();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StateAttribute::setShaderComponent(osg::ShaderComponent * sc)
	static int _bind_setShaderComponent(lua_State *L) {
		if (!_lg_typecheck_setShaderComponent(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::setShaderComponent(osg::ShaderComponent * sc) function, expected prototype:\nvoid osg::StateAttribute::setShaderComponent(osg::ShaderComponent * sc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ShaderComponent* sc=(Luna< osg::Referenced >::checkSubType< osg::ShaderComponent >(L,2));

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::setShaderComponent(osg::ShaderComponent *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setShaderComponent(sc);

		return 0;
	}

	// osg::ShaderComponent * osg::StateAttribute::getShaderComponent()
	static int _bind_getShaderComponent_overload_1(lua_State *L) {
		if (!_lg_typecheck_getShaderComponent_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShaderComponent * osg::StateAttribute::getShaderComponent() function, expected prototype:\nosg::ShaderComponent * osg::StateAttribute::getShaderComponent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ShaderComponent * osg::StateAttribute::getShaderComponent(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ShaderComponent * lret = self->getShaderComponent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ShaderComponent >::push(L,lret,false);

		return 1;
	}

	// const osg::ShaderComponent * osg::StateAttribute::getShaderComponent() const
	static int _bind_getShaderComponent_overload_2(lua_State *L) {
		if (!_lg_typecheck_getShaderComponent_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::ShaderComponent * osg::StateAttribute::getShaderComponent() const function, expected prototype:\nconst osg::ShaderComponent * osg::StateAttribute::getShaderComponent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::ShaderComponent * osg::StateAttribute::getShaderComponent() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ShaderComponent * lret = self->getShaderComponent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ShaderComponent >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateAttribute::getShaderComponent
	static int _bind_getShaderComponent(lua_State *L) {
		if (_lg_typecheck_getShaderComponent_overload_1(L)) return _bind_getShaderComponent_overload_1(L);
		if (_lg_typecheck_getShaderComponent_overload_2(L)) return _bind_getShaderComponent_overload_2(L);

		luaL_error(L, "error in function getShaderComponent, cannot match any of the overloads for function getShaderComponent:\n  getShaderComponent()\n  getShaderComponent()\n");
		return 0;
	}

	// bool osg::StateAttribute::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateAttribute::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::StateAttribute::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StateAttribute::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateAttribute::getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::StateAttribute::checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateAttribute::checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::StateAttribute::checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StateAttribute::checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateAttribute::checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::StateAttribute::setUpdateCallback(osg::StateAttributeCallback * uc)
	static int _bind_setUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_setUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::setUpdateCallback(osg::StateAttributeCallback * uc) function, expected prototype:\nvoid osg::StateAttribute::setUpdateCallback(osg::StateAttributeCallback * uc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttributeCallback* uc=(Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,2));

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::setUpdateCallback(osg::StateAttributeCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpdateCallback(uc);

		return 0;
	}

	// osg::StateAttributeCallback * osg::StateAttribute::getUpdateCallback()
	static int _bind_getUpdateCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUpdateCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttributeCallback * osg::StateAttribute::getUpdateCallback() function, expected prototype:\nosg::StateAttributeCallback * osg::StateAttribute::getUpdateCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttributeCallback * osg::StateAttribute::getUpdateCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttributeCallback * lret = self->getUpdateCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttributeCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::StateAttributeCallback * osg::StateAttribute::getUpdateCallback() const
	static int _bind_getUpdateCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUpdateCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateAttributeCallback * osg::StateAttribute::getUpdateCallback() const function, expected prototype:\nconst osg::StateAttributeCallback * osg::StateAttribute::getUpdateCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateAttributeCallback * osg::StateAttribute::getUpdateCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateAttributeCallback * lret = self->getUpdateCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttributeCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateAttribute::getUpdateCallback
	static int _bind_getUpdateCallback(lua_State *L) {
		if (_lg_typecheck_getUpdateCallback_overload_1(L)) return _bind_getUpdateCallback_overload_1(L);
		if (_lg_typecheck_getUpdateCallback_overload_2(L)) return _bind_getUpdateCallback_overload_2(L);

		luaL_error(L, "error in function getUpdateCallback, cannot match any of the overloads for function getUpdateCallback:\n  getUpdateCallback()\n  getUpdateCallback()\n");
		return 0;
	}

	// void osg::StateAttribute::setEventCallback(osg::StateAttributeCallback * ec)
	static int _bind_setEventCallback(lua_State *L) {
		if (!_lg_typecheck_setEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::setEventCallback(osg::StateAttributeCallback * ec) function, expected prototype:\nvoid osg::StateAttribute::setEventCallback(osg::StateAttributeCallback * ec)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttributeCallback* ec=(Luna< osg::Referenced >::checkSubType< osg::StateAttributeCallback >(L,2));

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::setEventCallback(osg::StateAttributeCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEventCallback(ec);

		return 0;
	}

	// osg::StateAttributeCallback * osg::StateAttribute::getEventCallback()
	static int _bind_getEventCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEventCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttributeCallback * osg::StateAttribute::getEventCallback() function, expected prototype:\nosg::StateAttributeCallback * osg::StateAttribute::getEventCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttributeCallback * osg::StateAttribute::getEventCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttributeCallback * lret = self->getEventCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttributeCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::StateAttributeCallback * osg::StateAttribute::getEventCallback() const
	static int _bind_getEventCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEventCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateAttributeCallback * osg::StateAttribute::getEventCallback() const function, expected prototype:\nconst osg::StateAttributeCallback * osg::StateAttribute::getEventCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateAttributeCallback * osg::StateAttribute::getEventCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateAttributeCallback * lret = self->getEventCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttributeCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateAttribute::getEventCallback
	static int _bind_getEventCallback(lua_State *L) {
		if (_lg_typecheck_getEventCallback_overload_1(L)) return _bind_getEventCallback_overload_1(L);
		if (_lg_typecheck_getEventCallback_overload_2(L)) return _bind_getEventCallback_overload_2(L);

		luaL_error(L, "error in function getEventCallback, cannot match any of the overloads for function getEventCallback:\n  getEventCallback()\n  getEventCallback()\n");
		return 0;
	}

	// void osg::StateAttribute::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::StateAttribute::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StateAttribute::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::StateAttribute::compileGLObjects(osg::State & arg1) const
	static int _bind_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::StateAttribute::compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StateAttribute::compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->compileGLObjects(_arg1);

		return 0;
	}

	// void osg::StateAttribute::releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::StateAttribute::releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(_arg1);

		return 0;
	}

	// void osg::StateAttribute::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::StateAttribute::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateAttribute::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::StateAttribute::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::base_setName(const std::string & name) function, expected prototype:\nvoid osg::StateAttribute::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateAttribute::setName(name);

		return 0;
	}

	// void osg::StateAttribute::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::base_computeDataVariance() function, expected prototype:\nvoid osg::StateAttribute::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateAttribute::computeDataVariance();

		return 0;
	}

	// void osg::StateAttribute::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::StateAttribute::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateAttribute::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::StateAttribute::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::StateAttribute::base_getUserData() function, expected prototype:\nosg::Referenced * osg::StateAttribute::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::StateAttribute::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->StateAttribute::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::StateAttribute::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::StateAttribute::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::StateAttribute::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::StateAttribute::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->StateAttribute::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateAttribute::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// bool osg::StateAttribute::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateAttribute::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::StateAttribute::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateAttribute::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StateAttribute::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::StateAttribute::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::StateAttribute::base_libraryName() const function, expected prototype:\nconst char * osg::StateAttribute::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::StateAttribute::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->StateAttribute::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::StateAttribute::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::StateAttribute::base_className() const function, expected prototype:\nconst char * osg::StateAttribute::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::StateAttribute::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->StateAttribute::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Texture * osg::StateAttribute::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::StateAttribute::base_asTexture() function, expected prototype:\nosg::Texture * osg::StateAttribute::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::StateAttribute::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->StateAttribute::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::StateAttribute::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::StateAttribute::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::StateAttribute::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::StateAttribute::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->StateAttribute::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateAttribute::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::StateAttribute::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::StateAttribute::base_getMember() const function, expected prototype:\nunsigned int osg::StateAttribute::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::StateAttribute::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->StateAttribute::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::StateAttribute::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateAttribute::base_isTextureAttribute() const function, expected prototype:\nbool osg::StateAttribute::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateAttribute::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StateAttribute::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::StateAttribute::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateAttribute::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::StateAttribute::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StateAttribute::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateAttribute::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StateAttribute::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::StateAttribute::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateAttribute::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::StateAttribute::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StateAttribute::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateAttribute::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StateAttribute::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::StateAttribute::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::StateAttribute::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StateAttribute::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateAttribute::apply(_arg1);

		return 0;
	}

	// void osg::StateAttribute::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::StateAttribute::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StateAttribute::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateAttribute::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::StateAttribute::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::StateAttribute::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateAttribute::releaseGLObjects(_arg1);

		return 0;
	}


	// Operator binds:
	// bool osg::StateAttribute::operator<(const osg::StateAttribute & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateAttribute::operator<(const osg::StateAttribute & rhs) const function, expected prototype:\nbool osg::StateAttribute::operator<(const osg::StateAttribute & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::StateAttribute::operator< function");
		}
		const osg::StateAttribute & rhs=*rhs_ptr;

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateAttribute::operator<(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::StateAttribute::operator==(const osg::StateAttribute & rhs) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateAttribute::operator==(const osg::StateAttribute & rhs) const function, expected prototype:\nbool osg::StateAttribute::operator==(const osg::StateAttribute & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::StateAttribute::operator== function");
		}
		const osg::StateAttribute & rhs=*rhs_ptr;

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateAttribute::operator==(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::StateAttribute::operator!=(const osg::StateAttribute & rhs) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateAttribute::operator!=(const osg::StateAttribute & rhs) const function, expected prototype:\nbool osg::StateAttribute::operator!=(const osg::StateAttribute & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::StateAttribute::operator!= function");
		}
		const osg::StateAttribute & rhs=*rhs_ptr;

		osg::StateAttribute* self=Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateAttribute::operator!=(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osg::StateAttribute* LunaTraits< osg::StateAttribute >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_StateAttribute::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// osg::Object * osg::StateAttribute::cloneType() const
	// osg::Object * osg::StateAttribute::clone(const osg::CopyOp & arg1) const
	// osg::StateAttribute::Type osg::StateAttribute::getType() const
	// int osg::StateAttribute::compare(const osg::StateAttribute & sa) const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osg::StateAttribute >::_bind_dtor(osg::StateAttribute* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::StateAttribute >::className[] = "StateAttribute";
const char LunaTraits< osg::StateAttribute >::fullName[] = "osg::StateAttribute";
const char LunaTraits< osg::StateAttribute >::moduleName[] = "osg";
const char* LunaTraits< osg::StateAttribute >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::StateAttribute >::hash = 51338116;
const int LunaTraits< osg::StateAttribute >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::StateAttribute >::methods[] = {
	{"cloneType", &luna_wrapper_osg_StateAttribute::_bind_cloneType},
	{"clone", &luna_wrapper_osg_StateAttribute::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_StateAttribute::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_StateAttribute::_bind_libraryName},
	{"className", &luna_wrapper_osg_StateAttribute::_bind_className},
	{"asTexture", &luna_wrapper_osg_StateAttribute::_bind_asTexture},
	{"getType", &luna_wrapper_osg_StateAttribute::_bind_getType},
	{"getMember", &luna_wrapper_osg_StateAttribute::_bind_getMember},
	{"getTypeMemberPair", &luna_wrapper_osg_StateAttribute::_bind_getTypeMemberPair},
	{"isTextureAttribute", &luna_wrapper_osg_StateAttribute::_bind_isTextureAttribute},
	{"compare", &luna_wrapper_osg_StateAttribute::_bind_compare},
	{"getParents", &luna_wrapper_osg_StateAttribute::_bind_getParents},
	{"getParent", &luna_wrapper_osg_StateAttribute::_bind_getParent},
	{"getNumParents", &luna_wrapper_osg_StateAttribute::_bind_getNumParents},
	{"setShaderComponent", &luna_wrapper_osg_StateAttribute::_bind_setShaderComponent},
	{"getShaderComponent", &luna_wrapper_osg_StateAttribute::_bind_getShaderComponent},
	{"getModeUsage", &luna_wrapper_osg_StateAttribute::_bind_getModeUsage},
	{"checkValidityOfAssociatedModes", &luna_wrapper_osg_StateAttribute::_bind_checkValidityOfAssociatedModes},
	{"setUpdateCallback", &luna_wrapper_osg_StateAttribute::_bind_setUpdateCallback},
	{"getUpdateCallback", &luna_wrapper_osg_StateAttribute::_bind_getUpdateCallback},
	{"setEventCallback", &luna_wrapper_osg_StateAttribute::_bind_setEventCallback},
	{"getEventCallback", &luna_wrapper_osg_StateAttribute::_bind_getEventCallback},
	{"apply", &luna_wrapper_osg_StateAttribute::_bind_apply},
	{"compileGLObjects", &luna_wrapper_osg_StateAttribute::_bind_compileGLObjects},
	{"releaseGLObjects", &luna_wrapper_osg_StateAttribute::_bind_releaseGLObjects},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_StateAttribute::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_StateAttribute::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_StateAttribute::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_StateAttribute::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_StateAttribute::_bind_base_getUserData},
	{"base_isSameKindAs", &luna_wrapper_osg_StateAttribute::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_StateAttribute::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_StateAttribute::_bind_base_className},
	{"base_asTexture", &luna_wrapper_osg_StateAttribute::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_StateAttribute::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_StateAttribute::_bind_base_isTextureAttribute},
	{"base_getModeUsage", &luna_wrapper_osg_StateAttribute::_bind_base_getModeUsage},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_StateAttribute::_bind_base_checkValidityOfAssociatedModes},
	{"base_apply", &luna_wrapper_osg_StateAttribute::_bind_base_apply},
	{"base_compileGLObjects", &luna_wrapper_osg_StateAttribute::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_StateAttribute::_bind_base_releaseGLObjects},
	{"__lt", &luna_wrapper_osg_StateAttribute::_bind___lt},
	{"__eq", &luna_wrapper_osg_StateAttribute::_bind___eq},
	{"op_neq", &luna_wrapper_osg_StateAttribute::_bind_op_neq},
	{"fromVoid", &luna_wrapper_osg_StateAttribute::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_StateAttribute::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_StateAttribute::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StateAttribute >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_StateAttribute::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StateAttribute >::enumValues[] = {
	{"OFF", osg::StateAttribute::OFF},
	{"ON", osg::StateAttribute::ON},
	{"OVERRIDE", osg::StateAttribute::OVERRIDE},
	{"PROTECTED", osg::StateAttribute::PROTECTED},
	{"INHERIT", osg::StateAttribute::INHERIT},
	{"TEXTURE", osg::StateAttribute::TEXTURE},
	{"POLYGONMODE", osg::StateAttribute::POLYGONMODE},
	{"POLYGONOFFSET", osg::StateAttribute::POLYGONOFFSET},
	{"MATERIAL", osg::StateAttribute::MATERIAL},
	{"ALPHAFUNC", osg::StateAttribute::ALPHAFUNC},
	{"ANTIALIAS", osg::StateAttribute::ANTIALIAS},
	{"COLORTABLE", osg::StateAttribute::COLORTABLE},
	{"CULLFACE", osg::StateAttribute::CULLFACE},
	{"FOG", osg::StateAttribute::FOG},
	{"FRONTFACE", osg::StateAttribute::FRONTFACE},
	{"LIGHT", osg::StateAttribute::LIGHT},
	{"POINT", osg::StateAttribute::POINT},
	{"LINEWIDTH", osg::StateAttribute::LINEWIDTH},
	{"LINESTIPPLE", osg::StateAttribute::LINESTIPPLE},
	{"POLYGONSTIPPLE", osg::StateAttribute::POLYGONSTIPPLE},
	{"SHADEMODEL", osg::StateAttribute::SHADEMODEL},
	{"TEXENV", osg::StateAttribute::TEXENV},
	{"TEXENVFILTER", osg::StateAttribute::TEXENVFILTER},
	{"TEXGEN", osg::StateAttribute::TEXGEN},
	{"TEXMAT", osg::StateAttribute::TEXMAT},
	{"LIGHTMODEL", osg::StateAttribute::LIGHTMODEL},
	{"BLENDFUNC", osg::StateAttribute::BLENDFUNC},
	{"BLENDEQUATION", osg::StateAttribute::BLENDEQUATION},
	{"LOGICOP", osg::StateAttribute::LOGICOP},
	{"STENCIL", osg::StateAttribute::STENCIL},
	{"COLORMASK", osg::StateAttribute::COLORMASK},
	{"DEPTH", osg::StateAttribute::DEPTH},
	{"VIEWPORT", osg::StateAttribute::VIEWPORT},
	{"SCISSOR", osg::StateAttribute::SCISSOR},
	{"BLENDCOLOR", osg::StateAttribute::BLENDCOLOR},
	{"MULTISAMPLE", osg::StateAttribute::MULTISAMPLE},
	{"CLIPPLANE", osg::StateAttribute::CLIPPLANE},
	{"COLORMATRIX", osg::StateAttribute::COLORMATRIX},
	{"VERTEXPROGRAM", osg::StateAttribute::VERTEXPROGRAM},
	{"FRAGMENTPROGRAM", osg::StateAttribute::FRAGMENTPROGRAM},
	{"POINTSPRITE", osg::StateAttribute::POINTSPRITE},
	{"PROGRAM", osg::StateAttribute::PROGRAM},
	{"CLAMPCOLOR", osg::StateAttribute::CLAMPCOLOR},
	{"HINT", osg::StateAttribute::HINT},
	{"SAMPLEMASKI", osg::StateAttribute::SAMPLEMASKI},
	{"VALIDATOR", osg::StateAttribute::VALIDATOR},
	{"VIEWMATRIXEXTRACTOR", osg::StateAttribute::VIEWMATRIXEXTRACTOR},
	{"OSGNV_PARAMETER_BLOCK", osg::StateAttribute::OSGNV_PARAMETER_BLOCK},
	{"OSGNVEXT_TEXTURE_SHADER", osg::StateAttribute::OSGNVEXT_TEXTURE_SHADER},
	{"OSGNVEXT_VERTEX_PROGRAM", osg::StateAttribute::OSGNVEXT_VERTEX_PROGRAM},
	{"OSGNVEXT_REGISTER_COMBINERS", osg::StateAttribute::OSGNVEXT_REGISTER_COMBINERS},
	{"OSGNVCG_PROGRAM", osg::StateAttribute::OSGNVCG_PROGRAM},
	{"OSGNVSLANG_PROGRAM", osg::StateAttribute::OSGNVSLANG_PROGRAM},
	{"OSGNVPARSE_PROGRAM_PARSER", osg::StateAttribute::OSGNVPARSE_PROGRAM_PARSER},
	{"UNIFORMBUFFERBINDING", osg::StateAttribute::UNIFORMBUFFERBINDING},
	{"TRANSFORMFEEDBACKBUFFERBINDING", osg::StateAttribute::TRANSFORMFEEDBACKBUFFERBINDING},
	{"ATOMICCOUNTERBUFFERBINDING", osg::StateAttribute::ATOMICCOUNTERBUFFERBINDING},
	{0,0}
};


