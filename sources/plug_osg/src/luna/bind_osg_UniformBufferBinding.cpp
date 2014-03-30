#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_UniformBufferBinding.h>

class luna_wrapper_osg_UniformBufferBinding {
public:
	typedef Luna< osg::UniformBufferBinding > luna_t;

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

		osg::UniformBufferBinding* self= (osg::UniformBufferBinding*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::UniformBufferBinding >::push(L,self,false);
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
		//osg::UniformBufferBinding* ptr= dynamic_cast< osg::UniformBufferBinding* >(Luna< osg::Referenced >::check(L,1));
		osg::UniformBufferBinding* ptr= luna_caster< osg::Referenced, osg::UniformBufferBinding >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::UniformBufferBinding >::push(L,ptr,false);
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
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1))) ) return false;
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
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,3)) ) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,2))) ) return false;
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
	// osg::UniformBufferBinding::UniformBufferBinding()
	static osg::UniformBufferBinding* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::UniformBufferBinding::UniformBufferBinding() function, expected prototype:\nosg::UniformBufferBinding::UniformBufferBinding()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::UniformBufferBinding();
	}

	// osg::UniformBufferBinding::UniformBufferBinding(unsigned int index)
	static osg::UniformBufferBinding* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::UniformBufferBinding::UniformBufferBinding(unsigned int index) function, expected prototype:\nosg::UniformBufferBinding::UniformBufferBinding(unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,1);

		return new osg::UniformBufferBinding(index);
	}

	// osg::UniformBufferBinding::UniformBufferBinding(unsigned int index, osg::BufferObject * bo, int offset, int size)
	static osg::UniformBufferBinding* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::UniformBufferBinding::UniformBufferBinding(unsigned int index, osg::BufferObject * bo, int offset, int size) function, expected prototype:\nosg::UniformBufferBinding::UniformBufferBinding(unsigned int index, osg::BufferObject * bo, int offset, int size)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,1);
		osg::BufferObject* bo=(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,2));
		int offset=(int)lua_tointeger(L,3);
		int size=(int)lua_tointeger(L,4);

		return new osg::UniformBufferBinding(index, bo, offset, size);
	}

	// osg::UniformBufferBinding::UniformBufferBinding(const osg::UniformBufferBinding & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::UniformBufferBinding* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::UniformBufferBinding::UniformBufferBinding(const osg::UniformBufferBinding & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::UniformBufferBinding::UniformBufferBinding(const osg::UniformBufferBinding & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::UniformBufferBinding* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::UniformBufferBinding::UniformBufferBinding function");
		}
		const osg::UniformBufferBinding & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::UniformBufferBinding::UniformBufferBinding function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::UniformBufferBinding(rhs, copyop);
	}

	// osg::UniformBufferBinding::UniformBufferBinding(lua_Table * data)
	static osg::UniformBufferBinding* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::UniformBufferBinding::UniformBufferBinding(lua_Table * data) function, expected prototype:\nosg::UniformBufferBinding::UniformBufferBinding(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_UniformBufferBinding(L,NULL);
	}

	// osg::UniformBufferBinding::UniformBufferBinding(lua_Table * data, unsigned int index)
	static osg::UniformBufferBinding* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::UniformBufferBinding::UniformBufferBinding(lua_Table * data, unsigned int index) function, expected prototype:\nosg::UniformBufferBinding::UniformBufferBinding(lua_Table * data, unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_UniformBufferBinding(L,NULL, index);
	}

	// osg::UniformBufferBinding::UniformBufferBinding(lua_Table * data, unsigned int index, osg::BufferObject * bo, int offset, int size)
	static osg::UniformBufferBinding* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in osg::UniformBufferBinding::UniformBufferBinding(lua_Table * data, unsigned int index, osg::BufferObject * bo, int offset, int size) function, expected prototype:\nosg::UniformBufferBinding::UniformBufferBinding(lua_Table * data, unsigned int index, osg::BufferObject * bo, int offset, int size)\nClass arguments details:\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::BufferObject* bo=(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,3));
		int offset=(int)lua_tointeger(L,4);
		int size=(int)lua_tointeger(L,5);

		return new wrapper_osg_UniformBufferBinding(L,NULL, index, bo, offset, size);
	}

	// osg::UniformBufferBinding::UniformBufferBinding(lua_Table * data, const osg::UniformBufferBinding & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::UniformBufferBinding* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in osg::UniformBufferBinding::UniformBufferBinding(lua_Table * data, const osg::UniformBufferBinding & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::UniformBufferBinding::UniformBufferBinding(lua_Table * data, const osg::UniformBufferBinding & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::UniformBufferBinding* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::UniformBufferBinding::UniformBufferBinding function");
		}
		const osg::UniformBufferBinding & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::UniformBufferBinding::UniformBufferBinding function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_UniformBufferBinding(L,NULL, rhs, copyop);
	}

	// Overload binder for osg::UniformBufferBinding::UniformBufferBinding
	static osg::UniformBufferBinding* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function UniformBufferBinding, cannot match any of the overloads for function UniformBufferBinding:\n  UniformBufferBinding()\n  UniformBufferBinding(unsigned int)\n  UniformBufferBinding(unsigned int, osg::BufferObject *, int, int)\n  UniformBufferBinding(const osg::UniformBufferBinding &, const osg::CopyOp &)\n  UniformBufferBinding(lua_Table *)\n  UniformBufferBinding(lua_Table *, unsigned int)\n  UniformBufferBinding(lua_Table *, unsigned int, osg::BufferObject *, int, int)\n  UniformBufferBinding(lua_Table *, const osg::UniformBufferBinding &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::UniformBufferBinding::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::UniformBufferBinding::cloneType() const function, expected prototype:\nosg::Object * osg::UniformBufferBinding::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::UniformBufferBinding::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::UniformBufferBinding::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::UniformBufferBinding::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::UniformBufferBinding::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::UniformBufferBinding::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::UniformBufferBinding::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::UniformBufferBinding::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::UniformBufferBinding::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::UniformBufferBinding::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::UniformBufferBinding::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::UniformBufferBinding::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::UniformBufferBinding::libraryName() const function, expected prototype:\nconst char * osg::UniformBufferBinding::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::UniformBufferBinding::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::UniformBufferBinding::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::UniformBufferBinding::className() const function, expected prototype:\nconst char * osg::UniformBufferBinding::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::UniformBufferBinding::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::UniformBufferBinding::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::UniformBufferBinding::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::UniformBufferBinding::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::UniformBufferBinding::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::UniformBufferBinding::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::UniformBufferBinding::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::UniformBufferBinding::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::UniformBufferBinding::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::UniformBufferBinding::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::UniformBufferBinding::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::UniformBufferBinding::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::UniformBufferBinding::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::UniformBufferBinding::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UniformBufferBinding::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::UniformBufferBinding::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::UniformBufferBinding::base_setName(const std::string & name) function, expected prototype:\nvoid osg::UniformBufferBinding::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::UniformBufferBinding::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UniformBufferBinding::setName(name);

		return 0;
	}

	// void osg::UniformBufferBinding::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::UniformBufferBinding::base_computeDataVariance() function, expected prototype:\nvoid osg::UniformBufferBinding::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::UniformBufferBinding::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UniformBufferBinding::computeDataVariance();

		return 0;
	}

	// void osg::UniformBufferBinding::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::UniformBufferBinding::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::UniformBufferBinding::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::UniformBufferBinding::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UniformBufferBinding::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::UniformBufferBinding::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::UniformBufferBinding::base_getUserData() function, expected prototype:\nosg::Referenced * osg::UniformBufferBinding::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::UniformBufferBinding::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->UniformBufferBinding::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::UniformBufferBinding::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::UniformBufferBinding::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::UniformBufferBinding::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::UniformBufferBinding::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->UniformBufferBinding::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::UniformBufferBinding::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::UniformBufferBinding::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::UniformBufferBinding::base_asTexture() function, expected prototype:\nosg::Texture * osg::UniformBufferBinding::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::UniformBufferBinding::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->UniformBufferBinding::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::UniformBufferBinding::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::UniformBufferBinding::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::UniformBufferBinding::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::UniformBufferBinding::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->UniformBufferBinding::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::UniformBufferBinding::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// bool osg::UniformBufferBinding::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::UniformBufferBinding::base_isTextureAttribute() const function, expected prototype:\nbool osg::UniformBufferBinding::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::UniformBufferBinding::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->UniformBufferBinding::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::UniformBufferBinding::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::UniformBufferBinding::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::UniformBufferBinding::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::UniformBufferBinding::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::UniformBufferBinding::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->UniformBufferBinding::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::UniformBufferBinding::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::UniformBufferBinding::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::UniformBufferBinding::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::UniformBufferBinding::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::UniformBufferBinding::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->UniformBufferBinding::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::UniformBufferBinding::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::UniformBufferBinding::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::UniformBufferBinding::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::UniformBufferBinding::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::UniformBufferBinding::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UniformBufferBinding::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::UniformBufferBinding::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::UniformBufferBinding::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::UniformBufferBinding::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::UniformBufferBinding::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UniformBufferBinding::releaseGLObjects(_arg1);

		return 0;
	}

	// unsigned int osg::UniformBufferBinding::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::UniformBufferBinding::base_getMember() const function, expected prototype:\nunsigned int osg::UniformBufferBinding::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::UniformBufferBinding::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->UniformBufferBinding::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::UniformBufferBinding::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::UniformBufferBinding::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::UniformBufferBinding::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::UniformBufferBinding::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::UniformBufferBinding::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UniformBufferBinding::apply(_arg1);

		return 0;
	}

	// osg::Object * osg::UniformBufferBinding::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::UniformBufferBinding::base_cloneType() const function, expected prototype:\nosg::Object * osg::UniformBufferBinding::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::UniformBufferBinding::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->UniformBufferBinding::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::UniformBufferBinding::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::UniformBufferBinding::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::UniformBufferBinding::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::UniformBufferBinding::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::UniformBufferBinding::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->UniformBufferBinding::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::UniformBufferBinding::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::UniformBufferBinding::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::UniformBufferBinding::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::UniformBufferBinding::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->UniformBufferBinding::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::UniformBufferBinding::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::UniformBufferBinding::base_libraryName() const function, expected prototype:\nconst char * osg::UniformBufferBinding::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::UniformBufferBinding::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->UniformBufferBinding::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::UniformBufferBinding::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::UniformBufferBinding::base_className() const function, expected prototype:\nconst char * osg::UniformBufferBinding::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::UniformBufferBinding::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->UniformBufferBinding::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::UniformBufferBinding::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::UniformBufferBinding::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::UniformBufferBinding::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::UniformBufferBinding::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->UniformBufferBinding::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::UniformBufferBinding::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::UniformBufferBinding::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::UniformBufferBinding::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::UniformBufferBinding::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::UniformBufferBinding* self=Luna< osg::Referenced >::checkSubType< osg::UniformBufferBinding >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::UniformBufferBinding::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->UniformBufferBinding::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::UniformBufferBinding* LunaTraits< osg::UniformBufferBinding >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_UniformBufferBinding::_bind_ctor(L);
}

