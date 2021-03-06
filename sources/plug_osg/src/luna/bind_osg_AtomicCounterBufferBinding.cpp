#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_AtomicCounterBufferBinding.h>

class luna_wrapper_osg_AtomicCounterBufferBinding {
public:
	typedef Luna< osg::AtomicCounterBufferBinding > luna_t;

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

		osg::AtomicCounterBufferBinding* self= (osg::AtomicCounterBufferBinding*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::AtomicCounterBufferBinding >::push(L,self,false);
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
		//osg::AtomicCounterBufferBinding* ptr= dynamic_cast< osg::AtomicCounterBufferBinding* >(Luna< osg::Referenced >::check(L,1));
		osg::AtomicCounterBufferBinding* ptr= luna_caster< osg::Referenced, osg::AtomicCounterBufferBinding >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::AtomicCounterBufferBinding >::push(L,ptr,false);
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
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,3)) ) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_readData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,14674410) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::AtomicCounterBufferBinding::AtomicCounterBufferBinding(unsigned int index = 0)
	static osg::AtomicCounterBufferBinding* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::AtomicCounterBufferBinding::AtomicCounterBufferBinding(unsigned int index = 0) function, expected prototype:\nosg::AtomicCounterBufferBinding::AtomicCounterBufferBinding(unsigned int index = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int index=luatop>0 ? (unsigned int)lua_tointeger(L,1) : (unsigned int)0;

		return new osg::AtomicCounterBufferBinding(index);
	}

	// osg::AtomicCounterBufferBinding::AtomicCounterBufferBinding(unsigned int index, osg::BufferObject * bo, int offset, int size)
	static osg::AtomicCounterBufferBinding* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::AtomicCounterBufferBinding::AtomicCounterBufferBinding(unsigned int index, osg::BufferObject * bo, int offset, int size) function, expected prototype:\nosg::AtomicCounterBufferBinding::AtomicCounterBufferBinding(unsigned int index, osg::BufferObject * bo, int offset, int size)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,1);
		osg::BufferObject* bo=(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,2));
		int offset=(int)lua_tointeger(L,3);
		int size=(int)lua_tointeger(L,4);

		return new osg::AtomicCounterBufferBinding(index, bo, offset, size);
	}

	// osg::AtomicCounterBufferBinding::AtomicCounterBufferBinding(const osg::AtomicCounterBufferBinding & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::AtomicCounterBufferBinding* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::AtomicCounterBufferBinding::AtomicCounterBufferBinding(const osg::AtomicCounterBufferBinding & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::AtomicCounterBufferBinding::AtomicCounterBufferBinding(const osg::AtomicCounterBufferBinding & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::AtomicCounterBufferBinding* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::AtomicCounterBufferBinding::AtomicCounterBufferBinding function");
		}
		const osg::AtomicCounterBufferBinding & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AtomicCounterBufferBinding::AtomicCounterBufferBinding function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::AtomicCounterBufferBinding(rhs, copyop);
	}

	// osg::AtomicCounterBufferBinding::AtomicCounterBufferBinding(lua_Table * data, unsigned int index = 0)
	static osg::AtomicCounterBufferBinding* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::AtomicCounterBufferBinding::AtomicCounterBufferBinding(lua_Table * data, unsigned int index = 0) function, expected prototype:\nosg::AtomicCounterBufferBinding::AtomicCounterBufferBinding(lua_Table * data, unsigned int index = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int index=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		return new wrapper_osg_AtomicCounterBufferBinding(L,NULL, index);
	}

	// osg::AtomicCounterBufferBinding::AtomicCounterBufferBinding(lua_Table * data, unsigned int index, osg::BufferObject * bo, int offset, int size)
	static osg::AtomicCounterBufferBinding* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::AtomicCounterBufferBinding::AtomicCounterBufferBinding(lua_Table * data, unsigned int index, osg::BufferObject * bo, int offset, int size) function, expected prototype:\nosg::AtomicCounterBufferBinding::AtomicCounterBufferBinding(lua_Table * data, unsigned int index, osg::BufferObject * bo, int offset, int size)\nClass arguments details:\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::BufferObject* bo=(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,3));
		int offset=(int)lua_tointeger(L,4);
		int size=(int)lua_tointeger(L,5);

		return new wrapper_osg_AtomicCounterBufferBinding(L,NULL, index, bo, offset, size);
	}

	// osg::AtomicCounterBufferBinding::AtomicCounterBufferBinding(lua_Table * data, const osg::AtomicCounterBufferBinding & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::AtomicCounterBufferBinding* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::AtomicCounterBufferBinding::AtomicCounterBufferBinding(lua_Table * data, const osg::AtomicCounterBufferBinding & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::AtomicCounterBufferBinding::AtomicCounterBufferBinding(lua_Table * data, const osg::AtomicCounterBufferBinding & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::AtomicCounterBufferBinding* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::AtomicCounterBufferBinding::AtomicCounterBufferBinding function");
		}
		const osg::AtomicCounterBufferBinding & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AtomicCounterBufferBinding::AtomicCounterBufferBinding function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_AtomicCounterBufferBinding(L,NULL, rhs, copyop);
	}

	// Overload binder for osg::AtomicCounterBufferBinding::AtomicCounterBufferBinding
	static osg::AtomicCounterBufferBinding* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function AtomicCounterBufferBinding, cannot match any of the overloads for function AtomicCounterBufferBinding:\n  AtomicCounterBufferBinding(unsigned int)\n  AtomicCounterBufferBinding(unsigned int, osg::BufferObject *, int, int)\n  AtomicCounterBufferBinding(const osg::AtomicCounterBufferBinding &, const osg::CopyOp &)\n  AtomicCounterBufferBinding(lua_Table *, unsigned int)\n  AtomicCounterBufferBinding(lua_Table *, unsigned int, osg::BufferObject *, int, int)\n  AtomicCounterBufferBinding(lua_Table *, const osg::AtomicCounterBufferBinding &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::AtomicCounterBufferBinding::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AtomicCounterBufferBinding::cloneType() const function, expected prototype:\nosg::Object * osg::AtomicCounterBufferBinding::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AtomicCounterBufferBinding::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::AtomicCounterBufferBinding::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AtomicCounterBufferBinding::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::AtomicCounterBufferBinding::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AtomicCounterBufferBinding::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AtomicCounterBufferBinding::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::AtomicCounterBufferBinding::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AtomicCounterBufferBinding::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::AtomicCounterBufferBinding::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AtomicCounterBufferBinding::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::AtomicCounterBufferBinding::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AtomicCounterBufferBinding::libraryName() const function, expected prototype:\nconst char * osg::AtomicCounterBufferBinding::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AtomicCounterBufferBinding::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AtomicCounterBufferBinding::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AtomicCounterBufferBinding::className() const function, expected prototype:\nconst char * osg::AtomicCounterBufferBinding::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AtomicCounterBufferBinding::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::AtomicCounterBufferBinding::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::AtomicCounterBufferBinding::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::AtomicCounterBufferBinding::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::AtomicCounterBufferBinding::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AtomicCounterBufferBinding::readData(osg::State & state, osg::UIntArray & uintArray) const
	static int _bind_readData(lua_State *L) {
		if (!_lg_typecheck_readData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AtomicCounterBufferBinding::readData(osg::State & state, osg::UIntArray & uintArray) const function, expected prototype:\nvoid osg::AtomicCounterBufferBinding::readData(osg::State & state, osg::UIntArray & uintArray) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 86600648\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::AtomicCounterBufferBinding::readData function");
		}
		osg::State & state=*state_ptr;
		osg::UIntArray* uintArray_ptr=(Luna< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::checkSubType< osg::UIntArray >(L,3));
		if( !uintArray_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg uintArray in osg::AtomicCounterBufferBinding::readData function");
		}
		osg::UIntArray & uintArray=*uintArray_ptr;

		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AtomicCounterBufferBinding::readData(osg::State &, osg::UIntArray &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readData(state, uintArray);

		return 0;
	}

	// int osg::AtomicCounterBufferBinding::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::AtomicCounterBufferBinding::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::AtomicCounterBufferBinding::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::AtomicCounterBufferBinding::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::AtomicCounterBufferBinding::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AtomicCounterBufferBinding::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AtomicCounterBufferBinding::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::AtomicCounterBufferBinding::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AtomicCounterBufferBinding::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AtomicCounterBufferBinding::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::AtomicCounterBufferBinding::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AtomicCounterBufferBinding::base_setName(const std::string & name) function, expected prototype:\nvoid osg::AtomicCounterBufferBinding::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AtomicCounterBufferBinding::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AtomicCounterBufferBinding::setName(name);

		return 0;
	}

	// void osg::AtomicCounterBufferBinding::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AtomicCounterBufferBinding::base_computeDataVariance() function, expected prototype:\nvoid osg::AtomicCounterBufferBinding::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AtomicCounterBufferBinding::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AtomicCounterBufferBinding::computeDataVariance();

		return 0;
	}

	// void osg::AtomicCounterBufferBinding::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AtomicCounterBufferBinding::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::AtomicCounterBufferBinding::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AtomicCounterBufferBinding::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AtomicCounterBufferBinding::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::AtomicCounterBufferBinding::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::AtomicCounterBufferBinding::base_getUserData() function, expected prototype:\nosg::Referenced * osg::AtomicCounterBufferBinding::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::AtomicCounterBufferBinding::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->AtomicCounterBufferBinding::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::AtomicCounterBufferBinding::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::AtomicCounterBufferBinding::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::AtomicCounterBufferBinding::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::AtomicCounterBufferBinding::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->AtomicCounterBufferBinding::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AtomicCounterBufferBinding::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::AtomicCounterBufferBinding::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::AtomicCounterBufferBinding::base_asTexture() function, expected prototype:\nosg::Texture * osg::AtomicCounterBufferBinding::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::AtomicCounterBufferBinding::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->AtomicCounterBufferBinding::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::AtomicCounterBufferBinding::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::AtomicCounterBufferBinding::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::AtomicCounterBufferBinding::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::AtomicCounterBufferBinding::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->AtomicCounterBufferBinding::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AtomicCounterBufferBinding::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// bool osg::AtomicCounterBufferBinding::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AtomicCounterBufferBinding::base_isTextureAttribute() const function, expected prototype:\nbool osg::AtomicCounterBufferBinding::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AtomicCounterBufferBinding::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AtomicCounterBufferBinding::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::AtomicCounterBufferBinding::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AtomicCounterBufferBinding::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::AtomicCounterBufferBinding::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AtomicCounterBufferBinding::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AtomicCounterBufferBinding::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AtomicCounterBufferBinding::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::AtomicCounterBufferBinding::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AtomicCounterBufferBinding::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::AtomicCounterBufferBinding::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AtomicCounterBufferBinding::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AtomicCounterBufferBinding::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AtomicCounterBufferBinding::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::AtomicCounterBufferBinding::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AtomicCounterBufferBinding::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::AtomicCounterBufferBinding::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AtomicCounterBufferBinding::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AtomicCounterBufferBinding::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AtomicCounterBufferBinding::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::AtomicCounterBufferBinding::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AtomicCounterBufferBinding::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::AtomicCounterBufferBinding::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AtomicCounterBufferBinding::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AtomicCounterBufferBinding::releaseGLObjects(_arg1);

		return 0;
	}

	// unsigned int osg::AtomicCounterBufferBinding::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::AtomicCounterBufferBinding::base_getMember() const function, expected prototype:\nunsigned int osg::AtomicCounterBufferBinding::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::AtomicCounterBufferBinding::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->AtomicCounterBufferBinding::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AtomicCounterBufferBinding::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AtomicCounterBufferBinding::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::AtomicCounterBufferBinding::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AtomicCounterBufferBinding::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AtomicCounterBufferBinding::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AtomicCounterBufferBinding::apply(_arg1);

		return 0;
	}

	// osg::Object * osg::AtomicCounterBufferBinding::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AtomicCounterBufferBinding::base_cloneType() const function, expected prototype:\nosg::Object * osg::AtomicCounterBufferBinding::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AtomicCounterBufferBinding::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->AtomicCounterBufferBinding::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::AtomicCounterBufferBinding::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AtomicCounterBufferBinding::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::AtomicCounterBufferBinding::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AtomicCounterBufferBinding::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::AtomicCounterBufferBinding::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->AtomicCounterBufferBinding::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::AtomicCounterBufferBinding::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AtomicCounterBufferBinding::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::AtomicCounterBufferBinding::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AtomicCounterBufferBinding::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AtomicCounterBufferBinding::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::AtomicCounterBufferBinding::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AtomicCounterBufferBinding::base_libraryName() const function, expected prototype:\nconst char * osg::AtomicCounterBufferBinding::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AtomicCounterBufferBinding::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AtomicCounterBufferBinding::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AtomicCounterBufferBinding::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AtomicCounterBufferBinding::base_className() const function, expected prototype:\nconst char * osg::AtomicCounterBufferBinding::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AtomicCounterBufferBinding::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AtomicCounterBufferBinding::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::AtomicCounterBufferBinding::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::AtomicCounterBufferBinding::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::AtomicCounterBufferBinding::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::AtomicCounterBufferBinding::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->AtomicCounterBufferBinding::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::AtomicCounterBufferBinding::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::AtomicCounterBufferBinding::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::AtomicCounterBufferBinding::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::AtomicCounterBufferBinding::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::AtomicCounterBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::AtomicCounterBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::AtomicCounterBufferBinding::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->AtomicCounterBufferBinding::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::AtomicCounterBufferBinding* LunaTraits< osg::AtomicCounterBufferBinding >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_AtomicCounterBufferBinding::_bind_ctor(L);
}

