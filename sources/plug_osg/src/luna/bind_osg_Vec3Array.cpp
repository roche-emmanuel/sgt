#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Vec3Array.h>

class luna_wrapper_osg_Vec3Array {
public:
	typedef Luna< osg::Vec3Array > luna_t;

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

		osg::Vec3Array* self= (osg::Vec3Array*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Vec3Array >::push(L,self,false);
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
		//osg::Vec3Array* ptr= dynamic_cast< osg::Vec3Array* >(Luna< osg::Referenced >::check(L,1));
		osg::Vec3Array* ptr= luna_caster< osg::Referenced, osg::Vec3Array >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Vec3Array >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
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

	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_at(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_back(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_front(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_resize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pop_back(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_push_back(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
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

	inline static bool _lg_typecheck_base_accept_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,35264102) ) return false;
		if( (!(Luna< osg::ArrayVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_accept_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80735172) ) return false;
		if( (!(Luna< osg::ConstArrayVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_accept_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,87991103) ) return false;
		if( (!(Luna< osg::ValueVisitor >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_accept_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,86989408) ) return false;
		if( (!(Luna< osg::ConstValueVisitor >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_compare(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDataPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTotalDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNumElements(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Vec3Array::Vec3Array()
	static osg::Vec3Array* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3Array::Vec3Array() function, expected prototype:\nosg::Vec3Array::Vec3Array()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Vec3Array();
	}

	// osg::Vec3Array::Vec3Array(lua_Table * data)
	static osg::Vec3Array* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3Array::Vec3Array(lua_Table * data) function, expected prototype:\nosg::Vec3Array::Vec3Array(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Vec3Array(L,NULL);
	}

	// Overload binder for osg::Vec3Array::Vec3Array
	static osg::Vec3Array* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Vec3Array, cannot match any of the overloads for function Vec3Array:\n  Vec3Array()\n  Vec3Array(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Vec3Array::accept(osg::ArrayVisitor & arg1)
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::accept(osg::ArrayVisitor & arg1) function, expected prototype:\nvoid osg::Vec3Array::accept(osg::ArrayVisitor & arg1)\nClass arguments details:\narg 1 ID = 35264102\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ArrayVisitor* arg1_ptr=(Luna< osg::ArrayVisitor >::check(L,2));
		if( !arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg1 in osg::Vec3Array::accept function");
		}
		osg::ArrayVisitor & arg1=*arg1_ptr;

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::accept(osg::ArrayVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(arg1);

		return 0;
	}

	// void osg::Vec3Array::accept(osg::ConstArrayVisitor & arg1) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::accept(osg::ConstArrayVisitor & arg1) const function, expected prototype:\nvoid osg::Vec3Array::accept(osg::ConstArrayVisitor & arg1) const\nClass arguments details:\narg 1 ID = 80735172\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConstArrayVisitor* arg1_ptr=(Luna< osg::ConstArrayVisitor >::check(L,2));
		if( !arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg1 in osg::Vec3Array::accept function");
		}
		osg::ConstArrayVisitor & arg1=*arg1_ptr;

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::accept(osg::ConstArrayVisitor &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(arg1);

		return 0;
	}

	// void osg::Vec3Array::accept(unsigned int index, osg::ValueVisitor & arg2)
	static int _bind_accept_overload_3(lua_State *L) {
		if (!_lg_typecheck_accept_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::accept(unsigned int index, osg::ValueVisitor & arg2) function, expected prototype:\nvoid osg::Vec3Array::accept(unsigned int index, osg::ValueVisitor & arg2)\nClass arguments details:\narg 2 ID = 87991103\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::ValueVisitor* arg2_ptr=(Luna< osg::ValueVisitor >::check(L,3));
		if( !arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg2 in osg::Vec3Array::accept function");
		}
		osg::ValueVisitor & arg2=*arg2_ptr;

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::accept(unsigned int, osg::ValueVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(index, arg2);

		return 0;
	}

	// void osg::Vec3Array::accept(unsigned int index, osg::ConstValueVisitor & arg2) const
	static int _bind_accept_overload_4(lua_State *L) {
		if (!_lg_typecheck_accept_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::accept(unsigned int index, osg::ConstValueVisitor & arg2) const function, expected prototype:\nvoid osg::Vec3Array::accept(unsigned int index, osg::ConstValueVisitor & arg2) const\nClass arguments details:\narg 2 ID = 86989408\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::ConstValueVisitor* arg2_ptr=(Luna< osg::ConstValueVisitor >::check(L,3));
		if( !arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg2 in osg::Vec3Array::accept function");
		}
		osg::ConstValueVisitor & arg2=*arg2_ptr;

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::accept(unsigned int, osg::ConstValueVisitor &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(index, arg2);

		return 0;
	}

	// Overload binder for osg::Vec3Array::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);
		if (_lg_typecheck_accept_overload_3(L)) return _bind_accept_overload_3(L);
		if (_lg_typecheck_accept_overload_4(L)) return _bind_accept_overload_4(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ArrayVisitor &)\n  accept(osg::ConstArrayVisitor &)\n  accept(unsigned int, osg::ValueVisitor &)\n  accept(unsigned int, osg::ConstValueVisitor &)\n");
		return 0;
	}

	// int osg::Vec3Array::compare(unsigned int lhs, unsigned int rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Vec3Array::compare(unsigned int lhs, unsigned int rhs) const function, expected prototype:\nint osg::Vec3Array::compare(unsigned int lhs, unsigned int rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int lhs=(unsigned int)lua_tointeger(L,2);
		unsigned int rhs=(unsigned int)lua_tointeger(L,3);

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Vec3Array::compare(unsigned int, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(lhs, rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const void * osg::Vec3Array::getDataPointer() const
	static int _bind_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_getDataPointer(L)) {
			luaL_error(L, "luna typecheck failed in const void * osg::Vec3Array::getDataPointer() const function, expected prototype:\nconst void * osg::Vec3Array::getDataPointer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * osg::Vec3Array::getDataPointer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::Vec3Array::getTotalDataSize() const
	static int _bind_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_getTotalDataSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Vec3Array::getTotalDataSize() const function, expected prototype:\nunsigned int osg::Vec3Array::getTotalDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Vec3Array::getTotalDataSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Vec3Array::getNumElements() const
	static int _bind_getNumElements(lua_State *L) {
		if (!_lg_typecheck_getNumElements(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Vec3Array::getNumElements() const function, expected prototype:\nunsigned int osg::Vec3Array::getNumElements() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Vec3Array::getNumElements() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumElements();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Object * osg::Vec3Array::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Vec3Array::cloneType() const function, expected prototype:\nosg::Object * osg::Vec3Array::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Vec3Array::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Vec3Array::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Vec3Array::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Vec3Array::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Vec3Array::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Vec3Array::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// void osg::Vec3Array::assign(unsigned int arg1, osg::Vec3f arg2)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::assign(unsigned int arg1, osg::Vec3f arg2) function, expected prototype:\nvoid osg::Vec3Array::assign(unsigned int arg1, osg::Vec3f arg2)\nClass arguments details:\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);
		osg::Vec3f* arg2_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg2 in osg::Vec3Array::assign function");
		}
		osg::Vec3f arg2=*arg2_ptr;

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::assign(unsigned int, osg::Vec3f). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->assign(arg1, arg2);

		return 0;
	}

	// osg::Vec3f osg::Vec3Array::at(unsigned int arg1)
	static int _bind_at(lua_State *L) {
		if (!_lg_typecheck_at(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::Vec3Array::at(unsigned int arg1) function, expected prototype:\nosg::Vec3f osg::Vec3Array::at(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::Vec3Array::at(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->at(arg1);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osg::Vec3Array::back()
	static int _bind_back(lua_State *L) {
		if (!_lg_typecheck_back(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::Vec3Array::back() function, expected prototype:\nosg::Vec3f osg::Vec3Array::back()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::Vec3Array::back(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->back();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osg::Vec3Array::front()
	static int _bind_front(lua_State *L) {
		if (!_lg_typecheck_front(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::Vec3Array::front() function, expected prototype:\nosg::Vec3f osg::Vec3Array::front()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::Vec3Array::front(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->front();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// void osg::Vec3Array::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::clear() function, expected prototype:\nvoid osg::Vec3Array::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::clear(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// bool osg::Vec3Array::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec3Array::empty() function, expected prototype:\nbool osg::Vec3Array::empty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec3Array::empty(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Vec3Array::size()
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Vec3Array::size() function, expected prototype:\nunsigned int osg::Vec3Array::size()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Vec3Array::size(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Vec3Array::resize(unsigned int arg1)
	static int _bind_resize(lua_State *L) {
		if (!_lg_typecheck_resize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::resize(unsigned int arg1) function, expected prototype:\nvoid osg::Vec3Array::resize(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::resize(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resize(arg1);

		return 0;
	}

	// void osg::Vec3Array::pop_back()
	static int _bind_pop_back(lua_State *L) {
		if (!_lg_typecheck_pop_back(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::pop_back() function, expected prototype:\nvoid osg::Vec3Array::pop_back()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::pop_back(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pop_back();

		return 0;
	}

	// void osg::Vec3Array::push_back(osg::Vec3f arg1)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::push_back(osg::Vec3f arg1) function, expected prototype:\nvoid osg::Vec3Array::push_back(osg::Vec3f arg1)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3f* arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg1 in osg::Vec3Array::push_back function");
		}
		osg::Vec3f arg1=*arg1_ptr;

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::push_back(osg::Vec3f). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->push_back(arg1);

		return 0;
	}

	// void osg::Vec3Array::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Vec3Array::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Vec3Array::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Vec3Array::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Vec3Array::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Vec3Array::setName(name);

		return 0;
	}

	// void osg::Vec3Array::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::base_computeDataVariance() function, expected prototype:\nvoid osg::Vec3Array::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Vec3Array::computeDataVariance();

		return 0;
	}

	// void osg::Vec3Array::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Vec3Array::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Vec3Array::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Vec3Array::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Vec3Array::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Vec3Array::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Vec3Array::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Vec3Array::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Vec3Array::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Vec3Array::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Vec3Array::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Vec3Array::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Vec3Array::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Vec3Array::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::PrimitiveSet * osg::Vec3Array::base_asPrimitiveSet()
	static int _bind_base_asPrimitiveSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asPrimitiveSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PrimitiveSet * osg::Vec3Array::base_asPrimitiveSet() function, expected prototype:\nosg::PrimitiveSet * osg::Vec3Array::base_asPrimitiveSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PrimitiveSet * osg::Vec3Array::base_asPrimitiveSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PrimitiveSet * lret = self->Vec3Array::asPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// const osg::PrimitiveSet * osg::Vec3Array::base_asPrimitiveSet() const
	static int _bind_base_asPrimitiveSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asPrimitiveSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::PrimitiveSet * osg::Vec3Array::base_asPrimitiveSet() const function, expected prototype:\nconst osg::PrimitiveSet * osg::Vec3Array::base_asPrimitiveSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::PrimitiveSet * osg::Vec3Array::base_asPrimitiveSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::PrimitiveSet * lret = self->Vec3Array::asPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Vec3Array::base_asPrimitiveSet
	static int _bind_base_asPrimitiveSet(lua_State *L) {
		if (_lg_typecheck_base_asPrimitiveSet_overload_1(L)) return _bind_base_asPrimitiveSet_overload_1(L);
		if (_lg_typecheck_base_asPrimitiveSet_overload_2(L)) return _bind_base_asPrimitiveSet_overload_2(L);

		luaL_error(L, "error in function base_asPrimitiveSet, cannot match any of the overloads for function base_asPrimitiveSet:\n  base_asPrimitiveSet()\n  base_asPrimitiveSet()\n");
		return 0;
	}

	// osg::Image * osg::Vec3Array::base_asImage()
	static int _bind_base_asImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::Vec3Array::base_asImage() function, expected prototype:\nosg::Image * osg::Vec3Array::base_asImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::Vec3Array::base_asImage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->Vec3Array::asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::Vec3Array::base_asImage() const
	static int _bind_base_asImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::Vec3Array::base_asImage() const function, expected prototype:\nconst osg::Image * osg::Vec3Array::base_asImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osg::Vec3Array::base_asImage() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->Vec3Array::asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Vec3Array::base_asImage
	static int _bind_base_asImage(lua_State *L) {
		if (_lg_typecheck_base_asImage_overload_1(L)) return _bind_base_asImage_overload_1(L);
		if (_lg_typecheck_base_asImage_overload_2(L)) return _bind_base_asImage_overload_2(L);

		luaL_error(L, "error in function base_asImage, cannot match any of the overloads for function base_asImage:\n  base_asImage()\n  base_asImage()\n");
		return 0;
	}

	// void osg::Vec3Array::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::Vec3Array::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Vec3Array::releaseGLObjects(state);

		return 0;
	}

	// bool osg::Vec3Array::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Vec3Array::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Vec3Array::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Vec3Array::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Vec3Array::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Vec3Array::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Vec3Array::base_libraryName() const function, expected prototype:\nconst char * osg::Vec3Array::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Vec3Array::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Vec3Array::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Vec3Array::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Vec3Array::base_className() const function, expected prototype:\nconst char * osg::Vec3Array::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Vec3Array::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Vec3Array::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Array * osg::Vec3Array::base_asArray()
	static int _bind_base_asArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::Vec3Array::base_asArray() function, expected prototype:\nosg::Array * osg::Vec3Array::base_asArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::Vec3Array::base_asArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->Vec3Array::asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::Vec3Array::base_asArray() const
	static int _bind_base_asArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::Vec3Array::base_asArray() const function, expected prototype:\nconst osg::Array * osg::Vec3Array::base_asArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Array * osg::Vec3Array::base_asArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Array * lret = self->Vec3Array::asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Vec3Array::base_asArray
	static int _bind_base_asArray(lua_State *L) {
		if (_lg_typecheck_base_asArray_overload_1(L)) return _bind_base_asArray_overload_1(L);
		if (_lg_typecheck_base_asArray_overload_2(L)) return _bind_base_asArray_overload_2(L);

		luaL_error(L, "error in function base_asArray, cannot match any of the overloads for function base_asArray:\n  base_asArray()\n  base_asArray()\n");
		return 0;
	}

	// void osg::Vec3Array::base_trim()
	static int _bind_base_trim(lua_State *L) {
		if (!_lg_typecheck_base_trim(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::base_trim() function, expected prototype:\nvoid osg::Vec3Array::base_trim()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::base_trim(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Vec3Array::trim();

		return 0;
	}

	// void osg::Vec3Array::base_accept(osg::ArrayVisitor & arg1)
	static int _bind_base_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::base_accept(osg::ArrayVisitor & arg1) function, expected prototype:\nvoid osg::Vec3Array::base_accept(osg::ArrayVisitor & arg1)\nClass arguments details:\narg 1 ID = 35264102\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ArrayVisitor* arg1_ptr=(Luna< osg::ArrayVisitor >::check(L,2));
		if( !arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg1 in osg::Vec3Array::base_accept function");
		}
		osg::ArrayVisitor & arg1=*arg1_ptr;

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::base_accept(osg::ArrayVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Vec3Array::accept(arg1);

		return 0;
	}

	// void osg::Vec3Array::base_accept(osg::ConstArrayVisitor & arg1) const
	static int _bind_base_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::base_accept(osg::ConstArrayVisitor & arg1) const function, expected prototype:\nvoid osg::Vec3Array::base_accept(osg::ConstArrayVisitor & arg1) const\nClass arguments details:\narg 1 ID = 80735172\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConstArrayVisitor* arg1_ptr=(Luna< osg::ConstArrayVisitor >::check(L,2));
		if( !arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg1 in osg::Vec3Array::base_accept function");
		}
		osg::ConstArrayVisitor & arg1=*arg1_ptr;

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::base_accept(osg::ConstArrayVisitor &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Vec3Array::accept(arg1);

		return 0;
	}

	// void osg::Vec3Array::base_accept(unsigned int index, osg::ValueVisitor & arg2)
	static int _bind_base_accept_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::base_accept(unsigned int index, osg::ValueVisitor & arg2) function, expected prototype:\nvoid osg::Vec3Array::base_accept(unsigned int index, osg::ValueVisitor & arg2)\nClass arguments details:\narg 2 ID = 87991103\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::ValueVisitor* arg2_ptr=(Luna< osg::ValueVisitor >::check(L,3));
		if( !arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg2 in osg::Vec3Array::base_accept function");
		}
		osg::ValueVisitor & arg2=*arg2_ptr;

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::base_accept(unsigned int, osg::ValueVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Vec3Array::accept(index, arg2);

		return 0;
	}

	// void osg::Vec3Array::base_accept(unsigned int index, osg::ConstValueVisitor & arg2) const
	static int _bind_base_accept_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Vec3Array::base_accept(unsigned int index, osg::ConstValueVisitor & arg2) const function, expected prototype:\nvoid osg::Vec3Array::base_accept(unsigned int index, osg::ConstValueVisitor & arg2) const\nClass arguments details:\narg 2 ID = 86989408\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::ConstValueVisitor* arg2_ptr=(Luna< osg::ConstValueVisitor >::check(L,3));
		if( !arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg2 in osg::Vec3Array::base_accept function");
		}
		osg::ConstValueVisitor & arg2=*arg2_ptr;

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Vec3Array::base_accept(unsigned int, osg::ConstValueVisitor &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Vec3Array::accept(index, arg2);

		return 0;
	}

	// Overload binder for osg::Vec3Array::base_accept
	static int _bind_base_accept(lua_State *L) {
		if (_lg_typecheck_base_accept_overload_1(L)) return _bind_base_accept_overload_1(L);
		if (_lg_typecheck_base_accept_overload_2(L)) return _bind_base_accept_overload_2(L);
		if (_lg_typecheck_base_accept_overload_3(L)) return _bind_base_accept_overload_3(L);
		if (_lg_typecheck_base_accept_overload_4(L)) return _bind_base_accept_overload_4(L);

		luaL_error(L, "error in function base_accept, cannot match any of the overloads for function base_accept:\n  base_accept(osg::ArrayVisitor &)\n  base_accept(osg::ConstArrayVisitor &)\n  base_accept(unsigned int, osg::ValueVisitor &)\n  base_accept(unsigned int, osg::ConstValueVisitor &)\n");
		return 0;
	}

	// int osg::Vec3Array::base_compare(unsigned int lhs, unsigned int rhs) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Vec3Array::base_compare(unsigned int lhs, unsigned int rhs) const function, expected prototype:\nint osg::Vec3Array::base_compare(unsigned int lhs, unsigned int rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int lhs=(unsigned int)lua_tointeger(L,2);
		unsigned int rhs=(unsigned int)lua_tointeger(L,3);

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Vec3Array::base_compare(unsigned int, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Vec3Array::compare(lhs, rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const void * osg::Vec3Array::base_getDataPointer() const
	static int _bind_base_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_base_getDataPointer(L)) {
			luaL_error(L, "luna typecheck failed in const void * osg::Vec3Array::base_getDataPointer() const function, expected prototype:\nconst void * osg::Vec3Array::base_getDataPointer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * osg::Vec3Array::base_getDataPointer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->Vec3Array::getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::Vec3Array::base_getTotalDataSize() const
	static int _bind_base_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_base_getTotalDataSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Vec3Array::base_getTotalDataSize() const function, expected prototype:\nunsigned int osg::Vec3Array::base_getTotalDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Vec3Array::base_getTotalDataSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Vec3Array::getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Vec3Array::base_getNumElements() const
	static int _bind_base_getNumElements(lua_State *L) {
		if (!_lg_typecheck_base_getNumElements(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Vec3Array::base_getNumElements() const function, expected prototype:\nunsigned int osg::Vec3Array::base_getNumElements() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Vec3Array::base_getNumElements() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Vec3Array::getNumElements();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Object * osg::Vec3Array::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Vec3Array::base_cloneType() const function, expected prototype:\nosg::Object * osg::Vec3Array::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Vec3Array::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Vec3Array::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Vec3Array::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Vec3Array::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Vec3Array::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Vec3Array::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Vec3Array::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Vec3Array::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}


	// Operator binds:
	// osg::Vec3f osg::Vec3Array::operator[](unsigned int arg1)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::Vec3Array::operator[](unsigned int arg1) function, expected prototype:\nosg::Vec3f osg::Vec3Array::operator[](unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		osg::Vec3Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::Vec3Array::operator[](unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->operator[](arg1);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}


};

osg::Vec3Array* LunaTraits< osg::Vec3Array >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Vec3Array::_bind_ctor(L);
}

void LunaTraits< osg::Vec3Array >::_bind_dtor(osg::Vec3Array* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Vec3Array >::className[] = "Vec3Array";
const char LunaTraits< osg::Vec3Array >::fullName[] = "osg::Vec3Array";
const char LunaTraits< osg::Vec3Array >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec3Array >::parents[] = {"osg.Array", 0};
const int LunaTraits< osg::Vec3Array >::hash = 7204710;
const int LunaTraits< osg::Vec3Array >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Vec3Array >::methods[] = {
	{"accept", &luna_wrapper_osg_Vec3Array::_bind_accept},
	{"compare", &luna_wrapper_osg_Vec3Array::_bind_compare},
	{"getDataPointer", &luna_wrapper_osg_Vec3Array::_bind_getDataPointer},
	{"getTotalDataSize", &luna_wrapper_osg_Vec3Array::_bind_getTotalDataSize},
	{"getNumElements", &luna_wrapper_osg_Vec3Array::_bind_getNumElements},
	{"cloneType", &luna_wrapper_osg_Vec3Array::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Vec3Array::_bind_clone},
	{"assign", &luna_wrapper_osg_Vec3Array::_bind_assign},
	{"at", &luna_wrapper_osg_Vec3Array::_bind_at},
	{"back", &luna_wrapper_osg_Vec3Array::_bind_back},
	{"front", &luna_wrapper_osg_Vec3Array::_bind_front},
	{"clear", &luna_wrapper_osg_Vec3Array::_bind_clear},
	{"empty", &luna_wrapper_osg_Vec3Array::_bind_empty},
	{"size", &luna_wrapper_osg_Vec3Array::_bind_size},
	{"resize", &luna_wrapper_osg_Vec3Array::_bind_resize},
	{"pop_back", &luna_wrapper_osg_Vec3Array::_bind_pop_back},
	{"push_back", &luna_wrapper_osg_Vec3Array::_bind_push_back},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Vec3Array::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_Vec3Array::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Vec3Array::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Vec3Array::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Vec3Array::_bind_base_getUserData},
	{"base_asPrimitiveSet", &luna_wrapper_osg_Vec3Array::_bind_base_asPrimitiveSet},
	{"base_asImage", &luna_wrapper_osg_Vec3Array::_bind_base_asImage},
	{"base_releaseGLObjects", &luna_wrapper_osg_Vec3Array::_bind_base_releaseGLObjects},
	{"base_isSameKindAs", &luna_wrapper_osg_Vec3Array::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Vec3Array::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Vec3Array::_bind_base_className},
	{"base_asArray", &luna_wrapper_osg_Vec3Array::_bind_base_asArray},
	{"base_trim", &luna_wrapper_osg_Vec3Array::_bind_base_trim},
	{"base_accept", &luna_wrapper_osg_Vec3Array::_bind_base_accept},
	{"base_compare", &luna_wrapper_osg_Vec3Array::_bind_base_compare},
	{"base_getDataPointer", &luna_wrapper_osg_Vec3Array::_bind_base_getDataPointer},
	{"base_getTotalDataSize", &luna_wrapper_osg_Vec3Array::_bind_base_getTotalDataSize},
	{"base_getNumElements", &luna_wrapper_osg_Vec3Array::_bind_base_getNumElements},
	{"base_cloneType", &luna_wrapper_osg_Vec3Array::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Vec3Array::_bind_base_clone},
	{"op_index", &luna_wrapper_osg_Vec3Array::_bind_op_index},
	{"fromVoid", &luna_wrapper_osg_Vec3Array::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Vec3Array::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Vec3Array::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec3Array >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Vec3Array::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec3Array >::enumValues[] = {
	{0,0}
};