void LunaTraits< osg::UniformBufferBinding >::_bind_dtor(osg::UniformBufferBinding* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::UniformBufferBinding >::className[] = "UniformBufferBinding";
const char LunaTraits< osg::UniformBufferBinding >::fullName[] = "osg::UniformBufferBinding";
const char LunaTraits< osg::UniformBufferBinding >::moduleName[] = "osg";
const char* LunaTraits< osg::UniformBufferBinding >::parents[] = {"osg.BufferIndexBinding", 0};
const int LunaTraits< osg::UniformBufferBinding >::hash = 71213788;
const int LunaTraits< osg::UniformBufferBinding >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::UniformBufferBinding >::methods[] = {
	{"cloneType", &luna_wrapper_osg_UniformBufferBinding::_bind_cloneType},
	{"clone", &luna_wrapper_osg_UniformBufferBinding::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_UniformBufferBinding::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_UniformBufferBinding::_bind_libraryName},
	{"className", &luna_wrapper_osg_UniformBufferBinding::_bind_className},
	{"getType", &luna_wrapper_osg_UniformBufferBinding::_bind_getType},
	{"compare", &luna_wrapper_osg_UniformBufferBinding::_bind_compare},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_UniformBufferBinding::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_UniformBufferBinding::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_UniformBufferBinding::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_UniformBufferBinding::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_UniformBufferBinding::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_UniformBufferBinding::_bind_base_asTexture},
	{"base_isTextureAttribute", &luna_wrapper_osg_UniformBufferBinding::_bind_base_isTextureAttribute},
	{"base_getModeUsage", &luna_wrapper_osg_UniformBufferBinding::_bind_base_getModeUsage},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_UniformBufferBinding::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_UniformBufferBinding::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_UniformBufferBinding::_bind_base_releaseGLObjects},
	{"base_getMember", &luna_wrapper_osg_UniformBufferBinding::_bind_base_getMember},
	{"base_apply", &luna_wrapper_osg_UniformBufferBinding::_bind_base_apply},
	{"base_cloneType", &luna_wrapper_osg_UniformBufferBinding::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_UniformBufferBinding::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_UniformBufferBinding::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_UniformBufferBinding::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_UniformBufferBinding::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_UniformBufferBinding::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_UniformBufferBinding::_bind_base_compare},
	{"fromVoid", &luna_wrapper_osg_UniformBufferBinding::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_UniformBufferBinding::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_UniformBufferBinding::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::UniformBufferBinding >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_UniformBufferBinding::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::UniformBufferBinding >::enumValues[] = {
	{0,0}
};


