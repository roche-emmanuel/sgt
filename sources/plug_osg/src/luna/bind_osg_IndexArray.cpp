#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_IndexArray.h>

class luna_wrapper_osg_IndexArray {
public:
	typedef Luna< osg::IndexArray > luna_t;

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

		osg::IndexArray* self= (osg::IndexArray*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::IndexArray >::push(L,self,false);
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
		//osg::IndexArray* ptr= dynamic_cast< osg::IndexArray* >(Luna< osg::Referenced >::check(L,1));
		osg::IndexArray* ptr= luna_caster< osg::Referenced, osg::IndexArray >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::IndexArray >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::IndexArray::IndexArray(lua_Table * data, osg::Array::Type arrayType = osg::Array::ArrayType, int dataSize = 0, unsigned int dataType = 0)
	static osg::IndexArray* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::IndexArray::IndexArray(lua_Table * data, osg::Array::Type arrayType = osg::Array::ArrayType, int dataSize = 0, unsigned int dataType = 0) function, expected prototype:\nosg::IndexArray::IndexArray(lua_Table * data, osg::Array::Type arrayType = osg::Array::ArrayType, int dataSize = 0, unsigned int dataType = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Array::Type arrayType=luatop>1 ? (osg::Array::Type)lua_tointeger(L,2) : (osg::Array::Type)osg::Array::ArrayType;
		int dataSize=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		unsigned int dataType=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)0;

		return new wrapper_osg_IndexArray(L,NULL, arrayType, dataSize, dataType);
	}

