#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_BlendEquation.h>

class luna_wrapper_osg_BlendEquation {
public:
	typedef Luna< osg::BlendEquation > luna_t;

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

		osg::BlendEquation* self= (osg::BlendEquation*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::BlendEquation >::push(L,self,false);
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
		//osg::BlendEquation* ptr= dynamic_cast< osg::BlendEquation* >(Luna< osg::Referenced >::check(L,1));
		osg::BlendEquation* ptr= luna_caster< osg::Referenced, osg::BlendEquation >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BlendEquation >::push(L,ptr,false);
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
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setEquation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEquation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEquationRGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEquationRGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEquationAlpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEquationAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
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
	// (found 0 valid operators)

	// Constructor binds:
	// osg::BlendEquation::BlendEquation()
	static osg::BlendEquation* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::BlendEquation() function, expected prototype:\nosg::BlendEquation::BlendEquation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::BlendEquation();
	}

	// osg::BlendEquation::BlendEquation(osg::BlendEquation::Equation equation)
	static osg::BlendEquation* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::BlendEquation(osg::BlendEquation::Equation equation) function, expected prototype:\nosg::BlendEquation::BlendEquation(osg::BlendEquation::Equation equation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::BlendEquation::Equation equation=(osg::BlendEquation::Equation)lua_tointeger(L,1);

		return new osg::BlendEquation(equation);
	}

	// osg::BlendEquation::BlendEquation(osg::BlendEquation::Equation equationRGB, osg::BlendEquation::Equation equationAlpha)
	static osg::BlendEquation* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::BlendEquation(osg::BlendEquation::Equation equationRGB, osg::BlendEquation::Equation equationAlpha) function, expected prototype:\nosg::BlendEquation::BlendEquation(osg::BlendEquation::Equation equationRGB, osg::BlendEquation::Equation equationAlpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::BlendEquation::Equation equationRGB=(osg::BlendEquation::Equation)lua_tointeger(L,1);
		osg::BlendEquation::Equation equationAlpha=(osg::BlendEquation::Equation)lua_tointeger(L,2);

		return new osg::BlendEquation(equationRGB, equationAlpha);
	}

