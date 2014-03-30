#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_DrawArrayLengths.h>

class luna_wrapper_osg_DrawArrayLengths {
public:
	typedef Luna< osg::DrawArrayLengths > luna_t;

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

		osg::DrawArrayLengths* self= (osg::DrawArrayLengths*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::DrawArrayLengths >::push(L,self,false);
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
		//osg::DrawArrayLengths* ptr= dynamic_cast< osg::DrawArrayLengths* >(Luna< osg::Referenced >::check(L,1));
		osg::DrawArrayLengths* ptr= luna_caster< osg::Referenced, osg::DrawArrayLengths >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::DrawArrayLengths >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_10(lua_State *L) {
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

	inline static bool _lg_typecheck_setFirst(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFirst(lua_State *L) {
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

	inline static bool _lg_typecheck_getNumPrimitives(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getDrawElements_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDrawElements_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_computeRange(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getNumPrimitives(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::DrawArrayLengths::DrawArrayLengths(unsigned int mode = 0)
	static osg::DrawArrayLengths* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawArrayLengths::DrawArrayLengths(unsigned int mode = 0) function, expected prototype:\nosg::DrawArrayLengths::DrawArrayLengths(unsigned int mode = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int mode=luatop>0 ? (unsigned int)lua_tointeger(L,1) : (unsigned int)0;

		return new osg::DrawArrayLengths(mode);
	}

	// osg::DrawArrayLengths::DrawArrayLengths(const osg::DrawArrayLengths & dal, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DrawArrayLengths* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawArrayLengths::DrawArrayLengths(const osg::DrawArrayLengths & dal, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DrawArrayLengths::DrawArrayLengths(const osg::DrawArrayLengths & dal, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::DrawArrayLengths* dal_ptr=(Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1));
		if( !dal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dal in osg::DrawArrayLengths::DrawArrayLengths function");
		}
		const osg::DrawArrayLengths & dal=*dal_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DrawArrayLengths::DrawArrayLengths function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::DrawArrayLengths(dal, copyop);
	}

	// osg::DrawArrayLengths::DrawArrayLengths(unsigned int mode, int first, unsigned int no, int * ptr)
	static osg::DrawArrayLengths* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawArrayLengths::DrawArrayLengths(unsigned int mode, int first, unsigned int no, int * ptr) function, expected prototype:\nosg::DrawArrayLengths::DrawArrayLengths(unsigned int mode, int first, unsigned int no, int * ptr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,1);
		int first=(int)lua_tointeger(L,2);
		unsigned int no=(unsigned int)lua_tointeger(L,3);
		int* ptr=(int*)Luna< void >::check(L,4);

		return new osg::DrawArrayLengths(mode, first, no, ptr);
	}

	// osg::DrawArrayLengths::DrawArrayLengths(unsigned int mode, int first, unsigned int no)
	static osg::DrawArrayLengths* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawArrayLengths::DrawArrayLengths(unsigned int mode, int first, unsigned int no) function, expected prototype:\nosg::DrawArrayLengths::DrawArrayLengths(unsigned int mode, int first, unsigned int no)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,1);
		int first=(int)lua_tointeger(L,2);
		unsigned int no=(unsigned int)lua_tointeger(L,3);

		return new osg::DrawArrayLengths(mode, first, no);
	}

	// osg::DrawArrayLengths::DrawArrayLengths(unsigned int mode, int first)
	static osg::DrawArrayLengths* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawArrayLengths::DrawArrayLengths(unsigned int mode, int first) function, expected prototype:\nosg::DrawArrayLengths::DrawArrayLengths(unsigned int mode, int first)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,1);
		int first=(int)lua_tointeger(L,2);

		return new osg::DrawArrayLengths(mode, first);
	}

	// osg::DrawArrayLengths::DrawArrayLengths(lua_Table * data, unsigned int mode = 0)
	static osg::DrawArrayLengths* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawArrayLengths::DrawArrayLengths(lua_Table * data, unsigned int mode = 0) function, expected prototype:\nosg::DrawArrayLengths::DrawArrayLengths(lua_Table * data, unsigned int mode = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int mode=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		return new wrapper_osg_DrawArrayLengths(L,NULL, mode);
	}

	// osg::DrawArrayLengths::DrawArrayLengths(lua_Table * data, const osg::DrawArrayLengths & dal, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DrawArrayLengths* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawArrayLengths::DrawArrayLengths(lua_Table * data, const osg::DrawArrayLengths & dal, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DrawArrayLengths::DrawArrayLengths(lua_Table * data, const osg::DrawArrayLengths & dal, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::DrawArrayLengths* dal_ptr=(Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,2));
		if( !dal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dal in osg::DrawArrayLengths::DrawArrayLengths function");
		}
		const osg::DrawArrayLengths & dal=*dal_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DrawArrayLengths::DrawArrayLengths function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_DrawArrayLengths(L,NULL, dal, copyop);
	}

