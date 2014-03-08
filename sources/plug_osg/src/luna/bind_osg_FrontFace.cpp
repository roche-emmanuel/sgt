#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_FrontFace.h>

class luna_wrapper_osg_FrontFace {
public:
	typedef Luna< osg::FrontFace > luna_t;

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

		osg::FrontFace* self= (osg::FrontFace*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::FrontFace >::push(L,self,false);
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
		//osg::FrontFace* ptr= dynamic_cast< osg::FrontFace* >(Luna< osg::Referenced >::check(L,1));
		osg::FrontFace* ptr= luna_caster< osg::Referenced, osg::FrontFace >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::FrontFace >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,2))) ) return false;
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
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
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
	// osg::FrontFace::FrontFace(osg::FrontFace::Mode face = osg::FrontFace::COUNTER_CLOCKWISE)
	static osg::FrontFace* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrontFace::FrontFace(osg::FrontFace::Mode face = osg::FrontFace::COUNTER_CLOCKWISE) function, expected prototype:\nosg::FrontFace::FrontFace(osg::FrontFace::Mode face = osg::FrontFace::COUNTER_CLOCKWISE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::FrontFace::Mode face=luatop>0 ? (osg::FrontFace::Mode)lua_tointeger(L,1) : (osg::FrontFace::Mode)osg::FrontFace::COUNTER_CLOCKWISE;

		return new osg::FrontFace(face);
	}

	// osg::FrontFace::FrontFace(const osg::FrontFace & ff, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::FrontFace* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrontFace::FrontFace(const osg::FrontFace & ff, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::FrontFace::FrontFace(const osg::FrontFace & ff, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::FrontFace* ff_ptr=(Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1));
		if( !ff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ff in osg::FrontFace::FrontFace function");
		}
		const osg::FrontFace & ff=*ff_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::FrontFace::FrontFace function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::FrontFace(ff, copyop);
	}

	// osg::FrontFace::FrontFace(lua_Table * data, osg::FrontFace::Mode face = osg::FrontFace::COUNTER_CLOCKWISE)
	static osg::FrontFace* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrontFace::FrontFace(lua_Table * data, osg::FrontFace::Mode face = osg::FrontFace::COUNTER_CLOCKWISE) function, expected prototype:\nosg::FrontFace::FrontFace(lua_Table * data, osg::FrontFace::Mode face = osg::FrontFace::COUNTER_CLOCKWISE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::FrontFace::Mode face=luatop>1 ? (osg::FrontFace::Mode)lua_tointeger(L,2) : (osg::FrontFace::Mode)osg::FrontFace::COUNTER_CLOCKWISE;

		return new wrapper_osg_FrontFace(L,NULL, face);
	}

	// osg::FrontFace::FrontFace(lua_Table * data, const osg::FrontFace & ff, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::FrontFace* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrontFace::FrontFace(lua_Table * data, const osg::FrontFace & ff, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::FrontFace::FrontFace(lua_Table * data, const osg::FrontFace & ff, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::FrontFace* ff_ptr=(Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,2));
		if( !ff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ff in osg::FrontFace::FrontFace function");
		}
		const osg::FrontFace & ff=*ff_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::FrontFace::FrontFace function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_FrontFace(L,NULL, ff, copyop);
	}

	// Overload binder for osg::FrontFace::FrontFace
	static osg::FrontFace* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function FrontFace, cannot match any of the overloads for function FrontFace:\n  FrontFace(osg::FrontFace::Mode)\n  FrontFace(const osg::FrontFace &, const osg::CopyOp &)\n  FrontFace(lua_Table *, osg::FrontFace::Mode)\n  FrontFace(lua_Table *, const osg::FrontFace &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::FrontFace::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::FrontFace::cloneType() const function, expected prototype:\nosg::Object * osg::FrontFace::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::FrontFace::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::FrontFace::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::FrontFace::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::FrontFace::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FrontFace::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::FrontFace::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::FrontFace::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FrontFace::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::FrontFace::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FrontFace::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::FrontFace::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::FrontFace::libraryName() const function, expected prototype:\nconst char * osg::FrontFace::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::FrontFace::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::FrontFace::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::FrontFace::className() const function, expected prototype:\nconst char * osg::FrontFace::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::FrontFace::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::FrontFace::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::FrontFace::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::FrontFace::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::FrontFace::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::FrontFace::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::FrontFace::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::FrontFace::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::FrontFace::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::FrontFace::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::FrontFace::setMode(osg::FrontFace::Mode mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrontFace::setMode(osg::FrontFace::Mode mode) function, expected prototype:\nvoid osg::FrontFace::setMode(osg::FrontFace::Mode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::FrontFace::Mode mode=(osg::FrontFace::Mode)lua_tointeger(L,2);

		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrontFace::setMode(osg::FrontFace::Mode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMode(mode);

		return 0;
	}

	// osg::FrontFace::Mode osg::FrontFace::getMode() const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrontFace::Mode osg::FrontFace::getMode() const function, expected prototype:\nosg::FrontFace::Mode osg::FrontFace::getMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::FrontFace::Mode osg::FrontFace::getMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::FrontFace::Mode lret = self->getMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::FrontFace::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrontFace::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::FrontFace::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FrontFace::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrontFace::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::FrontFace::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrontFace::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::FrontFace::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrontFace::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FrontFace::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::FrontFace::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrontFace::base_setName(const std::string & name) function, expected prototype:\nvoid osg::FrontFace::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrontFace::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FrontFace::setName(name);

		return 0;
	}

	// void osg::FrontFace::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrontFace::base_computeDataVariance() function, expected prototype:\nvoid osg::FrontFace::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrontFace::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FrontFace::computeDataVariance();

		return 0;
	}

	// void osg::FrontFace::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrontFace::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::FrontFace::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrontFace::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FrontFace::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::FrontFace::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::FrontFace::base_getUserData() function, expected prototype:\nosg::Referenced * osg::FrontFace::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::FrontFace::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->FrontFace::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::FrontFace::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::FrontFace::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::FrontFace::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::FrontFace::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->FrontFace::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::FrontFace::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::FrontFace::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::FrontFace::base_asTexture() function, expected prototype:\nosg::Texture * osg::FrontFace::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::FrontFace::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->FrontFace::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::FrontFace::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::FrontFace::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::FrontFace::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::FrontFace::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->FrontFace::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::FrontFace::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::FrontFace::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::FrontFace::base_getMember() const function, expected prototype:\nunsigned int osg::FrontFace::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::FrontFace::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->FrontFace::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::FrontFace::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FrontFace::base_isTextureAttribute() const function, expected prototype:\nbool osg::FrontFace::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FrontFace::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FrontFace::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::FrontFace::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FrontFace::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::FrontFace::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FrontFace::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FrontFace::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FrontFace::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::FrontFace::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FrontFace::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::FrontFace::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FrontFace::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FrontFace::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FrontFace::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::FrontFace::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrontFace::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::FrontFace::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FrontFace::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrontFace::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FrontFace::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::FrontFace::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrontFace::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::FrontFace::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrontFace::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FrontFace::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::FrontFace::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::FrontFace::base_cloneType() const function, expected prototype:\nosg::Object * osg::FrontFace::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::FrontFace::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->FrontFace::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::FrontFace::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::FrontFace::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::FrontFace::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FrontFace::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::FrontFace::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->FrontFace::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::FrontFace::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FrontFace::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::FrontFace::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FrontFace::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FrontFace::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::FrontFace::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::FrontFace::base_libraryName() const function, expected prototype:\nconst char * osg::FrontFace::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::FrontFace::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->FrontFace::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::FrontFace::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::FrontFace::base_className() const function, expected prototype:\nconst char * osg::FrontFace::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::FrontFace::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->FrontFace::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::FrontFace::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::FrontFace::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::FrontFace::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::FrontFace::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->FrontFace::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::FrontFace::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::FrontFace::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::FrontFace::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::FrontFace::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::FrontFace::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->FrontFace::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::FrontFace::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrontFace::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::FrontFace::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FrontFace::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::FrontFace* self=Luna< osg::Referenced >::checkSubType< osg::FrontFace >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrontFace::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FrontFace::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::FrontFace* LunaTraits< osg::FrontFace >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_FrontFace::_bind_ctor(L);
}

