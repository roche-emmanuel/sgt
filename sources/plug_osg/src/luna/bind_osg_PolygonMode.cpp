#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_PolygonMode.h>

class luna_wrapper_osg_PolygonMode {
public:
	typedef Luna< osg::PolygonMode > luna_t;

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

		osg::PolygonMode* self= (osg::PolygonMode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::PolygonMode >::push(L,self,false);
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
		//osg::PolygonMode* ptr= dynamic_cast< osg::PolygonMode* >(Luna< osg::Referenced >::check(L,1));
		osg::PolygonMode* ptr= luna_caster< osg::Referenced, osg::PolygonMode >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::PolygonMode >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1))) ) return false;
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
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrontAndBack(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::PolygonMode::PolygonMode()
	static osg::PolygonMode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PolygonMode::PolygonMode() function, expected prototype:\nosg::PolygonMode::PolygonMode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::PolygonMode();
	}

	// osg::PolygonMode::PolygonMode(osg::PolygonMode::Face face, osg::PolygonMode::Mode mode)
	static osg::PolygonMode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::PolygonMode::PolygonMode(osg::PolygonMode::Face face, osg::PolygonMode::Mode mode) function, expected prototype:\nosg::PolygonMode::PolygonMode(osg::PolygonMode::Face face, osg::PolygonMode::Mode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::PolygonMode::Face face=(osg::PolygonMode::Face)lua_tointeger(L,1);
		osg::PolygonMode::Mode mode=(osg::PolygonMode::Mode)lua_tointeger(L,2);

		return new osg::PolygonMode(face, mode);
	}

	// osg::PolygonMode::PolygonMode(const osg::PolygonMode & pm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PolygonMode* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::PolygonMode::PolygonMode(const osg::PolygonMode & pm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PolygonMode::PolygonMode(const osg::PolygonMode & pm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::PolygonMode* pm_ptr=(Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1));
		if( !pm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pm in osg::PolygonMode::PolygonMode function");
		}
		const osg::PolygonMode & pm=*pm_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PolygonMode::PolygonMode function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::PolygonMode(pm, copyop);
	}

	// osg::PolygonMode::PolygonMode(lua_Table * data)
	static osg::PolygonMode* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::PolygonMode::PolygonMode(lua_Table * data) function, expected prototype:\nosg::PolygonMode::PolygonMode(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_PolygonMode(L,NULL);
	}

	// osg::PolygonMode::PolygonMode(lua_Table * data, osg::PolygonMode::Face face, osg::PolygonMode::Mode mode)
	static osg::PolygonMode* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::PolygonMode::PolygonMode(lua_Table * data, osg::PolygonMode::Face face, osg::PolygonMode::Mode mode) function, expected prototype:\nosg::PolygonMode::PolygonMode(lua_Table * data, osg::PolygonMode::Face face, osg::PolygonMode::Mode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::PolygonMode::Face face=(osg::PolygonMode::Face)lua_tointeger(L,2);
		osg::PolygonMode::Mode mode=(osg::PolygonMode::Mode)lua_tointeger(L,3);

		return new wrapper_osg_PolygonMode(L,NULL, face, mode);
	}

	// osg::PolygonMode::PolygonMode(lua_Table * data, const osg::PolygonMode & pm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PolygonMode* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::PolygonMode::PolygonMode(lua_Table * data, const osg::PolygonMode & pm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PolygonMode::PolygonMode(lua_Table * data, const osg::PolygonMode & pm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::PolygonMode* pm_ptr=(Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,2));
		if( !pm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pm in osg::PolygonMode::PolygonMode function");
		}
		const osg::PolygonMode & pm=*pm_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PolygonMode::PolygonMode function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_PolygonMode(L,NULL, pm, copyop);
	}

	// Overload binder for osg::PolygonMode::PolygonMode
	static osg::PolygonMode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function PolygonMode, cannot match any of the overloads for function PolygonMode:\n  PolygonMode()\n  PolygonMode(osg::PolygonMode::Face, osg::PolygonMode::Mode)\n  PolygonMode(const osg::PolygonMode &, const osg::CopyOp &)\n  PolygonMode(lua_Table *)\n  PolygonMode(lua_Table *, osg::PolygonMode::Face, osg::PolygonMode::Mode)\n  PolygonMode(lua_Table *, const osg::PolygonMode &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::PolygonMode::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PolygonMode::cloneType() const function, expected prototype:\nosg::Object * osg::PolygonMode::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PolygonMode::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PolygonMode::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PolygonMode::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::PolygonMode::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonMode::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PolygonMode::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PolygonMode::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PolygonMode::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PolygonMode::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PolygonMode::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PolygonMode::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PolygonMode::libraryName() const function, expected prototype:\nconst char * osg::PolygonMode::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PolygonMode::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PolygonMode::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PolygonMode::className() const function, expected prototype:\nconst char * osg::PolygonMode::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PolygonMode::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::PolygonMode::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::PolygonMode::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::PolygonMode::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::PolygonMode::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PolygonMode::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::PolygonMode::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::PolygonMode::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::PolygonMode::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::PolygonMode::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PolygonMode::setMode(osg::PolygonMode::Face face, osg::PolygonMode::Mode mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonMode::setMode(osg::PolygonMode::Face face, osg::PolygonMode::Mode mode) function, expected prototype:\nvoid osg::PolygonMode::setMode(osg::PolygonMode::Face face, osg::PolygonMode::Mode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::PolygonMode::Face face=(osg::PolygonMode::Face)lua_tointeger(L,2);
		osg::PolygonMode::Mode mode=(osg::PolygonMode::Mode)lua_tointeger(L,3);

		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonMode::setMode(osg::PolygonMode::Face, osg::PolygonMode::Mode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMode(face, mode);

		return 0;
	}

	// osg::PolygonMode::Mode osg::PolygonMode::getMode(osg::PolygonMode::Face face) const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::PolygonMode::Mode osg::PolygonMode::getMode(osg::PolygonMode::Face face) const function, expected prototype:\nosg::PolygonMode::Mode osg::PolygonMode::getMode(osg::PolygonMode::Face face) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::PolygonMode::Face face=(osg::PolygonMode::Face)lua_tointeger(L,2);

		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PolygonMode::Mode osg::PolygonMode::getMode(osg::PolygonMode::Face) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PolygonMode::Mode lret = self->getMode(face);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::PolygonMode::getFrontAndBack() const
	static int _bind_getFrontAndBack(lua_State *L) {
		if (!_lg_typecheck_getFrontAndBack(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PolygonMode::getFrontAndBack() const function, expected prototype:\nbool osg::PolygonMode::getFrontAndBack() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PolygonMode::getFrontAndBack() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getFrontAndBack();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::PolygonMode::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonMode::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::PolygonMode::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonMode::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonMode::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::PolygonMode::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonMode::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::PolygonMode::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonMode::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PolygonMode::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::PolygonMode::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonMode::base_setName(const std::string & name) function, expected prototype:\nvoid osg::PolygonMode::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonMode::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PolygonMode::setName(name);

		return 0;
	}

	// void osg::PolygonMode::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonMode::base_computeDataVariance() function, expected prototype:\nvoid osg::PolygonMode::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonMode::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PolygonMode::computeDataVariance();

		return 0;
	}

	// void osg::PolygonMode::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonMode::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::PolygonMode::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonMode::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PolygonMode::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::PolygonMode::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::PolygonMode::base_getUserData() function, expected prototype:\nosg::Referenced * osg::PolygonMode::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::PolygonMode::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->PolygonMode::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::PolygonMode::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::PolygonMode::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::PolygonMode::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::PolygonMode::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->PolygonMode::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PolygonMode::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::PolygonMode::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::PolygonMode::base_asTexture() function, expected prototype:\nosg::Texture * osg::PolygonMode::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::PolygonMode::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->PolygonMode::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::PolygonMode::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::PolygonMode::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::PolygonMode::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::PolygonMode::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->PolygonMode::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PolygonMode::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::PolygonMode::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::PolygonMode::base_getMember() const function, expected prototype:\nunsigned int osg::PolygonMode::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::PolygonMode::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->PolygonMode::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::PolygonMode::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PolygonMode::base_isTextureAttribute() const function, expected prototype:\nbool osg::PolygonMode::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PolygonMode::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PolygonMode::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PolygonMode::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PolygonMode::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::PolygonMode::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonMode::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PolygonMode::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PolygonMode::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PolygonMode::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PolygonMode::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::PolygonMode::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonMode::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PolygonMode::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PolygonMode::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::PolygonMode::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonMode::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::PolygonMode::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonMode::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonMode::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PolygonMode::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::PolygonMode::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonMode::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::PolygonMode::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonMode::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PolygonMode::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::PolygonMode::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PolygonMode::base_cloneType() const function, expected prototype:\nosg::Object * osg::PolygonMode::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PolygonMode::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->PolygonMode::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PolygonMode::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PolygonMode::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::PolygonMode::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonMode::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PolygonMode::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->PolygonMode::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PolygonMode::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PolygonMode::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PolygonMode::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PolygonMode::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PolygonMode::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PolygonMode::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PolygonMode::base_libraryName() const function, expected prototype:\nconst char * osg::PolygonMode::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PolygonMode::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->PolygonMode::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PolygonMode::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PolygonMode::base_className() const function, expected prototype:\nconst char * osg::PolygonMode::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PolygonMode::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->PolygonMode::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::PolygonMode::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::PolygonMode::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::PolygonMode::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::PolygonMode::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->PolygonMode::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PolygonMode::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::PolygonMode::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::PolygonMode::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::PolygonMode::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::PolygonMode::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->PolygonMode::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PolygonMode::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonMode::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::PolygonMode::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonMode::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::PolygonMode* self=Luna< osg::Referenced >::checkSubType< osg::PolygonMode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonMode::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PolygonMode::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::PolygonMode* LunaTraits< osg::PolygonMode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PolygonMode::_bind_ctor(L);
}

void LunaTraits< osg::PolygonMode >::_bind_dtor(osg::PolygonMode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::PolygonMode >::className[] = "PolygonMode";
const char LunaTraits< osg::PolygonMode >::fullName[] = "osg::PolygonMode";
const char LunaTraits< osg::PolygonMode >::moduleName[] = "osg";
const char* LunaTraits< osg::PolygonMode >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::PolygonMode >::hash = 60049159;
const int LunaTraits< osg::PolygonMode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::PolygonMode >::methods[] = {
	{"cloneType", &luna_wrapper_osg_PolygonMode::_bind_cloneType},
	{"clone", &luna_wrapper_osg_PolygonMode::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_PolygonMode::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_PolygonMode::_bind_libraryName},
	{"className", &luna_wrapper_osg_PolygonMode::_bind_className},
	{"getType", &luna_wrapper_osg_PolygonMode::_bind_getType},
	{"compare", &luna_wrapper_osg_PolygonMode::_bind_compare},
	{"setMode", &luna_wrapper_osg_PolygonMode::_bind_setMode},
	{"getMode", &luna_wrapper_osg_PolygonMode::_bind_getMode},
	{"getFrontAndBack", &luna_wrapper_osg_PolygonMode::_bind_getFrontAndBack},
	{"apply", &luna_wrapper_osg_PolygonMode::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_PolygonMode::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_PolygonMode::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_PolygonMode::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_PolygonMode::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_PolygonMode::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_PolygonMode::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_PolygonMode::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_PolygonMode::_bind_base_isTextureAttribute},
	{"base_getModeUsage", &luna_wrapper_osg_PolygonMode::_bind_base_getModeUsage},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_PolygonMode::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_PolygonMode::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_PolygonMode::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_PolygonMode::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_PolygonMode::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_PolygonMode::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_PolygonMode::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_PolygonMode::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_PolygonMode::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_PolygonMode::_bind_base_compare},
	{"base_apply", &luna_wrapper_osg_PolygonMode::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_PolygonMode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_PolygonMode::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_PolygonMode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PolygonMode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_PolygonMode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PolygonMode >::enumValues[] = {
	{"POINT", osg::PolygonMode::POINT},
	{"LINE", osg::PolygonMode::LINE},
	{"FILL", osg::PolygonMode::FILL},
	{"FRONT_AND_BACK", osg::PolygonMode::FRONT_AND_BACK},
	{"FRONT", osg::PolygonMode::FRONT},
	{"BACK", osg::PolygonMode::BACK},
	{0,0}
};


