#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_DrawElementsUInt.h>

class luna_wrapper_osg_DrawElementsUInt {
public:
	typedef Luna< osg::DrawElementsUInt > luna_t;

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

		osg::DrawElementsUInt* self= (osg::DrawElementsUInt*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::DrawElementsUInt >::push(L,self,false);
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
		//osg::DrawElementsUInt* ptr= dynamic_cast< osg::DrawElementsUInt* >(Luna< osg::Referenced >::check(L,1));
		osg::DrawElementsUInt* ptr= luna_caster< osg::Referenced, osg::DrawElementsUInt >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::DrawElementsUInt >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

	inline static bool _lg_typecheck_getDataPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTotalDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_supportsBufferObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_draw(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumIndices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_offsetIndices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reserveElements(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setElement(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElement(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addElement(lua_State *L) {
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

	inline static bool _lg_typecheck_base_asArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asArray_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_base_asPrimitiveSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asPrimitiveSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNumPrimitives(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_computeRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDrawElements_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDrawElements_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getDataPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTotalDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_supportsBufferObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_draw(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNumIndices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_offsetIndices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reserveElements(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setElement(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getElement(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addElement(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::DrawElementsUInt::DrawElementsUInt(unsigned int mode = 0)
	static osg::DrawElementsUInt* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUInt::DrawElementsUInt(unsigned int mode = 0) function, expected prototype:\nosg::DrawElementsUInt::DrawElementsUInt(unsigned int mode = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int mode=luatop>0 ? (unsigned int)lua_tointeger(L,1) : (unsigned int)0;

		return new osg::DrawElementsUInt(mode);
	}

	// osg::DrawElementsUInt::DrawElementsUInt(const osg::DrawElementsUInt & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DrawElementsUInt* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUInt::DrawElementsUInt(const osg::DrawElementsUInt & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DrawElementsUInt::DrawElementsUInt(const osg::DrawElementsUInt & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::DrawElementsUInt* array_ptr=(Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1));
		if( !array_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg array in osg::DrawElementsUInt::DrawElementsUInt function");
		}
		const osg::DrawElementsUInt & array=*array_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DrawElementsUInt::DrawElementsUInt function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::DrawElementsUInt(array, copyop);
	}

	// osg::DrawElementsUInt::DrawElementsUInt(unsigned int mode, unsigned int no, const unsigned int * ptr, int numInstances = 0)
	static osg::DrawElementsUInt* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUInt::DrawElementsUInt(unsigned int mode, unsigned int no, const unsigned int * ptr, int numInstances = 0) function, expected prototype:\nosg::DrawElementsUInt::DrawElementsUInt(unsigned int mode, unsigned int no, const unsigned int * ptr, int numInstances = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int mode=(unsigned int)lua_tointeger(L,1);
		unsigned int no=(unsigned int)lua_tointeger(L,2);
		const unsigned int* ptr=(const unsigned int*)Luna< void >::check(L,3);
		int numInstances=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		return new osg::DrawElementsUInt(mode, no, ptr, numInstances);
	}

	// osg::DrawElementsUInt::DrawElementsUInt(unsigned int mode, unsigned int no)
	static osg::DrawElementsUInt* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUInt::DrawElementsUInt(unsigned int mode, unsigned int no) function, expected prototype:\nosg::DrawElementsUInt::DrawElementsUInt(unsigned int mode, unsigned int no)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,1);
		unsigned int no=(unsigned int)lua_tointeger(L,2);

		return new osg::DrawElementsUInt(mode, no);
	}

	// osg::DrawElementsUInt::DrawElementsUInt(lua_Table * data, unsigned int mode = 0)
	static osg::DrawElementsUInt* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUInt::DrawElementsUInt(lua_Table * data, unsigned int mode = 0) function, expected prototype:\nosg::DrawElementsUInt::DrawElementsUInt(lua_Table * data, unsigned int mode = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int mode=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		return new wrapper_osg_DrawElementsUInt(L,NULL, mode);
	}

	// osg::DrawElementsUInt::DrawElementsUInt(lua_Table * data, const osg::DrawElementsUInt & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DrawElementsUInt* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUInt::DrawElementsUInt(lua_Table * data, const osg::DrawElementsUInt & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DrawElementsUInt::DrawElementsUInt(lua_Table * data, const osg::DrawElementsUInt & array, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::DrawElementsUInt* array_ptr=(Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,2));
		if( !array_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg array in osg::DrawElementsUInt::DrawElementsUInt function");
		}
		const osg::DrawElementsUInt & array=*array_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DrawElementsUInt::DrawElementsUInt function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_DrawElementsUInt(L,NULL, array, copyop);
	}

	// osg::DrawElementsUInt::DrawElementsUInt(lua_Table * data, unsigned int mode, unsigned int no, const unsigned int * ptr, int numInstances = 0)
	static osg::DrawElementsUInt* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUInt::DrawElementsUInt(lua_Table * data, unsigned int mode, unsigned int no, const unsigned int * ptr, int numInstances = 0) function, expected prototype:\nosg::DrawElementsUInt::DrawElementsUInt(lua_Table * data, unsigned int mode, unsigned int no, const unsigned int * ptr, int numInstances = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		unsigned int no=(unsigned int)lua_tointeger(L,3);
		const unsigned int* ptr=(const unsigned int*)Luna< void >::check(L,4);
		int numInstances=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		return new wrapper_osg_DrawElementsUInt(L,NULL, mode, no, ptr, numInstances);
	}

	// osg::DrawElementsUInt::DrawElementsUInt(lua_Table * data, unsigned int mode, unsigned int no)
	static osg::DrawElementsUInt* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUInt::DrawElementsUInt(lua_Table * data, unsigned int mode, unsigned int no) function, expected prototype:\nosg::DrawElementsUInt::DrawElementsUInt(lua_Table * data, unsigned int mode, unsigned int no)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		unsigned int no=(unsigned int)lua_tointeger(L,3);

		return new wrapper_osg_DrawElementsUInt(L,NULL, mode, no);
	}

	// Overload binder for osg::DrawElementsUInt::DrawElementsUInt
	static osg::DrawElementsUInt* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function DrawElementsUInt, cannot match any of the overloads for function DrawElementsUInt:\n  DrawElementsUInt(unsigned int)\n  DrawElementsUInt(const osg::DrawElementsUInt &, const osg::CopyOp &)\n  DrawElementsUInt(unsigned int, unsigned int, const unsigned int *, int)\n  DrawElementsUInt(unsigned int, unsigned int)\n  DrawElementsUInt(lua_Table *, unsigned int)\n  DrawElementsUInt(lua_Table *, const osg::DrawElementsUInt &, const osg::CopyOp &)\n  DrawElementsUInt(lua_Table *, unsigned int, unsigned int, const unsigned int *, int)\n  DrawElementsUInt(lua_Table *, unsigned int, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::DrawElementsUInt::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawElementsUInt::cloneType() const function, expected prototype:\nosg::Object * osg::DrawElementsUInt::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawElementsUInt::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::DrawElementsUInt::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawElementsUInt::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::DrawElementsUInt::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::DrawElementsUInt::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawElementsUInt::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::DrawElementsUInt::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::DrawElementsUInt::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::DrawElementsUInt::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::DrawElementsUInt::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::DrawElementsUInt::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DrawElementsUInt::libraryName() const function, expected prototype:\nconst char * osg::DrawElementsUInt::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DrawElementsUInt::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::DrawElementsUInt::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DrawElementsUInt::className() const function, expected prototype:\nconst char * osg::DrawElementsUInt::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DrawElementsUInt::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const void * osg::DrawElementsUInt::getDataPointer() const
	static int _bind_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_getDataPointer(L)) {
			luaL_error(L, "luna typecheck failed in const void * osg::DrawElementsUInt::getDataPointer() const function, expected prototype:\nconst void * osg::DrawElementsUInt::getDataPointer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * osg::DrawElementsUInt::getDataPointer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::DrawElementsUInt::getTotalDataSize() const
	static int _bind_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_getTotalDataSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElementsUInt::getTotalDataSize() const function, expected prototype:\nunsigned int osg::DrawElementsUInt::getTotalDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUInt::getTotalDataSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::DrawElementsUInt::supportsBufferObject() const
	static int _bind_supportsBufferObject(lua_State *L) {
		if (!_lg_typecheck_supportsBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::DrawElementsUInt::supportsBufferObject() const function, expected prototype:\nbool osg::DrawElementsUInt::supportsBufferObject() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::DrawElementsUInt::supportsBufferObject() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->supportsBufferObject();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::DrawElementsUInt::draw(osg::State & state, bool useVertexBufferObjects) const
	static int _bind_draw(lua_State *L) {
		if (!_lg_typecheck_draw(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUInt::draw(osg::State & state, bool useVertexBufferObjects) const function, expected prototype:\nvoid osg::DrawElementsUInt::draw(osg::State & state, bool useVertexBufferObjects) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::DrawElementsUInt::draw function");
		}
		osg::State & state=*state_ptr;
		bool useVertexBufferObjects=(bool)(lua_toboolean(L,3)==1);

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUInt::draw(osg::State &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->draw(state, useVertexBufferObjects);

		return 0;
	}

	// unsigned int osg::DrawElementsUInt::getNumIndices() const
	static int _bind_getNumIndices(lua_State *L) {
		if (!_lg_typecheck_getNumIndices(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElementsUInt::getNumIndices() const function, expected prototype:\nunsigned int osg::DrawElementsUInt::getNumIndices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUInt::getNumIndices() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumIndices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DrawElementsUInt::index(unsigned int pos) const
	static int _bind_index(lua_State *L) {
		if (!_lg_typecheck_index(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElementsUInt::index(unsigned int pos) const function, expected prototype:\nunsigned int osg::DrawElementsUInt::index(unsigned int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUInt::index(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->index(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawElementsUInt::offsetIndices(int offset)
	static int _bind_offsetIndices(lua_State *L) {
		if (!_lg_typecheck_offsetIndices(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUInt::offsetIndices(int offset) function, expected prototype:\nvoid osg::DrawElementsUInt::offsetIndices(int offset)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int offset=(int)lua_tointeger(L,2);

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUInt::offsetIndices(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->offsetIndices(offset);

		return 0;
	}

	// void osg::DrawElementsUInt::reserveElements(unsigned int numIndices)
	static int _bind_reserveElements(lua_State *L) {
		if (!_lg_typecheck_reserveElements(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUInt::reserveElements(unsigned int numIndices) function, expected prototype:\nvoid osg::DrawElementsUInt::reserveElements(unsigned int numIndices)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int numIndices=(unsigned int)lua_tointeger(L,2);

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUInt::reserveElements(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reserveElements(numIndices);

		return 0;
	}

	// void osg::DrawElementsUInt::setElement(unsigned int i, unsigned int v)
	static int _bind_setElement(lua_State *L) {
		if (!_lg_typecheck_setElement(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUInt::setElement(unsigned int i, unsigned int v) function, expected prototype:\nvoid osg::DrawElementsUInt::setElement(unsigned int i, unsigned int v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		unsigned int v=(unsigned int)lua_tointeger(L,3);

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUInt::setElement(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setElement(i, v);

		return 0;
	}

	// unsigned int osg::DrawElementsUInt::getElement(unsigned int i)
	static int _bind_getElement(lua_State *L) {
		if (!_lg_typecheck_getElement(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElementsUInt::getElement(unsigned int i) function, expected prototype:\nunsigned int osg::DrawElementsUInt::getElement(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUInt::getElement(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getElement(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawElementsUInt::addElement(unsigned int v)
	static int _bind_addElement(lua_State *L) {
		if (!_lg_typecheck_addElement(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUInt::addElement(unsigned int v) function, expected prototype:\nvoid osg::DrawElementsUInt::addElement(unsigned int v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int v=(unsigned int)lua_tointeger(L,2);

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUInt::addElement(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addElement(v);

		return 0;
	}

	// void osg::DrawElementsUInt::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUInt::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::DrawElementsUInt::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUInt::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawElementsUInt::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::DrawElementsUInt::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUInt::base_setName(const std::string & name) function, expected prototype:\nvoid osg::DrawElementsUInt::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUInt::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawElementsUInt::setName(name);

		return 0;
	}

	// void osg::DrawElementsUInt::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUInt::base_computeDataVariance() function, expected prototype:\nvoid osg::DrawElementsUInt::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUInt::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawElementsUInt::computeDataVariance();

		return 0;
	}

	// void osg::DrawElementsUInt::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUInt::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::DrawElementsUInt::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUInt::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawElementsUInt::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::DrawElementsUInt::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::DrawElementsUInt::base_getUserData() function, expected prototype:\nosg::Referenced * osg::DrawElementsUInt::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::DrawElementsUInt::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->DrawElementsUInt::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::DrawElementsUInt::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::DrawElementsUInt::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::DrawElementsUInt::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::DrawElementsUInt::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->DrawElementsUInt::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawElementsUInt::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Array * osg::DrawElementsUInt::base_asArray()
	static int _bind_base_asArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::DrawElementsUInt::base_asArray() function, expected prototype:\nosg::Array * osg::DrawElementsUInt::base_asArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::DrawElementsUInt::base_asArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->DrawElementsUInt::asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::DrawElementsUInt::base_asArray() const
	static int _bind_base_asArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::DrawElementsUInt::base_asArray() const function, expected prototype:\nconst osg::Array * osg::DrawElementsUInt::base_asArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Array * osg::DrawElementsUInt::base_asArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Array * lret = self->DrawElementsUInt::asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawElementsUInt::base_asArray
	static int _bind_base_asArray(lua_State *L) {
		if (_lg_typecheck_base_asArray_overload_1(L)) return _bind_base_asArray_overload_1(L);
		if (_lg_typecheck_base_asArray_overload_2(L)) return _bind_base_asArray_overload_2(L);

		luaL_error(L, "error in function base_asArray, cannot match any of the overloads for function base_asArray:\n  base_asArray()\n  base_asArray()\n");
		return 0;
	}

	// osg::Image * osg::DrawElementsUInt::base_asImage()
	static int _bind_base_asImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::DrawElementsUInt::base_asImage() function, expected prototype:\nosg::Image * osg::DrawElementsUInt::base_asImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::DrawElementsUInt::base_asImage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->DrawElementsUInt::asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::DrawElementsUInt::base_asImage() const
	static int _bind_base_asImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::DrawElementsUInt::base_asImage() const function, expected prototype:\nconst osg::Image * osg::DrawElementsUInt::base_asImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osg::DrawElementsUInt::base_asImage() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->DrawElementsUInt::asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawElementsUInt::base_asImage
	static int _bind_base_asImage(lua_State *L) {
		if (_lg_typecheck_base_asImage_overload_1(L)) return _bind_base_asImage_overload_1(L);
		if (_lg_typecheck_base_asImage_overload_2(L)) return _bind_base_asImage_overload_2(L);

		luaL_error(L, "error in function base_asImage, cannot match any of the overloads for function base_asImage:\n  base_asImage()\n  base_asImage()\n");
		return 0;
	}

	// void osg::DrawElementsUInt::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUInt::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::DrawElementsUInt::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUInt::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawElementsUInt::releaseGLObjects(state);

		return 0;
	}

	// osg::PrimitiveSet * osg::DrawElementsUInt::base_asPrimitiveSet()
	static int _bind_base_asPrimitiveSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asPrimitiveSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PrimitiveSet * osg::DrawElementsUInt::base_asPrimitiveSet() function, expected prototype:\nosg::PrimitiveSet * osg::DrawElementsUInt::base_asPrimitiveSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PrimitiveSet * osg::DrawElementsUInt::base_asPrimitiveSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PrimitiveSet * lret = self->DrawElementsUInt::asPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// const osg::PrimitiveSet * osg::DrawElementsUInt::base_asPrimitiveSet() const
	static int _bind_base_asPrimitiveSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asPrimitiveSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::PrimitiveSet * osg::DrawElementsUInt::base_asPrimitiveSet() const function, expected prototype:\nconst osg::PrimitiveSet * osg::DrawElementsUInt::base_asPrimitiveSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::PrimitiveSet * osg::DrawElementsUInt::base_asPrimitiveSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::PrimitiveSet * lret = self->DrawElementsUInt::asPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawElementsUInt::base_asPrimitiveSet
	static int _bind_base_asPrimitiveSet(lua_State *L) {
		if (_lg_typecheck_base_asPrimitiveSet_overload_1(L)) return _bind_base_asPrimitiveSet_overload_1(L);
		if (_lg_typecheck_base_asPrimitiveSet_overload_2(L)) return _bind_base_asPrimitiveSet_overload_2(L);

		luaL_error(L, "error in function base_asPrimitiveSet, cannot match any of the overloads for function base_asPrimitiveSet:\n  base_asPrimitiveSet()\n  base_asPrimitiveSet()\n");
		return 0;
	}

	// unsigned int osg::DrawElementsUInt::base_getNumPrimitives() const
	static int _bind_base_getNumPrimitives(lua_State *L) {
		if (!_lg_typecheck_base_getNumPrimitives(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElementsUInt::base_getNumPrimitives() const function, expected prototype:\nunsigned int osg::DrawElementsUInt::base_getNumPrimitives() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUInt::base_getNumPrimitives() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DrawElementsUInt::getNumPrimitives();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawElementsUInt::base_computeRange() const
	static int _bind_base_computeRange(lua_State *L) {
		if (!_lg_typecheck_base_computeRange(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUInt::base_computeRange() const function, expected prototype:\nvoid osg::DrawElementsUInt::base_computeRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUInt::base_computeRange() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawElementsUInt::computeRange();

		return 0;
	}

	// osg::DrawElements * osg::DrawElementsUInt::base_getDrawElements()
	static int _bind_base_getDrawElements_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getDrawElements_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawElements * osg::DrawElementsUInt::base_getDrawElements() function, expected prototype:\nosg::DrawElements * osg::DrawElementsUInt::base_getDrawElements()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::DrawElements * osg::DrawElementsUInt::base_getDrawElements(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::DrawElements * lret = self->DrawElementsUInt::getDrawElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElements >::push(L,lret,false);

		return 1;
	}

	// const osg::DrawElements * osg::DrawElementsUInt::base_getDrawElements() const
	static int _bind_base_getDrawElements_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getDrawElements_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::DrawElements * osg::DrawElementsUInt::base_getDrawElements() const function, expected prototype:\nconst osg::DrawElements * osg::DrawElementsUInt::base_getDrawElements() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::DrawElements * osg::DrawElementsUInt::base_getDrawElements() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::DrawElements * lret = self->DrawElementsUInt::getDrawElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElements >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawElementsUInt::base_getDrawElements
	static int _bind_base_getDrawElements(lua_State *L) {
		if (_lg_typecheck_base_getDrawElements_overload_1(L)) return _bind_base_getDrawElements_overload_1(L);
		if (_lg_typecheck_base_getDrawElements_overload_2(L)) return _bind_base_getDrawElements_overload_2(L);

		luaL_error(L, "error in function base_getDrawElements, cannot match any of the overloads for function base_getDrawElements:\n  base_getDrawElements()\n  base_getDrawElements()\n");
		return 0;
	}

	// osg::Object * osg::DrawElementsUInt::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawElementsUInt::base_cloneType() const function, expected prototype:\nosg::Object * osg::DrawElementsUInt::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawElementsUInt::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DrawElementsUInt::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::DrawElementsUInt::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawElementsUInt::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::DrawElementsUInt::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::DrawElementsUInt::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawElementsUInt::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DrawElementsUInt::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::DrawElementsUInt::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::DrawElementsUInt::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::DrawElementsUInt::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::DrawElementsUInt::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DrawElementsUInt::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::DrawElementsUInt::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DrawElementsUInt::base_libraryName() const function, expected prototype:\nconst char * osg::DrawElementsUInt::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DrawElementsUInt::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DrawElementsUInt::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::DrawElementsUInt::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DrawElementsUInt::base_className() const function, expected prototype:\nconst char * osg::DrawElementsUInt::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DrawElementsUInt::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DrawElementsUInt::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const void * osg::DrawElementsUInt::base_getDataPointer() const
	static int _bind_base_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_base_getDataPointer(L)) {
			luaL_error(L, "luna typecheck failed in const void * osg::DrawElementsUInt::base_getDataPointer() const function, expected prototype:\nconst void * osg::DrawElementsUInt::base_getDataPointer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * osg::DrawElementsUInt::base_getDataPointer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->DrawElementsUInt::getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::DrawElementsUInt::base_getTotalDataSize() const
	static int _bind_base_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_base_getTotalDataSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElementsUInt::base_getTotalDataSize() const function, expected prototype:\nunsigned int osg::DrawElementsUInt::base_getTotalDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUInt::base_getTotalDataSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DrawElementsUInt::getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::DrawElementsUInt::base_supportsBufferObject() const
	static int _bind_base_supportsBufferObject(lua_State *L) {
		if (!_lg_typecheck_base_supportsBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::DrawElementsUInt::base_supportsBufferObject() const function, expected prototype:\nbool osg::DrawElementsUInt::base_supportsBufferObject() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::DrawElementsUInt::base_supportsBufferObject() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DrawElementsUInt::supportsBufferObject();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::DrawElementsUInt::base_draw(osg::State & state, bool useVertexBufferObjects) const
	static int _bind_base_draw(lua_State *L) {
		if (!_lg_typecheck_base_draw(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUInt::base_draw(osg::State & state, bool useVertexBufferObjects) const function, expected prototype:\nvoid osg::DrawElementsUInt::base_draw(osg::State & state, bool useVertexBufferObjects) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::DrawElementsUInt::base_draw function");
		}
		osg::State & state=*state_ptr;
		bool useVertexBufferObjects=(bool)(lua_toboolean(L,3)==1);

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUInt::base_draw(osg::State &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawElementsUInt::draw(state, useVertexBufferObjects);

		return 0;
	}

	// unsigned int osg::DrawElementsUInt::base_getNumIndices() const
	static int _bind_base_getNumIndices(lua_State *L) {
		if (!_lg_typecheck_base_getNumIndices(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElementsUInt::base_getNumIndices() const function, expected prototype:\nunsigned int osg::DrawElementsUInt::base_getNumIndices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUInt::base_getNumIndices() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DrawElementsUInt::getNumIndices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DrawElementsUInt::base_index(unsigned int pos) const
	static int _bind_base_index(lua_State *L) {
		if (!_lg_typecheck_base_index(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElementsUInt::base_index(unsigned int pos) const function, expected prototype:\nunsigned int osg::DrawElementsUInt::base_index(unsigned int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUInt::base_index(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DrawElementsUInt::index(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawElementsUInt::base_offsetIndices(int offset)
	static int _bind_base_offsetIndices(lua_State *L) {
		if (!_lg_typecheck_base_offsetIndices(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUInt::base_offsetIndices(int offset) function, expected prototype:\nvoid osg::DrawElementsUInt::base_offsetIndices(int offset)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int offset=(int)lua_tointeger(L,2);

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUInt::base_offsetIndices(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawElementsUInt::offsetIndices(offset);

		return 0;
	}

	// void osg::DrawElementsUInt::base_reserveElements(unsigned int numIndices)
	static int _bind_base_reserveElements(lua_State *L) {
		if (!_lg_typecheck_base_reserveElements(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUInt::base_reserveElements(unsigned int numIndices) function, expected prototype:\nvoid osg::DrawElementsUInt::base_reserveElements(unsigned int numIndices)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int numIndices=(unsigned int)lua_tointeger(L,2);

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUInt::base_reserveElements(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawElementsUInt::reserveElements(numIndices);

		return 0;
	}

	// void osg::DrawElementsUInt::base_setElement(unsigned int i, unsigned int v)
	static int _bind_base_setElement(lua_State *L) {
		if (!_lg_typecheck_base_setElement(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUInt::base_setElement(unsigned int i, unsigned int v) function, expected prototype:\nvoid osg::DrawElementsUInt::base_setElement(unsigned int i, unsigned int v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		unsigned int v=(unsigned int)lua_tointeger(L,3);

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUInt::base_setElement(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawElementsUInt::setElement(i, v);

		return 0;
	}

	// unsigned int osg::DrawElementsUInt::base_getElement(unsigned int i)
	static int _bind_base_getElement(lua_State *L) {
		if (!_lg_typecheck_base_getElement(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawElementsUInt::base_getElement(unsigned int i) function, expected prototype:\nunsigned int osg::DrawElementsUInt::base_getElement(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawElementsUInt::base_getElement(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DrawElementsUInt::getElement(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawElementsUInt::base_addElement(unsigned int v)
	static int _bind_base_addElement(lua_State *L) {
		if (!_lg_typecheck_base_addElement(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawElementsUInt::base_addElement(unsigned int v) function, expected prototype:\nvoid osg::DrawElementsUInt::base_addElement(unsigned int v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int v=(unsigned int)lua_tointeger(L,2);

		osg::DrawElementsUInt* self=Luna< osg::Referenced >::checkSubType< osg::DrawElementsUInt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawElementsUInt::base_addElement(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawElementsUInt::addElement(v);

		return 0;
	}


	// Operator binds:

};

osg::DrawElementsUInt* LunaTraits< osg::DrawElementsUInt >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_DrawElementsUInt::_bind_ctor(L);
}

void LunaTraits< osg::DrawElementsUInt >::_bind_dtor(osg::DrawElementsUInt* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::DrawElementsUInt >::className[] = "DrawElementsUInt";
const char LunaTraits< osg::DrawElementsUInt >::fullName[] = "osg::DrawElementsUInt";
const char LunaTraits< osg::DrawElementsUInt >::moduleName[] = "osg";
const char* LunaTraits< osg::DrawElementsUInt >::parents[] = {"osg.DrawElements", 0};
const int LunaTraits< osg::DrawElementsUInt >::hash = 56499715;
const int LunaTraits< osg::DrawElementsUInt >::uniqueIDs[] = {50169651, 59037247,0};

luna_RegType LunaTraits< osg::DrawElementsUInt >::methods[] = {
	{"cloneType", &luna_wrapper_osg_DrawElementsUInt::_bind_cloneType},
	{"clone", &luna_wrapper_osg_DrawElementsUInt::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_DrawElementsUInt::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_DrawElementsUInt::_bind_libraryName},
	{"className", &luna_wrapper_osg_DrawElementsUInt::_bind_className},
	{"getDataPointer", &luna_wrapper_osg_DrawElementsUInt::_bind_getDataPointer},
	{"getTotalDataSize", &luna_wrapper_osg_DrawElementsUInt::_bind_getTotalDataSize},
	{"supportsBufferObject", &luna_wrapper_osg_DrawElementsUInt::_bind_supportsBufferObject},
	{"draw", &luna_wrapper_osg_DrawElementsUInt::_bind_draw},
	{"getNumIndices", &luna_wrapper_osg_DrawElementsUInt::_bind_getNumIndices},
	{"index", &luna_wrapper_osg_DrawElementsUInt::_bind_index},
	{"offsetIndices", &luna_wrapper_osg_DrawElementsUInt::_bind_offsetIndices},
	{"reserveElements", &luna_wrapper_osg_DrawElementsUInt::_bind_reserveElements},
	{"setElement", &luna_wrapper_osg_DrawElementsUInt::_bind_setElement},
	{"getElement", &luna_wrapper_osg_DrawElementsUInt::_bind_getElement},
	{"addElement", &luna_wrapper_osg_DrawElementsUInt::_bind_addElement},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_DrawElementsUInt::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_DrawElementsUInt::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_DrawElementsUInt::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_DrawElementsUInt::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_DrawElementsUInt::_bind_base_getUserData},
	{"base_asArray", &luna_wrapper_osg_DrawElementsUInt::_bind_base_asArray},
	{"base_asImage", &luna_wrapper_osg_DrawElementsUInt::_bind_base_asImage},
	{"base_releaseGLObjects", &luna_wrapper_osg_DrawElementsUInt::_bind_base_releaseGLObjects},
	{"base_asPrimitiveSet", &luna_wrapper_osg_DrawElementsUInt::_bind_base_asPrimitiveSet},
	{"base_getNumPrimitives", &luna_wrapper_osg_DrawElementsUInt::_bind_base_getNumPrimitives},
	{"base_computeRange", &luna_wrapper_osg_DrawElementsUInt::_bind_base_computeRange},
	{"base_getDrawElements", &luna_wrapper_osg_DrawElementsUInt::_bind_base_getDrawElements},
	{"base_cloneType", &luna_wrapper_osg_DrawElementsUInt::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_DrawElementsUInt::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_DrawElementsUInt::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_DrawElementsUInt::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_DrawElementsUInt::_bind_base_className},
	{"base_getDataPointer", &luna_wrapper_osg_DrawElementsUInt::_bind_base_getDataPointer},
	{"base_getTotalDataSize", &luna_wrapper_osg_DrawElementsUInt::_bind_base_getTotalDataSize},
	{"base_supportsBufferObject", &luna_wrapper_osg_DrawElementsUInt::_bind_base_supportsBufferObject},
	{"base_draw", &luna_wrapper_osg_DrawElementsUInt::_bind_base_draw},
	{"base_getNumIndices", &luna_wrapper_osg_DrawElementsUInt::_bind_base_getNumIndices},
	{"base_index", &luna_wrapper_osg_DrawElementsUInt::_bind_base_index},
	{"base_offsetIndices", &luna_wrapper_osg_DrawElementsUInt::_bind_base_offsetIndices},
	{"base_reserveElements", &luna_wrapper_osg_DrawElementsUInt::_bind_base_reserveElements},
	{"base_setElement", &luna_wrapper_osg_DrawElementsUInt::_bind_base_setElement},
	{"base_getElement", &luna_wrapper_osg_DrawElementsUInt::_bind_base_getElement},
	{"base_addElement", &luna_wrapper_osg_DrawElementsUInt::_bind_base_addElement},
	{"fromVoid", &luna_wrapper_osg_DrawElementsUInt::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_DrawElementsUInt::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_DrawElementsUInt::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DrawElementsUInt >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_DrawElementsUInt::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DrawElementsUInt >::enumValues[] = {
	{0,0}
};


