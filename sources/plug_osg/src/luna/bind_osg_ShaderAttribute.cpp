#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ShaderAttribute.h>

class luna_wrapper_osg_ShaderAttribute {
public:
	typedef Luna< osg::ShaderAttribute > luna_t;

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

		osg::ShaderAttribute* self= (osg::ShaderAttribute*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ShaderAttribute >::push(L,self,false);
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
		//osg::ShaderAttribute* ptr= dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		osg::ShaderAttribute* ptr= luna_caster< osg::Referenced, osg::ShaderAttribute >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ShaderAttribute >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumShaders(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShader_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShader_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addUniform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeUniform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumUniforms(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUniform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
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

	inline static bool _lg_typecheck_base_checkValidityOfAssociatedModes(lua_State *L) {
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

	inline static bool _lg_typecheck_base_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
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
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ShaderAttribute::ShaderAttribute()
	static osg::ShaderAttribute* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShaderAttribute::ShaderAttribute() function, expected prototype:\nosg::ShaderAttribute::ShaderAttribute()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ShaderAttribute();
	}

	// osg::ShaderAttribute::ShaderAttribute(const osg::ShaderAttribute & sa, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ShaderAttribute* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShaderAttribute::ShaderAttribute(const osg::ShaderAttribute & sa, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ShaderAttribute::ShaderAttribute(const osg::ShaderAttribute & sa, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::ShaderAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::ShaderAttribute::ShaderAttribute function");
		}
		const osg::ShaderAttribute & sa=*sa_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ShaderAttribute::ShaderAttribute function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::ShaderAttribute(sa, copyop);
	}

	// osg::ShaderAttribute::ShaderAttribute(lua_Table * data)
	static osg::ShaderAttribute* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShaderAttribute::ShaderAttribute(lua_Table * data) function, expected prototype:\nosg::ShaderAttribute::ShaderAttribute(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_ShaderAttribute(L,NULL);
	}

	// osg::ShaderAttribute::ShaderAttribute(lua_Table * data, const osg::ShaderAttribute & sa, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ShaderAttribute* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShaderAttribute::ShaderAttribute(lua_Table * data, const osg::ShaderAttribute & sa, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ShaderAttribute::ShaderAttribute(lua_Table * data, const osg::ShaderAttribute & sa, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::ShaderAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::ShaderAttribute::ShaderAttribute function");
		}
		const osg::ShaderAttribute & sa=*sa_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ShaderAttribute::ShaderAttribute function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_ShaderAttribute(L,NULL, sa, copyop);
	}

	// Overload binder for osg::ShaderAttribute::ShaderAttribute
	static osg::ShaderAttribute* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ShaderAttribute, cannot match any of the overloads for function ShaderAttribute:\n  ShaderAttribute()\n  ShaderAttribute(const osg::ShaderAttribute &, const osg::CopyOp &)\n  ShaderAttribute(lua_Table *)\n  ShaderAttribute(lua_Table *, const osg::ShaderAttribute &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ShaderAttribute::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShaderAttribute::cloneType() const function, expected prototype:\nosg::Object * osg::ShaderAttribute::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShaderAttribute::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ShaderAttribute::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShaderAttribute::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ShaderAttribute::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShaderAttribute::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShaderAttribute::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ShaderAttribute::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ShaderAttribute::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ShaderAttribute::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ShaderAttribute::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ShaderAttribute::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ShaderAttribute::libraryName() const function, expected prototype:\nconst char * osg::ShaderAttribute::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ShaderAttribute::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ShaderAttribute::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ShaderAttribute::className() const function, expected prototype:\nconst char * osg::ShaderAttribute::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ShaderAttribute::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osg::ShaderAttribute::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::ShaderAttribute::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::ShaderAttribute::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::ShaderAttribute::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::ShaderAttribute::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ShaderAttribute::setType(osg::StateAttribute::Type type)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::setType(osg::StateAttribute::Type type) function, expected prototype:\nvoid osg::ShaderAttribute::setType(osg::StateAttribute::Type type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::Type type=(osg::StateAttribute::Type)lua_tointeger(L,2);

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::setType(osg::StateAttribute::Type). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setType(type);

		return 0;
	}

	// osg::StateAttribute::Type osg::ShaderAttribute::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::ShaderAttribute::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::ShaderAttribute::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::ShaderAttribute::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::ShaderAttribute::addShader(osg::Shader * shader)
	static int _bind_addShader(lua_State *L) {
		if (!_lg_typecheck_addShader(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::ShaderAttribute::addShader(osg::Shader * shader) function, expected prototype:\nunsigned int osg::ShaderAttribute::addShader(osg::Shader * shader)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Shader* shader=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::ShaderAttribute::addShader(osg::Shader *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->addShader(shader);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ShaderAttribute::removeShader(unsigned int i)
	static int _bind_removeShader(lua_State *L) {
		if (!_lg_typecheck_removeShader(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::removeShader(unsigned int i) function, expected prototype:\nvoid osg::ShaderAttribute::removeShader(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::removeShader(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeShader(i);

		return 0;
	}

	// unsigned int osg::ShaderAttribute::getNumShaders() const
	static int _bind_getNumShaders(lua_State *L) {
		if (!_lg_typecheck_getNumShaders(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::ShaderAttribute::getNumShaders() const function, expected prototype:\nunsigned int osg::ShaderAttribute::getNumShaders() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::ShaderAttribute::getNumShaders() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumShaders();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Shader * osg::ShaderAttribute::getShader(unsigned int i)
	static int _bind_getShader_overload_1(lua_State *L) {
		if (!_lg_typecheck_getShader_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Shader * osg::ShaderAttribute::getShader(unsigned int i) function, expected prototype:\nosg::Shader * osg::ShaderAttribute::getShader(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Shader * osg::ShaderAttribute::getShader(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Shader * lret = self->getShader(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shader >::push(L,lret,false);

		return 1;
	}

	// const osg::Shader * osg::ShaderAttribute::getShader(unsigned int i) const
	static int _bind_getShader_overload_2(lua_State *L) {
		if (!_lg_typecheck_getShader_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Shader * osg::ShaderAttribute::getShader(unsigned int i) const function, expected prototype:\nconst osg::Shader * osg::ShaderAttribute::getShader(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Shader * osg::ShaderAttribute::getShader(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Shader * lret = self->getShader(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shader >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ShaderAttribute::getShader
	static int _bind_getShader(lua_State *L) {
		if (_lg_typecheck_getShader_overload_1(L)) return _bind_getShader_overload_1(L);
		if (_lg_typecheck_getShader_overload_2(L)) return _bind_getShader_overload_2(L);

		luaL_error(L, "error in function getShader, cannot match any of the overloads for function getShader:\n  getShader(unsigned int)\n  getShader(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::ShaderAttribute::addUniform(osg::Uniform * uniform)
	static int _bind_addUniform(lua_State *L) {
		if (!_lg_typecheck_addUniform(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::ShaderAttribute::addUniform(osg::Uniform * uniform) function, expected prototype:\nunsigned int osg::ShaderAttribute::addUniform(osg::Uniform * uniform)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Uniform* uniform=(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,2));

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::ShaderAttribute::addUniform(osg::Uniform *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->addUniform(uniform);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ShaderAttribute::removeUniform(unsigned int i)
	static int _bind_removeUniform(lua_State *L) {
		if (!_lg_typecheck_removeUniform(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::removeUniform(unsigned int i) function, expected prototype:\nvoid osg::ShaderAttribute::removeUniform(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::removeUniform(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeUniform(i);

		return 0;
	}

	// unsigned int osg::ShaderAttribute::getNumUniforms() const
	static int _bind_getNumUniforms(lua_State *L) {
		if (!_lg_typecheck_getNumUniforms(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::ShaderAttribute::getNumUniforms() const function, expected prototype:\nunsigned int osg::ShaderAttribute::getNumUniforms() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::ShaderAttribute::getNumUniforms() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumUniforms();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Uniform * osg::ShaderAttribute::getUniform(unsigned int i)
	static int _bind_getUniform_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUniform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform * osg::ShaderAttribute::getUniform(unsigned int i) function, expected prototype:\nosg::Uniform * osg::ShaderAttribute::getUniform(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Uniform * osg::ShaderAttribute::getUniform(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Uniform * lret = self->getUniform(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform >::push(L,lret,false);

		return 1;
	}

	// const osg::Uniform * osg::ShaderAttribute::getUniform(unsigned int i) const
	static int _bind_getUniform_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUniform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Uniform * osg::ShaderAttribute::getUniform(unsigned int i) const function, expected prototype:\nconst osg::Uniform * osg::ShaderAttribute::getUniform(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Uniform * osg::ShaderAttribute::getUniform(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Uniform * lret = self->getUniform(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ShaderAttribute::getUniform
	static int _bind_getUniform(lua_State *L) {
		if (_lg_typecheck_getUniform_overload_1(L)) return _bind_getUniform_overload_1(L);
		if (_lg_typecheck_getUniform_overload_2(L)) return _bind_getUniform_overload_2(L);

		luaL_error(L, "error in function getUniform, cannot match any of the overloads for function getUniform:\n  getUniform(unsigned int)\n  getUniform(unsigned int)\n");
		return 0;
	}

	// bool osg::ShaderAttribute::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ShaderAttribute::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::ShaderAttribute::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShaderAttribute::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ShaderAttribute::getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ShaderAttribute::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::ShaderAttribute::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShaderAttribute::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShaderAttribute::compileGLObjects(osg::State & arg1) const
	static int _bind_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::ShaderAttribute::compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShaderAttribute::compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->compileGLObjects(_arg1);

		return 0;
	}

	// void osg::ShaderAttribute::releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::ShaderAttribute::releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(_arg1);

		return 0;
	}

	// void osg::ShaderAttribute::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::ShaderAttribute::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShaderAttribute::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::ShaderAttribute::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::base_setName(const std::string & name) function, expected prototype:\nvoid osg::ShaderAttribute::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShaderAttribute::setName(name);

		return 0;
	}

	// void osg::ShaderAttribute::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::base_computeDataVariance() function, expected prototype:\nvoid osg::ShaderAttribute::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShaderAttribute::computeDataVariance();

		return 0;
	}

	// void osg::ShaderAttribute::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::ShaderAttribute::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShaderAttribute::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::ShaderAttribute::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::ShaderAttribute::base_getUserData() function, expected prototype:\nosg::Referenced * osg::ShaderAttribute::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::ShaderAttribute::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ShaderAttribute::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::ShaderAttribute::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::ShaderAttribute::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::ShaderAttribute::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::ShaderAttribute::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ShaderAttribute::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ShaderAttribute::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::ShaderAttribute::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::ShaderAttribute::base_asTexture() function, expected prototype:\nosg::Texture * osg::ShaderAttribute::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::ShaderAttribute::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->ShaderAttribute::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::ShaderAttribute::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::ShaderAttribute::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::ShaderAttribute::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::ShaderAttribute::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->ShaderAttribute::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ShaderAttribute::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::ShaderAttribute::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::ShaderAttribute::base_getMember() const function, expected prototype:\nunsigned int osg::ShaderAttribute::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::ShaderAttribute::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->ShaderAttribute::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::ShaderAttribute::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ShaderAttribute::base_isTextureAttribute() const function, expected prototype:\nbool osg::ShaderAttribute::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ShaderAttribute::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ShaderAttribute::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ShaderAttribute::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ShaderAttribute::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::ShaderAttribute::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShaderAttribute::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ShaderAttribute::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ShaderAttribute::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Object * osg::ShaderAttribute::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShaderAttribute::base_cloneType() const function, expected prototype:\nosg::Object * osg::ShaderAttribute::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShaderAttribute::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ShaderAttribute::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ShaderAttribute::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShaderAttribute::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ShaderAttribute::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShaderAttribute::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShaderAttribute::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ShaderAttribute::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ShaderAttribute::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ShaderAttribute::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ShaderAttribute::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ShaderAttribute::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ShaderAttribute::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ShaderAttribute::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ShaderAttribute::base_libraryName() const function, expected prototype:\nconst char * osg::ShaderAttribute::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ShaderAttribute::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ShaderAttribute::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ShaderAttribute::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ShaderAttribute::base_className() const function, expected prototype:\nconst char * osg::ShaderAttribute::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ShaderAttribute::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ShaderAttribute::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osg::ShaderAttribute::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::ShaderAttribute::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::ShaderAttribute::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::ShaderAttribute::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::ShaderAttribute::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ShaderAttribute::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::ShaderAttribute::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::ShaderAttribute::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::ShaderAttribute::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::ShaderAttribute::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->ShaderAttribute::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::ShaderAttribute::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ShaderAttribute::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::ShaderAttribute::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShaderAttribute::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ShaderAttribute::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ShaderAttribute::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ShaderAttribute::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::ShaderAttribute::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShaderAttribute::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShaderAttribute::apply(_arg1);

		return 0;
	}

	// void osg::ShaderAttribute::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::ShaderAttribute::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShaderAttribute::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShaderAttribute::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::ShaderAttribute::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::ShaderAttribute::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::ShaderAttribute* self=Luna< osg::Referenced >::checkSubType< osg::ShaderAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShaderAttribute::releaseGLObjects(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::ShaderAttribute* LunaTraits< osg::ShaderAttribute >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ShaderAttribute::_bind_ctor(L);
}

void LunaTraits< osg::ShaderAttribute >::_bind_dtor(osg::ShaderAttribute* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ShaderAttribute >::className[] = "ShaderAttribute";
const char LunaTraits< osg::ShaderAttribute >::fullName[] = "osg::ShaderAttribute";
const char LunaTraits< osg::ShaderAttribute >::moduleName[] = "osg";
const char* LunaTraits< osg::ShaderAttribute >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::ShaderAttribute >::hash = 76536462;
const int LunaTraits< osg::ShaderAttribute >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ShaderAttribute >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ShaderAttribute::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ShaderAttribute::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ShaderAttribute::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ShaderAttribute::_bind_libraryName},
	{"className", &luna_wrapper_osg_ShaderAttribute::_bind_className},
	{"compare", &luna_wrapper_osg_ShaderAttribute::_bind_compare},
	{"setType", &luna_wrapper_osg_ShaderAttribute::_bind_setType},
	{"getType", &luna_wrapper_osg_ShaderAttribute::_bind_getType},
	{"addShader", &luna_wrapper_osg_ShaderAttribute::_bind_addShader},
	{"removeShader", &luna_wrapper_osg_ShaderAttribute::_bind_removeShader},
	{"getNumShaders", &luna_wrapper_osg_ShaderAttribute::_bind_getNumShaders},
	{"getShader", &luna_wrapper_osg_ShaderAttribute::_bind_getShader},
	{"addUniform", &luna_wrapper_osg_ShaderAttribute::_bind_addUniform},
	{"removeUniform", &luna_wrapper_osg_ShaderAttribute::_bind_removeUniform},
	{"getNumUniforms", &luna_wrapper_osg_ShaderAttribute::_bind_getNumUniforms},
	{"getUniform", &luna_wrapper_osg_ShaderAttribute::_bind_getUniform},
	{"getModeUsage", &luna_wrapper_osg_ShaderAttribute::_bind_getModeUsage},
	{"apply", &luna_wrapper_osg_ShaderAttribute::_bind_apply},
	{"compileGLObjects", &luna_wrapper_osg_ShaderAttribute::_bind_compileGLObjects},
	{"releaseGLObjects", &luna_wrapper_osg_ShaderAttribute::_bind_releaseGLObjects},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_ShaderAttribute::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_ShaderAttribute::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_ShaderAttribute::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_ShaderAttribute::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_ShaderAttribute::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_ShaderAttribute::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_ShaderAttribute::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_ShaderAttribute::_bind_base_isTextureAttribute},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_ShaderAttribute::_bind_base_checkValidityOfAssociatedModes},
	{"base_cloneType", &luna_wrapper_osg_ShaderAttribute::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_ShaderAttribute::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_ShaderAttribute::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_ShaderAttribute::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_ShaderAttribute::_bind_base_className},
	{"base_compare", &luna_wrapper_osg_ShaderAttribute::_bind_base_compare},
	{"base_getType", &luna_wrapper_osg_ShaderAttribute::_bind_base_getType},
	{"base_getModeUsage", &luna_wrapper_osg_ShaderAttribute::_bind_base_getModeUsage},
	{"base_apply", &luna_wrapper_osg_ShaderAttribute::_bind_base_apply},
	{"base_compileGLObjects", &luna_wrapper_osg_ShaderAttribute::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_ShaderAttribute::_bind_base_releaseGLObjects},
	{"fromVoid", &luna_wrapper_osg_ShaderAttribute::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ShaderAttribute::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ShaderAttribute::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ShaderAttribute >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ShaderAttribute::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ShaderAttribute >::enumValues[] = {
	{0,0}
};