	// osg::IndexArray::IndexArray(lua_Table * data, const osg::Array & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::IndexArray* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::IndexArray::IndexArray(lua_Table * data, const osg::Array & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::IndexArray::IndexArray(lua_Table * data, const osg::Array & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Array* array_ptr=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));
		if( !array_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg array in osg::IndexArray::IndexArray function");
		}
		const osg::Array & array=*array_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::IndexArray::IndexArray function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_IndexArray(L,NULL, array, copyop);
	}

	// Overload binder for osg::IndexArray::IndexArray
	static osg::IndexArray* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function IndexArray, cannot match any of the overloads for function IndexArray:\n  IndexArray(lua_Table *, osg::Array::Type, int, unsigned int)\n  IndexArray(lua_Table *, const osg::Array &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// bool osg::IndexArray::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::IndexArray::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::IndexArray::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::IndexArray::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::IndexArray::index(unsigned int pos) const
	static int _bind_index(lua_State *L) {
		if (!_lg_typecheck_index(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::IndexArray::index(unsigned int pos) const function, expected prototype:\nunsigned int osg::IndexArray::index(unsigned int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::IndexArray::index(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->index(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::IndexArray::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::IndexArray::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::IndexArray::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::IndexArray::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IndexArray::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::IndexArray::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::IndexArray::base_setName(const std::string & name) function, expected prototype:\nvoid osg::IndexArray::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::IndexArray::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IndexArray::setName(name);

		return 0;
	}

	// void osg::IndexArray::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::IndexArray::base_computeDataVariance() function, expected prototype:\nvoid osg::IndexArray::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::IndexArray::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IndexArray::computeDataVariance();

		return 0;
	}

	// void osg::IndexArray::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::IndexArray::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::IndexArray::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::IndexArray::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IndexArray::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::IndexArray::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::IndexArray::base_getUserData() function, expected prototype:\nosg::Referenced * osg::IndexArray::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::IndexArray::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->IndexArray::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::IndexArray::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::IndexArray::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::IndexArray::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::IndexArray::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->IndexArray::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::IndexArray::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::PrimitiveSet * osg::IndexArray::base_asPrimitiveSet()
	static int _bind_base_asPrimitiveSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asPrimitiveSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PrimitiveSet * osg::IndexArray::base_asPrimitiveSet() function, expected prototype:\nosg::PrimitiveSet * osg::IndexArray::base_asPrimitiveSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PrimitiveSet * osg::IndexArray::base_asPrimitiveSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PrimitiveSet * lret = self->IndexArray::asPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// const osg::PrimitiveSet * osg::IndexArray::base_asPrimitiveSet() const
	static int _bind_base_asPrimitiveSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asPrimitiveSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::PrimitiveSet * osg::IndexArray::base_asPrimitiveSet() const function, expected prototype:\nconst osg::PrimitiveSet * osg::IndexArray::base_asPrimitiveSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::PrimitiveSet * osg::IndexArray::base_asPrimitiveSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::PrimitiveSet * lret = self->IndexArray::asPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::IndexArray::base_asPrimitiveSet
	static int _bind_base_asPrimitiveSet(lua_State *L) {
		if (_lg_typecheck_base_asPrimitiveSet_overload_1(L)) return _bind_base_asPrimitiveSet_overload_1(L);
		if (_lg_typecheck_base_asPrimitiveSet_overload_2(L)) return _bind_base_asPrimitiveSet_overload_2(L);

		luaL_error(L, "error in function base_asPrimitiveSet, cannot match any of the overloads for function base_asPrimitiveSet:\n  base_asPrimitiveSet()\n  base_asPrimitiveSet()\n");
		return 0;
	}

	// osg::Image * osg::IndexArray::base_asImage()
	static int _bind_base_asImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::IndexArray::base_asImage() function, expected prototype:\nosg::Image * osg::IndexArray::base_asImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::IndexArray::base_asImage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->IndexArray::asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::IndexArray::base_asImage() const
	static int _bind_base_asImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::IndexArray::base_asImage() const function, expected prototype:\nconst osg::Image * osg::IndexArray::base_asImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osg::IndexArray::base_asImage() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->IndexArray::asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::IndexArray::base_asImage
	static int _bind_base_asImage(lua_State *L) {
		if (_lg_typecheck_base_asImage_overload_1(L)) return _bind_base_asImage_overload_1(L);
		if (_lg_typecheck_base_asImage_overload_2(L)) return _bind_base_asImage_overload_2(L);

		luaL_error(L, "error in function base_asImage, cannot match any of the overloads for function base_asImage:\n  base_asImage()\n  base_asImage()\n");
		return 0;
	}

	// void osg::IndexArray::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::IndexArray::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::IndexArray::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::IndexArray::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IndexArray::releaseGLObjects(state);

		return 0;
	}

	// const char * osg::IndexArray::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::IndexArray::base_libraryName() const function, expected prototype:\nconst char * osg::IndexArray::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::IndexArray::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->IndexArray::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::IndexArray::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::IndexArray::base_className() const function, expected prototype:\nconst char * osg::IndexArray::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::IndexArray::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->IndexArray::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Array * osg::IndexArray::base_asArray()
	static int _bind_base_asArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::IndexArray::base_asArray() function, expected prototype:\nosg::Array * osg::IndexArray::base_asArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::IndexArray::base_asArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->IndexArray::asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::IndexArray::base_asArray() const
	static int _bind_base_asArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::IndexArray::base_asArray() const function, expected prototype:\nconst osg::Array * osg::IndexArray::base_asArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Array * osg::IndexArray::base_asArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Array * lret = self->IndexArray::asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::IndexArray::base_asArray
	static int _bind_base_asArray(lua_State *L) {
		if (_lg_typecheck_base_asArray_overload_1(L)) return _bind_base_asArray_overload_1(L);
		if (_lg_typecheck_base_asArray_overload_2(L)) return _bind_base_asArray_overload_2(L);

		luaL_error(L, "error in function base_asArray, cannot match any of the overloads for function base_asArray:\n  base_asArray()\n  base_asArray()\n");
		return 0;
	}

	// void osg::IndexArray::base_trim()
	static int _bind_base_trim(lua_State *L) {
		if (!_lg_typecheck_base_trim(L)) {
			luaL_error(L, "luna typecheck failed in void osg::IndexArray::base_trim() function, expected prototype:\nvoid osg::IndexArray::base_trim()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::IndexArray::base_trim(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IndexArray::trim();

		return 0;
	}

	// bool osg::IndexArray::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::IndexArray::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::IndexArray::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::IndexArray* self=Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::IndexArray::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IndexArray::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::IndexArray* LunaTraits< osg::IndexArray >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_IndexArray::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// unsigned int osg::IndexArray::index(unsigned int pos) const
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

void LunaTraits< osg::IndexArray >::_bind_dtor(osg::IndexArray* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::IndexArray >::className[] = "IndexArray";
const char LunaTraits< osg::IndexArray >::fullName[] = "osg::IndexArray";
const char LunaTraits< osg::IndexArray >::moduleName[] = "osg";
const char* LunaTraits< osg::IndexArray >::parents[] = {"osg.Array", 0};
const int LunaTraits< osg::IndexArray >::hash = 8373938;
const int LunaTraits< osg::IndexArray >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::IndexArray >::methods[] = {
	{"isSameKindAs", &luna_wrapper_osg_IndexArray::_bind_isSameKindAs},
	{"index", &luna_wrapper_osg_IndexArray::_bind_index},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_IndexArray::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_IndexArray::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_IndexArray::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_IndexArray::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_IndexArray::_bind_base_getUserData},
	{"base_asPrimitiveSet", &luna_wrapper_osg_IndexArray::_bind_base_asPrimitiveSet},
	{"base_asImage", &luna_wrapper_osg_IndexArray::_bind_base_asImage},
	{"base_releaseGLObjects", &luna_wrapper_osg_IndexArray::_bind_base_releaseGLObjects},
	{"base_libraryName", &luna_wrapper_osg_IndexArray::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_IndexArray::_bind_base_className},
	{"base_asArray", &luna_wrapper_osg_IndexArray::_bind_base_asArray},
	{"base_trim", &luna_wrapper_osg_IndexArray::_bind_base_trim},
	{"base_isSameKindAs", &luna_wrapper_osg_IndexArray::_bind_base_isSameKindAs},
	{"fromVoid", &luna_wrapper_osg_IndexArray::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_IndexArray::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_IndexArray::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::IndexArray >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_IndexArray::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::IndexArray >::enumValues[] = {
	{0,0}
};