	// osg::DrawArrayLengths::DrawArrayLengths(lua_Table * data, unsigned int mode, int first, unsigned int no, int * ptr)
	static osg::DrawArrayLengths* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawArrayLengths::DrawArrayLengths(lua_Table * data, unsigned int mode, int first, unsigned int no, int * ptr) function, expected prototype:\nosg::DrawArrayLengths::DrawArrayLengths(lua_Table * data, unsigned int mode, int first, unsigned int no, int * ptr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int first=(int)lua_tointeger(L,3);
		unsigned int no=(unsigned int)lua_tointeger(L,4);
		int* ptr=(int*)Luna< void >::check(L,5);

		return new wrapper_osg_DrawArrayLengths(L,NULL, mode, first, no, ptr);
	}

	// osg::DrawArrayLengths::DrawArrayLengths(lua_Table * data, unsigned int mode, int first, unsigned int no)
	static osg::DrawArrayLengths* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawArrayLengths::DrawArrayLengths(lua_Table * data, unsigned int mode, int first, unsigned int no) function, expected prototype:\nosg::DrawArrayLengths::DrawArrayLengths(lua_Table * data, unsigned int mode, int first, unsigned int no)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int first=(int)lua_tointeger(L,3);
		unsigned int no=(unsigned int)lua_tointeger(L,4);

