#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_TexEnv.h>

class luna_wrapper_osg_TexEnv {
public:
	typedef Luna< osg::TexEnv > luna_t;

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

		osg::TexEnv* self= (osg::TexEnv*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::TexEnv >::push(L,self,false);
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
		//osg::TexEnv* ptr= dynamic_cast< osg::TexEnv* >(Luna< osg::Referenced >::check(L,1));
		osg::TexEnv* ptr= luna_caster< osg::Referenced, osg::TexEnv >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TexEnv >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColor_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getMember(lua_State *L) {
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

	inline static bool _lg_typecheck_base_isTextureAttribute(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::TexEnv::TexEnv(osg::TexEnv::Mode mode = osg::TexEnv::MODULATE)
	static osg::TexEnv* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::TexEnv::TexEnv(osg::TexEnv::Mode mode = osg::TexEnv::MODULATE) function, expected prototype:\nosg::TexEnv::TexEnv(osg::TexEnv::Mode mode = osg::TexEnv::MODULATE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::TexEnv::Mode mode=luatop>0 ? (osg::TexEnv::Mode)lua_tointeger(L,1) : (osg::TexEnv::Mode)osg::TexEnv::MODULATE;

		return new osg::TexEnv(mode);
	}

	// osg::TexEnv::TexEnv(const osg::TexEnv & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TexEnv* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::TexEnv::TexEnv(const osg::TexEnv & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TexEnv::TexEnv(const osg::TexEnv & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::TexEnv* texenv_ptr=(Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1));
		if( !texenv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texenv in osg::TexEnv::TexEnv function");
		}
		const osg::TexEnv & texenv=*texenv_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TexEnv::TexEnv function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::TexEnv(texenv, copyop);
	}

	// osg::TexEnv::TexEnv(lua_Table * data, osg::TexEnv::Mode mode = osg::TexEnv::MODULATE)
	static osg::TexEnv* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::TexEnv::TexEnv(lua_Table * data, osg::TexEnv::Mode mode = osg::TexEnv::MODULATE) function, expected prototype:\nosg::TexEnv::TexEnv(lua_Table * data, osg::TexEnv::Mode mode = osg::TexEnv::MODULATE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::TexEnv::Mode mode=luatop>1 ? (osg::TexEnv::Mode)lua_tointeger(L,2) : (osg::TexEnv::Mode)osg::TexEnv::MODULATE;

		return new wrapper_osg_TexEnv(L,NULL, mode);
	}

	// osg::TexEnv::TexEnv(lua_Table * data, const osg::TexEnv & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TexEnv* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::TexEnv::TexEnv(lua_Table * data, const osg::TexEnv & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TexEnv::TexEnv(lua_Table * data, const osg::TexEnv & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::TexEnv* texenv_ptr=(Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,2));
		if( !texenv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texenv in osg::TexEnv::TexEnv function");
		}
		const osg::TexEnv & texenv=*texenv_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TexEnv::TexEnv function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_TexEnv(L,NULL, texenv, copyop);
	}

	// Overload binder for osg::TexEnv::TexEnv
	static osg::TexEnv* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function TexEnv, cannot match any of the overloads for function TexEnv:\n  TexEnv(osg::TexEnv::Mode)\n  TexEnv(const osg::TexEnv &, const osg::CopyOp &)\n  TexEnv(lua_Table *, osg::TexEnv::Mode)\n  TexEnv(lua_Table *, const osg::TexEnv &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::TexEnv::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexEnv::cloneType() const function, expected prototype:\nosg::Object * osg::TexEnv::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexEnv::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TexEnv::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexEnv::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::TexEnv::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnv::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexEnv::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TexEnv::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexEnv::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TexEnv::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexEnv::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TexEnv::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TexEnv::libraryName() const function, expected prototype:\nconst char * osg::TexEnv::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TexEnv::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TexEnv::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TexEnv::className() const function, expected prototype:\nconst char * osg::TexEnv::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TexEnv::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::TexEnv::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::TexEnv::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::TexEnv::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::TexEnv::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::TexEnv::isTextureAttribute() const
	static int _bind_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexEnv::isTextureAttribute() const function, expected prototype:\nbool osg::TexEnv::isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexEnv::isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osg::TexEnv::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TexEnv::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::TexEnv::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::TexEnv::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TexEnv::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexEnv::setMode(osg::TexEnv::Mode mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnv::setMode(osg::TexEnv::Mode mode) function, expected prototype:\nvoid osg::TexEnv::setMode(osg::TexEnv::Mode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::TexEnv::Mode mode=(osg::TexEnv::Mode)lua_tointeger(L,2);

		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnv::setMode(osg::TexEnv::Mode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMode(mode);

		return 0;
	}

	// osg::TexEnv::Mode osg::TexEnv::getMode() const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::TexEnv::Mode osg::TexEnv::getMode() const function, expected prototype:\nosg::TexEnv::Mode osg::TexEnv::getMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::TexEnv::Mode osg::TexEnv::getMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::TexEnv::Mode lret = self->getMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexEnv::setColor(const osg::Vec4f & color)
	static int _bind_setColor(lua_State *L) {
		if (!_lg_typecheck_setColor(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnv::setColor(const osg::Vec4f & color) function, expected prototype:\nvoid osg::TexEnv::setColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::TexEnv::setColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnv::setColor(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColor(color);

		return 0;
	}

	// osg::Vec4f & osg::TexEnv::getColor()
	static int _bind_getColor_overload_1(lua_State *L) {
		if (!_lg_typecheck_getColor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f & osg::TexEnv::getColor() function, expected prototype:\nosg::Vec4f & osg::TexEnv::getColor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f & osg::TexEnv::getColor(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec4f & osg::TexEnv::getColor() const
	static int _bind_getColor_overload_2(lua_State *L) {
		if (!_lg_typecheck_getColor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::TexEnv::getColor() const function, expected prototype:\nconst osg::Vec4f & osg::TexEnv::getColor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::TexEnv::getColor() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TexEnv::getColor
	static int _bind_getColor(lua_State *L) {
		if (_lg_typecheck_getColor_overload_1(L)) return _bind_getColor_overload_1(L);
		if (_lg_typecheck_getColor_overload_2(L)) return _bind_getColor_overload_2(L);

		luaL_error(L, "error in function getColor, cannot match any of the overloads for function getColor:\n  getColor()\n  getColor()\n");
		return 0;
	}

	// void osg::TexEnv::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnv::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::TexEnv::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnv::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnv::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::TexEnv::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnv::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::TexEnv::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnv::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexEnv::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::TexEnv::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnv::base_setName(const std::string & name) function, expected prototype:\nvoid osg::TexEnv::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnv::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexEnv::setName(name);

		return 0;
	}

	// void osg::TexEnv::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnv::base_computeDataVariance() function, expected prototype:\nvoid osg::TexEnv::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnv::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexEnv::computeDataVariance();

		return 0;
	}

	// void osg::TexEnv::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnv::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::TexEnv::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnv::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexEnv::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::TexEnv::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::TexEnv::base_getUserData() function, expected prototype:\nosg::Referenced * osg::TexEnv::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::TexEnv::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->TexEnv::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::TexEnv::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::TexEnv::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::TexEnv::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::TexEnv::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->TexEnv::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TexEnv::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::TexEnv::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::TexEnv::base_asTexture() function, expected prototype:\nosg::Texture * osg::TexEnv::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::TexEnv::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->TexEnv::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::TexEnv::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::TexEnv::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::TexEnv::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::TexEnv::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->TexEnv::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TexEnv::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::TexEnv::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::TexEnv::base_getMember() const function, expected prototype:\nunsigned int osg::TexEnv::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::TexEnv::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->TexEnv::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::TexEnv::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexEnv::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::TexEnv::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnv::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexEnv::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TexEnv::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::TexEnv::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexEnv::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::TexEnv::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnv::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexEnv::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TexEnv::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::TexEnv::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnv::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::TexEnv::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnv::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnv::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexEnv::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::TexEnv::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnv::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::TexEnv::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnv::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexEnv::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::TexEnv::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexEnv::base_cloneType() const function, expected prototype:\nosg::Object * osg::TexEnv::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexEnv::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->TexEnv::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TexEnv::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexEnv::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::TexEnv::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnv::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexEnv::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->TexEnv::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TexEnv::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexEnv::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TexEnv::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexEnv::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TexEnv::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TexEnv::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TexEnv::base_libraryName() const function, expected prototype:\nconst char * osg::TexEnv::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TexEnv::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TexEnv::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TexEnv::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TexEnv::base_className() const function, expected prototype:\nconst char * osg::TexEnv::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TexEnv::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TexEnv::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::TexEnv::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::TexEnv::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::TexEnv::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::TexEnv::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->TexEnv::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::TexEnv::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TexEnv::base_isTextureAttribute() const function, expected prototype:\nbool osg::TexEnv::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TexEnv::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TexEnv::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osg::TexEnv::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TexEnv::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::TexEnv::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::TexEnv::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TexEnv::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->TexEnv::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexEnv::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TexEnv::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::TexEnv::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnv::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::TexEnv* self=Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TexEnv::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TexEnv::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::TexEnv* LunaTraits< osg::TexEnv >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TexEnv::_bind_ctor(L);
}

void LunaTraits< osg::TexEnv >::_bind_dtor(osg::TexEnv* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TexEnv >::className[] = "TexEnv";
const char LunaTraits< osg::TexEnv >::fullName[] = "osg::TexEnv";
const char LunaTraits< osg::TexEnv >::moduleName[] = "osg";
const char* LunaTraits< osg::TexEnv >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::TexEnv >::hash = 4783989;
const int LunaTraits< osg::TexEnv >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TexEnv >::methods[] = {
	{"cloneType", &luna_wrapper_osg_TexEnv::_bind_cloneType},
	{"clone", &luna_wrapper_osg_TexEnv::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_TexEnv::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_TexEnv::_bind_libraryName},
	{"className", &luna_wrapper_osg_TexEnv::_bind_className},
	{"getType", &luna_wrapper_osg_TexEnv::_bind_getType},
	{"isTextureAttribute", &luna_wrapper_osg_TexEnv::_bind_isTextureAttribute},
	{"compare", &luna_wrapper_osg_TexEnv::_bind_compare},
	{"setMode", &luna_wrapper_osg_TexEnv::_bind_setMode},
	{"getMode", &luna_wrapper_osg_TexEnv::_bind_getMode},
	{"setColor", &luna_wrapper_osg_TexEnv::_bind_setColor},
	{"getColor", &luna_wrapper_osg_TexEnv::_bind_getColor},
	{"apply", &luna_wrapper_osg_TexEnv::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_TexEnv::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_TexEnv::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_TexEnv::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_TexEnv::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_TexEnv::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_TexEnv::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_TexEnv::_bind_base_getMember},
	{"base_getModeUsage", &luna_wrapper_osg_TexEnv::_bind_base_getModeUsage},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_TexEnv::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_TexEnv::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_TexEnv::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_TexEnv::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_TexEnv::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_TexEnv::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_TexEnv::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_TexEnv::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_TexEnv::_bind_base_getType},
	{"base_isTextureAttribute", &luna_wrapper_osg_TexEnv::_bind_base_isTextureAttribute},
	{"base_compare", &luna_wrapper_osg_TexEnv::_bind_base_compare},
	{"base_apply", &luna_wrapper_osg_TexEnv::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_TexEnv::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_TexEnv::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_TexEnv::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TexEnv >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TexEnv::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TexEnv >::enumValues[] = {
	{"DECAL", osg::TexEnv::DECAL},
	{"MODULATE", osg::TexEnv::MODULATE},
	{"BLEND", osg::TexEnv::BLEND},
	{"REPLACE", osg::TexEnv::REPLACE},
	{"ADD", osg::TexEnv::ADD},
	{0,0}
};


