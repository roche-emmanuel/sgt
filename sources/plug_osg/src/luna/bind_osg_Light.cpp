#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Light.h>

class luna_wrapper_osg_Light {
public:
	typedef Luna< osg::Light > luna_t;

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

		osg::Light* self= (osg::Light*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Light >::push(L,self,false);
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
		//osg::Light* ptr= dynamic_cast< osg::Light* >(Luna< osg::Referenced >::check(L,1));
		osg::Light* ptr= luna_caster< osg::Referenced, osg::Light >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Light >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Light >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Light >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLightNum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLightNum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAmbient(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAmbient(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDiffuse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDiffuse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSpecular(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSpecular(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setConstantAttenuation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getConstantAttenuation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLinearAttenuation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLinearAttenuation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setQuadraticAttenuation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getQuadraticAttenuation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSpotExponent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSpotExponent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSpotCutoff(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSpotCutoff(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_captureLightState(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getMember(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Light::Light()
	static osg::Light* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Light::Light() function, expected prototype:\nosg::Light::Light()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Light();
	}

	// osg::Light::Light(unsigned int lightnum)
	static osg::Light* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Light::Light(unsigned int lightnum) function, expected prototype:\nosg::Light::Light(unsigned int lightnum)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int lightnum=(unsigned int)lua_tointeger(L,1);

		return new osg::Light(lightnum);
	}

	// osg::Light::Light(const osg::Light & light, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Light* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Light::Light(const osg::Light & light, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Light::Light(const osg::Light & light, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Light* light_ptr=(Luna< osg::Referenced >::checkSubType< osg::Light >(L,1));
		if( !light_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg light in osg::Light::Light function");
		}
		const osg::Light & light=*light_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Light::Light function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Light(light, copyop);
	}

	// osg::Light::Light(lua_Table * data)
	static osg::Light* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Light::Light(lua_Table * data) function, expected prototype:\nosg::Light::Light(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Light(L,NULL);
	}

	// osg::Light::Light(lua_Table * data, unsigned int lightnum)
	static osg::Light* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::Light::Light(lua_Table * data, unsigned int lightnum) function, expected prototype:\nosg::Light::Light(lua_Table * data, unsigned int lightnum)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int lightnum=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_Light(L,NULL, lightnum);
	}

	// osg::Light::Light(lua_Table * data, const osg::Light & light, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Light* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::Light::Light(lua_Table * data, const osg::Light & light, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Light::Light(lua_Table * data, const osg::Light & light, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Light* light_ptr=(Luna< osg::Referenced >::checkSubType< osg::Light >(L,2));
		if( !light_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg light in osg::Light::Light function");
		}
		const osg::Light & light=*light_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Light::Light function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Light(L,NULL, light, copyop);
	}

	// Overload binder for osg::Light::Light
	static osg::Light* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function Light, cannot match any of the overloads for function Light:\n  Light()\n  Light(unsigned int)\n  Light(const osg::Light &, const osg::CopyOp &)\n  Light(lua_Table *)\n  Light(lua_Table *, unsigned int)\n  Light(lua_Table *, const osg::Light &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Light::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Light::cloneType() const function, expected prototype:\nosg::Object * osg::Light::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Light::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Light::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Light::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Light::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Light::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Light::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Light::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Light::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Light::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Light::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Light::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Light::libraryName() const function, expected prototype:\nconst char * osg::Light::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Light::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Light::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Light::className() const function, expected prototype:\nconst char * osg::Light::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Light::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Light::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Light::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Light::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Light::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Light::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Light::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Light::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Light::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Light::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Light::getMember() const
	static int _bind_getMember(lua_State *L) {
		if (!_lg_typecheck_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Light::getMember() const function, expected prototype:\nunsigned int osg::Light::getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Light::getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Light::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Light::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::Light::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Light::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Light::getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Light::setLightNum(int num)
	static int _bind_setLightNum(lua_State *L) {
		if (!_lg_typecheck_setLightNum(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::setLightNum(int num) function, expected prototype:\nvoid osg::Light::setLightNum(int num)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int num=(int)lua_tointeger(L,2);

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::setLightNum(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLightNum(num);

		return 0;
	}

	// int osg::Light::getLightNum() const
	static int _bind_getLightNum(lua_State *L) {
		if (!_lg_typecheck_getLightNum(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Light::getLightNum() const function, expected prototype:\nint osg::Light::getLightNum() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Light::getLightNum() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getLightNum();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Light::setAmbient(const osg::Vec4f & ambient)
	static int _bind_setAmbient(lua_State *L) {
		if (!_lg_typecheck_setAmbient(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::setAmbient(const osg::Vec4f & ambient) function, expected prototype:\nvoid osg::Light::setAmbient(const osg::Vec4f & ambient)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* ambient_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !ambient_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ambient in osg::Light::setAmbient function");
		}
		const osg::Vec4f & ambient=*ambient_ptr;

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::setAmbient(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAmbient(ambient);

		return 0;
	}

	// const osg::Vec4f & osg::Light::getAmbient() const
	static int _bind_getAmbient(lua_State *L) {
		if (!_lg_typecheck_getAmbient(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::Light::getAmbient() const function, expected prototype:\nconst osg::Vec4f & osg::Light::getAmbient() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::Light::getAmbient() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getAmbient();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osg::Light::setDiffuse(const osg::Vec4f & diffuse)
	static int _bind_setDiffuse(lua_State *L) {
		if (!_lg_typecheck_setDiffuse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::setDiffuse(const osg::Vec4f & diffuse) function, expected prototype:\nvoid osg::Light::setDiffuse(const osg::Vec4f & diffuse)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* diffuse_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !diffuse_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diffuse in osg::Light::setDiffuse function");
		}
		const osg::Vec4f & diffuse=*diffuse_ptr;

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::setDiffuse(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDiffuse(diffuse);

		return 0;
	}

	// const osg::Vec4f & osg::Light::getDiffuse() const
	static int _bind_getDiffuse(lua_State *L) {
		if (!_lg_typecheck_getDiffuse(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::Light::getDiffuse() const function, expected prototype:\nconst osg::Vec4f & osg::Light::getDiffuse() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::Light::getDiffuse() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getDiffuse();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osg::Light::setSpecular(const osg::Vec4f & specular)
	static int _bind_setSpecular(lua_State *L) {
		if (!_lg_typecheck_setSpecular(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::setSpecular(const osg::Vec4f & specular) function, expected prototype:\nvoid osg::Light::setSpecular(const osg::Vec4f & specular)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* specular_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !specular_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg specular in osg::Light::setSpecular function");
		}
		const osg::Vec4f & specular=*specular_ptr;

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::setSpecular(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSpecular(specular);

		return 0;
	}

	// const osg::Vec4f & osg::Light::getSpecular() const
	static int _bind_getSpecular(lua_State *L) {
		if (!_lg_typecheck_getSpecular(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::Light::getSpecular() const function, expected prototype:\nconst osg::Vec4f & osg::Light::getSpecular() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::Light::getSpecular() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getSpecular();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osg::Light::setPosition(const osg::Vec4f & position)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::setPosition(const osg::Vec4f & position) function, expected prototype:\nvoid osg::Light::setPosition(const osg::Vec4f & position)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* position_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osg::Light::setPosition function");
		}
		const osg::Vec4f & position=*position_ptr;

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::setPosition(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPosition(position);

		return 0;
	}

	// const osg::Vec4f & osg::Light::getPosition() const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::Light::getPosition() const function, expected prototype:\nconst osg::Vec4f & osg::Light::getPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::Light::getPosition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osg::Light::setDirection(const osg::Vec3f & direction)
	static int _bind_setDirection(lua_State *L) {
		if (!_lg_typecheck_setDirection(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::setDirection(const osg::Vec3f & direction) function, expected prototype:\nvoid osg::Light::setDirection(const osg::Vec3f & direction)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* direction_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in osg::Light::setDirection function");
		}
		const osg::Vec3f & direction=*direction_ptr;

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::setDirection(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDirection(direction);

		return 0;
	}

	// const osg::Vec3f & osg::Light::getDirection() const
	static int _bind_getDirection(lua_State *L) {
		if (!_lg_typecheck_getDirection(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::Light::getDirection() const function, expected prototype:\nconst osg::Vec3f & osg::Light::getDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::Light::getDirection() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getDirection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::Light::setConstantAttenuation(float constant_attenuation)
	static int _bind_setConstantAttenuation(lua_State *L) {
		if (!_lg_typecheck_setConstantAttenuation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::setConstantAttenuation(float constant_attenuation) function, expected prototype:\nvoid osg::Light::setConstantAttenuation(float constant_attenuation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float constant_attenuation=(float)lua_tonumber(L,2);

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::setConstantAttenuation(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setConstantAttenuation(constant_attenuation);

		return 0;
	}

	// float osg::Light::getConstantAttenuation() const
	static int _bind_getConstantAttenuation(lua_State *L) {
		if (!_lg_typecheck_getConstantAttenuation(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Light::getConstantAttenuation() const function, expected prototype:\nfloat osg::Light::getConstantAttenuation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Light::getConstantAttenuation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getConstantAttenuation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Light::setLinearAttenuation(float linear_attenuation)
	static int _bind_setLinearAttenuation(lua_State *L) {
		if (!_lg_typecheck_setLinearAttenuation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::setLinearAttenuation(float linear_attenuation) function, expected prototype:\nvoid osg::Light::setLinearAttenuation(float linear_attenuation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float linear_attenuation=(float)lua_tonumber(L,2);

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::setLinearAttenuation(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLinearAttenuation(linear_attenuation);

		return 0;
	}

	// float osg::Light::getLinearAttenuation() const
	static int _bind_getLinearAttenuation(lua_State *L) {
		if (!_lg_typecheck_getLinearAttenuation(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Light::getLinearAttenuation() const function, expected prototype:\nfloat osg::Light::getLinearAttenuation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Light::getLinearAttenuation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getLinearAttenuation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Light::setQuadraticAttenuation(float quadratic_attenuation)
	static int _bind_setQuadraticAttenuation(lua_State *L) {
		if (!_lg_typecheck_setQuadraticAttenuation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::setQuadraticAttenuation(float quadratic_attenuation) function, expected prototype:\nvoid osg::Light::setQuadraticAttenuation(float quadratic_attenuation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float quadratic_attenuation=(float)lua_tonumber(L,2);

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::setQuadraticAttenuation(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setQuadraticAttenuation(quadratic_attenuation);

		return 0;
	}

	// float osg::Light::getQuadraticAttenuation() const
	static int _bind_getQuadraticAttenuation(lua_State *L) {
		if (!_lg_typecheck_getQuadraticAttenuation(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Light::getQuadraticAttenuation() const function, expected prototype:\nfloat osg::Light::getQuadraticAttenuation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Light::getQuadraticAttenuation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getQuadraticAttenuation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Light::setSpotExponent(float spot_exponent)
	static int _bind_setSpotExponent(lua_State *L) {
		if (!_lg_typecheck_setSpotExponent(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::setSpotExponent(float spot_exponent) function, expected prototype:\nvoid osg::Light::setSpotExponent(float spot_exponent)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float spot_exponent=(float)lua_tonumber(L,2);

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::setSpotExponent(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSpotExponent(spot_exponent);

		return 0;
	}

	// float osg::Light::getSpotExponent() const
	static int _bind_getSpotExponent(lua_State *L) {
		if (!_lg_typecheck_getSpotExponent(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Light::getSpotExponent() const function, expected prototype:\nfloat osg::Light::getSpotExponent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Light::getSpotExponent() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSpotExponent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Light::setSpotCutoff(float spot_cutoff)
	static int _bind_setSpotCutoff(lua_State *L) {
		if (!_lg_typecheck_setSpotCutoff(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::setSpotCutoff(float spot_cutoff) function, expected prototype:\nvoid osg::Light::setSpotCutoff(float spot_cutoff)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float spot_cutoff=(float)lua_tonumber(L,2);

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::setSpotCutoff(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSpotCutoff(spot_cutoff);

		return 0;
	}

	// float osg::Light::getSpotCutoff() const
	static int _bind_getSpotCutoff(lua_State *L) {
		if (!_lg_typecheck_getSpotCutoff(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Light::getSpotCutoff() const function, expected prototype:\nfloat osg::Light::getSpotCutoff() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Light::getSpotCutoff() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSpotCutoff();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Light::captureLightState()
	static int _bind_captureLightState(lua_State *L) {
		if (!_lg_typecheck_captureLightState(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::captureLightState() function, expected prototype:\nvoid osg::Light::captureLightState()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::captureLightState(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->captureLightState();

		return 0;
	}

	// void osg::Light::apply(osg::State & state) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::apply(osg::State & state) const function, expected prototype:\nvoid osg::Light::apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Light::apply function");
		}
		osg::State & state=*state_ptr;

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(state);

		return 0;
	}

	// void osg::Light::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Light::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Light::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Light::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Light::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Light::setName(name);

		return 0;
	}

	// void osg::Light::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::base_computeDataVariance() function, expected prototype:\nvoid osg::Light::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Light::computeDataVariance();

		return 0;
	}

	// void osg::Light::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Light::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Light::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Light::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Light::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Light::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Light::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Light::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Light::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Light::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Light::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Light::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Light::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Light::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::Light::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::Light::base_asTexture() function, expected prototype:\nosg::Texture * osg::Light::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::Light::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->Light::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::Light::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::Light::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::Light::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::Light::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->Light::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Light::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// bool osg::Light::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Light::base_isTextureAttribute() const function, expected prototype:\nbool osg::Light::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Light::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Light::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Light::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Light::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::Light::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Light::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Light::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Light::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Light::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::Light::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Light::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Light::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::Light::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Light::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Light::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Light::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Light::base_cloneType() const function, expected prototype:\nosg::Object * osg::Light::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Light::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Light::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Light::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Light::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Light::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Light::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Light::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Light::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Light::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Light::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Light::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Light::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Light::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Light::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Light::base_libraryName() const function, expected prototype:\nconst char * osg::Light::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Light::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Light::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Light::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Light::base_className() const function, expected prototype:\nconst char * osg::Light::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Light::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Light::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Light::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Light::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Light::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Light::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->Light::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Light::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Light::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Light::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Light::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Light::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Light::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Light::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Light::base_getMember() const function, expected prototype:\nunsigned int osg::Light::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Light::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Light::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Light::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Light::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::Light::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Light::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Light::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Light::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Light::base_apply(osg::State & state) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Light::base_apply(osg::State & state) const function, expected prototype:\nvoid osg::Light::base_apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Light::base_apply function");
		}
		osg::State & state=*state_ptr;

		osg::Light* self=Luna< osg::Referenced >::checkSubType< osg::Light >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Light::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Light::apply(state);

		return 0;
	}


	// Operator binds:

};

osg::Light* LunaTraits< osg::Light >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Light::_bind_ctor(L);
}

void LunaTraits< osg::Light >::_bind_dtor(osg::Light* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Light >::className[] = "Light";
const char LunaTraits< osg::Light >::fullName[] = "osg::Light";
const char LunaTraits< osg::Light >::moduleName[] = "osg";
const char* LunaTraits< osg::Light >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::Light >::hash = 83192659;
const int LunaTraits< osg::Light >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Light >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Light::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Light::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Light::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Light::_bind_libraryName},
	{"className", &luna_wrapper_osg_Light::_bind_className},
	{"getType", &luna_wrapper_osg_Light::_bind_getType},
	{"compare", &luna_wrapper_osg_Light::_bind_compare},
	{"getMember", &luna_wrapper_osg_Light::_bind_getMember},
	{"getModeUsage", &luna_wrapper_osg_Light::_bind_getModeUsage},
	{"setLightNum", &luna_wrapper_osg_Light::_bind_setLightNum},
	{"getLightNum", &luna_wrapper_osg_Light::_bind_getLightNum},
	{"setAmbient", &luna_wrapper_osg_Light::_bind_setAmbient},
	{"getAmbient", &luna_wrapper_osg_Light::_bind_getAmbient},
	{"setDiffuse", &luna_wrapper_osg_Light::_bind_setDiffuse},
	{"getDiffuse", &luna_wrapper_osg_Light::_bind_getDiffuse},
	{"setSpecular", &luna_wrapper_osg_Light::_bind_setSpecular},
	{"getSpecular", &luna_wrapper_osg_Light::_bind_getSpecular},
	{"setPosition", &luna_wrapper_osg_Light::_bind_setPosition},
	{"getPosition", &luna_wrapper_osg_Light::_bind_getPosition},
	{"setDirection", &luna_wrapper_osg_Light::_bind_setDirection},
	{"getDirection", &luna_wrapper_osg_Light::_bind_getDirection},
	{"setConstantAttenuation", &luna_wrapper_osg_Light::_bind_setConstantAttenuation},
	{"getConstantAttenuation", &luna_wrapper_osg_Light::_bind_getConstantAttenuation},
	{"setLinearAttenuation", &luna_wrapper_osg_Light::_bind_setLinearAttenuation},
	{"getLinearAttenuation", &luna_wrapper_osg_Light::_bind_getLinearAttenuation},
	{"setQuadraticAttenuation", &luna_wrapper_osg_Light::_bind_setQuadraticAttenuation},
	{"getQuadraticAttenuation", &luna_wrapper_osg_Light::_bind_getQuadraticAttenuation},
	{"setSpotExponent", &luna_wrapper_osg_Light::_bind_setSpotExponent},
	{"getSpotExponent", &luna_wrapper_osg_Light::_bind_getSpotExponent},
	{"setSpotCutoff", &luna_wrapper_osg_Light::_bind_setSpotCutoff},
	{"getSpotCutoff", &luna_wrapper_osg_Light::_bind_getSpotCutoff},
	{"captureLightState", &luna_wrapper_osg_Light::_bind_captureLightState},
	{"apply", &luna_wrapper_osg_Light::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Light::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_Light::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Light::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Light::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Light::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_Light::_bind_base_asTexture},
	{"base_isTextureAttribute", &luna_wrapper_osg_Light::_bind_base_isTextureAttribute},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_Light::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_Light::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_Light::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Light::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Light::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Light::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Light::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Light::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_Light::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_Light::_bind_base_compare},
	{"base_getMember", &luna_wrapper_osg_Light::_bind_base_getMember},
	{"base_getModeUsage", &luna_wrapper_osg_Light::_bind_base_getModeUsage},
	{"base_apply", &luna_wrapper_osg_Light::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_Light::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Light::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Light::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Light >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Light::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Light >::enumValues[] = {
	{0,0}
};