	// osg::BlendEquation::BlendEquation(const osg::BlendEquation & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::BlendEquation* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::BlendEquation(const osg::BlendEquation & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::BlendEquation::BlendEquation(const osg::BlendEquation & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::BlendEquation* trans_ptr=(Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in osg::BlendEquation::BlendEquation function");
		}
		const osg::BlendEquation & trans=*trans_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::BlendEquation::BlendEquation function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::BlendEquation(trans, copyop);
	}

	// osg::BlendEquation::BlendEquation(lua_Table * data)
	static osg::BlendEquation* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::BlendEquation(lua_Table * data) function, expected prototype:\nosg::BlendEquation::BlendEquation(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_BlendEquation(L,NULL);
	}

	// osg::BlendEquation::BlendEquation(lua_Table * data, osg::BlendEquation::Equation equation)
	static osg::BlendEquation* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::BlendEquation(lua_Table * data, osg::BlendEquation::Equation equation) function, expected prototype:\nosg::BlendEquation::BlendEquation(lua_Table * data, osg::BlendEquation::Equation equation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::BlendEquation::Equation equation=(osg::BlendEquation::Equation)lua_tointeger(L,2);

		return new wrapper_osg_BlendEquation(L,NULL, equation);
	}

	// osg::BlendEquation::BlendEquation(lua_Table * data, osg::BlendEquation::Equation equationRGB, osg::BlendEquation::Equation equationAlpha)
	static osg::BlendEquation* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::BlendEquation(lua_Table * data, osg::BlendEquation::Equation equationRGB, osg::BlendEquation::Equation equationAlpha) function, expected prototype:\nosg::BlendEquation::BlendEquation(lua_Table * data, osg::BlendEquation::Equation equationRGB, osg::BlendEquation::Equation equationAlpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::BlendEquation::Equation equationRGB=(osg::BlendEquation::Equation)lua_tointeger(L,2);
		osg::BlendEquation::Equation equationAlpha=(osg::BlendEquation::Equation)lua_tointeger(L,3);

		return new wrapper_osg_BlendEquation(L,NULL, equationRGB, equationAlpha);
	}

	// osg::BlendEquation::BlendEquation(lua_Table * data, const osg::BlendEquation & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::BlendEquation* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::BlendEquation(lua_Table * data, const osg::BlendEquation & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::BlendEquation::BlendEquation(lua_Table * data, const osg::BlendEquation & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::BlendEquation* trans_ptr=(Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in osg::BlendEquation::BlendEquation function");
		}
		const osg::BlendEquation & trans=*trans_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::BlendEquation::BlendEquation function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_BlendEquation(L,NULL, trans, copyop);
	}

	// Overload binder for osg::BlendEquation::BlendEquation
	static osg::BlendEquation* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function BlendEquation, cannot match any of the overloads for function BlendEquation:\n  BlendEquation()\n  BlendEquation(osg::BlendEquation::Equation)\n  BlendEquation(osg::BlendEquation::Equation, osg::BlendEquation::Equation)\n  BlendEquation(const osg::BlendEquation &, const osg::CopyOp &)\n  BlendEquation(lua_Table *)\n  BlendEquation(lua_Table *, osg::BlendEquation::Equation)\n  BlendEquation(lua_Table *, osg::BlendEquation::Equation, osg::BlendEquation::Equation)\n  BlendEquation(lua_Table *, const osg::BlendEquation &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::BlendEquation::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::BlendEquation::cloneType() const function, expected prototype:\nosg::Object * osg::BlendEquation::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::BlendEquation::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::BlendEquation::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::BlendEquation::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::BlendEquation::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendEquation::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::BlendEquation::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::BlendEquation::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BlendEquation::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::BlendEquation::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BlendEquation::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::BlendEquation::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::BlendEquation::libraryName() const function, expected prototype:\nconst char * osg::BlendEquation::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::BlendEquation::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::BlendEquation::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::BlendEquation::className() const function, expected prototype:\nconst char * osg::BlendEquation::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::BlendEquation::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::BlendEquation::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::BlendEquation::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::BlendEquation::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::BlendEquation::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::BlendEquation::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::BlendEquation::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::BlendEquation::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::BlendEquation::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::BlendEquation::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::BlendEquation::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BlendEquation::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::BlendEquation::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendEquation::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BlendEquation::getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BlendEquation::setEquation(osg::BlendEquation::Equation equation)
	static int _bind_setEquation(lua_State *L) {
		if (!_lg_typecheck_setEquation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::setEquation(osg::BlendEquation::Equation equation) function, expected prototype:\nvoid osg::BlendEquation::setEquation(osg::BlendEquation::Equation equation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::BlendEquation::Equation equation=(osg::BlendEquation::Equation)lua_tointeger(L,2);

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::setEquation(osg::BlendEquation::Equation). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEquation(equation);

		return 0;
	}

	// osg::BlendEquation::Equation osg::BlendEquation::getEquation() const
	static int _bind_getEquation(lua_State *L) {
		if (!_lg_typecheck_getEquation(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::Equation osg::BlendEquation::getEquation() const function, expected prototype:\nosg::BlendEquation::Equation osg::BlendEquation::getEquation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BlendEquation::Equation osg::BlendEquation::getEquation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BlendEquation::Equation lret = self->getEquation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BlendEquation::setEquationRGB(osg::BlendEquation::Equation equation)
	static int _bind_setEquationRGB(lua_State *L) {
		if (!_lg_typecheck_setEquationRGB(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::setEquationRGB(osg::BlendEquation::Equation equation) function, expected prototype:\nvoid osg::BlendEquation::setEquationRGB(osg::BlendEquation::Equation equation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::BlendEquation::Equation equation=(osg::BlendEquation::Equation)lua_tointeger(L,2);

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::setEquationRGB(osg::BlendEquation::Equation). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEquationRGB(equation);

		return 0;
	}

	// osg::BlendEquation::Equation osg::BlendEquation::getEquationRGB() const
	static int _bind_getEquationRGB(lua_State *L) {
		if (!_lg_typecheck_getEquationRGB(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::Equation osg::BlendEquation::getEquationRGB() const function, expected prototype:\nosg::BlendEquation::Equation osg::BlendEquation::getEquationRGB() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BlendEquation::Equation osg::BlendEquation::getEquationRGB() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BlendEquation::Equation lret = self->getEquationRGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BlendEquation::setEquationAlpha(osg::BlendEquation::Equation equation)
	static int _bind_setEquationAlpha(lua_State *L) {
		if (!_lg_typecheck_setEquationAlpha(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::setEquationAlpha(osg::BlendEquation::Equation equation) function, expected prototype:\nvoid osg::BlendEquation::setEquationAlpha(osg::BlendEquation::Equation equation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::BlendEquation::Equation equation=(osg::BlendEquation::Equation)lua_tointeger(L,2);

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::setEquationAlpha(osg::BlendEquation::Equation). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEquationAlpha(equation);

		return 0;
	}

	// osg::BlendEquation::Equation osg::BlendEquation::getEquationAlpha() const
	static int _bind_getEquationAlpha(lua_State *L) {
		if (!_lg_typecheck_getEquationAlpha(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::Equation osg::BlendEquation::getEquationAlpha() const function, expected prototype:\nosg::BlendEquation::Equation osg::BlendEquation::getEquationAlpha() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BlendEquation::Equation osg::BlendEquation::getEquationAlpha() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BlendEquation::Equation lret = self->getEquationAlpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BlendEquation::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::BlendEquation::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendEquation::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// static osg::BlendEquation::Extensions * osg::BlendEquation::getExtensions(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luaL_error(L, "luna typecheck failed in static osg::BlendEquation::Extensions * osg::BlendEquation::getExtensions(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::BlendEquation::Extensions * osg::BlendEquation::getExtensions(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::BlendEquation::Extensions * lret = osg::BlendEquation::getExtensions(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BlendEquation::Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::BlendEquation::setExtensions(unsigned int contextID, osg::BlendEquation::Extensions * extensions)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::BlendEquation::setExtensions(unsigned int contextID, osg::BlendEquation::Extensions * extensions) function, expected prototype:\nstatic void osg::BlendEquation::setExtensions(unsigned int contextID, osg::BlendEquation::Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::BlendEquation::Extensions* extensions=(Luna< osg::Referenced >::checkSubType< osg::BlendEquation::Extensions >(L,2));

		osg::BlendEquation::setExtensions(contextID, extensions);

		return 0;
	}

	// void osg::BlendEquation::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::BlendEquation::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BlendEquation::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::BlendEquation::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::base_setName(const std::string & name) function, expected prototype:\nvoid osg::BlendEquation::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BlendEquation::setName(name);

		return 0;
	}

	// void osg::BlendEquation::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::base_computeDataVariance() function, expected prototype:\nvoid osg::BlendEquation::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BlendEquation::computeDataVariance();

		return 0;
	}

	// void osg::BlendEquation::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::BlendEquation::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BlendEquation::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::BlendEquation::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::BlendEquation::base_getUserData() function, expected prototype:\nosg::Referenced * osg::BlendEquation::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::BlendEquation::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->BlendEquation::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::BlendEquation::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::BlendEquation::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::BlendEquation::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::BlendEquation::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->BlendEquation::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::BlendEquation::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::BlendEquation::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::BlendEquation::base_asTexture() function, expected prototype:\nosg::Texture * osg::BlendEquation::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::BlendEquation::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->BlendEquation::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::BlendEquation::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::BlendEquation::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::BlendEquation::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::BlendEquation::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->BlendEquation::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::BlendEquation::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::BlendEquation::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::BlendEquation::base_getMember() const function, expected prototype:\nunsigned int osg::BlendEquation::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::BlendEquation::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->BlendEquation::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::BlendEquation::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BlendEquation::base_isTextureAttribute() const function, expected prototype:\nbool osg::BlendEquation::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BlendEquation::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BlendEquation::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::BlendEquation::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BlendEquation::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::BlendEquation::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendEquation::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BlendEquation::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BlendEquation::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BlendEquation::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::BlendEquation::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendEquation::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BlendEquation::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::BlendEquation::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::BlendEquation::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BlendEquation::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::BlendEquation::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::BlendEquation::base_cloneType() const function, expected prototype:\nosg::Object * osg::BlendEquation::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::BlendEquation::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->BlendEquation::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::BlendEquation::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::BlendEquation::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::BlendEquation::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendEquation::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::BlendEquation::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->BlendEquation::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::BlendEquation::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BlendEquation::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::BlendEquation::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BlendEquation::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BlendEquation::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::BlendEquation::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::BlendEquation::base_libraryName() const function, expected prototype:\nconst char * osg::BlendEquation::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::BlendEquation::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->BlendEquation::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::BlendEquation::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::BlendEquation::base_className() const function, expected prototype:\nconst char * osg::BlendEquation::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::BlendEquation::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->BlendEquation::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::BlendEquation::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::BlendEquation::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::BlendEquation::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::BlendEquation::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->BlendEquation::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::BlendEquation::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::BlendEquation::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::BlendEquation::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::BlendEquation::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::BlendEquation::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->BlendEquation::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::BlendEquation::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BlendEquation::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::BlendEquation::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendEquation::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BlendEquation::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BlendEquation::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BlendEquation::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::BlendEquation::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendEquation::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BlendEquation* self=Luna< osg::Referenced >::checkSubType< osg::BlendEquation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BlendEquation::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::BlendEquation* LunaTraits< osg::BlendEquation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_BlendEquation::_bind_ctor(L);
}

void LunaTraits< osg::BlendEquation >::_bind_dtor(osg::BlendEquation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BlendEquation >::className[] = "BlendEquation";
const char LunaTraits< osg::BlendEquation >::fullName[] = "osg::BlendEquation";
const char LunaTraits< osg::BlendEquation >::moduleName[] = "osg";
const char* LunaTraits< osg::BlendEquation >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::BlendEquation >::hash = 54255330;
const int LunaTraits< osg::BlendEquation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::BlendEquation >::methods[] = {
	{"cloneType", &luna_wrapper_osg_BlendEquation::_bind_cloneType},
	{"clone", &luna_wrapper_osg_BlendEquation::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_BlendEquation::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_BlendEquation::_bind_libraryName},
	{"className", &luna_wrapper_osg_BlendEquation::_bind_className},
	{"getType", &luna_wrapper_osg_BlendEquation::_bind_getType},
	{"compare", &luna_wrapper_osg_BlendEquation::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_BlendEquation::_bind_getModeUsage},
	{"setEquation", &luna_wrapper_osg_BlendEquation::_bind_setEquation},
	{"getEquation", &luna_wrapper_osg_BlendEquation::_bind_getEquation},
	{"setEquationRGB", &luna_wrapper_osg_BlendEquation::_bind_setEquationRGB},
	{"getEquationRGB", &luna_wrapper_osg_BlendEquation::_bind_getEquationRGB},
	{"setEquationAlpha", &luna_wrapper_osg_BlendEquation::_bind_setEquationAlpha},
	{"getEquationAlpha", &luna_wrapper_osg_BlendEquation::_bind_getEquationAlpha},
	{"apply", &luna_wrapper_osg_BlendEquation::_bind_apply},
	{"getExtensions", &luna_wrapper_osg_BlendEquation::_bind_getExtensions},
	{"setExtensions", &luna_wrapper_osg_BlendEquation::_bind_setExtensions},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_BlendEquation::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_BlendEquation::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_BlendEquation::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_BlendEquation::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_BlendEquation::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_BlendEquation::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_BlendEquation::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_BlendEquation::_bind_base_isTextureAttribute},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_BlendEquation::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_BlendEquation::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_BlendEquation::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_BlendEquation::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_BlendEquation::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_BlendEquation::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_BlendEquation::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_BlendEquation::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_BlendEquation::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_BlendEquation::_bind_base_compare},
	{"base_getModeUsage", &luna_wrapper_osg_BlendEquation::_bind_base_getModeUsage},
	{"base_apply", &luna_wrapper_osg_BlendEquation::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_BlendEquation::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_BlendEquation::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_BlendEquation::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BlendEquation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BlendEquation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BlendEquation >::enumValues[] = {
	{"RGBA_MIN", osg::BlendEquation::RGBA_MIN},
	{"RGBA_MAX", osg::BlendEquation::RGBA_MAX},
	{"ALPHA_MIN", osg::BlendEquation::ALPHA_MIN},
	{"ALPHA_MAX", osg::BlendEquation::ALPHA_MAX},
	{"LOGIC_OP", osg::BlendEquation::LOGIC_OP},
	{"FUNC_ADD", osg::BlendEquation::FUNC_ADD},
	{"FUNC_SUBTRACT", osg::BlendEquation::FUNC_SUBTRACT},
	{"FUNC_REVERSE_SUBTRACT", osg::BlendEquation::FUNC_REVERSE_SUBTRACT},
	{0,0}
};


