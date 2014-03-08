#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_DrawArrays.h>

class luna_wrapper_osg_DrawArrays {
public:
	typedef Luna< osg::DrawArrays > luna_t;

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

		osg::DrawArrays* self= (osg::DrawArrays*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::DrawArrays >::push(L,self,false);
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
		//osg::DrawArrays* ptr= dynamic_cast< osg::DrawArrays* >(Luna< osg::Referenced >::check(L,1));
		osg::DrawArrays* ptr= luna_caster< osg::Referenced, osg::DrawArrays >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::DrawArrays >::push(L,ptr,false);
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
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1))) ) return false;
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
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
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

	inline static bool _lg_typecheck_setCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCount(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getNumPrimitives(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::DrawArrays::DrawArrays(unsigned int mode = 0)
	static osg::DrawArrays* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawArrays::DrawArrays(unsigned int mode = 0) function, expected prototype:\nosg::DrawArrays::DrawArrays(unsigned int mode = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int mode=luatop>0 ? (unsigned int)lua_tointeger(L,1) : (unsigned int)0;

		return new osg::DrawArrays(mode);
	}

	// osg::DrawArrays::DrawArrays(unsigned int mode, int first, int count, int numInstances = 0)
	static osg::DrawArrays* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawArrays::DrawArrays(unsigned int mode, int first, int count, int numInstances = 0) function, expected prototype:\nosg::DrawArrays::DrawArrays(unsigned int mode, int first, int count, int numInstances = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int mode=(unsigned int)lua_tointeger(L,1);
		int first=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		int numInstances=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		return new osg::DrawArrays(mode, first, count, numInstances);
	}

	// osg::DrawArrays::DrawArrays(const osg::DrawArrays & da, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DrawArrays* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawArrays::DrawArrays(const osg::DrawArrays & da, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DrawArrays::DrawArrays(const osg::DrawArrays & da, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::DrawArrays* da_ptr=(Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1));
		if( !da_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg da in osg::DrawArrays::DrawArrays function");
		}
		const osg::DrawArrays & da=*da_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DrawArrays::DrawArrays function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::DrawArrays(da, copyop);
	}

	// osg::DrawArrays::DrawArrays(lua_Table * data, unsigned int mode = 0)
	static osg::DrawArrays* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawArrays::DrawArrays(lua_Table * data, unsigned int mode = 0) function, expected prototype:\nosg::DrawArrays::DrawArrays(lua_Table * data, unsigned int mode = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int mode=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		return new wrapper_osg_DrawArrays(L,NULL, mode);
	}

	// osg::DrawArrays::DrawArrays(lua_Table * data, unsigned int mode, int first, int count, int numInstances = 0)
	static osg::DrawArrays* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawArrays::DrawArrays(lua_Table * data, unsigned int mode, int first, int count, int numInstances = 0) function, expected prototype:\nosg::DrawArrays::DrawArrays(lua_Table * data, unsigned int mode, int first, int count, int numInstances = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int first=(int)lua_tointeger(L,3);
		int count=(int)lua_tointeger(L,4);
		int numInstances=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		return new wrapper_osg_DrawArrays(L,NULL, mode, first, count, numInstances);
	}

	// osg::DrawArrays::DrawArrays(lua_Table * data, const osg::DrawArrays & da, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DrawArrays* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawArrays::DrawArrays(lua_Table * data, const osg::DrawArrays & da, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DrawArrays::DrawArrays(lua_Table * data, const osg::DrawArrays & da, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::DrawArrays* da_ptr=(Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,2));
		if( !da_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg da in osg::DrawArrays::DrawArrays function");
		}
		const osg::DrawArrays & da=*da_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DrawArrays::DrawArrays function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_DrawArrays(L,NULL, da, copyop);
	}

	// Overload binder for osg::DrawArrays::DrawArrays
	static osg::DrawArrays* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function DrawArrays, cannot match any of the overloads for function DrawArrays:\n  DrawArrays(unsigned int)\n  DrawArrays(unsigned int, int, int, int)\n  DrawArrays(const osg::DrawArrays &, const osg::CopyOp &)\n  DrawArrays(lua_Table *, unsigned int)\n  DrawArrays(lua_Table *, unsigned int, int, int, int)\n  DrawArrays(lua_Table *, const osg::DrawArrays &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::DrawArrays::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawArrays::cloneType() const function, expected prototype:\nosg::Object * osg::DrawArrays::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawArrays::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::DrawArrays::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawArrays::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::DrawArrays::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::DrawArrays::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawArrays::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::DrawArrays::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::DrawArrays::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::DrawArrays::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::DrawArrays::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::DrawArrays::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DrawArrays::libraryName() const function, expected prototype:\nconst char * osg::DrawArrays::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DrawArrays::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::DrawArrays::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DrawArrays::className() const function, expected prototype:\nconst char * osg::DrawArrays::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DrawArrays::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::DrawArrays::set(unsigned int mode, int first, int count)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrays::set(unsigned int mode, int first, int count) function, expected prototype:\nvoid osg::DrawArrays::set(unsigned int mode, int first, int count)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int first=(int)lua_tointeger(L,3);
		int count=(int)lua_tointeger(L,4);

		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrays::set(unsigned int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(mode, first, count);

		return 0;
	}

	// void osg::DrawArrays::setFirst(int first)
	static int _bind_setFirst(lua_State *L) {
		if (!_lg_typecheck_setFirst(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrays::setFirst(int first) function, expected prototype:\nvoid osg::DrawArrays::setFirst(int first)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int first=(int)lua_tointeger(L,2);

		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrays::setFirst(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFirst(first);

		return 0;
	}

	// int osg::DrawArrays::getFirst() const
	static int _bind_getFirst(lua_State *L) {
		if (!_lg_typecheck_getFirst(L)) {
			luaL_error(L, "luna typecheck failed in int osg::DrawArrays::getFirst() const function, expected prototype:\nint osg::DrawArrays::getFirst() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::DrawArrays::getFirst() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getFirst();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawArrays::setCount(int count)
	static int _bind_setCount(lua_State *L) {
		if (!_lg_typecheck_setCount(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrays::setCount(int count) function, expected prototype:\nvoid osg::DrawArrays::setCount(int count)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int count=(int)lua_tointeger(L,2);

		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrays::setCount(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCount(count);

		return 0;
	}

	// int osg::DrawArrays::getCount() const
	static int _bind_getCount(lua_State *L) {
		if (!_lg_typecheck_getCount(L)) {
			luaL_error(L, "luna typecheck failed in int osg::DrawArrays::getCount() const function, expected prototype:\nint osg::DrawArrays::getCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::DrawArrays::getCount() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawArrays::draw(osg::State & state, bool useVertexBufferObjects) const
	static int _bind_draw(lua_State *L) {
		if (!_lg_typecheck_draw(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrays::draw(osg::State & state, bool useVertexBufferObjects) const function, expected prototype:\nvoid osg::DrawArrays::draw(osg::State & state, bool useVertexBufferObjects) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::DrawArrays::draw function");
		}
		osg::State & state=*state_ptr;
		bool useVertexBufferObjects=(bool)(lua_toboolean(L,3)==1);

		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrays::draw(osg::State &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->draw(state, useVertexBufferObjects);

		return 0;
	}

	// unsigned int osg::DrawArrays::getNumIndices() const
	static int _bind_getNumIndices(lua_State *L) {
		if (!_lg_typecheck_getNumIndices(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawArrays::getNumIndices() const function, expected prototype:\nunsigned int osg::DrawArrays::getNumIndices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawArrays::getNumIndices() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumIndices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DrawArrays::index(unsigned int pos) const
	static int _bind_index(lua_State *L) {
		if (!_lg_typecheck_index(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawArrays::index(unsigned int pos) const function, expected prototype:\nunsigned int osg::DrawArrays::index(unsigned int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawArrays::index(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->index(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawArrays::offsetIndices(int offset)
	static int _bind_offsetIndices(lua_State *L) {
		if (!_lg_typecheck_offsetIndices(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrays::offsetIndices(int offset) function, expected prototype:\nvoid osg::DrawArrays::offsetIndices(int offset)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int offset=(int)lua_tointeger(L,2);

		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrays::offsetIndices(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->offsetIndices(offset);

		return 0;
	}

	// void osg::DrawArrays::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrays::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::DrawArrays::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrays::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawArrays::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::DrawArrays::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrays::base_setName(const std::string & name) function, expected prototype:\nvoid osg::DrawArrays::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrays::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawArrays::setName(name);

		return 0;
	}

	// void osg::DrawArrays::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrays::base_computeDataVariance() function, expected prototype:\nvoid osg::DrawArrays::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrays::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawArrays::computeDataVariance();

		return 0;
	}

	// void osg::DrawArrays::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrays::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::DrawArrays::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrays::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawArrays::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::DrawArrays::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::DrawArrays::base_getUserData() function, expected prototype:\nosg::Referenced * osg::DrawArrays::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::DrawArrays::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->DrawArrays::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::DrawArrays::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::DrawArrays::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::DrawArrays::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::DrawArrays::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->DrawArrays::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawArrays::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Array * osg::DrawArrays::base_asArray()
	static int _bind_base_asArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::DrawArrays::base_asArray() function, expected prototype:\nosg::Array * osg::DrawArrays::base_asArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::DrawArrays::base_asArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->DrawArrays::asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::DrawArrays::base_asArray() const
	static int _bind_base_asArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::DrawArrays::base_asArray() const function, expected prototype:\nconst osg::Array * osg::DrawArrays::base_asArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Array * osg::DrawArrays::base_asArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Array * lret = self->DrawArrays::asArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawArrays::base_asArray
	static int _bind_base_asArray(lua_State *L) {
		if (_lg_typecheck_base_asArray_overload_1(L)) return _bind_base_asArray_overload_1(L);
		if (_lg_typecheck_base_asArray_overload_2(L)) return _bind_base_asArray_overload_2(L);

		luaL_error(L, "error in function base_asArray, cannot match any of the overloads for function base_asArray:\n  base_asArray()\n  base_asArray()\n");
		return 0;
	}

	// osg::Image * osg::DrawArrays::base_asImage()
	static int _bind_base_asImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::DrawArrays::base_asImage() function, expected prototype:\nosg::Image * osg::DrawArrays::base_asImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::DrawArrays::base_asImage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->DrawArrays::asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::DrawArrays::base_asImage() const
	static int _bind_base_asImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::DrawArrays::base_asImage() const function, expected prototype:\nconst osg::Image * osg::DrawArrays::base_asImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osg::DrawArrays::base_asImage() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->DrawArrays::asImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawArrays::base_asImage
	static int _bind_base_asImage(lua_State *L) {
		if (_lg_typecheck_base_asImage_overload_1(L)) return _bind_base_asImage_overload_1(L);
		if (_lg_typecheck_base_asImage_overload_2(L)) return _bind_base_asImage_overload_2(L);

		luaL_error(L, "error in function base_asImage, cannot match any of the overloads for function base_asImage:\n  base_asImage()\n  base_asImage()\n");
		return 0;
	}

	// void osg::DrawArrays::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrays::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::DrawArrays::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrays::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawArrays::releaseGLObjects(state);

		return 0;
	}

	// osg::PrimitiveSet * osg::DrawArrays::base_asPrimitiveSet()
	static int _bind_base_asPrimitiveSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asPrimitiveSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PrimitiveSet * osg::DrawArrays::base_asPrimitiveSet() function, expected prototype:\nosg::PrimitiveSet * osg::DrawArrays::base_asPrimitiveSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PrimitiveSet * osg::DrawArrays::base_asPrimitiveSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PrimitiveSet * lret = self->DrawArrays::asPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// const osg::PrimitiveSet * osg::DrawArrays::base_asPrimitiveSet() const
	static int _bind_base_asPrimitiveSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asPrimitiveSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::PrimitiveSet * osg::DrawArrays::base_asPrimitiveSet() const function, expected prototype:\nconst osg::PrimitiveSet * osg::DrawArrays::base_asPrimitiveSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::PrimitiveSet * osg::DrawArrays::base_asPrimitiveSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::PrimitiveSet * lret = self->DrawArrays::asPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawArrays::base_asPrimitiveSet
	static int _bind_base_asPrimitiveSet(lua_State *L) {
		if (_lg_typecheck_base_asPrimitiveSet_overload_1(L)) return _bind_base_asPrimitiveSet_overload_1(L);
		if (_lg_typecheck_base_asPrimitiveSet_overload_2(L)) return _bind_base_asPrimitiveSet_overload_2(L);

		luaL_error(L, "error in function base_asPrimitiveSet, cannot match any of the overloads for function base_asPrimitiveSet:\n  base_asPrimitiveSet()\n  base_asPrimitiveSet()\n");
		return 0;
	}

	// const void * osg::DrawArrays::base_getDataPointer() const
	static int _bind_base_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_base_getDataPointer(L)) {
			luaL_error(L, "luna typecheck failed in const void * osg::DrawArrays::base_getDataPointer() const function, expected prototype:\nconst void * osg::DrawArrays::base_getDataPointer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * osg::DrawArrays::base_getDataPointer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->DrawArrays::getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::DrawArrays::base_getTotalDataSize() const
	static int _bind_base_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_base_getTotalDataSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawArrays::base_getTotalDataSize() const function, expected prototype:\nunsigned int osg::DrawArrays::base_getTotalDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawArrays::base_getTotalDataSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DrawArrays::getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::DrawArrays::base_supportsBufferObject() const
	static int _bind_base_supportsBufferObject(lua_State *L) {
		if (!_lg_typecheck_base_supportsBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::DrawArrays::base_supportsBufferObject() const function, expected prototype:\nbool osg::DrawArrays::base_supportsBufferObject() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::DrawArrays::base_supportsBufferObject() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DrawArrays::supportsBufferObject();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::DrawElements * osg::DrawArrays::base_getDrawElements()
	static int _bind_base_getDrawElements_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getDrawElements_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawElements * osg::DrawArrays::base_getDrawElements() function, expected prototype:\nosg::DrawElements * osg::DrawArrays::base_getDrawElements()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::DrawElements * osg::DrawArrays::base_getDrawElements(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::DrawElements * lret = self->DrawArrays::getDrawElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElements >::push(L,lret,false);

		return 1;
	}

	// const osg::DrawElements * osg::DrawArrays::base_getDrawElements() const
	static int _bind_base_getDrawElements_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getDrawElements_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::DrawElements * osg::DrawArrays::base_getDrawElements() const function, expected prototype:\nconst osg::DrawElements * osg::DrawArrays::base_getDrawElements() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::DrawElements * osg::DrawArrays::base_getDrawElements() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::DrawElements * lret = self->DrawArrays::getDrawElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElements >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawArrays::base_getDrawElements
	static int _bind_base_getDrawElements(lua_State *L) {
		if (_lg_typecheck_base_getDrawElements_overload_1(L)) return _bind_base_getDrawElements_overload_1(L);
		if (_lg_typecheck_base_getDrawElements_overload_2(L)) return _bind_base_getDrawElements_overload_2(L);

		luaL_error(L, "error in function base_getDrawElements, cannot match any of the overloads for function base_getDrawElements:\n  base_getDrawElements()\n  base_getDrawElements()\n");
		return 0;
	}

	// unsigned int osg::DrawArrays::base_getNumPrimitives() const
	static int _bind_base_getNumPrimitives(lua_State *L) {
		if (!_lg_typecheck_base_getNumPrimitives(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawArrays::base_getNumPrimitives() const function, expected prototype:\nunsigned int osg::DrawArrays::base_getNumPrimitives() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawArrays::base_getNumPrimitives() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DrawArrays::getNumPrimitives();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawArrays::base_computeRange() const
	static int _bind_base_computeRange(lua_State *L) {
		if (!_lg_typecheck_base_computeRange(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrays::base_computeRange() const function, expected prototype:\nvoid osg::DrawArrays::base_computeRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrays::base_computeRange() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawArrays::computeRange();

		return 0;
	}

	// osg::Object * osg::DrawArrays::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawArrays::base_cloneType() const function, expected prototype:\nosg::Object * osg::DrawArrays::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawArrays::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DrawArrays::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::DrawArrays::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawArrays::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::DrawArrays::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::DrawArrays::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawArrays::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DrawArrays::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::DrawArrays::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::DrawArrays::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::DrawArrays::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::DrawArrays::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DrawArrays::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::DrawArrays::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DrawArrays::base_libraryName() const function, expected prototype:\nconst char * osg::DrawArrays::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DrawArrays::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DrawArrays::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::DrawArrays::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DrawArrays::base_className() const function, expected prototype:\nconst char * osg::DrawArrays::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DrawArrays::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DrawArrays::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::DrawArrays::base_draw(osg::State & state, bool useVertexBufferObjects) const
	static int _bind_base_draw(lua_State *L) {
		if (!_lg_typecheck_base_draw(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrays::base_draw(osg::State & state, bool useVertexBufferObjects) const function, expected prototype:\nvoid osg::DrawArrays::base_draw(osg::State & state, bool useVertexBufferObjects) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::DrawArrays::base_draw function");
		}
		osg::State & state=*state_ptr;
		bool useVertexBufferObjects=(bool)(lua_toboolean(L,3)==1);

		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrays::base_draw(osg::State &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawArrays::draw(state, useVertexBufferObjects);

		return 0;
	}

	// unsigned int osg::DrawArrays::base_getNumIndices() const
	static int _bind_base_getNumIndices(lua_State *L) {
		if (!_lg_typecheck_base_getNumIndices(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawArrays::base_getNumIndices() const function, expected prototype:\nunsigned int osg::DrawArrays::base_getNumIndices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawArrays::base_getNumIndices() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DrawArrays::getNumIndices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DrawArrays::base_index(unsigned int pos) const
	static int _bind_base_index(lua_State *L) {
		if (!_lg_typecheck_base_index(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawArrays::base_index(unsigned int pos) const function, expected prototype:\nunsigned int osg::DrawArrays::base_index(unsigned int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawArrays::base_index(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DrawArrays::index(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawArrays::base_offsetIndices(int offset)
	static int _bind_base_offsetIndices(lua_State *L) {
		if (!_lg_typecheck_base_offsetIndices(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawArrays::base_offsetIndices(int offset) function, expected prototype:\nvoid osg::DrawArrays::base_offsetIndices(int offset)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int offset=(int)lua_tointeger(L,2);

		osg::DrawArrays* self=Luna< osg::Referenced >::checkSubType< osg::DrawArrays >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawArrays::base_offsetIndices(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawArrays::offsetIndices(offset);

		return 0;
	}


	// Operator binds:

};

osg::DrawArrays* LunaTraits< osg::DrawArrays >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_DrawArrays::_bind_ctor(L);
}

void LunaTraits< osg::DrawArrays >::_bind_dtor(osg::DrawArrays* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::DrawArrays >::className[] = "DrawArrays";
const char LunaTraits< osg::DrawArrays >::fullName[] = "osg::DrawArrays";
const char LunaTraits< osg::DrawArrays >::moduleName[] = "osg";
const char* LunaTraits< osg::DrawArrays >::parents[] = {"osg.PrimitiveSet", 0};
const int LunaTraits< osg::DrawArrays >::hash = 84124321;
const int LunaTraits< osg::DrawArrays >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::DrawArrays >::methods[] = {
	{"cloneType", &luna_wrapper_osg_DrawArrays::_bind_cloneType},
	{"clone", &luna_wrapper_osg_DrawArrays::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_DrawArrays::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_DrawArrays::_bind_libraryName},
	{"className", &luna_wrapper_osg_DrawArrays::_bind_className},
	{"set", &luna_wrapper_osg_DrawArrays::_bind_set},
	{"setFirst", &luna_wrapper_osg_DrawArrays::_bind_setFirst},
	{"getFirst", &luna_wrapper_osg_DrawArrays::_bind_getFirst},
	{"setCount", &luna_wrapper_osg_DrawArrays::_bind_setCount},
	{"getCount", &luna_wrapper_osg_DrawArrays::_bind_getCount},
	{"draw", &luna_wrapper_osg_DrawArrays::_bind_draw},
	{"getNumIndices", &luna_wrapper_osg_DrawArrays::_bind_getNumIndices},
	{"index", &luna_wrapper_osg_DrawArrays::_bind_index},
	{"offsetIndices", &luna_wrapper_osg_DrawArrays::_bind_offsetIndices},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_DrawArrays::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_DrawArrays::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_DrawArrays::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_DrawArrays::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_DrawArrays::_bind_base_getUserData},
	{"base_asArray", &luna_wrapper_osg_DrawArrays::_bind_base_asArray},
	{"base_asImage", &luna_wrapper_osg_DrawArrays::_bind_base_asImage},
	{"base_releaseGLObjects", &luna_wrapper_osg_DrawArrays::_bind_base_releaseGLObjects},
	{"base_asPrimitiveSet", &luna_wrapper_osg_DrawArrays::_bind_base_asPrimitiveSet},
	{"base_getDataPointer", &luna_wrapper_osg_DrawArrays::_bind_base_getDataPointer},
	{"base_getTotalDataSize", &luna_wrapper_osg_DrawArrays::_bind_base_getTotalDataSize},
	{"base_supportsBufferObject", &luna_wrapper_osg_DrawArrays::_bind_base_supportsBufferObject},
	{"base_getDrawElements", &luna_wrapper_osg_DrawArrays::_bind_base_getDrawElements},
	{"base_getNumPrimitives", &luna_wrapper_osg_DrawArrays::_bind_base_getNumPrimitives},
	{"base_computeRange", &luna_wrapper_osg_DrawArrays::_bind_base_computeRange},
	{"base_cloneType", &luna_wrapper_osg_DrawArrays::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_DrawArrays::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_DrawArrays::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_DrawArrays::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_DrawArrays::_bind_base_className},
	{"base_draw", &luna_wrapper_osg_DrawArrays::_bind_base_draw},
	{"base_getNumIndices", &luna_wrapper_osg_DrawArrays::_bind_base_getNumIndices},
	{"base_index", &luna_wrapper_osg_DrawArrays::_bind_base_index},
	{"base_offsetIndices", &luna_wrapper_osg_DrawArrays::_bind_base_offsetIndices},
	{"fromVoid", &luna_wrapper_osg_DrawArrays::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_DrawArrays::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_DrawArrays::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DrawArrays >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_DrawArrays::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DrawArrays >::enumValues[] = {
	{0,0}
};


