#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_LogicOp.h>

class luna_wrapper_osg_LogicOp {
public:
	typedef Luna< osg::LogicOp > luna_t;

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

		osg::LogicOp* self= (osg::LogicOp*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::LogicOp >::push(L,self,false);
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
		//osg::LogicOp* ptr= dynamic_cast< osg::LogicOp* >(Luna< osg::Referenced >::check(L,1));
		osg::LogicOp* ptr= luna_caster< osg::Referenced, osg::LogicOp >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::LogicOp >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setOpcode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOpcode(lua_State *L) {
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
	// osg::LogicOp::LogicOp()
	static osg::LogicOp* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::LogicOp::LogicOp() function, expected prototype:\nosg::LogicOp::LogicOp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::LogicOp();
	}

	// osg::LogicOp::LogicOp(osg::LogicOp::Opcode opcode)
	static osg::LogicOp* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::LogicOp::LogicOp(osg::LogicOp::Opcode opcode) function, expected prototype:\nosg::LogicOp::LogicOp(osg::LogicOp::Opcode opcode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::LogicOp::Opcode opcode=(osg::LogicOp::Opcode)lua_tointeger(L,1);

		return new osg::LogicOp(opcode);
	}

	// osg::LogicOp::LogicOp(const osg::LogicOp & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::LogicOp* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::LogicOp::LogicOp(const osg::LogicOp & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::LogicOp::LogicOp(const osg::LogicOp & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::LogicOp* trans_ptr=(Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in osg::LogicOp::LogicOp function");
		}
		const osg::LogicOp & trans=*trans_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LogicOp::LogicOp function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::LogicOp(trans, copyop);
	}

	// osg::LogicOp::LogicOp(lua_Table * data)
	static osg::LogicOp* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::LogicOp::LogicOp(lua_Table * data) function, expected prototype:\nosg::LogicOp::LogicOp(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_LogicOp(L,NULL);
	}

	// osg::LogicOp::LogicOp(lua_Table * data, osg::LogicOp::Opcode opcode)
	static osg::LogicOp* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::LogicOp::LogicOp(lua_Table * data, osg::LogicOp::Opcode opcode) function, expected prototype:\nosg::LogicOp::LogicOp(lua_Table * data, osg::LogicOp::Opcode opcode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::LogicOp::Opcode opcode=(osg::LogicOp::Opcode)lua_tointeger(L,2);

		return new wrapper_osg_LogicOp(L,NULL, opcode);
	}

	// osg::LogicOp::LogicOp(lua_Table * data, const osg::LogicOp & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::LogicOp* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::LogicOp::LogicOp(lua_Table * data, const osg::LogicOp & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::LogicOp::LogicOp(lua_Table * data, const osg::LogicOp & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::LogicOp* trans_ptr=(Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in osg::LogicOp::LogicOp function");
		}
		const osg::LogicOp & trans=*trans_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LogicOp::LogicOp function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_LogicOp(L,NULL, trans, copyop);
	}

	// Overload binder for osg::LogicOp::LogicOp
	static osg::LogicOp* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function LogicOp, cannot match any of the overloads for function LogicOp:\n  LogicOp()\n  LogicOp(osg::LogicOp::Opcode)\n  LogicOp(const osg::LogicOp &, const osg::CopyOp &)\n  LogicOp(lua_Table *)\n  LogicOp(lua_Table *, osg::LogicOp::Opcode)\n  LogicOp(lua_Table *, const osg::LogicOp &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::LogicOp::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LogicOp::cloneType() const function, expected prototype:\nosg::Object * osg::LogicOp::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::LogicOp::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::LogicOp::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LogicOp::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::LogicOp::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LogicOp::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::LogicOp::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::LogicOp::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LogicOp::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::LogicOp::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LogicOp::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::LogicOp::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::LogicOp::libraryName() const function, expected prototype:\nconst char * osg::LogicOp::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::LogicOp::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::LogicOp::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::LogicOp::className() const function, expected prototype:\nconst char * osg::LogicOp::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::LogicOp::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::LogicOp::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::LogicOp::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::LogicOp::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::LogicOp::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::LogicOp::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::LogicOp::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::LogicOp::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::LogicOp::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::LogicOp::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::LogicOp::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LogicOp::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::LogicOp::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LogicOp::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LogicOp::getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::LogicOp::setOpcode(osg::LogicOp::Opcode opcode)
	static int _bind_setOpcode(lua_State *L) {
		if (!_lg_typecheck_setOpcode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LogicOp::setOpcode(osg::LogicOp::Opcode opcode) function, expected prototype:\nvoid osg::LogicOp::setOpcode(osg::LogicOp::Opcode opcode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::LogicOp::Opcode opcode=(osg::LogicOp::Opcode)lua_tointeger(L,2);

		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LogicOp::setOpcode(osg::LogicOp::Opcode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOpcode(opcode);

		return 0;
	}

	// osg::LogicOp::Opcode osg::LogicOp::getOpcode() const
	static int _bind_getOpcode(lua_State *L) {
		if (!_lg_typecheck_getOpcode(L)) {
			luaL_error(L, "luna typecheck failed in osg::LogicOp::Opcode osg::LogicOp::getOpcode() const function, expected prototype:\nosg::LogicOp::Opcode osg::LogicOp::getOpcode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::LogicOp::Opcode osg::LogicOp::getOpcode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::LogicOp::Opcode lret = self->getOpcode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::LogicOp::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LogicOp::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::LogicOp::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LogicOp::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LogicOp::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::LogicOp::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LogicOp::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::LogicOp::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LogicOp::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LogicOp::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::LogicOp::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LogicOp::base_setName(const std::string & name) function, expected prototype:\nvoid osg::LogicOp::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LogicOp::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LogicOp::setName(name);

		return 0;
	}

	// void osg::LogicOp::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LogicOp::base_computeDataVariance() function, expected prototype:\nvoid osg::LogicOp::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LogicOp::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LogicOp::computeDataVariance();

		return 0;
	}

	// void osg::LogicOp::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LogicOp::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::LogicOp::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LogicOp::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LogicOp::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::LogicOp::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::LogicOp::base_getUserData() function, expected prototype:\nosg::Referenced * osg::LogicOp::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::LogicOp::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->LogicOp::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::LogicOp::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::LogicOp::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::LogicOp::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::LogicOp::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->LogicOp::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LogicOp::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::LogicOp::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::LogicOp::base_asTexture() function, expected prototype:\nosg::Texture * osg::LogicOp::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::LogicOp::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->LogicOp::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::LogicOp::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::LogicOp::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::LogicOp::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::LogicOp::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->LogicOp::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LogicOp::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::LogicOp::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::LogicOp::base_getMember() const function, expected prototype:\nunsigned int osg::LogicOp::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::LogicOp::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->LogicOp::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::LogicOp::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LogicOp::base_isTextureAttribute() const function, expected prototype:\nbool osg::LogicOp::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LogicOp::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LogicOp::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LogicOp::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LogicOp::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::LogicOp::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LogicOp::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LogicOp::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LogicOp::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::LogicOp::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LogicOp::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::LogicOp::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LogicOp::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LogicOp::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LogicOp::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::LogicOp::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LogicOp::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::LogicOp::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LogicOp::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LogicOp::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::LogicOp::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LogicOp::base_cloneType() const function, expected prototype:\nosg::Object * osg::LogicOp::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::LogicOp::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->LogicOp::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::LogicOp::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LogicOp::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::LogicOp::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LogicOp::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::LogicOp::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->LogicOp::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::LogicOp::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LogicOp::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::LogicOp::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LogicOp::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LogicOp::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::LogicOp::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::LogicOp::base_libraryName() const function, expected prototype:\nconst char * osg::LogicOp::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::LogicOp::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LogicOp::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::LogicOp::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::LogicOp::base_className() const function, expected prototype:\nconst char * osg::LogicOp::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::LogicOp::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LogicOp::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::LogicOp::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::LogicOp::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::LogicOp::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::LogicOp::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->LogicOp::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::LogicOp::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::LogicOp::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::LogicOp::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::LogicOp::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::LogicOp::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->LogicOp::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::LogicOp::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LogicOp::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::LogicOp::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LogicOp::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LogicOp::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LogicOp::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::LogicOp::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LogicOp::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::LogicOp::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LogicOp::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::LogicOp* self=Luna< osg::Referenced >::checkSubType< osg::LogicOp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LogicOp::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LogicOp::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::LogicOp* LunaTraits< osg::LogicOp >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_LogicOp::_bind_ctor(L);
}

void LunaTraits< osg::LogicOp >::_bind_dtor(osg::LogicOp* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::LogicOp >::className[] = "LogicOp";
const char LunaTraits< osg::LogicOp >::fullName[] = "osg::LogicOp";
const char LunaTraits< osg::LogicOp >::moduleName[] = "osg";
const char* LunaTraits< osg::LogicOp >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::LogicOp >::hash = 19927383;
const int LunaTraits< osg::LogicOp >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::LogicOp >::methods[] = {
	{"cloneType", &luna_wrapper_osg_LogicOp::_bind_cloneType},
	{"clone", &luna_wrapper_osg_LogicOp::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_LogicOp::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_LogicOp::_bind_libraryName},
	{"className", &luna_wrapper_osg_LogicOp::_bind_className},
	{"getType", &luna_wrapper_osg_LogicOp::_bind_getType},
	{"compare", &luna_wrapper_osg_LogicOp::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_LogicOp::_bind_getModeUsage},
	{"setOpcode", &luna_wrapper_osg_LogicOp::_bind_setOpcode},
	{"getOpcode", &luna_wrapper_osg_LogicOp::_bind_getOpcode},
	{"apply", &luna_wrapper_osg_LogicOp::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_LogicOp::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_LogicOp::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_LogicOp::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_LogicOp::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_LogicOp::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_LogicOp::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_LogicOp::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_LogicOp::_bind_base_isTextureAttribute},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_LogicOp::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_LogicOp::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_LogicOp::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_LogicOp::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_LogicOp::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_LogicOp::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_LogicOp::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_LogicOp::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_LogicOp::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_LogicOp::_bind_base_compare},
	{"base_getModeUsage", &luna_wrapper_osg_LogicOp::_bind_base_getModeUsage},
	{"base_apply", &luna_wrapper_osg_LogicOp::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_LogicOp::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_LogicOp::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_LogicOp::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::LogicOp >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_LogicOp::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::LogicOp >::enumValues[] = {
	{"CLEAR", osg::LogicOp::CLEAR},
	{"SET", osg::LogicOp::SET},
	{"COPY", osg::LogicOp::COPY},
	{"COPY_INVERTED", osg::LogicOp::COPY_INVERTED},
	{"NOOP", osg::LogicOp::NOOP},
	{"INVERT", osg::LogicOp::INVERT},
	{"AND", osg::LogicOp::AND},
	{"NAND", osg::LogicOp::NAND},
	{"OR", osg::LogicOp::OR},
	{"NOR", osg::LogicOp::NOR},
	{"XOR", osg::LogicOp::XOR},
	{"EQUIV", osg::LogicOp::EQUIV},
	{"AND_REVERSE", osg::LogicOp::AND_REVERSE},
	{"AND_INVERTED", osg::LogicOp::AND_INVERTED},
	{"OR_REVERSE", osg::LogicOp::OR_REVERSE},
	{"OR_INVERTED", osg::LogicOp::OR_INVERTED},
	{0,0}
};


