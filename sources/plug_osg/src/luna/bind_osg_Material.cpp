#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Material.h>

class luna_wrapper_osg_Material {
public:
	typedef Luna< osg::Material > luna_t;

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

		osg::Material* self= (osg::Material*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Material >::push(L,self,false);
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
		//osg::Material* ptr= dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		osg::Material* ptr= luna_caster< osg::Referenced, osg::Material >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Material >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Material >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Material >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_setColorMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColorMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAmbient(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAmbient(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAmbientFrontAndBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDiffuse(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDiffuse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDiffuseFrontAndBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSpecular(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSpecular(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSpecularFrontAndBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEmission(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEmission(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEmissionFrontAndBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShininess(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShininess(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShininessFrontAndBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTransparency(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAlpha(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
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


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Material::Material()
	static osg::Material* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Material::Material() function, expected prototype:\nosg::Material::Material()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Material();
	}

	// osg::Material::Material(const osg::Material & mat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Material* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Material::Material(const osg::Material & mat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Material::Material(const osg::Material & mat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Material* mat_ptr=(Luna< osg::Referenced >::checkSubType< osg::Material >(L,1));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osg::Material::Material function");
		}
		const osg::Material & mat=*mat_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Material::Material function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Material(mat, copyop);
	}

	// osg::Material::Material(lua_Table * data)
	static osg::Material* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Material::Material(lua_Table * data) function, expected prototype:\nosg::Material::Material(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Material(L,NULL);
	}

	// osg::Material::Material(lua_Table * data, const osg::Material & mat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Material* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Material::Material(lua_Table * data, const osg::Material & mat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Material::Material(lua_Table * data, const osg::Material & mat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Material* mat_ptr=(Luna< osg::Referenced >::checkSubType< osg::Material >(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osg::Material::Material function");
		}
		const osg::Material & mat=*mat_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Material::Material function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Material(L,NULL, mat, copyop);
	}

	// Overload binder for osg::Material::Material
	static osg::Material* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Material, cannot match any of the overloads for function Material:\n  Material()\n  Material(const osg::Material &, const osg::CopyOp &)\n  Material(lua_Table *)\n  Material(lua_Table *, const osg::Material &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Material::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Material::cloneType() const function, expected prototype:\nosg::Object * osg::Material::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Material::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Material::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Material::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Material::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Material::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Material::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Material::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Material::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Material::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Material::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Material::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Material::libraryName() const function, expected prototype:\nconst char * osg::Material::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Material::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Material::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Material::className() const function, expected prototype:\nconst char * osg::Material::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Material::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Material::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Material::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Material::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Material::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Material::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Material::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Material::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Material::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Material::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Material::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Material::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::Material::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Material::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Material::getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Material::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Material::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::Material::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Material::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Material::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::Material::setColorMode(osg::Material::ColorMode mode)
	static int _bind_setColorMode(lua_State *L) {
		if (!_lg_typecheck_setColorMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Material::setColorMode(osg::Material::ColorMode mode) function, expected prototype:\nvoid osg::Material::setColorMode(osg::Material::ColorMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Material::ColorMode mode=(osg::Material::ColorMode)lua_tointeger(L,2);

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Material::setColorMode(osg::Material::ColorMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorMode(mode);

		return 0;
	}

	// osg::Material::ColorMode osg::Material::getColorMode() const
	static int _bind_getColorMode(lua_State *L) {
		if (!_lg_typecheck_getColorMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::Material::ColorMode osg::Material::getColorMode() const function, expected prototype:\nosg::Material::ColorMode osg::Material::getColorMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Material::ColorMode osg::Material::getColorMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Material::ColorMode lret = self->getColorMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Material::setAmbient(osg::Material::Face face, const osg::Vec4f & ambient)
	static int _bind_setAmbient(lua_State *L) {
		if (!_lg_typecheck_setAmbient(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Material::setAmbient(osg::Material::Face face, const osg::Vec4f & ambient) function, expected prototype:\nvoid osg::Material::setAmbient(osg::Material::Face face, const osg::Vec4f & ambient)\nClass arguments details:\narg 2 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);
		const osg::Vec4f* ambient_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !ambient_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ambient in osg::Material::setAmbient function");
		}
		const osg::Vec4f & ambient=*ambient_ptr;

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Material::setAmbient(osg::Material::Face, const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAmbient(face, ambient);

		return 0;
	}

	// const osg::Vec4f & osg::Material::getAmbient(osg::Material::Face face) const
	static int _bind_getAmbient(lua_State *L) {
		if (!_lg_typecheck_getAmbient(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::Material::getAmbient(osg::Material::Face face) const function, expected prototype:\nconst osg::Vec4f & osg::Material::getAmbient(osg::Material::Face face) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::Material::getAmbient(osg::Material::Face) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getAmbient(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// bool osg::Material::getAmbientFrontAndBack() const
	static int _bind_getAmbientFrontAndBack(lua_State *L) {
		if (!_lg_typecheck_getAmbientFrontAndBack(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Material::getAmbientFrontAndBack() const function, expected prototype:\nbool osg::Material::getAmbientFrontAndBack() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Material::getAmbientFrontAndBack() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getAmbientFrontAndBack();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Material::setDiffuse(osg::Material::Face face, const osg::Vec4f & diffuse)
	static int _bind_setDiffuse(lua_State *L) {
		if (!_lg_typecheck_setDiffuse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Material::setDiffuse(osg::Material::Face face, const osg::Vec4f & diffuse) function, expected prototype:\nvoid osg::Material::setDiffuse(osg::Material::Face face, const osg::Vec4f & diffuse)\nClass arguments details:\narg 2 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);
		const osg::Vec4f* diffuse_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !diffuse_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diffuse in osg::Material::setDiffuse function");
		}
		const osg::Vec4f & diffuse=*diffuse_ptr;

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Material::setDiffuse(osg::Material::Face, const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDiffuse(face, diffuse);

		return 0;
	}

	// const osg::Vec4f & osg::Material::getDiffuse(osg::Material::Face face) const
	static int _bind_getDiffuse(lua_State *L) {
		if (!_lg_typecheck_getDiffuse(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::Material::getDiffuse(osg::Material::Face face) const function, expected prototype:\nconst osg::Vec4f & osg::Material::getDiffuse(osg::Material::Face face) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::Material::getDiffuse(osg::Material::Face) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getDiffuse(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// bool osg::Material::getDiffuseFrontAndBack() const
	static int _bind_getDiffuseFrontAndBack(lua_State *L) {
		if (!_lg_typecheck_getDiffuseFrontAndBack(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Material::getDiffuseFrontAndBack() const function, expected prototype:\nbool osg::Material::getDiffuseFrontAndBack() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Material::getDiffuseFrontAndBack() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getDiffuseFrontAndBack();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Material::setSpecular(osg::Material::Face face, const osg::Vec4f & specular)
	static int _bind_setSpecular(lua_State *L) {
		if (!_lg_typecheck_setSpecular(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Material::setSpecular(osg::Material::Face face, const osg::Vec4f & specular) function, expected prototype:\nvoid osg::Material::setSpecular(osg::Material::Face face, const osg::Vec4f & specular)\nClass arguments details:\narg 2 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);
		const osg::Vec4f* specular_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !specular_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg specular in osg::Material::setSpecular function");
		}
		const osg::Vec4f & specular=*specular_ptr;

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Material::setSpecular(osg::Material::Face, const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSpecular(face, specular);

		return 0;
	}

	// const osg::Vec4f & osg::Material::getSpecular(osg::Material::Face face) const
	static int _bind_getSpecular(lua_State *L) {
		if (!_lg_typecheck_getSpecular(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::Material::getSpecular(osg::Material::Face face) const function, expected prototype:\nconst osg::Vec4f & osg::Material::getSpecular(osg::Material::Face face) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::Material::getSpecular(osg::Material::Face) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getSpecular(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// bool osg::Material::getSpecularFrontAndBack() const
	static int _bind_getSpecularFrontAndBack(lua_State *L) {
		if (!_lg_typecheck_getSpecularFrontAndBack(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Material::getSpecularFrontAndBack() const function, expected prototype:\nbool osg::Material::getSpecularFrontAndBack() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Material::getSpecularFrontAndBack() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getSpecularFrontAndBack();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Material::setEmission(osg::Material::Face face, const osg::Vec4f & emission)
	static int _bind_setEmission(lua_State *L) {
		if (!_lg_typecheck_setEmission(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Material::setEmission(osg::Material::Face face, const osg::Vec4f & emission) function, expected prototype:\nvoid osg::Material::setEmission(osg::Material::Face face, const osg::Vec4f & emission)\nClass arguments details:\narg 2 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);
		const osg::Vec4f* emission_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !emission_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg emission in osg::Material::setEmission function");
		}
		const osg::Vec4f & emission=*emission_ptr;

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Material::setEmission(osg::Material::Face, const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEmission(face, emission);

		return 0;
	}

	// const osg::Vec4f & osg::Material::getEmission(osg::Material::Face face) const
	static int _bind_getEmission(lua_State *L) {
		if (!_lg_typecheck_getEmission(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::Material::getEmission(osg::Material::Face face) const function, expected prototype:\nconst osg::Vec4f & osg::Material::getEmission(osg::Material::Face face) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::Material::getEmission(osg::Material::Face) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getEmission(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// bool osg::Material::getEmissionFrontAndBack() const
	static int _bind_getEmissionFrontAndBack(lua_State *L) {
		if (!_lg_typecheck_getEmissionFrontAndBack(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Material::getEmissionFrontAndBack() const function, expected prototype:\nbool osg::Material::getEmissionFrontAndBack() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Material::getEmissionFrontAndBack() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getEmissionFrontAndBack();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Material::setShininess(osg::Material::Face face, float shininess)
	static int _bind_setShininess(lua_State *L) {
		if (!_lg_typecheck_setShininess(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Material::setShininess(osg::Material::Face face, float shininess) function, expected prototype:\nvoid osg::Material::setShininess(osg::Material::Face face, float shininess)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);
		float shininess=(float)lua_tonumber(L,3);

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Material::setShininess(osg::Material::Face, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setShininess(face, shininess);

		return 0;
	}

	// float osg::Material::getShininess(osg::Material::Face face) const
	static int _bind_getShininess(lua_State *L) {
		if (!_lg_typecheck_getShininess(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Material::getShininess(osg::Material::Face face) const function, expected prototype:\nfloat osg::Material::getShininess(osg::Material::Face face) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Material::getShininess(osg::Material::Face) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getShininess(face);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Material::getShininessFrontAndBack() const
	static int _bind_getShininessFrontAndBack(lua_State *L) {
		if (!_lg_typecheck_getShininessFrontAndBack(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Material::getShininessFrontAndBack() const function, expected prototype:\nbool osg::Material::getShininessFrontAndBack() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Material::getShininessFrontAndBack() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getShininessFrontAndBack();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Material::setTransparency(osg::Material::Face face, float trans)
	static int _bind_setTransparency(lua_State *L) {
		if (!_lg_typecheck_setTransparency(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Material::setTransparency(osg::Material::Face face, float trans) function, expected prototype:\nvoid osg::Material::setTransparency(osg::Material::Face face, float trans)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);
		float trans=(float)lua_tonumber(L,3);

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Material::setTransparency(osg::Material::Face, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTransparency(face, trans);

		return 0;
	}

	// void osg::Material::setAlpha(osg::Material::Face face, float alpha)
	static int _bind_setAlpha(lua_State *L) {
		if (!_lg_typecheck_setAlpha(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Material::setAlpha(osg::Material::Face face, float alpha) function, expected prototype:\nvoid osg::Material::setAlpha(osg::Material::Face face, float alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);
		float alpha=(float)lua_tonumber(L,3);

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Material::setAlpha(osg::Material::Face, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAlpha(face, alpha);

		return 0;
	}

	// void osg::Material::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Material::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Material::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Material::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Material::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Material::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Material::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Material::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Material::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Material::setName(name);

		return 0;
	}

	// void osg::Material::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Material::base_computeDataVariance() function, expected prototype:\nvoid osg::Material::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Material::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Material::computeDataVariance();

		return 0;
	}

	// void osg::Material::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Material::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Material::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Material::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Material::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Material::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Material::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Material::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Material::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Material::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Material::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Material::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Material::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Material::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Material::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Material::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::Material::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::Material::base_asTexture() function, expected prototype:\nosg::Texture * osg::Material::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::Material::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->Material::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::Material::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::Material::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::Material::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::Material::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->Material::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Material::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::Material::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Material::base_getMember() const function, expected prototype:\nunsigned int osg::Material::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Material::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Material::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Material::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Material::base_isTextureAttribute() const function, expected prototype:\nbool osg::Material::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Material::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Material::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Material::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Material::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::Material::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Material::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Material::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Material::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Material::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Material::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::Material::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Material::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Material::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Material::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::Material::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Material::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Material::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Material::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Material::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Material::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Material::base_cloneType() const function, expected prototype:\nosg::Object * osg::Material::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Material::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Material::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Material::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Material::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Material::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Material::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Material::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Material::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Material::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Material::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Material::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Material::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Material::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Material::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Material::base_libraryName() const function, expected prototype:\nconst char * osg::Material::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Material::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Material::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Material::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Material::base_className() const function, expected prototype:\nconst char * osg::Material::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Material::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Material::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Material::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Material::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Material::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Material::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->Material::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Material::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Material::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Material::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Material::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Material::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Material::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Material::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Material::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::Material::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Material::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Material::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Material::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Material::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Material::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::Material::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Material::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Material::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Material::apply(_arg1);

		return 0;
	}


	// Operator binds:
	// osg::Material & osg::Material::operator=(const osg::Material & rhs)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::Material & osg::Material::operator=(const osg::Material & rhs) function, expected prototype:\nosg::Material & osg::Material::operator=(const osg::Material & rhs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Material* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Material >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Material::operator= function");
		}
		const osg::Material & rhs=*rhs_ptr;

		osg::Material* self=Luna< osg::Referenced >::checkSubType< osg::Material >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Material & osg::Material::operator=(const osg::Material &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Material* lret = &self->operator=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Material >::push(L,lret,false);

		return 1;
	}


};

osg::Material* LunaTraits< osg::Material >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Material::_bind_ctor(L);
}

void LunaTraits< osg::Material >::_bind_dtor(osg::Material* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Material >::className[] = "Material";
const char LunaTraits< osg::Material >::fullName[] = "osg::Material";
const char LunaTraits< osg::Material >::moduleName[] = "osg";
const char* LunaTraits< osg::Material >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::Material >::hash = 74266859;
const int LunaTraits< osg::Material >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Material >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Material::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Material::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Material::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Material::_bind_libraryName},
	{"className", &luna_wrapper_osg_Material::_bind_className},
	{"getType", &luna_wrapper_osg_Material::_bind_getType},
	{"compare", &luna_wrapper_osg_Material::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_Material::_bind_getModeUsage},
	{"apply", &luna_wrapper_osg_Material::_bind_apply},
	{"setColorMode", &luna_wrapper_osg_Material::_bind_setColorMode},
	{"getColorMode", &luna_wrapper_osg_Material::_bind_getColorMode},
	{"setAmbient", &luna_wrapper_osg_Material::_bind_setAmbient},
	{"getAmbient", &luna_wrapper_osg_Material::_bind_getAmbient},
	{"getAmbientFrontAndBack", &luna_wrapper_osg_Material::_bind_getAmbientFrontAndBack},
	{"setDiffuse", &luna_wrapper_osg_Material::_bind_setDiffuse},
	{"getDiffuse", &luna_wrapper_osg_Material::_bind_getDiffuse},
	{"getDiffuseFrontAndBack", &luna_wrapper_osg_Material::_bind_getDiffuseFrontAndBack},
	{"setSpecular", &luna_wrapper_osg_Material::_bind_setSpecular},
	{"getSpecular", &luna_wrapper_osg_Material::_bind_getSpecular},
	{"getSpecularFrontAndBack", &luna_wrapper_osg_Material::_bind_getSpecularFrontAndBack},
	{"setEmission", &luna_wrapper_osg_Material::_bind_setEmission},
	{"getEmission", &luna_wrapper_osg_Material::_bind_getEmission},
	{"getEmissionFrontAndBack", &luna_wrapper_osg_Material::_bind_getEmissionFrontAndBack},
	{"setShininess", &luna_wrapper_osg_Material::_bind_setShininess},
	{"getShininess", &luna_wrapper_osg_Material::_bind_getShininess},
	{"getShininessFrontAndBack", &luna_wrapper_osg_Material::_bind_getShininessFrontAndBack},
	{"setTransparency", &luna_wrapper_osg_Material::_bind_setTransparency},
	{"setAlpha", &luna_wrapper_osg_Material::_bind_setAlpha},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Material::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_Material::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Material::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Material::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Material::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_Material::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_Material::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_Material::_bind_base_isTextureAttribute},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_Material::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_Material::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_Material::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Material::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Material::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Material::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Material::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Material::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_Material::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_Material::_bind_base_compare},
	{"base_getModeUsage", &luna_wrapper_osg_Material::_bind_base_getModeUsage},
	{"base_apply", &luna_wrapper_osg_Material::_bind_base_apply},
	{"op_assign", &luna_wrapper_osg_Material::_bind_op_assign},
	{"fromVoid", &luna_wrapper_osg_Material::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Material::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Material::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Material >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Material::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Material >::enumValues[] = {
	{"FRONT", osg::Material::FRONT},
	{"BACK", osg::Material::BACK},
	{"FRONT_AND_BACK", osg::Material::FRONT_AND_BACK},
	{"AMBIENT", osg::Material::AMBIENT},
	{"DIFFUSE", osg::Material::DIFFUSE},
	{"SPECULAR", osg::Material::SPECULAR},
	{"EMISSION", osg::Material::EMISSION},
	{"AMBIENT_AND_DIFFUSE", osg::Material::AMBIENT_AND_DIFFUSE},
	{"OFF", osg::Material::OFF},
	{0,0}
};