void LunaTraits< osg::FrontFace >::_bind_dtor(osg::FrontFace* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::FrontFace >::className[] = "FrontFace";
const char LunaTraits< osg::FrontFace >::fullName[] = "osg::FrontFace";
const char LunaTraits< osg::FrontFace >::moduleName[] = "osg";
const char* LunaTraits< osg::FrontFace >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::FrontFace >::hash = 998802;
const int LunaTraits< osg::FrontFace >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::FrontFace >::methods[] = {
	{"cloneType", &luna_wrapper_osg_FrontFace::_bind_cloneType},
	{"clone", &luna_wrapper_osg_FrontFace::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_FrontFace::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_FrontFace::_bind_libraryName},
	{"className", &luna_wrapper_osg_FrontFace::_bind_className},
	{"getType", &luna_wrapper_osg_FrontFace::_bind_getType},
	{"compare", &luna_wrapper_osg_FrontFace::_bind_compare},
	{"setMode", &luna_wrapper_osg_FrontFace::_bind_setMode},
	{"getMode", &luna_wrapper_osg_FrontFace::_bind_getMode},
	{"apply", &luna_wrapper_osg_FrontFace::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_FrontFace::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_FrontFace::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_FrontFace::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_FrontFace::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_FrontFace::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_FrontFace::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_FrontFace::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_FrontFace::_bind_base_isTextureAttribute},
	{"base_getModeUsage", &luna_wrapper_osg_FrontFace::_bind_base_getModeUsage},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_FrontFace::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_FrontFace::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_FrontFace::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_FrontFace::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_FrontFace::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_FrontFace::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_FrontFace::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_FrontFace::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_FrontFace::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_FrontFace::_bind_base_compare},
	{"base_apply", &luna_wrapper_osg_FrontFace::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_FrontFace::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_FrontFace::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_FrontFace::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FrontFace >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_FrontFace::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FrontFace >::enumValues[] = {
	{"CLOCKWISE", osg::FrontFace::CLOCKWISE},
	{"COUNTER_CLOCKWISE", osg::FrontFace::COUNTER_CLOCKWISE},
	{0,0}
};