void LunaTraits< osg::AtomicCounterBufferBinding >::_bind_dtor(osg::AtomicCounterBufferBinding* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::AtomicCounterBufferBinding >::className[] = "AtomicCounterBufferBinding";
const char LunaTraits< osg::AtomicCounterBufferBinding >::fullName[] = "osg::AtomicCounterBufferBinding";
const char LunaTraits< osg::AtomicCounterBufferBinding >::moduleName[] = "osg";
const char* LunaTraits< osg::AtomicCounterBufferBinding >::parents[] = {"osg.BufferIndexBinding", 0};
const int LunaTraits< osg::AtomicCounterBufferBinding >::hash = 54089442;
const int LunaTraits< osg::AtomicCounterBufferBinding >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::AtomicCounterBufferBinding >::methods[] = {
	{"cloneType", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_cloneType},
	{"clone", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_libraryName},
	{"className", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_className},
	{"getType", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_getType},
	{"readData", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_readData},
	{"compare", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_compare},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_asTexture},
	{"base_isTextureAttribute", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_isTextureAttribute},
	{"base_getModeUsage", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_getModeUsage},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_releaseGLObjects},
	{"base_getMember", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_getMember},
	{"base_apply", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_apply},
	{"base_cloneType", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_base_compare},
	{"fromVoid", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_AtomicCounterBufferBinding::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::AtomicCounterBufferBinding >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_AtomicCounterBufferBinding::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::AtomicCounterBufferBinding >::enumValues[] = {
	{0,0}
};


