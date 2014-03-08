#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Array.h>

class luna_wrapper_osg_Array {
public:
	typedef Luna< osg::Array > luna_t;

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

		osg::Array* self= (osg::Array*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Array >::push(L,self,false);
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
		//osg::Array* ptr= dynamic_cast< osg::Array* >(Luna< osg::Referenced >::check(L,1));
		osg::Array* ptr= luna_caster< osg::Referenced, osg::Array >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Array >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
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

	inline static bool _lg_typecheck_accept_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,35264102) ) return false;
		if( (!(Luna< osg::ArrayVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80735172) ) return false;
		if( (!(Luna< osg::ConstArrayVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,87991103) ) return false;
		if( (!(Luna< osg::ValueVisitor >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,86989408) ) return false;
		if( (!(Luna< osg::ConstValueVisitor >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDataType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDataPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTotalDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumElements(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_trim(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertexBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexBufferObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexBufferObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_asPrimitiveSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asPrimitiveSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_asArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_trim(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Array::Array(lua_Table * data, osg::Array::Type arrayType = osg::Array::ArrayType, int dataSize = 0, unsigned int dataType = 0)
	static osg::Array* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array::Array(lua_Table * data, osg::Array::Type arrayType = osg::Array::ArrayType, int dataSize = 0, unsigned int dataType = 0) function, expected prototype:\nosg::Array::Array(lua_Table * data, osg::Array::Type arrayType = osg::Array::ArrayType, int dataSize = 0, unsigned int dataType = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Array::Type arrayType=luatop>1 ? (osg::Array::Type)lua_tointeger(L,2) : (osg::Array::Type)osg::Array::ArrayType;
		int dataSize=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		unsigned int dataType=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)0;

		return new wrapper_osg_Array(L,NULL, arrayType, dataSize, dataType);
	}

	// osg::Array::Array(lua_Table * data, const osg::Array & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Array* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array::Array(lua_Table * data, const osg::Array & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Array::Array(lua_Table * data, const osg::Array & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Array* array_ptr=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));
		if( !array_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg array in osg::Array::Array function");
		}
		const osg::Array & array=*array_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Array::Array function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Array(L,NULL, array, copyop);
	}

	// Overload binder for osg::Array::Array
	static osg::Array* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Array, cannot match any of the overloads for function Array:\n  Array(lua_Table *, osg::Array::Type, int, unsigned int)\n  Array(lua_Table *, const osg::Array &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// bool osg::Array::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Array::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Array::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Array::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Array::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Array::libraryName() const function, expected prototype:\nconst char * osg::Array::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Array::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Array::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Array::className() const function, expected prototype:\nconst char * osg::Array::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Array::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Array::accept(osg::ArrayVisitor & arg1)
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Array::accept(osg::ArrayVisitor & arg1) function, expected prototype:\nvoid osg::Array::accept(osg::ArrayVisitor & arg1)\nClass arguments details:\narg 1 ID = 35264102\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ArrayVisitor* _arg1_ptr=(Luna< osg::ArrayVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Array::accept function");
		}
		osg::ArrayVisitor & _arg1=*_arg1_ptr;

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Array::accept(osg::ArrayVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::Array::accept(osg::ConstArrayVisitor & arg1) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Array::accept(osg::ConstArrayVisitor & arg1) const function, expected prototype:\nvoid osg::Array::accept(osg::ConstArrayVisitor & arg1) const\nClass arguments details:\narg 1 ID = 80735172\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConstArrayVisitor* _arg1_ptr=(Luna< osg::ConstArrayVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Array::accept function");
		}
		osg::ConstArrayVisitor & _arg1=*_arg1_ptr;

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Array::accept(osg::ConstArrayVisitor &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::Array::accept(unsigned int index, osg::ValueVisitor & arg2)
	static int _bind_accept_overload_3(lua_State *L) {
		if (!_lg_typecheck_accept_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Array::accept(unsigned int index, osg::ValueVisitor & arg2) function, expected prototype:\nvoid osg::Array::accept(unsigned int index, osg::ValueVisitor & arg2)\nClass arguments details:\narg 2 ID = 87991103\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::ValueVisitor* _arg2_ptr=(Luna< osg::ValueVisitor >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Array::accept function");
		}
		osg::ValueVisitor & _arg2=*_arg2_ptr;

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Array::accept(unsigned int, osg::ValueVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(index, _arg2);

		return 0;
	}

	// void osg::Array::accept(unsigned int index, osg::ConstValueVisitor & arg2) const
	static int _bind_accept_overload_4(lua_State *L) {
		if (!_lg_typecheck_accept_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Array::accept(unsigned int index, osg::ConstValueVisitor & arg2) const function, expected prototype:\nvoid osg::Array::accept(unsigned int index, osg::ConstValueVisitor & arg2) const\nClass arguments details:\narg 2 ID = 86989408\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::ConstValueVisitor* _arg2_ptr=(Luna< osg::ConstValueVisitor >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Array::accept function");
		}
		osg::ConstValueVisitor & _arg2=*_arg2_ptr;

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Array::accept(unsigned int, osg::ConstValueVisitor &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(index, _arg2);

		return 0;
	}

	// Overload binder for osg::Array::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);
		if (_lg_typecheck_accept_overload_3(L)) return _bind_accept_overload_3(L);
		if (_lg_typecheck_accept_overload_4(L)) return _bind_accept_overload_4(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ArrayVisitor &)\n  accept(osg::ConstArrayVisitor &)\n  accept(unsigned int, osg::ValueVisitor &)\n  accept(unsigned int, osg::ConstValueVisitor &)\n");
		return 0;
	}

	// int osg::Array::compare(unsigned int lhs, unsigned int rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Array::compare(unsigned int lhs, unsigned int rhs) const function, expected prototype:\nint osg::Array::compare(unsigned int lhs, unsigned int rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int lhs=(unsigned int)lua_tointeger(L,2);
		unsigned int rhs=(unsigned int)lua_tointeger(L,3);

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Array::compare(unsigned int, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(lhs, rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Array::Type osg::Array::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array::Type osg::Array::getType() const function, expected prototype:\nosg::Array::Type osg::Array::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array::Type osg::Array::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Array::getDataSize() const
	static int _bind_getDataSize(lua_State *L) {
		if (!_lg_typecheck_getDataSize(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Array::getDataSize() const function, expected prototype:\nint osg::Array::getDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Array::getDataSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Array::getDataType() const
	static int _bind_getDataType(lua_State *L) {
		if (!_lg_typecheck_getDataType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Array::getDataType() const function, expected prototype:\nunsigned int osg::Array::getDataType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Array::getDataType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getDataType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Array * osg::Array::asArray()
	static int _bind_asArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_asArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::Array::asArray() function, expected prototype:\nosg::Array * osg::Array::asArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::Array::asArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::Array::asArray() const
	static int _bind_asArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_asArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::Array::asArray() const function, expected prototype:\nconst osg::Array * osg::Array::asArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Array * osg::Array::asArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Array * lret = self->asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Array::asArray
	static int _bind_asArray(lua_State *L) {
		if (_lg_typecheck_asArray_overload_1(L)) return _bind_asArray_overload_1(L);
		if (_lg_typecheck_asArray_overload_2(L)) return _bind_asArray_overload_2(L);

		luaL_error(L, "error in function asArray, cannot match any of the overloads for function asArray:\n  asArray()\n  asArray()\n");
		return 0;
	}

	// const void * osg::Array::getDataPointer() const
	static int _bind_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_getDataPointer(L)) {
			luaL_error(L, "luna typecheck failed in const void * osg::Array::getDataPointer() const function, expected prototype:\nconst void * osg::Array::getDataPointer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * osg::Array::getDataPointer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::Array::getTotalDataSize() const
	static int _bind_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_getTotalDataSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Array::getTotalDataSize() const function, expected prototype:\nunsigned int osg::Array::getTotalDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Array::getTotalDataSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Array::getNumElements() const
	static int _bind_getNumElements(lua_State *L) {
		if (!_lg_typecheck_getNumElements(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Array::getNumElements() const function, expected prototype:\nunsigned int osg::Array::getNumElements() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Array::getNumElements() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumElements();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Array::trim()
	static int _bind_trim(lua_State *L) {
		if (!_lg_typecheck_trim(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Array::trim() function, expected prototype:\nvoid osg::Array::trim()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Array::trim(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->trim();

		return 0;
	}

	// void osg::Array::setVertexBufferObject(osg::VertexBufferObject * vbo)
	static int _bind_setVertexBufferObject(lua_State *L) {
		if (!_lg_typecheck_setVertexBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Array::setVertexBufferObject(osg::VertexBufferObject * vbo) function, expected prototype:\nvoid osg::Array::setVertexBufferObject(osg::VertexBufferObject * vbo)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::VertexBufferObject* vbo=(Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,2));

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Array::setVertexBufferObject(osg::VertexBufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexBufferObject(vbo);

		return 0;
	}

	// osg::VertexBufferObject * osg::Array::getVertexBufferObject()
	static int _bind_getVertexBufferObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_getVertexBufferObject_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::VertexBufferObject * osg::Array::getVertexBufferObject() function, expected prototype:\nosg::VertexBufferObject * osg::Array::getVertexBufferObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::VertexBufferObject * osg::Array::getVertexBufferObject(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::VertexBufferObject * lret = self->getVertexBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::VertexBufferObject >::push(L,lret,false);

		return 1;
	}

	// const osg::VertexBufferObject * osg::Array::getVertexBufferObject() const
	static int _bind_getVertexBufferObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_getVertexBufferObject_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::VertexBufferObject * osg::Array::getVertexBufferObject() const function, expected prototype:\nconst osg::VertexBufferObject * osg::Array::getVertexBufferObject() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::VertexBufferObject * osg::Array::getVertexBufferObject() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::VertexBufferObject * lret = self->getVertexBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::VertexBufferObject >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Array::getVertexBufferObject
	static int _bind_getVertexBufferObject(lua_State *L) {
		if (_lg_typecheck_getVertexBufferObject_overload_1(L)) return _bind_getVertexBufferObject_overload_1(L);
		if (_lg_typecheck_getVertexBufferObject_overload_2(L)) return _bind_getVertexBufferObject_overload_2(L);

		luaL_error(L, "error in function getVertexBufferObject, cannot match any of the overloads for function getVertexBufferObject:\n  getVertexBufferObject()\n  getVertexBufferObject()\n");
		return 0;
	}

	// void osg::Array::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Array::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Array::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Array::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Array::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Array::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Array::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Array::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Array::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Array::setName(name);

		return 0;
	}

	// void osg::Array::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Array::base_computeDataVariance() function, expected prototype:\nvoid osg::Array::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Array::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Array::computeDataVariance();

		return 0;
	}

	// void osg::Array::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Array::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Array::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Array::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Array::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Array::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Array::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Array::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Array::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Array::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Array::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Array::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Array::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Array::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Array::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Array::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::PrimitiveSet * osg::Array::base_asPrimitiveSet()
	static int _bind_base_asPrimitiveSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asPrimitiveSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PrimitiveSet * osg::Array::base_asPrimitiveSet() function, expected prototype:\nosg::PrimitiveSet * osg::Array::base_asPrimitiveSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PrimitiveSet * osg::Array::base_asPrimitiveSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PrimitiveSet * lret = self->Array::asPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// const osg::PrimitiveSet * osg::Array::base_asPrimitiveSet() const
	static int _bind_base_asPrimitiveSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asPrimitiveSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::PrimitiveSet * osg::Array::base_asPrimitiveSet() const function, expected prototype:\nconst osg::PrimitiveSet * osg::Array::base_asPrimitiveSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::PrimitiveSet * osg::Array::base_asPrimitiveSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::PrimitiveSet * lret = self->Array::asPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Array::base_asPrimitiveSet
	static int _bind_base_asPrimitiveSet(lua_State *L) {
		if (_lg_typecheck_base_asPrimitiveSet_overload_1(L)) return _bind_base_asPrimitiveSet_overload_1(L);
		if (_lg_typecheck_base_asPrimitiveSet_overload_2(L)) return _bind_base_asPrimitiveSet_overload_2(L);

		luaL_error(L, "error in function base_asPrimitiveSet, cannot match any of the overloads for function base_asPrimitiveSet:\n  base_asPrimitiveSet()\n  base_asPrimitiveSet()\n");
		return 0;
	}

	// osg::Image * osg::Array::base_asImage()
	static int _bind_base_asImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::Array::base_asImage() function, expected prototype:\nosg::Image * osg::Array::base_asImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::Array::base_asImage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->Array::asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::Array::base_asImage() const
	static int _bind_base_asImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::Array::base_asImage() const function, expected prototype:\nconst osg::Image * osg::Array::base_asImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osg::Array::base_asImage() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->Array::asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Array::base_asImage
	static int _bind_base_asImage(lua_State *L) {
		if (_lg_typecheck_base_asImage_overload_1(L)) return _bind_base_asImage_overload_1(L);
		if (_lg_typecheck_base_asImage_overload_2(L)) return _bind_base_asImage_overload_2(L);

		luaL_error(L, "error in function base_asImage, cannot match any of the overloads for function base_asImage:\n  base_asImage()\n  base_asImage()\n");
		return 0;
	}

	// void osg::Array::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Array::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::Array::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Array::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Array::releaseGLObjects(state);

		return 0;
	}

	// bool osg::Array::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Array::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Array::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Array::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Array::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Array::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Array::base_libraryName() const function, expected prototype:\nconst char * osg::Array::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Array::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Array::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Array::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Array::base_className() const function, expected prototype:\nconst char * osg::Array::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Array::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Array::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Array * osg::Array::base_asArray()
	static int _bind_base_asArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::Array::base_asArray() function, expected prototype:\nosg::Array * osg::Array::base_asArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::Array::base_asArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->Array::asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::Array::base_asArray() const
	static int _bind_base_asArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::Array::base_asArray() const function, expected prototype:\nconst osg::Array * osg::Array::base_asArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Array * osg::Array::base_asArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Array * lret = self->Array::asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Array::base_asArray
	static int _bind_base_asArray(lua_State *L) {
		if (_lg_typecheck_base_asArray_overload_1(L)) return _bind_base_asArray_overload_1(L);
		if (_lg_typecheck_base_asArray_overload_2(L)) return _bind_base_asArray_overload_2(L);

		luaL_error(L, "error in function base_asArray, cannot match any of the overloads for function base_asArray:\n  base_asArray()\n  base_asArray()\n");
		return 0;
	}

	// void osg::Array::base_trim()
	static int _bind_base_trim(lua_State *L) {
		if (!_lg_typecheck_base_trim(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Array::base_trim() function, expected prototype:\nvoid osg::Array::base_trim()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Array* self=Luna< osg::Referenced >::checkSubType< osg::Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Array::base_trim(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Array::trim();

		return 0;
	}


	// Operator binds:

};

osg::Array* LunaTraits< osg::Array >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Array::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osg::Array::accept(osg::ArrayVisitor & arg1)
	// void osg::Array::accept(osg::ConstArrayVisitor & arg1) const
	// void osg::Array::accept(unsigned int index, osg::ValueVisitor & arg2)
	// void osg::Array::accept(unsigned int index, osg::ConstValueVisitor & arg2) const
	// int osg::Array::compare(unsigned int lhs, unsigned int rhs) const
	// const void * osg::Array::getDataPointer() const
	// unsigned int osg::Array::getTotalDataSize() const
	// unsigned int osg::Array::getNumElements() const
	// const void * osg::BufferData::getDataPointer() const
	// unsigned int osg::BufferData::getTotalDataSize() const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osg::Array >::_bind_dtor(osg::Array* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Array >::className[] = "Array";
const char LunaTraits< osg::Array >::fullName[] = "osg::Array";
const char LunaTraits< osg::Array >::moduleName[] = "osg";
const char* LunaTraits< osg::Array >::parents[] = {"osg.BufferData", 0};
const int LunaTraits< osg::Array >::hash = 73312406;
const int LunaTraits< osg::Array >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Array >::methods[] = {
	{"isSameKindAs", &luna_wrapper_osg_Array::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Array::_bind_libraryName},
	{"className", &luna_wrapper_osg_Array::_bind_className},
	{"accept", &luna_wrapper_osg_Array::_bind_accept},
	{"compare", &luna_wrapper_osg_Array::_bind_compare},
	{"getType", &luna_wrapper_osg_Array::_bind_getType},
	{"getDataSize", &luna_wrapper_osg_Array::_bind_getDataSize},
	{"getDataType", &luna_wrapper_osg_Array::_bind_getDataType},
	{"asArray", &luna_wrapper_osg_Array::_bind_asArray},
	{"getDataPointer", &luna_wrapper_osg_Array::_bind_getDataPointer},
	{"getTotalDataSize", &luna_wrapper_osg_Array::_bind_getTotalDataSize},
	{"getNumElements", &luna_wrapper_osg_Array::_bind_getNumElements},
	{"trim", &luna_wrapper_osg_Array::_bind_trim},
	{"setVertexBufferObject", &luna_wrapper_osg_Array::_bind_setVertexBufferObject},
	{"getVertexBufferObject", &luna_wrapper_osg_Array::_bind_getVertexBufferObject},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Array::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_Array::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Array::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Array::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Array::_bind_base_getUserData},
	{"base_asPrimitiveSet", &luna_wrapper_osg_Array::_bind_base_asPrimitiveSet},
	{"base_asImage", &luna_wrapper_osg_Array::_bind_base_asImage},
	{"base_releaseGLObjects", &luna_wrapper_osg_Array::_bind_base_releaseGLObjects},
	{"base_isSameKindAs", &luna_wrapper_osg_Array::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Array::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Array::_bind_base_className},
	{"base_asArray", &luna_wrapper_osg_Array::_bind_base_asArray},
	{"base_trim", &luna_wrapper_osg_Array::_bind_base_trim},
	{"fromVoid", &luna_wrapper_osg_Array::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Array::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Array::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Array >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Array::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Array >::enumValues[] = {
	{"ArrayType", osg::Array::ArrayType},
	{"ByteArrayType", osg::Array::ByteArrayType},
	{"ShortArrayType", osg::Array::ShortArrayType},
	{"IntArrayType", osg::Array::IntArrayType},
	{"UByteArrayType", osg::Array::UByteArrayType},
	{"UShortArrayType", osg::Array::UShortArrayType},
	{"UIntArrayType", osg::Array::UIntArrayType},
	{"Vec4ubArrayType", osg::Array::Vec4ubArrayType},
	{"FloatArrayType", osg::Array::FloatArrayType},
	{"Vec2ArrayType", osg::Array::Vec2ArrayType},
	{"Vec3ArrayType", osg::Array::Vec3ArrayType},
	{"Vec4ArrayType", osg::Array::Vec4ArrayType},
	{"Vec2sArrayType", osg::Array::Vec2sArrayType},
	{"Vec3sArrayType", osg::Array::Vec3sArrayType},
	{"Vec4sArrayType", osg::Array::Vec4sArrayType},
	{"Vec2bArrayType", osg::Array::Vec2bArrayType},
	{"Vec3bArrayType", osg::Array::Vec3bArrayType},
	{"Vec4bArrayType", osg::Array::Vec4bArrayType},
	{"DoubleArrayType", osg::Array::DoubleArrayType},
	{"Vec2dArrayType", osg::Array::Vec2dArrayType},
	{"Vec3dArrayType", osg::Array::Vec3dArrayType},
	{"Vec4dArrayType", osg::Array::Vec4dArrayType},
	{"MatrixArrayType", osg::Array::MatrixArrayType},
	{0,0}
};