		return new wrapper_osg_DrawArrayLengths(L,NULL, mode, first, no);
	}

	// osg::DrawArrayLengths::DrawArrayLengths(lua_Table * data, unsigned int mode, int first)
	static osg::DrawArrayLengths* _bind_ctor_overload_10(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawArrayLengths::DrawArrayLengths(lua_Table * data, unsigned int mode, int first) function, expected prototype:\nosg::DrawArrayLengths::DrawArrayLengths(lua_Table * data, unsigned int mode, int first)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int first=(int)lua_tointeger(L,3);

		return new wrapper_osg_DrawArrayLengths(L,NULL, mode, first);
	}

	// Overload binder for osg::DrawArrayLengths::DrawArrayLengths
	static osg::DrawArrayLengths* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);
		if (_lg_typecheck_ctor_overload_9(L)) return _bind_ctor_overload_9(L);
		if (_lg_typecheck_ctor_overload_10(L)) return _bind_ctor_overload_10(L);

		luaL_error(L, "error in function DrawArrayLengths, cannot match any of the overloads for function DrawArrayLengths:\n  DrawArrayLengths(unsigned int)\n  DrawArrayLengths(const osg::DrawArrayLengths &, const osg::CopyOp &)\n  DrawArrayLengths(unsigned int, int, unsigned int, int *)\n  DrawArrayLengths(unsigned int, int, unsigned int)\n  DrawArrayLengths(unsigned int, int)\n  DrawArrayLengths(lua_Table *, unsigned int)\n  DrawArrayLengths(lua_Table *, const osg::DrawArrayLengths &, const osg::CopyOp &)\n  DrawArrayLengths(lua_Table *, unsigned int, int, unsigned int, int *)\n  DrawArrayLengths(lua_Table *, unsigned int, int, unsigned int)\n  DrawArrayLengths(lua_Table *, unsigned int, int)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::DrawArrayLengths::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawArrayLengths::cloneType() const function, expected prototype:\nosg::Object * osg::DrawArrayLengths::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawArrayLengths::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::DrawArrayLengths::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawArrayLengths::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::DrawArrayLengths::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::DrawArrayLengths::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawArrayLengths::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::DrawArrayLengths::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::DrawArrayLengths::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::DrawArrayLengths::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::DrawArrayLengths::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::DrawArrayLengths::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DrawArrayLengths::libraryName() const function, expected prototype:\nconst char * osg::DrawArrayLengths::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DrawArrayLengths::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::DrawArrayLengths::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DrawArrayLengths::className() const function, expected prototype:\nconst char * osg::DrawArrayLengths::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DrawArrayLengths::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::DrawArrayLengths::setFirst(int first)
	static int _bind_setFirst(lua_State *L) {
		if (!_lg_typecheck_setFirst(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrayLengths::setFirst(int first) function, expected prototype:\nvoid osg::DrawArrayLengths::setFirst(int first)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int first=(int)lua_tointeger(L,2);

		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrayLengths::setFirst(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFirst(first);

		return 0;
	}

	// int osg::DrawArrayLengths::getFirst() const
	static int _bind_getFirst(lua_State *L) {
		if (!_lg_typecheck_getFirst(L)) {
			luaL_error(L, "luna typecheck failed in int osg::DrawArrayLengths::getFirst() const function, expected prototype:\nint osg::DrawArrayLengths::getFirst() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::DrawArrayLengths::getFirst() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getFirst();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawArrayLengths::draw(osg::State & state, bool useVertexBufferObjects) const
	static int _bind_draw(lua_State *L) {
		if (!_lg_typecheck_draw(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrayLengths::draw(osg::State & state, bool useVertexBufferObjects) const function, expected prototype:\nvoid osg::DrawArrayLengths::draw(osg::State & state, bool useVertexBufferObjects) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::DrawArrayLengths::draw function");
		}
		osg::State & state=*state_ptr;
		bool useVertexBufferObjects=(bool)(lua_toboolean(L,3)==1);

		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrayLengths::draw(osg::State &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->draw(state, useVertexBufferObjects);

		return 0;
	}

	// unsigned int osg::DrawArrayLengths::getNumIndices() const
	static int _bind_getNumIndices(lua_State *L) {
		if (!_lg_typecheck_getNumIndices(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawArrayLengths::getNumIndices() const function, expected prototype:\nunsigned int osg::DrawArrayLengths::getNumIndices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawArrayLengths::getNumIndices() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumIndices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DrawArrayLengths::index(unsigned int pos) const
	static int _bind_index(lua_State *L) {
		if (!_lg_typecheck_index(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawArrayLengths::index(unsigned int pos) const function, expected prototype:\nunsigned int osg::DrawArrayLengths::index(unsigned int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawArrayLengths::index(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->index(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawArrayLengths::offsetIndices(int offset)
	static int _bind_offsetIndices(lua_State *L) {
		if (!_lg_typecheck_offsetIndices(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrayLengths::offsetIndices(int offset) function, expected prototype:\nvoid osg::DrawArrayLengths::offsetIndices(int offset)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int offset=(int)lua_tointeger(L,2);

		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrayLengths::offsetIndices(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->offsetIndices(offset);

		return 0;
	}

	// unsigned int osg::DrawArrayLengths::getNumPrimitives() const
	static int _bind_getNumPrimitives(lua_State *L) {
		if (!_lg_typecheck_getNumPrimitives(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawArrayLengths::getNumPrimitives() const function, expected prototype:\nunsigned int osg::DrawArrayLengths::getNumPrimitives() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawArrayLengths::getNumPrimitives() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumPrimitives();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawArrayLengths::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrayLengths::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::DrawArrayLengths::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrayLengths::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawArrayLengths::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::DrawArrayLengths::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrayLengths::base_setName(const std::string & name) function, expected prototype:\nvoid osg::DrawArrayLengths::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrayLengths::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawArrayLengths::setName(name);

		return 0;
	}

	// void osg::DrawArrayLengths::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrayLengths::base_computeDataVariance() function, expected prototype:\nvoid osg::DrawArrayLengths::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrayLengths::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawArrayLengths::computeDataVariance();

		return 0;
	}

	// void osg::DrawArrayLengths::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrayLengths::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::DrawArrayLengths::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrayLengths::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawArrayLengths::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::DrawArrayLengths::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::DrawArrayLengths::base_getUserData() function, expected prototype:\nosg::Referenced * osg::DrawArrayLengths::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::DrawArrayLengths::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->DrawArrayLengths::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::DrawArrayLengths::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::DrawArrayLengths::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::DrawArrayLengths::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::DrawArrayLengths::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->DrawArrayLengths::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawArrayLengths::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Array * osg::DrawArrayLengths::base_asArray()
	static int _bind_base_asArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::DrawArrayLengths::base_asArray() function, expected prototype:\nosg::Array * osg::DrawArrayLengths::base_asArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::DrawArrayLengths::base_asArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->DrawArrayLengths::asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::DrawArrayLengths::base_asArray() const
	static int _bind_base_asArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::DrawArrayLengths::base_asArray() const function, expected prototype:\nconst osg::Array * osg::DrawArrayLengths::base_asArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Array * osg::DrawArrayLengths::base_asArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Array * lret = self->DrawArrayLengths::asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawArrayLengths::base_asArray
	static int _bind_base_asArray(lua_State *L) {
		if (_lg_typecheck_base_asArray_overload_1(L)) return _bind_base_asArray_overload_1(L);
		if (_lg_typecheck_base_asArray_overload_2(L)) return _bind_base_asArray_overload_2(L);

		luaL_error(L, "error in function base_asArray, cannot match any of the overloads for function base_asArray:\n  base_asArray()\n  base_asArray()\n");
		return 0;
	}

	// osg::Image * osg::DrawArrayLengths::base_asImage()
	static int _bind_base_asImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::DrawArrayLengths::base_asImage() function, expected prototype:\nosg::Image * osg::DrawArrayLengths::base_asImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::DrawArrayLengths::base_asImage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->DrawArrayLengths::asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::DrawArrayLengths::base_asImage() const
	static int _bind_base_asImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::DrawArrayLengths::base_asImage() const function, expected prototype:\nconst osg::Image * osg::DrawArrayLengths::base_asImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osg::DrawArrayLengths::base_asImage() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->DrawArrayLengths::asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawArrayLengths::base_asImage
	static int _bind_base_asImage(lua_State *L) {
		if (_lg_typecheck_base_asImage_overload_1(L)) return _bind_base_asImage_overload_1(L);
		if (_lg_typecheck_base_asImage_overload_2(L)) return _bind_base_asImage_overload_2(L);

		luaL_error(L, "error in function base_asImage, cannot match any of the overloads for function base_asImage:\n  base_asImage()\n  base_asImage()\n");
		return 0;
	}

	// void osg::DrawArrayLengths::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrayLengths::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::DrawArrayLengths::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrayLengths::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawArrayLengths::releaseGLObjects(state);

		return 0;
	}

	// osg::PrimitiveSet * osg::DrawArrayLengths::base_asPrimitiveSet()
	static int _bind_base_asPrimitiveSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asPrimitiveSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PrimitiveSet * osg::DrawArrayLengths::base_asPrimitiveSet() function, expected prototype:\nosg::PrimitiveSet * osg::DrawArrayLengths::base_asPrimitiveSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PrimitiveSet * osg::DrawArrayLengths::base_asPrimitiveSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PrimitiveSet * lret = self->DrawArrayLengths::asPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// const osg::PrimitiveSet * osg::DrawArrayLengths::base_asPrimitiveSet() const
	static int _bind_base_asPrimitiveSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asPrimitiveSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::PrimitiveSet * osg::DrawArrayLengths::base_asPrimitiveSet() const function, expected prototype:\nconst osg::PrimitiveSet * osg::DrawArrayLengths::base_asPrimitiveSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::PrimitiveSet * osg::DrawArrayLengths::base_asPrimitiveSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::PrimitiveSet * lret = self->DrawArrayLengths::asPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawArrayLengths::base_asPrimitiveSet
	static int _bind_base_asPrimitiveSet(lua_State *L) {
		if (_lg_typecheck_base_asPrimitiveSet_overload_1(L)) return _bind_base_asPrimitiveSet_overload_1(L);
		if (_lg_typecheck_base_asPrimitiveSet_overload_2(L)) return _bind_base_asPrimitiveSet_overload_2(L);

		luaL_error(L, "error in function base_asPrimitiveSet, cannot match any of the overloads for function base_asPrimitiveSet:\n  base_asPrimitiveSet()\n  base_asPrimitiveSet()\n");
		return 0;
	}

	// const void * osg::DrawArrayLengths::base_getDataPointer() const
	static int _bind_base_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_base_getDataPointer(L)) {
			luaL_error(L, "luna typecheck failed in const void * osg::DrawArrayLengths::base_getDataPointer() const function, expected prototype:\nconst void * osg::DrawArrayLengths::base_getDataPointer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * osg::DrawArrayLengths::base_getDataPointer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->DrawArrayLengths::getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::DrawArrayLengths::base_getTotalDataSize() const
	static int _bind_base_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_base_getTotalDataSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawArrayLengths::base_getTotalDataSize() const function, expected prototype:\nunsigned int osg::DrawArrayLengths::base_getTotalDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawArrayLengths::base_getTotalDataSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DrawArrayLengths::getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::DrawArrayLengths::base_supportsBufferObject() const
	static int _bind_base_supportsBufferObject(lua_State *L) {
		if (!_lg_typecheck_base_supportsBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::DrawArrayLengths::base_supportsBufferObject() const function, expected prototype:\nbool osg::DrawArrayLengths::base_supportsBufferObject() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::DrawArrayLengths::base_supportsBufferObject() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DrawArrayLengths::supportsBufferObject();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::DrawElements * osg::DrawArrayLengths::base_getDrawElements()
	static int _bind_base_getDrawElements_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getDrawElements_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawElements * osg::DrawArrayLengths::base_getDrawElements() function, expected prototype:\nosg::DrawElements * osg::DrawArrayLengths::base_getDrawElements()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::DrawElements * osg::DrawArrayLengths::base_getDrawElements(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::DrawElements * lret = self->DrawArrayLengths::getDrawElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElements >::push(L,lret,false);

		return 1;
	}

	// const osg::DrawElements * osg::DrawArrayLengths::base_getDrawElements() const
	static int _bind_base_getDrawElements_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getDrawElements_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::DrawElements * osg::DrawArrayLengths::base_getDrawElements() const function, expected prototype:\nconst osg::DrawElements * osg::DrawArrayLengths::base_getDrawElements() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::DrawElements * osg::DrawArrayLengths::base_getDrawElements() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::DrawElements * lret = self->DrawArrayLengths::getDrawElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElements >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawArrayLengths::base_getDrawElements
	static int _bind_base_getDrawElements(lua_State *L) {
		if (_lg_typecheck_base_getDrawElements_overload_1(L)) return _bind_base_getDrawElements_overload_1(L);
		if (_lg_typecheck_base_getDrawElements_overload_2(L)) return _bind_base_getDrawElements_overload_2(L);

		luaL_error(L, "error in function base_getDrawElements, cannot match any of the overloads for function base_getDrawElements:\n  base_getDrawElements()\n  base_getDrawElements()\n");
		return 0;
	}

	// void osg::DrawArrayLengths::base_computeRange() const
	static int _bind_base_computeRange(lua_State *L) {
		if (!_lg_typecheck_base_computeRange(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrayLengths::base_computeRange() const function, expected prototype:\nvoid osg::DrawArrayLengths::base_computeRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrayLengths::base_computeRange() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawArrayLengths::computeRange();

		return 0;
	}

	// osg::Object * osg::DrawArrayLengths::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawArrayLengths::base_cloneType() const function, expected prototype:\nosg::Object * osg::DrawArrayLengths::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawArrayLengths::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DrawArrayLengths::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::DrawArrayLengths::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawArrayLengths::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::DrawArrayLengths::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::DrawArrayLengths::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawArrayLengths::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DrawArrayLengths::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::DrawArrayLengths::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::DrawArrayLengths::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::DrawArrayLengths::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::DrawArrayLengths::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DrawArrayLengths::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::DrawArrayLengths::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DrawArrayLengths::base_libraryName() const function, expected prototype:\nconst char * osg::DrawArrayLengths::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DrawArrayLengths::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DrawArrayLengths::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::DrawArrayLengths::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DrawArrayLengths::base_className() const function, expected prototype:\nconst char * osg::DrawArrayLengths::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DrawArrayLengths::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DrawArrayLengths::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::DrawArrayLengths::base_draw(osg::State & state, bool useVertexBufferObjects) const
	static int _bind_base_draw(lua_State *L) {
		if (!_lg_typecheck_base_draw(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrayLengths::base_draw(osg::State & state, bool useVertexBufferObjects) const function, expected prototype:\nvoid osg::DrawArrayLengths::base_draw(osg::State & state, bool useVertexBufferObjects) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::DrawArrayLengths::base_draw function");
		}
		osg::State & state=*state_ptr;
		bool useVertexBufferObjects=(bool)(lua_toboolean(L,3)==1);

		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrayLengths::base_draw(osg::State &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawArrayLengths::draw(state, useVertexBufferObjects);

		return 0;
	}

	// unsigned int osg::DrawArrayLengths::base_getNumIndices() const
	static int _bind_base_getNumIndices(lua_State *L) {
		if (!_lg_typecheck_base_getNumIndices(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawArrayLengths::base_getNumIndices() const function, expected prototype:\nunsigned int osg::DrawArrayLengths::base_getNumIndices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawArrayLengths::base_getNumIndices() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DrawArrayLengths::getNumIndices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DrawArrayLengths::base_index(unsigned int pos) const
	static int _bind_base_index(lua_State *L) {
		if (!_lg_typecheck_base_index(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawArrayLengths::base_index(unsigned int pos) const function, expected prototype:\nunsigned int osg::DrawArrayLengths::base_index(unsigned int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawArrayLengths::base_index(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DrawArrayLengths::index(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawArrayLengths::base_offsetIndices(int offset)
	static int _bind_base_offsetIndices(lua_State *L) {
		if (!_lg_typecheck_base_offsetIndices(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrayLengths::base_offsetIndices(int offset) function, expected prototype:\nvoid osg::DrawArrayLengths::base_offsetIndices(int offset)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int offset=(int)lua_tointeger(L,2);

		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrayLengths::base_offsetIndices(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawArrayLengths::offsetIndices(offset);

		return 0;
	}

	// unsigned int osg::DrawArrayLengths::base_getNumPrimitives() const
	static int _bind_base_getNumPrimitives(lua_State *L) {
		if (!_lg_typecheck_base_getNumPrimitives(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawArrayLengths::base_getNumPrimitives() const function, expected prototype:\nunsigned int osg::DrawArrayLengths::base_getNumPrimitives() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrayLengths* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrayLengths >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawArrayLengths::base_getNumPrimitives() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DrawArrayLengths::getNumPrimitives();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::DrawArrayLengths* LunaTraits< osg::DrawArrayLengths >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_DrawArrayLengths::_bind_ctor(L);
}

void LunaTraits< osg::DrawArrayLengths >::_bind_dtor(osg::DrawArrayLengths* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::DrawArrayLengths >::className[] = "DrawArrayLengths";
const char LunaTraits< osg::DrawArrayLengths >::fullName[] = "osg::DrawArrayLengths";
const char LunaTraits< osg::DrawArrayLengths >::moduleName[] = "osg";
const char* LunaTraits< osg::DrawArrayLengths >::parents[] = {"osg.PrimitiveSet", 0};
const int LunaTraits< osg::DrawArrayLengths >::hash = 84437536;
const int LunaTraits< osg::DrawArrayLengths >::uniqueIDs[] = {50169651, 59037247,0};

luna_RegType LunaTraits< osg::DrawArrayLengths >::methods[] = {
	{"cloneType", &luna_wrapper_osg_DrawArrayLengths::_bind_cloneType},
	{"clone", &luna_wrapper_osg_DrawArrayLengths::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_DrawArrayLengths::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_DrawArrayLengths::_bind_libraryName},
	{"className", &luna_wrapper_osg_DrawArrayLengths::_bind_className},
	{"setFirst", &luna_wrapper_osg_DrawArrayLengths::_bind_setFirst},
	{"getFirst", &luna_wrapper_osg_DrawArrayLengths::_bind_getFirst},
	{"draw", &luna_wrapper_osg_DrawArrayLengths::_bind_draw},
	{"getNumIndices", &luna_wrapper_osg_DrawArrayLengths::_bind_getNumIndices},
	{"index", &luna_wrapper_osg_DrawArrayLengths::_bind_index},
	{"offsetIndices", &luna_wrapper_osg_DrawArrayLengths::_bind_offsetIndices},
	{"getNumPrimitives", &luna_wrapper_osg_DrawArrayLengths::_bind_getNumPrimitives},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_DrawArrayLengths::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_DrawArrayLengths::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_DrawArrayLengths::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_DrawArrayLengths::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_DrawArrayLengths::_bind_base_getUserData},
	{"base_asArray", &luna_wrapper_osg_DrawArrayLengths::_bind_base_asArray},
	{"base_asImage", &luna_wrapper_osg_DrawArrayLengths::_bind_base_asImage},
	{"base_releaseGLObjects", &luna_wrapper_osg_DrawArrayLengths::_bind_base_releaseGLObjects},
	{"base_asPrimitiveSet", &luna_wrapper_osg_DrawArrayLengths::_bind_base_asPrimitiveSet},
	{"base_getDataPointer", &luna_wrapper_osg_DrawArrayLengths::_bind_base_getDataPointer},
	{"base_getTotalDataSize", &luna_wrapper_osg_DrawArrayLengths::_bind_base_getTotalDataSize},
	{"base_supportsBufferObject", &luna_wrapper_osg_DrawArrayLengths::_bind_base_supportsBufferObject},
	{"base_getDrawElements", &luna_wrapper_osg_DrawArrayLengths::_bind_base_getDrawElements},
	{"base_computeRange", &luna_wrapper_osg_DrawArrayLengths::_bind_base_computeRange},
	{"base_cloneType", &luna_wrapper_osg_DrawArrayLengths::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_DrawArrayLengths::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_DrawArrayLengths::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_DrawArrayLengths::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_DrawArrayLengths::_bind_base_className},
	{"base_draw", &luna_wrapper_osg_DrawArrayLengths::_bind_base_draw},
	{"base_getNumIndices", &luna_wrapper_osg_DrawArrayLengths::_bind_base_getNumIndices},
	{"base_index", &luna_wrapper_osg_DrawArrayLengths::_bind_base_index},
	{"base_offsetIndices", &luna_wrapper_osg_DrawArrayLengths::_bind_base_offsetIndices},
	{"base_getNumPrimitives", &luna_wrapper_osg_DrawArrayLengths::_bind_base_getNumPrimitives},
	{"fromVoid", &luna_wrapper_osg_DrawArrayLengths::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_DrawArrayLengths::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_DrawArrayLengths::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DrawArrayLengths >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_DrawArrayLengths::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DrawArrayLengths >::enumValues[] = {
	{0,0}
};


