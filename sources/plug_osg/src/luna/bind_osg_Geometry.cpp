#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Geometry.h>

class luna_wrapper_osg_Geometry {
public:
	typedef Luna< osg::Geometry > luna_t;

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

		osg::Geometry* self= (osg::Geometry*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Geometry >::push(L,self,false);
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
		//osg::Geometry* ptr= dynamic_cast< osg::Geometry* >(Luna< osg::Referenced >::check(L,1));
		osg::Geometry* ptr= luna_caster< osg::Referenced, osg::Geometry >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Geometry >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_asGeometry_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asGeometry_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertexArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertexData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26680564) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNormalBinding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNormalBinding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNormalArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNormalArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNormalArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNormalData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26680564) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNormalData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNormalData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setColorBinding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColorBinding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setColorArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColorArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setColorData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26680564) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColorData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSecondaryColorBinding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSecondaryColorBinding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSecondaryColorArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSecondaryColorArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSecondaryColorArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSecondaryColorData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26680564) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSecondaryColorData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSecondaryColorData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFogCoordBinding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFogCoordBinding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFogCoordArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFogCoordArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFogCoordArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFogCoordData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26680564) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFogCoordData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFogCoordData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTexCoordArray(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexCoordArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexCoordArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTexCoordData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,26680564) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexCoordData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexCoordData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumTexCoordArrays(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTexCoordArrayList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTexCoordArrayList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertexAttribArray(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexAttribArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexAttribArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexAttribBinding(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexAttribBinding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexAttribNormalize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexAttribNormalize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexAttribData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,26680564) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexAttribData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexAttribData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumVertexAttribArrays(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexAttribArrayList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexAttribArrayList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumPrimitiveSets(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addPrimitiveSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPrimitiveSet(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_insertPrimitiveSet(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removePrimitiveSet(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveSetIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexIndices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexIndices_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexIndices_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNormalIndices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNormalIndices_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNormalIndices_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setColorIndices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColorIndices_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorIndices_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSecondaryColorIndices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSecondaryColorIndices_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSecondaryColorIndices_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFogCoordIndices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFogCoordIndices_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFogCoordIndices_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTexCoordIndices(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexCoordIndices_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexCoordIndices_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexAttribIndices(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexAttribIndices_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexAttribIndices_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUseVertexBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dirtyDisplayList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getArrayList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44000933) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawElementsList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66006148) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOrCreateVertexBufferObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrCreateElementBufferObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFastPathHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFastPathHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_areFastPathsUsed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeFastPathsUsed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_verifyBindings(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeCorrectBindingsAndArraySizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_verifyArrays(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_suitableForOptimization(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_copyToAndOptimize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_containsSharedArrays(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_duplicateSharedArrays(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeInternalOptimizedGeometry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_removeInternalOptimizedGeometry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInternalOptimizedGeometry(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInternalOptimizedGeometry_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInternalOptimizedGeometry_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGLObjectSizeHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_s_InvalidArrayData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setUpdateCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setEventCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setCullCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setDrawCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_asGeometry_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeometry_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUseVertexBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_dirtyDisplayList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getGLObjectSizeHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Geometry::Geometry()
	static osg::Geometry* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::Geometry() function, expected prototype:\nosg::Geometry::Geometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Geometry();
	}

	// osg::Geometry::Geometry(const osg::Geometry & geometry, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Geometry* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::Geometry(const osg::Geometry & geometry, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Geometry::Geometry(const osg::Geometry & geometry, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Geometry* geometry_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1));
		if( !geometry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geometry in osg::Geometry::Geometry function");
		}
		const osg::Geometry & geometry=*geometry_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Geometry::Geometry function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Geometry(geometry, copyop);
	}

	// osg::Geometry::Geometry(lua_Table * data)
	static osg::Geometry* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::Geometry(lua_Table * data) function, expected prototype:\nosg::Geometry::Geometry(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Geometry(L,NULL);
	}

	// osg::Geometry::Geometry(lua_Table * data, const osg::Geometry & geometry, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Geometry* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::Geometry(lua_Table * data, const osg::Geometry & geometry, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Geometry::Geometry(lua_Table * data, const osg::Geometry & geometry, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Geometry* geometry_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));
		if( !geometry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geometry in osg::Geometry::Geometry function");
		}
		const osg::Geometry & geometry=*geometry_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Geometry::Geometry function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Geometry(L,NULL, geometry, copyop);
	}

	// Overload binder for osg::Geometry::Geometry
	static osg::Geometry* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Geometry, cannot match any of the overloads for function Geometry:\n  Geometry()\n  Geometry(const osg::Geometry &, const osg::CopyOp &)\n  Geometry(lua_Table *)\n  Geometry(lua_Table *, const osg::Geometry &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Geometry::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Geometry::cloneType() const function, expected prototype:\nosg::Object * osg::Geometry::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Geometry::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Geometry::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Geometry::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Geometry::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Geometry::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Geometry::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Geometry::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Geometry::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geometry::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Geometry::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Geometry::libraryName() const function, expected prototype:\nconst char * osg::Geometry::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Geometry::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Geometry::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Geometry::className() const function, expected prototype:\nconst char * osg::Geometry::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Geometry::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Geometry * osg::Geometry::asGeometry()
	static int _bind_asGeometry_overload_1(lua_State *L) {
		if (!_lg_typecheck_asGeometry_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osg::Geometry::asGeometry() function, expected prototype:\nosg::Geometry * osg::Geometry::asGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osg::Geometry::asGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry * osg::Geometry::asGeometry() const
	static int _bind_asGeometry_overload_2(lua_State *L) {
		if (!_lg_typecheck_asGeometry_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry * osg::Geometry::asGeometry() const function, expected prototype:\nconst osg::Geometry * osg::Geometry::asGeometry() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry * osg::Geometry::asGeometry() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry * lret = self->asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::asGeometry
	static int _bind_asGeometry(lua_State *L) {
		if (_lg_typecheck_asGeometry_overload_1(L)) return _bind_asGeometry_overload_1(L);
		if (_lg_typecheck_asGeometry_overload_2(L)) return _bind_asGeometry_overload_2(L);

		luaL_error(L, "error in function asGeometry, cannot match any of the overloads for function asGeometry:\n  asGeometry()\n  asGeometry()\n");
		return 0;
	}

	// bool osg::Geometry::empty() const
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::empty() const function, expected prototype:\nbool osg::Geometry::empty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geometry::empty() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Geometry::setVertexArray(osg::Array * array)
	static int _bind_setVertexArray(lua_State *L) {
		if (!_lg_typecheck_setVertexArray(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setVertexArray(osg::Array * array) function, expected prototype:\nvoid osg::Geometry::setVertexArray(osg::Array * array)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setVertexArray(osg::Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexArray(array);

		return 0;
	}

	// osg::Array * osg::Geometry::getVertexArray()
	static int _bind_getVertexArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getVertexArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::Geometry::getVertexArray() function, expected prototype:\nosg::Array * osg::Geometry::getVertexArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::Geometry::getVertexArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->getVertexArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::Geometry::getVertexArray() const
	static int _bind_getVertexArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getVertexArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::Geometry::getVertexArray() const function, expected prototype:\nconst osg::Array * osg::Geometry::getVertexArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Array * osg::Geometry::getVertexArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Array * lret = self->getVertexArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getVertexArray
	static int _bind_getVertexArray(lua_State *L) {
		if (_lg_typecheck_getVertexArray_overload_1(L)) return _bind_getVertexArray_overload_1(L);
		if (_lg_typecheck_getVertexArray_overload_2(L)) return _bind_getVertexArray_overload_2(L);

		luaL_error(L, "error in function getVertexArray, cannot match any of the overloads for function getVertexArray:\n  getVertexArray()\n  getVertexArray()\n");
		return 0;
	}

	// void osg::Geometry::setVertexData(const osg::Geometry::ArrayData & arrayData)
	static int _bind_setVertexData(lua_State *L) {
		if (!_lg_typecheck_setVertexData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setVertexData(const osg::Geometry::ArrayData & arrayData) function, expected prototype:\nvoid osg::Geometry::setVertexData(const osg::Geometry::ArrayData & arrayData)\nClass arguments details:\narg 1 ID = 26680564\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Geometry::ArrayData* arrayData_ptr=(Luna< osg::Geometry::ArrayData >::check(L,2));
		if( !arrayData_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arrayData in osg::Geometry::setVertexData function");
		}
		const osg::Geometry::ArrayData & arrayData=*arrayData_ptr;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setVertexData(const osg::Geometry::ArrayData &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexData(arrayData);

		return 0;
	}

	// osg::Geometry::ArrayData & osg::Geometry::getVertexData()
	static int _bind_getVertexData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getVertexData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::ArrayData & osg::Geometry::getVertexData() function, expected prototype:\nosg::Geometry::ArrayData & osg::Geometry::getVertexData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry::ArrayData & osg::Geometry::getVertexData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayData* lret = &self->getVertexData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayData >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry::ArrayData & osg::Geometry::getVertexData() const
	static int _bind_getVertexData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getVertexData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry::ArrayData & osg::Geometry::getVertexData() const function, expected prototype:\nconst osg::Geometry::ArrayData & osg::Geometry::getVertexData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry::ArrayData & osg::Geometry::getVertexData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayData* lret = &self->getVertexData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayData >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getVertexData
	static int _bind_getVertexData(lua_State *L) {
		if (_lg_typecheck_getVertexData_overload_1(L)) return _bind_getVertexData_overload_1(L);
		if (_lg_typecheck_getVertexData_overload_2(L)) return _bind_getVertexData_overload_2(L);

		luaL_error(L, "error in function getVertexData, cannot match any of the overloads for function getVertexData:\n  getVertexData()\n  getVertexData()\n");
		return 0;
	}

	// void osg::Geometry::setNormalBinding(osg::Geometry::AttributeBinding ab)
	static int _bind_setNormalBinding(lua_State *L) {
		if (!_lg_typecheck_setNormalBinding(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setNormalBinding(osg::Geometry::AttributeBinding ab) function, expected prototype:\nvoid osg::Geometry::setNormalBinding(osg::Geometry::AttributeBinding ab)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry::AttributeBinding ab=(osg::Geometry::AttributeBinding)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setNormalBinding(osg::Geometry::AttributeBinding). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNormalBinding(ab);

		return 0;
	}

	// osg::Geometry::AttributeBinding osg::Geometry::getNormalBinding() const
	static int _bind_getNormalBinding(lua_State *L) {
		if (!_lg_typecheck_getNormalBinding(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::AttributeBinding osg::Geometry::getNormalBinding() const function, expected prototype:\nosg::Geometry::AttributeBinding osg::Geometry::getNormalBinding() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry::AttributeBinding osg::Geometry::getNormalBinding() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry::AttributeBinding lret = self->getNormalBinding();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Geometry::setNormalArray(osg::Array * array)
	static int _bind_setNormalArray(lua_State *L) {
		if (!_lg_typecheck_setNormalArray(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setNormalArray(osg::Array * array) function, expected prototype:\nvoid osg::Geometry::setNormalArray(osg::Array * array)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setNormalArray(osg::Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNormalArray(array);

		return 0;
	}

	// osg::Array * osg::Geometry::getNormalArray()
	static int _bind_getNormalArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNormalArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::Geometry::getNormalArray() function, expected prototype:\nosg::Array * osg::Geometry::getNormalArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::Geometry::getNormalArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->getNormalArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::Geometry::getNormalArray() const
	static int _bind_getNormalArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNormalArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::Geometry::getNormalArray() const function, expected prototype:\nconst osg::Array * osg::Geometry::getNormalArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Array * osg::Geometry::getNormalArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Array * lret = self->getNormalArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getNormalArray
	static int _bind_getNormalArray(lua_State *L) {
		if (_lg_typecheck_getNormalArray_overload_1(L)) return _bind_getNormalArray_overload_1(L);
		if (_lg_typecheck_getNormalArray_overload_2(L)) return _bind_getNormalArray_overload_2(L);

		luaL_error(L, "error in function getNormalArray, cannot match any of the overloads for function getNormalArray:\n  getNormalArray()\n  getNormalArray()\n");
		return 0;
	}

	// void osg::Geometry::setNormalData(const osg::Geometry::ArrayData & arrayData)
	static int _bind_setNormalData(lua_State *L) {
		if (!_lg_typecheck_setNormalData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setNormalData(const osg::Geometry::ArrayData & arrayData) function, expected prototype:\nvoid osg::Geometry::setNormalData(const osg::Geometry::ArrayData & arrayData)\nClass arguments details:\narg 1 ID = 26680564\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Geometry::ArrayData* arrayData_ptr=(Luna< osg::Geometry::ArrayData >::check(L,2));
		if( !arrayData_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arrayData in osg::Geometry::setNormalData function");
		}
		const osg::Geometry::ArrayData & arrayData=*arrayData_ptr;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setNormalData(const osg::Geometry::ArrayData &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNormalData(arrayData);

		return 0;
	}

	// osg::Geometry::ArrayData & osg::Geometry::getNormalData()
	static int _bind_getNormalData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNormalData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::ArrayData & osg::Geometry::getNormalData() function, expected prototype:\nosg::Geometry::ArrayData & osg::Geometry::getNormalData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry::ArrayData & osg::Geometry::getNormalData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayData* lret = &self->getNormalData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayData >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry::ArrayData & osg::Geometry::getNormalData() const
	static int _bind_getNormalData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNormalData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry::ArrayData & osg::Geometry::getNormalData() const function, expected prototype:\nconst osg::Geometry::ArrayData & osg::Geometry::getNormalData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry::ArrayData & osg::Geometry::getNormalData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayData* lret = &self->getNormalData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayData >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getNormalData
	static int _bind_getNormalData(lua_State *L) {
		if (_lg_typecheck_getNormalData_overload_1(L)) return _bind_getNormalData_overload_1(L);
		if (_lg_typecheck_getNormalData_overload_2(L)) return _bind_getNormalData_overload_2(L);

		luaL_error(L, "error in function getNormalData, cannot match any of the overloads for function getNormalData:\n  getNormalData()\n  getNormalData()\n");
		return 0;
	}

	// void osg::Geometry::setColorBinding(osg::Geometry::AttributeBinding ab)
	static int _bind_setColorBinding(lua_State *L) {
		if (!_lg_typecheck_setColorBinding(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setColorBinding(osg::Geometry::AttributeBinding ab) function, expected prototype:\nvoid osg::Geometry::setColorBinding(osg::Geometry::AttributeBinding ab)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry::AttributeBinding ab=(osg::Geometry::AttributeBinding)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setColorBinding(osg::Geometry::AttributeBinding). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorBinding(ab);

		return 0;
	}

	// osg::Geometry::AttributeBinding osg::Geometry::getColorBinding() const
	static int _bind_getColorBinding(lua_State *L) {
		if (!_lg_typecheck_getColorBinding(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::AttributeBinding osg::Geometry::getColorBinding() const function, expected prototype:\nosg::Geometry::AttributeBinding osg::Geometry::getColorBinding() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry::AttributeBinding osg::Geometry::getColorBinding() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry::AttributeBinding lret = self->getColorBinding();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Geometry::setColorArray(osg::Array * array)
	static int _bind_setColorArray(lua_State *L) {
		if (!_lg_typecheck_setColorArray(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setColorArray(osg::Array * array) function, expected prototype:\nvoid osg::Geometry::setColorArray(osg::Array * array)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setColorArray(osg::Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorArray(array);

		return 0;
	}

	// osg::Array * osg::Geometry::getColorArray()
	static int _bind_getColorArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getColorArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::Geometry::getColorArray() function, expected prototype:\nosg::Array * osg::Geometry::getColorArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::Geometry::getColorArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->getColorArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::Geometry::getColorArray() const
	static int _bind_getColorArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getColorArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::Geometry::getColorArray() const function, expected prototype:\nconst osg::Array * osg::Geometry::getColorArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Array * osg::Geometry::getColorArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Array * lret = self->getColorArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getColorArray
	static int _bind_getColorArray(lua_State *L) {
		if (_lg_typecheck_getColorArray_overload_1(L)) return _bind_getColorArray_overload_1(L);
		if (_lg_typecheck_getColorArray_overload_2(L)) return _bind_getColorArray_overload_2(L);

		luaL_error(L, "error in function getColorArray, cannot match any of the overloads for function getColorArray:\n  getColorArray()\n  getColorArray()\n");
		return 0;
	}

	// void osg::Geometry::setColorData(const osg::Geometry::ArrayData & arrayData)
	static int _bind_setColorData(lua_State *L) {
		if (!_lg_typecheck_setColorData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setColorData(const osg::Geometry::ArrayData & arrayData) function, expected prototype:\nvoid osg::Geometry::setColorData(const osg::Geometry::ArrayData & arrayData)\nClass arguments details:\narg 1 ID = 26680564\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Geometry::ArrayData* arrayData_ptr=(Luna< osg::Geometry::ArrayData >::check(L,2));
		if( !arrayData_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arrayData in osg::Geometry::setColorData function");
		}
		const osg::Geometry::ArrayData & arrayData=*arrayData_ptr;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setColorData(const osg::Geometry::ArrayData &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorData(arrayData);

		return 0;
	}

	// osg::Geometry::ArrayData & osg::Geometry::getColorData()
	static int _bind_getColorData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getColorData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::ArrayData & osg::Geometry::getColorData() function, expected prototype:\nosg::Geometry::ArrayData & osg::Geometry::getColorData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry::ArrayData & osg::Geometry::getColorData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayData* lret = &self->getColorData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayData >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry::ArrayData & osg::Geometry::getColorData() const
	static int _bind_getColorData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getColorData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry::ArrayData & osg::Geometry::getColorData() const function, expected prototype:\nconst osg::Geometry::ArrayData & osg::Geometry::getColorData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry::ArrayData & osg::Geometry::getColorData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayData* lret = &self->getColorData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayData >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getColorData
	static int _bind_getColorData(lua_State *L) {
		if (_lg_typecheck_getColorData_overload_1(L)) return _bind_getColorData_overload_1(L);
		if (_lg_typecheck_getColorData_overload_2(L)) return _bind_getColorData_overload_2(L);

		luaL_error(L, "error in function getColorData, cannot match any of the overloads for function getColorData:\n  getColorData()\n  getColorData()\n");
		return 0;
	}

	// void osg::Geometry::setSecondaryColorBinding(osg::Geometry::AttributeBinding ab)
	static int _bind_setSecondaryColorBinding(lua_State *L) {
		if (!_lg_typecheck_setSecondaryColorBinding(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setSecondaryColorBinding(osg::Geometry::AttributeBinding ab) function, expected prototype:\nvoid osg::Geometry::setSecondaryColorBinding(osg::Geometry::AttributeBinding ab)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry::AttributeBinding ab=(osg::Geometry::AttributeBinding)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setSecondaryColorBinding(osg::Geometry::AttributeBinding). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSecondaryColorBinding(ab);

		return 0;
	}

	// osg::Geometry::AttributeBinding osg::Geometry::getSecondaryColorBinding() const
	static int _bind_getSecondaryColorBinding(lua_State *L) {
		if (!_lg_typecheck_getSecondaryColorBinding(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::AttributeBinding osg::Geometry::getSecondaryColorBinding() const function, expected prototype:\nosg::Geometry::AttributeBinding osg::Geometry::getSecondaryColorBinding() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry::AttributeBinding osg::Geometry::getSecondaryColorBinding() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry::AttributeBinding lret = self->getSecondaryColorBinding();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Geometry::setSecondaryColorArray(osg::Array * array)
	static int _bind_setSecondaryColorArray(lua_State *L) {
		if (!_lg_typecheck_setSecondaryColorArray(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setSecondaryColorArray(osg::Array * array) function, expected prototype:\nvoid osg::Geometry::setSecondaryColorArray(osg::Array * array)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setSecondaryColorArray(osg::Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSecondaryColorArray(array);

		return 0;
	}

	// osg::Array * osg::Geometry::getSecondaryColorArray()
	static int _bind_getSecondaryColorArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSecondaryColorArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::Geometry::getSecondaryColorArray() function, expected prototype:\nosg::Array * osg::Geometry::getSecondaryColorArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::Geometry::getSecondaryColorArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->getSecondaryColorArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::Geometry::getSecondaryColorArray() const
	static int _bind_getSecondaryColorArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSecondaryColorArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::Geometry::getSecondaryColorArray() const function, expected prototype:\nconst osg::Array * osg::Geometry::getSecondaryColorArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Array * osg::Geometry::getSecondaryColorArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Array * lret = self->getSecondaryColorArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getSecondaryColorArray
	static int _bind_getSecondaryColorArray(lua_State *L) {
		if (_lg_typecheck_getSecondaryColorArray_overload_1(L)) return _bind_getSecondaryColorArray_overload_1(L);
		if (_lg_typecheck_getSecondaryColorArray_overload_2(L)) return _bind_getSecondaryColorArray_overload_2(L);

		luaL_error(L, "error in function getSecondaryColorArray, cannot match any of the overloads for function getSecondaryColorArray:\n  getSecondaryColorArray()\n  getSecondaryColorArray()\n");
		return 0;
	}

	// void osg::Geometry::setSecondaryColorData(const osg::Geometry::ArrayData & arrayData)
	static int _bind_setSecondaryColorData(lua_State *L) {
		if (!_lg_typecheck_setSecondaryColorData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setSecondaryColorData(const osg::Geometry::ArrayData & arrayData) function, expected prototype:\nvoid osg::Geometry::setSecondaryColorData(const osg::Geometry::ArrayData & arrayData)\nClass arguments details:\narg 1 ID = 26680564\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Geometry::ArrayData* arrayData_ptr=(Luna< osg::Geometry::ArrayData >::check(L,2));
		if( !arrayData_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arrayData in osg::Geometry::setSecondaryColorData function");
		}
		const osg::Geometry::ArrayData & arrayData=*arrayData_ptr;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setSecondaryColorData(const osg::Geometry::ArrayData &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSecondaryColorData(arrayData);

		return 0;
	}

	// osg::Geometry::ArrayData & osg::Geometry::getSecondaryColorData()
	static int _bind_getSecondaryColorData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSecondaryColorData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::ArrayData & osg::Geometry::getSecondaryColorData() function, expected prototype:\nosg::Geometry::ArrayData & osg::Geometry::getSecondaryColorData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry::ArrayData & osg::Geometry::getSecondaryColorData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayData* lret = &self->getSecondaryColorData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayData >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry::ArrayData & osg::Geometry::getSecondaryColorData() const
	static int _bind_getSecondaryColorData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSecondaryColorData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry::ArrayData & osg::Geometry::getSecondaryColorData() const function, expected prototype:\nconst osg::Geometry::ArrayData & osg::Geometry::getSecondaryColorData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry::ArrayData & osg::Geometry::getSecondaryColorData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayData* lret = &self->getSecondaryColorData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayData >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getSecondaryColorData
	static int _bind_getSecondaryColorData(lua_State *L) {
		if (_lg_typecheck_getSecondaryColorData_overload_1(L)) return _bind_getSecondaryColorData_overload_1(L);
		if (_lg_typecheck_getSecondaryColorData_overload_2(L)) return _bind_getSecondaryColorData_overload_2(L);

		luaL_error(L, "error in function getSecondaryColorData, cannot match any of the overloads for function getSecondaryColorData:\n  getSecondaryColorData()\n  getSecondaryColorData()\n");
		return 0;
	}

	// void osg::Geometry::setFogCoordBinding(osg::Geometry::AttributeBinding ab)
	static int _bind_setFogCoordBinding(lua_State *L) {
		if (!_lg_typecheck_setFogCoordBinding(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setFogCoordBinding(osg::Geometry::AttributeBinding ab) function, expected prototype:\nvoid osg::Geometry::setFogCoordBinding(osg::Geometry::AttributeBinding ab)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry::AttributeBinding ab=(osg::Geometry::AttributeBinding)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setFogCoordBinding(osg::Geometry::AttributeBinding). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFogCoordBinding(ab);

		return 0;
	}

	// osg::Geometry::AttributeBinding osg::Geometry::getFogCoordBinding() const
	static int _bind_getFogCoordBinding(lua_State *L) {
		if (!_lg_typecheck_getFogCoordBinding(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::AttributeBinding osg::Geometry::getFogCoordBinding() const function, expected prototype:\nosg::Geometry::AttributeBinding osg::Geometry::getFogCoordBinding() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry::AttributeBinding osg::Geometry::getFogCoordBinding() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry::AttributeBinding lret = self->getFogCoordBinding();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Geometry::setFogCoordArray(osg::Array * array)
	static int _bind_setFogCoordArray(lua_State *L) {
		if (!_lg_typecheck_setFogCoordArray(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setFogCoordArray(osg::Array * array) function, expected prototype:\nvoid osg::Geometry::setFogCoordArray(osg::Array * array)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setFogCoordArray(osg::Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFogCoordArray(array);

		return 0;
	}

	// osg::Array * osg::Geometry::getFogCoordArray()
	static int _bind_getFogCoordArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFogCoordArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::Geometry::getFogCoordArray() function, expected prototype:\nosg::Array * osg::Geometry::getFogCoordArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::Geometry::getFogCoordArray(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->getFogCoordArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::Geometry::getFogCoordArray() const
	static int _bind_getFogCoordArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFogCoordArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::Geometry::getFogCoordArray() const function, expected prototype:\nconst osg::Array * osg::Geometry::getFogCoordArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Array * osg::Geometry::getFogCoordArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Array * lret = self->getFogCoordArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getFogCoordArray
	static int _bind_getFogCoordArray(lua_State *L) {
		if (_lg_typecheck_getFogCoordArray_overload_1(L)) return _bind_getFogCoordArray_overload_1(L);
		if (_lg_typecheck_getFogCoordArray_overload_2(L)) return _bind_getFogCoordArray_overload_2(L);

		luaL_error(L, "error in function getFogCoordArray, cannot match any of the overloads for function getFogCoordArray:\n  getFogCoordArray()\n  getFogCoordArray()\n");
		return 0;
	}

	// void osg::Geometry::setFogCoordData(const osg::Geometry::ArrayData & arrayData)
	static int _bind_setFogCoordData(lua_State *L) {
		if (!_lg_typecheck_setFogCoordData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setFogCoordData(const osg::Geometry::ArrayData & arrayData) function, expected prototype:\nvoid osg::Geometry::setFogCoordData(const osg::Geometry::ArrayData & arrayData)\nClass arguments details:\narg 1 ID = 26680564\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Geometry::ArrayData* arrayData_ptr=(Luna< osg::Geometry::ArrayData >::check(L,2));
		if( !arrayData_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arrayData in osg::Geometry::setFogCoordData function");
		}
		const osg::Geometry::ArrayData & arrayData=*arrayData_ptr;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setFogCoordData(const osg::Geometry::ArrayData &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFogCoordData(arrayData);

		return 0;
	}

	// osg::Geometry::ArrayData & osg::Geometry::getFogCoordData()
	static int _bind_getFogCoordData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFogCoordData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::ArrayData & osg::Geometry::getFogCoordData() function, expected prototype:\nosg::Geometry::ArrayData & osg::Geometry::getFogCoordData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry::ArrayData & osg::Geometry::getFogCoordData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayData* lret = &self->getFogCoordData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayData >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry::ArrayData & osg::Geometry::getFogCoordData() const
	static int _bind_getFogCoordData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFogCoordData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry::ArrayData & osg::Geometry::getFogCoordData() const function, expected prototype:\nconst osg::Geometry::ArrayData & osg::Geometry::getFogCoordData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry::ArrayData & osg::Geometry::getFogCoordData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayData* lret = &self->getFogCoordData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayData >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getFogCoordData
	static int _bind_getFogCoordData(lua_State *L) {
		if (_lg_typecheck_getFogCoordData_overload_1(L)) return _bind_getFogCoordData_overload_1(L);
		if (_lg_typecheck_getFogCoordData_overload_2(L)) return _bind_getFogCoordData_overload_2(L);

		luaL_error(L, "error in function getFogCoordData, cannot match any of the overloads for function getFogCoordData:\n  getFogCoordData()\n  getFogCoordData()\n");
		return 0;
	}

	// void osg::Geometry::setTexCoordArray(unsigned int unit, osg::Array * arg2)
	static int _bind_setTexCoordArray(lua_State *L) {
		if (!_lg_typecheck_setTexCoordArray(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setTexCoordArray(unsigned int unit, osg::Array * arg2) function, expected prototype:\nvoid osg::Geometry::setTexCoordArray(unsigned int unit, osg::Array * arg2)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		osg::Array* _arg2=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,3));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setTexCoordArray(unsigned int, osg::Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTexCoordArray(unit, _arg2);

		return 0;
	}

	// osg::Array * osg::Geometry::getTexCoordArray(unsigned int unit)
	static int _bind_getTexCoordArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTexCoordArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::Geometry::getTexCoordArray(unsigned int unit) function, expected prototype:\nosg::Array * osg::Geometry::getTexCoordArray(unsigned int unit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::Geometry::getTexCoordArray(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->getTexCoordArray(unit);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::Geometry::getTexCoordArray(unsigned int unit) const
	static int _bind_getTexCoordArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTexCoordArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::Geometry::getTexCoordArray(unsigned int unit) const function, expected prototype:\nconst osg::Array * osg::Geometry::getTexCoordArray(unsigned int unit) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Array * osg::Geometry::getTexCoordArray(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Array * lret = self->getTexCoordArray(unit);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getTexCoordArray
	static int _bind_getTexCoordArray(lua_State *L) {
		if (_lg_typecheck_getTexCoordArray_overload_1(L)) return _bind_getTexCoordArray_overload_1(L);
		if (_lg_typecheck_getTexCoordArray_overload_2(L)) return _bind_getTexCoordArray_overload_2(L);

		luaL_error(L, "error in function getTexCoordArray, cannot match any of the overloads for function getTexCoordArray:\n  getTexCoordArray(unsigned int)\n  getTexCoordArray(unsigned int)\n");
		return 0;
	}

	// void osg::Geometry::setTexCoordData(unsigned int index, const osg::Geometry::ArrayData & arrayData)
	static int _bind_setTexCoordData(lua_State *L) {
		if (!_lg_typecheck_setTexCoordData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setTexCoordData(unsigned int index, const osg::Geometry::ArrayData & arrayData) function, expected prototype:\nvoid osg::Geometry::setTexCoordData(unsigned int index, const osg::Geometry::ArrayData & arrayData)\nClass arguments details:\narg 2 ID = 26680564\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Geometry::ArrayData* arrayData_ptr=(Luna< osg::Geometry::ArrayData >::check(L,3));
		if( !arrayData_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arrayData in osg::Geometry::setTexCoordData function");
		}
		const osg::Geometry::ArrayData & arrayData=*arrayData_ptr;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setTexCoordData(unsigned int, const osg::Geometry::ArrayData &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTexCoordData(index, arrayData);

		return 0;
	}

	// osg::Geometry::ArrayData & osg::Geometry::getTexCoordData(unsigned int index)
	static int _bind_getTexCoordData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTexCoordData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::ArrayData & osg::Geometry::getTexCoordData(unsigned int index) function, expected prototype:\nosg::Geometry::ArrayData & osg::Geometry::getTexCoordData(unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry::ArrayData & osg::Geometry::getTexCoordData(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayData* lret = &self->getTexCoordData(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayData >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry::ArrayData & osg::Geometry::getTexCoordData(unsigned int index) const
	static int _bind_getTexCoordData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTexCoordData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry::ArrayData & osg::Geometry::getTexCoordData(unsigned int index) const function, expected prototype:\nconst osg::Geometry::ArrayData & osg::Geometry::getTexCoordData(unsigned int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry::ArrayData & osg::Geometry::getTexCoordData(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayData* lret = &self->getTexCoordData(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayData >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getTexCoordData
	static int _bind_getTexCoordData(lua_State *L) {
		if (_lg_typecheck_getTexCoordData_overload_1(L)) return _bind_getTexCoordData_overload_1(L);
		if (_lg_typecheck_getTexCoordData_overload_2(L)) return _bind_getTexCoordData_overload_2(L);

		luaL_error(L, "error in function getTexCoordData, cannot match any of the overloads for function getTexCoordData:\n  getTexCoordData(unsigned int)\n  getTexCoordData(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::Geometry::getNumTexCoordArrays() const
	static int _bind_getNumTexCoordArrays(lua_State *L) {
		if (!_lg_typecheck_getNumTexCoordArrays(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Geometry::getNumTexCoordArrays() const function, expected prototype:\nunsigned int osg::Geometry::getNumTexCoordArrays() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Geometry::getNumTexCoordArrays() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumTexCoordArrays();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Geometry::ArrayDataList & osg::Geometry::getTexCoordArrayList()
	static int _bind_getTexCoordArrayList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTexCoordArrayList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::ArrayDataList & osg::Geometry::getTexCoordArrayList() function, expected prototype:\nosg::Geometry::ArrayDataList & osg::Geometry::getTexCoordArrayList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry::ArrayDataList & osg::Geometry::getTexCoordArrayList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayDataList* lret = &self->getTexCoordArrayList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayDataList >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry::ArrayDataList & osg::Geometry::getTexCoordArrayList() const
	static int _bind_getTexCoordArrayList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTexCoordArrayList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry::ArrayDataList & osg::Geometry::getTexCoordArrayList() const function, expected prototype:\nconst osg::Geometry::ArrayDataList & osg::Geometry::getTexCoordArrayList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry::ArrayDataList & osg::Geometry::getTexCoordArrayList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayDataList* lret = &self->getTexCoordArrayList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayDataList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getTexCoordArrayList
	static int _bind_getTexCoordArrayList(lua_State *L) {
		if (_lg_typecheck_getTexCoordArrayList_overload_1(L)) return _bind_getTexCoordArrayList_overload_1(L);
		if (_lg_typecheck_getTexCoordArrayList_overload_2(L)) return _bind_getTexCoordArrayList_overload_2(L);

		luaL_error(L, "error in function getTexCoordArrayList, cannot match any of the overloads for function getTexCoordArrayList:\n  getTexCoordArrayList()\n  getTexCoordArrayList()\n");
		return 0;
	}

	// void osg::Geometry::setVertexAttribArray(unsigned int index, osg::Array * array)
	static int _bind_setVertexAttribArray(lua_State *L) {
		if (!_lg_typecheck_setVertexAttribArray(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setVertexAttribArray(unsigned int index, osg::Array * array) function, expected prototype:\nvoid osg::Geometry::setVertexAttribArray(unsigned int index, osg::Array * array)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,3));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setVertexAttribArray(unsigned int, osg::Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexAttribArray(index, array);

		return 0;
	}

	// osg::Array * osg::Geometry::getVertexAttribArray(unsigned int index)
	static int _bind_getVertexAttribArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getVertexAttribArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::Geometry::getVertexAttribArray(unsigned int index) function, expected prototype:\nosg::Array * osg::Geometry::getVertexAttribArray(unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::Geometry::getVertexAttribArray(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->getVertexAttribArray(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::Geometry::getVertexAttribArray(unsigned int index) const
	static int _bind_getVertexAttribArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getVertexAttribArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::Geometry::getVertexAttribArray(unsigned int index) const function, expected prototype:\nconst osg::Array * osg::Geometry::getVertexAttribArray(unsigned int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Array * osg::Geometry::getVertexAttribArray(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Array * lret = self->getVertexAttribArray(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getVertexAttribArray
	static int _bind_getVertexAttribArray(lua_State *L) {
		if (_lg_typecheck_getVertexAttribArray_overload_1(L)) return _bind_getVertexAttribArray_overload_1(L);
		if (_lg_typecheck_getVertexAttribArray_overload_2(L)) return _bind_getVertexAttribArray_overload_2(L);

		luaL_error(L, "error in function getVertexAttribArray, cannot match any of the overloads for function getVertexAttribArray:\n  getVertexAttribArray(unsigned int)\n  getVertexAttribArray(unsigned int)\n");
		return 0;
	}

	// void osg::Geometry::setVertexAttribBinding(unsigned int index, osg::Geometry::AttributeBinding ab)
	static int _bind_setVertexAttribBinding(lua_State *L) {
		if (!_lg_typecheck_setVertexAttribBinding(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setVertexAttribBinding(unsigned int index, osg::Geometry::AttributeBinding ab) function, expected prototype:\nvoid osg::Geometry::setVertexAttribBinding(unsigned int index, osg::Geometry::AttributeBinding ab)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Geometry::AttributeBinding ab=(osg::Geometry::AttributeBinding)lua_tointeger(L,3);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setVertexAttribBinding(unsigned int, osg::Geometry::AttributeBinding). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexAttribBinding(index, ab);

		return 0;
	}

	// osg::Geometry::AttributeBinding osg::Geometry::getVertexAttribBinding(unsigned int index) const
	static int _bind_getVertexAttribBinding(lua_State *L) {
		if (!_lg_typecheck_getVertexAttribBinding(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::AttributeBinding osg::Geometry::getVertexAttribBinding(unsigned int index) const function, expected prototype:\nosg::Geometry::AttributeBinding osg::Geometry::getVertexAttribBinding(unsigned int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry::AttributeBinding osg::Geometry::getVertexAttribBinding(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry::AttributeBinding lret = self->getVertexAttribBinding(index);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Geometry::setVertexAttribNormalize(unsigned int index, unsigned char norm)
	static int _bind_setVertexAttribNormalize(lua_State *L) {
		if (!_lg_typecheck_setVertexAttribNormalize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setVertexAttribNormalize(unsigned int index, unsigned char norm) function, expected prototype:\nvoid osg::Geometry::setVertexAttribNormalize(unsigned int index, unsigned char norm)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned char norm = (unsigned char)(lua_tointeger(L,3));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setVertexAttribNormalize(unsigned int, unsigned char). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexAttribNormalize(index, norm);

		return 0;
	}

	// unsigned char osg::Geometry::getVertexAttribNormalize(unsigned int index) const
	static int _bind_getVertexAttribNormalize(lua_State *L) {
		if (!_lg_typecheck_getVertexAttribNormalize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char osg::Geometry::getVertexAttribNormalize(unsigned int index) const function, expected prototype:\nunsigned char osg::Geometry::getVertexAttribNormalize(unsigned int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char osg::Geometry::getVertexAttribNormalize(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->getVertexAttribNormalize(index);
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void osg::Geometry::setVertexAttribData(unsigned int index, const osg::Geometry::ArrayData & arrayData)
	static int _bind_setVertexAttribData(lua_State *L) {
		if (!_lg_typecheck_setVertexAttribData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setVertexAttribData(unsigned int index, const osg::Geometry::ArrayData & arrayData) function, expected prototype:\nvoid osg::Geometry::setVertexAttribData(unsigned int index, const osg::Geometry::ArrayData & arrayData)\nClass arguments details:\narg 2 ID = 26680564\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Geometry::ArrayData* arrayData_ptr=(Luna< osg::Geometry::ArrayData >::check(L,3));
		if( !arrayData_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arrayData in osg::Geometry::setVertexAttribData function");
		}
		const osg::Geometry::ArrayData & arrayData=*arrayData_ptr;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setVertexAttribData(unsigned int, const osg::Geometry::ArrayData &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexAttribData(index, arrayData);

		return 0;
	}

	// osg::Geometry::ArrayData & osg::Geometry::getVertexAttribData(unsigned int index)
	static int _bind_getVertexAttribData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getVertexAttribData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::ArrayData & osg::Geometry::getVertexAttribData(unsigned int index) function, expected prototype:\nosg::Geometry::ArrayData & osg::Geometry::getVertexAttribData(unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry::ArrayData & osg::Geometry::getVertexAttribData(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayData* lret = &self->getVertexAttribData(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayData >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry::ArrayData & osg::Geometry::getVertexAttribData(unsigned int index) const
	static int _bind_getVertexAttribData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getVertexAttribData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry::ArrayData & osg::Geometry::getVertexAttribData(unsigned int index) const function, expected prototype:\nconst osg::Geometry::ArrayData & osg::Geometry::getVertexAttribData(unsigned int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry::ArrayData & osg::Geometry::getVertexAttribData(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayData* lret = &self->getVertexAttribData(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayData >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getVertexAttribData
	static int _bind_getVertexAttribData(lua_State *L) {
		if (_lg_typecheck_getVertexAttribData_overload_1(L)) return _bind_getVertexAttribData_overload_1(L);
		if (_lg_typecheck_getVertexAttribData_overload_2(L)) return _bind_getVertexAttribData_overload_2(L);

		luaL_error(L, "error in function getVertexAttribData, cannot match any of the overloads for function getVertexAttribData:\n  getVertexAttribData(unsigned int)\n  getVertexAttribData(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::Geometry::getNumVertexAttribArrays() const
	static int _bind_getNumVertexAttribArrays(lua_State *L) {
		if (!_lg_typecheck_getNumVertexAttribArrays(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Geometry::getNumVertexAttribArrays() const function, expected prototype:\nunsigned int osg::Geometry::getNumVertexAttribArrays() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Geometry::getNumVertexAttribArrays() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumVertexAttribArrays();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Geometry::ArrayDataList & osg::Geometry::getVertexAttribArrayList()
	static int _bind_getVertexAttribArrayList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getVertexAttribArrayList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry::ArrayDataList & osg::Geometry::getVertexAttribArrayList() function, expected prototype:\nosg::Geometry::ArrayDataList & osg::Geometry::getVertexAttribArrayList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry::ArrayDataList & osg::Geometry::getVertexAttribArrayList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayDataList* lret = &self->getVertexAttribArrayList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayDataList >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry::ArrayDataList & osg::Geometry::getVertexAttribArrayList() const
	static int _bind_getVertexAttribArrayList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getVertexAttribArrayList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry::ArrayDataList & osg::Geometry::getVertexAttribArrayList() const function, expected prototype:\nconst osg::Geometry::ArrayDataList & osg::Geometry::getVertexAttribArrayList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry::ArrayDataList & osg::Geometry::getVertexAttribArrayList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayDataList* lret = &self->getVertexAttribArrayList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayDataList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getVertexAttribArrayList
	static int _bind_getVertexAttribArrayList(lua_State *L) {
		if (_lg_typecheck_getVertexAttribArrayList_overload_1(L)) return _bind_getVertexAttribArrayList_overload_1(L);
		if (_lg_typecheck_getVertexAttribArrayList_overload_2(L)) return _bind_getVertexAttribArrayList_overload_2(L);

		luaL_error(L, "error in function getVertexAttribArrayList, cannot match any of the overloads for function getVertexAttribArrayList:\n  getVertexAttribArrayList()\n  getVertexAttribArrayList()\n");
		return 0;
	}

	// unsigned int osg::Geometry::getNumPrimitiveSets() const
	static int _bind_getNumPrimitiveSets(lua_State *L) {
		if (!_lg_typecheck_getNumPrimitiveSets(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Geometry::getNumPrimitiveSets() const function, expected prototype:\nunsigned int osg::Geometry::getNumPrimitiveSets() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Geometry::getNumPrimitiveSets() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumPrimitiveSets();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::PrimitiveSet * osg::Geometry::getPrimitiveSet(unsigned int pos)
	static int _bind_getPrimitiveSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PrimitiveSet * osg::Geometry::getPrimitiveSet(unsigned int pos) function, expected prototype:\nosg::PrimitiveSet * osg::Geometry::getPrimitiveSet(unsigned int pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PrimitiveSet * osg::Geometry::getPrimitiveSet(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PrimitiveSet * lret = self->getPrimitiveSet(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// const osg::PrimitiveSet * osg::Geometry::getPrimitiveSet(unsigned int pos) const
	static int _bind_getPrimitiveSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::PrimitiveSet * osg::Geometry::getPrimitiveSet(unsigned int pos) const function, expected prototype:\nconst osg::PrimitiveSet * osg::Geometry::getPrimitiveSet(unsigned int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::PrimitiveSet * osg::Geometry::getPrimitiveSet(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::PrimitiveSet * lret = self->getPrimitiveSet(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getPrimitiveSet
	static int _bind_getPrimitiveSet(lua_State *L) {
		if (_lg_typecheck_getPrimitiveSet_overload_1(L)) return _bind_getPrimitiveSet_overload_1(L);
		if (_lg_typecheck_getPrimitiveSet_overload_2(L)) return _bind_getPrimitiveSet_overload_2(L);

		luaL_error(L, "error in function getPrimitiveSet, cannot match any of the overloads for function getPrimitiveSet:\n  getPrimitiveSet(unsigned int)\n  getPrimitiveSet(unsigned int)\n");
		return 0;
	}

	// bool osg::Geometry::addPrimitiveSet(osg::PrimitiveSet * primitiveset)
	static int _bind_addPrimitiveSet(lua_State *L) {
		if (!_lg_typecheck_addPrimitiveSet(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::addPrimitiveSet(osg::PrimitiveSet * primitiveset) function, expected prototype:\nbool osg::Geometry::addPrimitiveSet(osg::PrimitiveSet * primitiveset)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::PrimitiveSet* primitiveset=(Luna< osg::Referenced >::checkSubType< osg::PrimitiveSet >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geometry::addPrimitiveSet(osg::PrimitiveSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addPrimitiveSet(primitiveset);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geometry::setPrimitiveSet(unsigned int i, osg::PrimitiveSet * primitiveset)
	static int _bind_setPrimitiveSet(lua_State *L) {
		if (!_lg_typecheck_setPrimitiveSet(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::setPrimitiveSet(unsigned int i, osg::PrimitiveSet * primitiveset) function, expected prototype:\nbool osg::Geometry::setPrimitiveSet(unsigned int i, osg::PrimitiveSet * primitiveset)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::PrimitiveSet* primitiveset=(Luna< osg::Referenced >::checkSubType< osg::PrimitiveSet >(L,3));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geometry::setPrimitiveSet(unsigned int, osg::PrimitiveSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setPrimitiveSet(i, primitiveset);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geometry::insertPrimitiveSet(unsigned int i, osg::PrimitiveSet * primitiveset)
	static int _bind_insertPrimitiveSet(lua_State *L) {
		if (!_lg_typecheck_insertPrimitiveSet(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::insertPrimitiveSet(unsigned int i, osg::PrimitiveSet * primitiveset) function, expected prototype:\nbool osg::Geometry::insertPrimitiveSet(unsigned int i, osg::PrimitiveSet * primitiveset)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::PrimitiveSet* primitiveset=(Luna< osg::Referenced >::checkSubType< osg::PrimitiveSet >(L,3));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geometry::insertPrimitiveSet(unsigned int, osg::PrimitiveSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->insertPrimitiveSet(i, primitiveset);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geometry::removePrimitiveSet(unsigned int i, unsigned int numElementsToRemove = 1)
	static int _bind_removePrimitiveSet(lua_State *L) {
		if (!_lg_typecheck_removePrimitiveSet(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::removePrimitiveSet(unsigned int i, unsigned int numElementsToRemove = 1) function, expected prototype:\nbool osg::Geometry::removePrimitiveSet(unsigned int i, unsigned int numElementsToRemove = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		unsigned int numElementsToRemove=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)1;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geometry::removePrimitiveSet(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removePrimitiveSet(i, numElementsToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Geometry::getPrimitiveSetIndex(const osg::PrimitiveSet * primitiveset) const
	static int _bind_getPrimitiveSetIndex(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveSetIndex(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Geometry::getPrimitiveSetIndex(const osg::PrimitiveSet * primitiveset) const function, expected prototype:\nunsigned int osg::Geometry::getPrimitiveSetIndex(const osg::PrimitiveSet * primitiveset) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::PrimitiveSet* primitiveset=(Luna< osg::Referenced >::checkSubType< osg::PrimitiveSet >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Geometry::getPrimitiveSetIndex(const osg::PrimitiveSet *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getPrimitiveSetIndex(primitiveset);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Geometry::setVertexIndices(osg::IndexArray * array)
	static int _bind_setVertexIndices(lua_State *L) {
		if (!_lg_typecheck_setVertexIndices(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setVertexIndices(osg::IndexArray * array) function, expected prototype:\nvoid osg::Geometry::setVertexIndices(osg::IndexArray * array)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::IndexArray* array=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setVertexIndices(osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexIndices(array);

		return 0;
	}

	// osg::IndexArray * osg::Geometry::getVertexIndices()
	static int _bind_getVertexIndices_overload_1(lua_State *L) {
		if (!_lg_typecheck_getVertexIndices_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::IndexArray * osg::Geometry::getVertexIndices() function, expected prototype:\nosg::IndexArray * osg::Geometry::getVertexIndices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::IndexArray * osg::Geometry::getVertexIndices(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::IndexArray * lret = self->getVertexIndices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}

	// const osg::IndexArray * osg::Geometry::getVertexIndices() const
	static int _bind_getVertexIndices_overload_2(lua_State *L) {
		if (!_lg_typecheck_getVertexIndices_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::IndexArray * osg::Geometry::getVertexIndices() const function, expected prototype:\nconst osg::IndexArray * osg::Geometry::getVertexIndices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::IndexArray * osg::Geometry::getVertexIndices() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::IndexArray * lret = self->getVertexIndices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getVertexIndices
	static int _bind_getVertexIndices(lua_State *L) {
		if (_lg_typecheck_getVertexIndices_overload_1(L)) return _bind_getVertexIndices_overload_1(L);
		if (_lg_typecheck_getVertexIndices_overload_2(L)) return _bind_getVertexIndices_overload_2(L);

		luaL_error(L, "error in function getVertexIndices, cannot match any of the overloads for function getVertexIndices:\n  getVertexIndices()\n  getVertexIndices()\n");
		return 0;
	}

	// void osg::Geometry::setNormalIndices(osg::IndexArray * array)
	static int _bind_setNormalIndices(lua_State *L) {
		if (!_lg_typecheck_setNormalIndices(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setNormalIndices(osg::IndexArray * array) function, expected prototype:\nvoid osg::Geometry::setNormalIndices(osg::IndexArray * array)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::IndexArray* array=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setNormalIndices(osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNormalIndices(array);

		return 0;
	}

	// osg::IndexArray * osg::Geometry::getNormalIndices()
	static int _bind_getNormalIndices_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNormalIndices_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::IndexArray * osg::Geometry::getNormalIndices() function, expected prototype:\nosg::IndexArray * osg::Geometry::getNormalIndices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::IndexArray * osg::Geometry::getNormalIndices(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::IndexArray * lret = self->getNormalIndices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}

	// const osg::IndexArray * osg::Geometry::getNormalIndices() const
	static int _bind_getNormalIndices_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNormalIndices_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::IndexArray * osg::Geometry::getNormalIndices() const function, expected prototype:\nconst osg::IndexArray * osg::Geometry::getNormalIndices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::IndexArray * osg::Geometry::getNormalIndices() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::IndexArray * lret = self->getNormalIndices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getNormalIndices
	static int _bind_getNormalIndices(lua_State *L) {
		if (_lg_typecheck_getNormalIndices_overload_1(L)) return _bind_getNormalIndices_overload_1(L);
		if (_lg_typecheck_getNormalIndices_overload_2(L)) return _bind_getNormalIndices_overload_2(L);

		luaL_error(L, "error in function getNormalIndices, cannot match any of the overloads for function getNormalIndices:\n  getNormalIndices()\n  getNormalIndices()\n");
		return 0;
	}

	// void osg::Geometry::setColorIndices(osg::IndexArray * array)
	static int _bind_setColorIndices(lua_State *L) {
		if (!_lg_typecheck_setColorIndices(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setColorIndices(osg::IndexArray * array) function, expected prototype:\nvoid osg::Geometry::setColorIndices(osg::IndexArray * array)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::IndexArray* array=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setColorIndices(osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorIndices(array);

		return 0;
	}

	// osg::IndexArray * osg::Geometry::getColorIndices()
	static int _bind_getColorIndices_overload_1(lua_State *L) {
		if (!_lg_typecheck_getColorIndices_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::IndexArray * osg::Geometry::getColorIndices() function, expected prototype:\nosg::IndexArray * osg::Geometry::getColorIndices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::IndexArray * osg::Geometry::getColorIndices(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::IndexArray * lret = self->getColorIndices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}

	// const osg::IndexArray * osg::Geometry::getColorIndices() const
	static int _bind_getColorIndices_overload_2(lua_State *L) {
		if (!_lg_typecheck_getColorIndices_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::IndexArray * osg::Geometry::getColorIndices() const function, expected prototype:\nconst osg::IndexArray * osg::Geometry::getColorIndices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::IndexArray * osg::Geometry::getColorIndices() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::IndexArray * lret = self->getColorIndices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getColorIndices
	static int _bind_getColorIndices(lua_State *L) {
		if (_lg_typecheck_getColorIndices_overload_1(L)) return _bind_getColorIndices_overload_1(L);
		if (_lg_typecheck_getColorIndices_overload_2(L)) return _bind_getColorIndices_overload_2(L);

		luaL_error(L, "error in function getColorIndices, cannot match any of the overloads for function getColorIndices:\n  getColorIndices()\n  getColorIndices()\n");
		return 0;
	}

	// void osg::Geometry::setSecondaryColorIndices(osg::IndexArray * array)
	static int _bind_setSecondaryColorIndices(lua_State *L) {
		if (!_lg_typecheck_setSecondaryColorIndices(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setSecondaryColorIndices(osg::IndexArray * array) function, expected prototype:\nvoid osg::Geometry::setSecondaryColorIndices(osg::IndexArray * array)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::IndexArray* array=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setSecondaryColorIndices(osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSecondaryColorIndices(array);

		return 0;
	}

	// osg::IndexArray * osg::Geometry::getSecondaryColorIndices()
	static int _bind_getSecondaryColorIndices_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSecondaryColorIndices_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::IndexArray * osg::Geometry::getSecondaryColorIndices() function, expected prototype:\nosg::IndexArray * osg::Geometry::getSecondaryColorIndices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::IndexArray * osg::Geometry::getSecondaryColorIndices(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::IndexArray * lret = self->getSecondaryColorIndices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}

	// const osg::IndexArray * osg::Geometry::getSecondaryColorIndices() const
	static int _bind_getSecondaryColorIndices_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSecondaryColorIndices_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::IndexArray * osg::Geometry::getSecondaryColorIndices() const function, expected prototype:\nconst osg::IndexArray * osg::Geometry::getSecondaryColorIndices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::IndexArray * osg::Geometry::getSecondaryColorIndices() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::IndexArray * lret = self->getSecondaryColorIndices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getSecondaryColorIndices
	static int _bind_getSecondaryColorIndices(lua_State *L) {
		if (_lg_typecheck_getSecondaryColorIndices_overload_1(L)) return _bind_getSecondaryColorIndices_overload_1(L);
		if (_lg_typecheck_getSecondaryColorIndices_overload_2(L)) return _bind_getSecondaryColorIndices_overload_2(L);

		luaL_error(L, "error in function getSecondaryColorIndices, cannot match any of the overloads for function getSecondaryColorIndices:\n  getSecondaryColorIndices()\n  getSecondaryColorIndices()\n");
		return 0;
	}

	// void osg::Geometry::setFogCoordIndices(osg::IndexArray * array)
	static int _bind_setFogCoordIndices(lua_State *L) {
		if (!_lg_typecheck_setFogCoordIndices(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setFogCoordIndices(osg::IndexArray * array) function, expected prototype:\nvoid osg::Geometry::setFogCoordIndices(osg::IndexArray * array)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::IndexArray* array=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setFogCoordIndices(osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFogCoordIndices(array);

		return 0;
	}

	// osg::IndexArray * osg::Geometry::getFogCoordIndices()
	static int _bind_getFogCoordIndices_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFogCoordIndices_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::IndexArray * osg::Geometry::getFogCoordIndices() function, expected prototype:\nosg::IndexArray * osg::Geometry::getFogCoordIndices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::IndexArray * osg::Geometry::getFogCoordIndices(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::IndexArray * lret = self->getFogCoordIndices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}

	// const osg::IndexArray * osg::Geometry::getFogCoordIndices() const
	static int _bind_getFogCoordIndices_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFogCoordIndices_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::IndexArray * osg::Geometry::getFogCoordIndices() const function, expected prototype:\nconst osg::IndexArray * osg::Geometry::getFogCoordIndices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::IndexArray * osg::Geometry::getFogCoordIndices() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::IndexArray * lret = self->getFogCoordIndices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getFogCoordIndices
	static int _bind_getFogCoordIndices(lua_State *L) {
		if (_lg_typecheck_getFogCoordIndices_overload_1(L)) return _bind_getFogCoordIndices_overload_1(L);
		if (_lg_typecheck_getFogCoordIndices_overload_2(L)) return _bind_getFogCoordIndices_overload_2(L);

		luaL_error(L, "error in function getFogCoordIndices, cannot match any of the overloads for function getFogCoordIndices:\n  getFogCoordIndices()\n  getFogCoordIndices()\n");
		return 0;
	}

	// void osg::Geometry::setTexCoordIndices(unsigned int unit, osg::IndexArray * arg2)
	static int _bind_setTexCoordIndices(lua_State *L) {
		if (!_lg_typecheck_setTexCoordIndices(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setTexCoordIndices(unsigned int unit, osg::IndexArray * arg2) function, expected prototype:\nvoid osg::Geometry::setTexCoordIndices(unsigned int unit, osg::IndexArray * arg2)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		osg::IndexArray* _arg2=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,3));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setTexCoordIndices(unsigned int, osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTexCoordIndices(unit, _arg2);

		return 0;
	}

	// osg::IndexArray * osg::Geometry::getTexCoordIndices(unsigned int unit)
	static int _bind_getTexCoordIndices_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTexCoordIndices_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::IndexArray * osg::Geometry::getTexCoordIndices(unsigned int unit) function, expected prototype:\nosg::IndexArray * osg::Geometry::getTexCoordIndices(unsigned int unit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::IndexArray * osg::Geometry::getTexCoordIndices(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::IndexArray * lret = self->getTexCoordIndices(unit);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}

	// const osg::IndexArray * osg::Geometry::getTexCoordIndices(unsigned int unit) const
	static int _bind_getTexCoordIndices_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTexCoordIndices_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::IndexArray * osg::Geometry::getTexCoordIndices(unsigned int unit) const function, expected prototype:\nconst osg::IndexArray * osg::Geometry::getTexCoordIndices(unsigned int unit) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::IndexArray * osg::Geometry::getTexCoordIndices(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::IndexArray * lret = self->getTexCoordIndices(unit);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getTexCoordIndices
	static int _bind_getTexCoordIndices(lua_State *L) {
		if (_lg_typecheck_getTexCoordIndices_overload_1(L)) return _bind_getTexCoordIndices_overload_1(L);
		if (_lg_typecheck_getTexCoordIndices_overload_2(L)) return _bind_getTexCoordIndices_overload_2(L);

		luaL_error(L, "error in function getTexCoordIndices, cannot match any of the overloads for function getTexCoordIndices:\n  getTexCoordIndices(unsigned int)\n  getTexCoordIndices(unsigned int)\n");
		return 0;
	}

	// void osg::Geometry::setVertexAttribIndices(unsigned int index, osg::IndexArray * array)
	static int _bind_setVertexAttribIndices(lua_State *L) {
		if (!_lg_typecheck_setVertexAttribIndices(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setVertexAttribIndices(unsigned int index, osg::IndexArray * array) function, expected prototype:\nvoid osg::Geometry::setVertexAttribIndices(unsigned int index, osg::IndexArray * array)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::IndexArray* array=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,3));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setVertexAttribIndices(unsigned int, osg::IndexArray *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexAttribIndices(index, array);

		return 0;
	}

	// osg::IndexArray * osg::Geometry::getVertexAttribIndices(unsigned int index)
	static int _bind_getVertexAttribIndices_overload_1(lua_State *L) {
		if (!_lg_typecheck_getVertexAttribIndices_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::IndexArray * osg::Geometry::getVertexAttribIndices(unsigned int index) function, expected prototype:\nosg::IndexArray * osg::Geometry::getVertexAttribIndices(unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::IndexArray * osg::Geometry::getVertexAttribIndices(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::IndexArray * lret = self->getVertexAttribIndices(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}

	// const osg::IndexArray * osg::Geometry::getVertexAttribIndices(unsigned int index) const
	static int _bind_getVertexAttribIndices_overload_2(lua_State *L) {
		if (!_lg_typecheck_getVertexAttribIndices_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::IndexArray * osg::Geometry::getVertexAttribIndices(unsigned int index) const function, expected prototype:\nconst osg::IndexArray * osg::Geometry::getVertexAttribIndices(unsigned int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::IndexArray * osg::Geometry::getVertexAttribIndices(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::IndexArray * lret = self->getVertexAttribIndices(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getVertexAttribIndices
	static int _bind_getVertexAttribIndices(lua_State *L) {
		if (_lg_typecheck_getVertexAttribIndices_overload_1(L)) return _bind_getVertexAttribIndices_overload_1(L);
		if (_lg_typecheck_getVertexAttribIndices_overload_2(L)) return _bind_getVertexAttribIndices_overload_2(L);

		luaL_error(L, "error in function getVertexAttribIndices, cannot match any of the overloads for function getVertexAttribIndices:\n  getVertexAttribIndices(unsigned int)\n  getVertexAttribIndices(unsigned int)\n");
		return 0;
	}

	// void osg::Geometry::setUseVertexBufferObjects(bool flag)
	static int _bind_setUseVertexBufferObjects(lua_State *L) {
		if (!_lg_typecheck_setUseVertexBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setUseVertexBufferObjects(bool flag) function, expected prototype:\nvoid osg::Geometry::setUseVertexBufferObjects(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setUseVertexBufferObjects(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUseVertexBufferObjects(flag);

		return 0;
	}

	// void osg::Geometry::dirtyDisplayList()
	static int _bind_dirtyDisplayList(lua_State *L) {
		if (!_lg_typecheck_dirtyDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::dirtyDisplayList() function, expected prototype:\nvoid osg::Geometry::dirtyDisplayList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::dirtyDisplayList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dirtyDisplayList();

		return 0;
	}

	// void osg::Geometry::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::Geometry::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// bool osg::Geometry::getArrayList(osg::Geometry::ArrayList & arrayList) const
	static int _bind_getArrayList(lua_State *L) {
		if (!_lg_typecheck_getArrayList(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::getArrayList(osg::Geometry::ArrayList & arrayList) const function, expected prototype:\nbool osg::Geometry::getArrayList(osg::Geometry::ArrayList & arrayList) const\nClass arguments details:\narg 1 ID = 26926568\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry::ArrayList* arrayList_ptr=(Luna< std::vector< osg::Array * > >::checkSubType< osg::Geometry::ArrayList >(L,2));
		if( !arrayList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arrayList in osg::Geometry::getArrayList function");
		}
		osg::Geometry::ArrayList & arrayList=*arrayList_ptr;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geometry::getArrayList(osg::Geometry::ArrayList &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getArrayList(arrayList);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geometry::getDrawElementsList(osg::Geometry::DrawElementsList & drawElementsList) const
	static int _bind_getDrawElementsList(lua_State *L) {
		if (!_lg_typecheck_getDrawElementsList(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::getDrawElementsList(osg::Geometry::DrawElementsList & drawElementsList) const function, expected prototype:\nbool osg::Geometry::getDrawElementsList(osg::Geometry::DrawElementsList & drawElementsList) const\nClass arguments details:\narg 1 ID = 9739566\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry::DrawElementsList* drawElementsList_ptr=(Luna< std::vector< osg::DrawElements * > >::checkSubType< osg::Geometry::DrawElementsList >(L,2));
		if( !drawElementsList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawElementsList in osg::Geometry::getDrawElementsList function");
		}
		osg::Geometry::DrawElementsList & drawElementsList=*drawElementsList_ptr;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geometry::getDrawElementsList(osg::Geometry::DrawElementsList &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getDrawElementsList(drawElementsList);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::VertexBufferObject * osg::Geometry::getOrCreateVertexBufferObject()
	static int _bind_getOrCreateVertexBufferObject(lua_State *L) {
		if (!_lg_typecheck_getOrCreateVertexBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in osg::VertexBufferObject * osg::Geometry::getOrCreateVertexBufferObject() function, expected prototype:\nosg::VertexBufferObject * osg::Geometry::getOrCreateVertexBufferObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::VertexBufferObject * osg::Geometry::getOrCreateVertexBufferObject(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::VertexBufferObject * lret = self->getOrCreateVertexBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::VertexBufferObject >::push(L,lret,false);

		return 1;
	}

	// osg::ElementBufferObject * osg::Geometry::getOrCreateElementBufferObject()
	static int _bind_getOrCreateElementBufferObject(lua_State *L) {
		if (!_lg_typecheck_getOrCreateElementBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in osg::ElementBufferObject * osg::Geometry::getOrCreateElementBufferObject() function, expected prototype:\nosg::ElementBufferObject * osg::Geometry::getOrCreateElementBufferObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ElementBufferObject * osg::Geometry::getOrCreateElementBufferObject(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ElementBufferObject * lret = self->getOrCreateElementBufferObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ElementBufferObject >::push(L,lret,false);

		return 1;
	}

	// void osg::Geometry::setFastPathHint(bool on)
	static int _bind_setFastPathHint(lua_State *L) {
		if (!_lg_typecheck_setFastPathHint(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setFastPathHint(bool on) function, expected prototype:\nvoid osg::Geometry::setFastPathHint(bool on)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool on=(bool)(lua_toboolean(L,2)==1);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setFastPathHint(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFastPathHint(on);

		return 0;
	}

	// bool osg::Geometry::getFastPathHint() const
	static int _bind_getFastPathHint(lua_State *L) {
		if (!_lg_typecheck_getFastPathHint(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::getFastPathHint() const function, expected prototype:\nbool osg::Geometry::getFastPathHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geometry::getFastPathHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getFastPathHint();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geometry::areFastPathsUsed() const
	static int _bind_areFastPathsUsed(lua_State *L) {
		if (!_lg_typecheck_areFastPathsUsed(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::areFastPathsUsed() const function, expected prototype:\nbool osg::Geometry::areFastPathsUsed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geometry::areFastPathsUsed() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->areFastPathsUsed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geometry::computeFastPathsUsed()
	static int _bind_computeFastPathsUsed(lua_State *L) {
		if (!_lg_typecheck_computeFastPathsUsed(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::computeFastPathsUsed() function, expected prototype:\nbool osg::Geometry::computeFastPathsUsed()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geometry::computeFastPathsUsed(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->computeFastPathsUsed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geometry::verifyBindings() const
	static int _bind_verifyBindings(lua_State *L) {
		if (!_lg_typecheck_verifyBindings(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::verifyBindings() const function, expected prototype:\nbool osg::Geometry::verifyBindings() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geometry::verifyBindings() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->verifyBindings();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Geometry::computeCorrectBindingsAndArraySizes()
	static int _bind_computeCorrectBindingsAndArraySizes(lua_State *L) {
		if (!_lg_typecheck_computeCorrectBindingsAndArraySizes(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::computeCorrectBindingsAndArraySizes() function, expected prototype:\nvoid osg::Geometry::computeCorrectBindingsAndArraySizes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::computeCorrectBindingsAndArraySizes(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->computeCorrectBindingsAndArraySizes();

		return 0;
	}

	// bool osg::Geometry::verifyArrays(std::ostream & out) const
	static int _bind_verifyArrays(lua_State *L) {
		if (!_lg_typecheck_verifyArrays(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::verifyArrays(std::ostream & out) const function, expected prototype:\nbool osg::Geometry::verifyArrays(std::ostream & out) const\nClass arguments details:\narg 1 ID = 2993706\n\n%s",luna_dumpStack(L).c_str());
		}

		std::ostream* out_ptr=(Luna< std::ostream >::check(L,2));
		if( !out_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg out in osg::Geometry::verifyArrays function");
		}
		std::ostream & out=*out_ptr;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geometry::verifyArrays(std::ostream &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->verifyArrays(out);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geometry::suitableForOptimization() const
	static int _bind_suitableForOptimization(lua_State *L) {
		if (!_lg_typecheck_suitableForOptimization(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::suitableForOptimization() const function, expected prototype:\nbool osg::Geometry::suitableForOptimization() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geometry::suitableForOptimization() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->suitableForOptimization();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Geometry::copyToAndOptimize(osg::Geometry & target)
	static int _bind_copyToAndOptimize(lua_State *L) {
		if (!_lg_typecheck_copyToAndOptimize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::copyToAndOptimize(osg::Geometry & target) function, expected prototype:\nvoid osg::Geometry::copyToAndOptimize(osg::Geometry & target)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry* target_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));
		if( !target_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg target in osg::Geometry::copyToAndOptimize function");
		}
		osg::Geometry & target=*target_ptr;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::copyToAndOptimize(osg::Geometry &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copyToAndOptimize(target);

		return 0;
	}

	// bool osg::Geometry::containsSharedArrays() const
	static int _bind_containsSharedArrays(lua_State *L) {
		if (!_lg_typecheck_containsSharedArrays(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::containsSharedArrays() const function, expected prototype:\nbool osg::Geometry::containsSharedArrays() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geometry::containsSharedArrays() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->containsSharedArrays();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Geometry::duplicateSharedArrays()
	static int _bind_duplicateSharedArrays(lua_State *L) {
		if (!_lg_typecheck_duplicateSharedArrays(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::duplicateSharedArrays() function, expected prototype:\nvoid osg::Geometry::duplicateSharedArrays()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::duplicateSharedArrays(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->duplicateSharedArrays();

		return 0;
	}

	// void osg::Geometry::computeInternalOptimizedGeometry()
	static int _bind_computeInternalOptimizedGeometry(lua_State *L) {
		if (!_lg_typecheck_computeInternalOptimizedGeometry(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::computeInternalOptimizedGeometry() function, expected prototype:\nvoid osg::Geometry::computeInternalOptimizedGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::computeInternalOptimizedGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->computeInternalOptimizedGeometry();

		return 0;
	}

	// void osg::Geometry::removeInternalOptimizedGeometry()
	static int _bind_removeInternalOptimizedGeometry(lua_State *L) {
		if (!_lg_typecheck_removeInternalOptimizedGeometry(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::removeInternalOptimizedGeometry() function, expected prototype:\nvoid osg::Geometry::removeInternalOptimizedGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::removeInternalOptimizedGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeInternalOptimizedGeometry();

		return 0;
	}

	// void osg::Geometry::setInternalOptimizedGeometry(osg::Geometry * geometry)
	static int _bind_setInternalOptimizedGeometry(lua_State *L) {
		if (!_lg_typecheck_setInternalOptimizedGeometry(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::setInternalOptimizedGeometry(osg::Geometry * geometry) function, expected prototype:\nvoid osg::Geometry::setInternalOptimizedGeometry(osg::Geometry * geometry)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry* geometry=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::setInternalOptimizedGeometry(osg::Geometry *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInternalOptimizedGeometry(geometry);

		return 0;
	}

	// osg::Geometry * osg::Geometry::getInternalOptimizedGeometry()
	static int _bind_getInternalOptimizedGeometry_overload_1(lua_State *L) {
		if (!_lg_typecheck_getInternalOptimizedGeometry_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osg::Geometry::getInternalOptimizedGeometry() function, expected prototype:\nosg::Geometry * osg::Geometry::getInternalOptimizedGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osg::Geometry::getInternalOptimizedGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->getInternalOptimizedGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry * osg::Geometry::getInternalOptimizedGeometry() const
	static int _bind_getInternalOptimizedGeometry_overload_2(lua_State *L) {
		if (!_lg_typecheck_getInternalOptimizedGeometry_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry * osg::Geometry::getInternalOptimizedGeometry() const function, expected prototype:\nconst osg::Geometry * osg::Geometry::getInternalOptimizedGeometry() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry * osg::Geometry::getInternalOptimizedGeometry() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry * lret = self->getInternalOptimizedGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::getInternalOptimizedGeometry
	static int _bind_getInternalOptimizedGeometry(lua_State *L) {
		if (_lg_typecheck_getInternalOptimizedGeometry_overload_1(L)) return _bind_getInternalOptimizedGeometry_overload_1(L);
		if (_lg_typecheck_getInternalOptimizedGeometry_overload_2(L)) return _bind_getInternalOptimizedGeometry_overload_2(L);

		luaL_error(L, "error in function getInternalOptimizedGeometry, cannot match any of the overloads for function getInternalOptimizedGeometry:\n  getInternalOptimizedGeometry()\n  getInternalOptimizedGeometry()\n");
		return 0;
	}

	// unsigned int osg::Geometry::getGLObjectSizeHint() const
	static int _bind_getGLObjectSizeHint(lua_State *L) {
		if (!_lg_typecheck_getGLObjectSizeHint(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Geometry::getGLObjectSizeHint() const function, expected prototype:\nunsigned int osg::Geometry::getGLObjectSizeHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Geometry::getGLObjectSizeHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getGLObjectSizeHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Geometry::compileGLObjects(osg::RenderInfo & renderInfo) const
	static int _bind_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::compileGLObjects(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::Geometry::compileGLObjects(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::Geometry::compileGLObjects function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::compileGLObjects(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->compileGLObjects(renderInfo);

		return 0;
	}

	// void osg::Geometry::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::Geometry::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::Geometry::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// const osg::Geometry::ArrayData osg::Geometry::s_InvalidArrayData()
	static int _bind_get_s_InvalidArrayData(lua_State *L) {
		if (!_lg_typecheck_get_s_InvalidArrayData(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry::ArrayData osg::Geometry::s_InvalidArrayData() function, expected prototype:\nconst osg::Geometry::ArrayData osg::Geometry::s_InvalidArrayData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry::ArrayData osg::Geometry::s_InvalidArrayData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry::ArrayData* lret = &self->s_InvalidArrayData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry::ArrayData >::push(L,lret,false);

		return 1;
	}

	// void osg::Geometry::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Geometry::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geometry::setName(name);

		return 0;
	}

	// void osg::Geometry::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Geometry::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geometry::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Geometry::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Geometry::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Geometry::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Geometry::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Geometry::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Geometry::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Geometry::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Geometry::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Geometry::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Geometry::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::Geometry::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::base_computeDataVariance() function, expected prototype:\nvoid osg::Geometry::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geometry::computeDataVariance();

		return 0;
	}

	// osg::BoundingBoxd osg::Geometry::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osg::Geometry::base_computeBound() const function, expected prototype:\nosg::BoundingBoxd osg::Geometry::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osg::Geometry::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBoxd stack_lret = self->Geometry::computeBound();
		osg::BoundingBoxd* lret = new osg::BoundingBoxd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,true);

		return 1;
	}

	// void osg::Geometry::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Geometry::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geometry::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Geometry::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	static int _bind_base_setUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_base_setUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac) function, expected prototype:\nvoid osg::Geometry::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::UpdateCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::base_setUpdateCallback(osg::Drawable::UpdateCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geometry::setUpdateCallback(ac);

		return 0;
	}

	// void osg::Geometry::base_setEventCallback(osg::Drawable::EventCallback * ac)
	static int _bind_base_setEventCallback(lua_State *L) {
		if (!_lg_typecheck_base_setEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::base_setEventCallback(osg::Drawable::EventCallback * ac) function, expected prototype:\nvoid osg::Geometry::base_setEventCallback(osg::Drawable::EventCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::EventCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::base_setEventCallback(osg::Drawable::EventCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geometry::setEventCallback(ac);

		return 0;
	}

	// void osg::Geometry::base_setCullCallback(osg::Drawable::CullCallback * cc)
	static int _bind_base_setCullCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCullCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::base_setCullCallback(osg::Drawable::CullCallback * cc) function, expected prototype:\nvoid osg::Geometry::base_setCullCallback(osg::Drawable::CullCallback * cc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::CullCallback* cc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::base_setCullCallback(osg::Drawable::CullCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geometry::setCullCallback(cc);

		return 0;
	}

	// void osg::Geometry::base_setDrawCallback(osg::Drawable::DrawCallback * dc)
	static int _bind_base_setDrawCallback(lua_State *L) {
		if (!_lg_typecheck_base_setDrawCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::base_setDrawCallback(osg::Drawable::DrawCallback * dc) function, expected prototype:\nvoid osg::Geometry::base_setDrawCallback(osg::Drawable::DrawCallback * dc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::DrawCallback* dc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::DrawCallback >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::base_setDrawCallback(osg::Drawable::DrawCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geometry::setDrawCallback(dc);

		return 0;
	}

	// osg::Object * osg::Geometry::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Geometry::base_cloneType() const function, expected prototype:\nosg::Object * osg::Geometry::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Geometry::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Geometry::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Geometry::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Geometry::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Geometry::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Geometry::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Geometry::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Geometry::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Geometry::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Geometry::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Geometry::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Geometry::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Geometry::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Geometry::base_libraryName() const function, expected prototype:\nconst char * osg::Geometry::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Geometry::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Geometry::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Geometry::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Geometry::base_className() const function, expected prototype:\nconst char * osg::Geometry::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Geometry::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Geometry::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Geometry * osg::Geometry::base_asGeometry()
	static int _bind_base_asGeometry_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osg::Geometry::base_asGeometry() function, expected prototype:\nosg::Geometry * osg::Geometry::base_asGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osg::Geometry::base_asGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->Geometry::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry * osg::Geometry::base_asGeometry() const
	static int _bind_base_asGeometry_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry * osg::Geometry::base_asGeometry() const function, expected prototype:\nconst osg::Geometry * osg::Geometry::base_asGeometry() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry * osg::Geometry::base_asGeometry() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry * lret = self->Geometry::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geometry::base_asGeometry
	static int _bind_base_asGeometry(lua_State *L) {
		if (_lg_typecheck_base_asGeometry_overload_1(L)) return _bind_base_asGeometry_overload_1(L);
		if (_lg_typecheck_base_asGeometry_overload_2(L)) return _bind_base_asGeometry_overload_2(L);

		luaL_error(L, "error in function base_asGeometry, cannot match any of the overloads for function base_asGeometry:\n  base_asGeometry()\n  base_asGeometry()\n");
		return 0;
	}

	// void osg::Geometry::base_setUseVertexBufferObjects(bool flag)
	static int _bind_base_setUseVertexBufferObjects(lua_State *L) {
		if (!_lg_typecheck_base_setUseVertexBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::base_setUseVertexBufferObjects(bool flag) function, expected prototype:\nvoid osg::Geometry::base_setUseVertexBufferObjects(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::base_setUseVertexBufferObjects(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geometry::setUseVertexBufferObjects(flag);

		return 0;
	}

	// void osg::Geometry::base_dirtyDisplayList()
	static int _bind_base_dirtyDisplayList(lua_State *L) {
		if (!_lg_typecheck_base_dirtyDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::base_dirtyDisplayList() function, expected prototype:\nvoid osg::Geometry::base_dirtyDisplayList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::base_dirtyDisplayList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geometry::dirtyDisplayList();

		return 0;
	}

	// void osg::Geometry::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::Geometry::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geometry::releaseGLObjects(state);

		return 0;
	}

	// unsigned int osg::Geometry::base_getGLObjectSizeHint() const
	static int _bind_base_getGLObjectSizeHint(lua_State *L) {
		if (!_lg_typecheck_base_getGLObjectSizeHint(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Geometry::base_getGLObjectSizeHint() const function, expected prototype:\nunsigned int osg::Geometry::base_getGLObjectSizeHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Geometry::base_getGLObjectSizeHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Geometry::getGLObjectSizeHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Geometry::base_compileGLObjects(osg::RenderInfo & renderInfo) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::base_compileGLObjects(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::Geometry::base_compileGLObjects(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::Geometry::base_compileGLObjects function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::base_compileGLObjects(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geometry::compileGLObjects(renderInfo);

		return 0;
	}

	// void osg::Geometry::base_drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_base_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_base_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Geometry::base_drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::Geometry::base_drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::Geometry::base_drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::Geometry* self=Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Geometry::base_drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Geometry::drawImplementation(renderInfo);

		return 0;
	}


	// Operator binds:

};

osg::Geometry* LunaTraits< osg::Geometry >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Geometry::_bind_ctor(L);
}

void LunaTraits< osg::Geometry >::_bind_dtor(osg::Geometry* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Geometry >::className[] = "Geometry";
const char LunaTraits< osg::Geometry >::fullName[] = "osg::Geometry";
const char LunaTraits< osg::Geometry >::moduleName[] = "osg";
const char* LunaTraits< osg::Geometry >::parents[] = {"osg.Drawable", 0};
const int LunaTraits< osg::Geometry >::hash = 12480632;
const int LunaTraits< osg::Geometry >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Geometry >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Geometry::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Geometry::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Geometry::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Geometry::_bind_libraryName},
	{"className", &luna_wrapper_osg_Geometry::_bind_className},
	{"asGeometry", &luna_wrapper_osg_Geometry::_bind_asGeometry},
	{"empty", &luna_wrapper_osg_Geometry::_bind_empty},
	{"setVertexArray", &luna_wrapper_osg_Geometry::_bind_setVertexArray},
	{"getVertexArray", &luna_wrapper_osg_Geometry::_bind_getVertexArray},
	{"setVertexData", &luna_wrapper_osg_Geometry::_bind_setVertexData},
	{"getVertexData", &luna_wrapper_osg_Geometry::_bind_getVertexData},
	{"setNormalBinding", &luna_wrapper_osg_Geometry::_bind_setNormalBinding},
	{"getNormalBinding", &luna_wrapper_osg_Geometry::_bind_getNormalBinding},
	{"setNormalArray", &luna_wrapper_osg_Geometry::_bind_setNormalArray},
	{"getNormalArray", &luna_wrapper_osg_Geometry::_bind_getNormalArray},
	{"setNormalData", &luna_wrapper_osg_Geometry::_bind_setNormalData},
	{"getNormalData", &luna_wrapper_osg_Geometry::_bind_getNormalData},
	{"setColorBinding", &luna_wrapper_osg_Geometry::_bind_setColorBinding},
	{"getColorBinding", &luna_wrapper_osg_Geometry::_bind_getColorBinding},
	{"setColorArray", &luna_wrapper_osg_Geometry::_bind_setColorArray},
	{"getColorArray", &luna_wrapper_osg_Geometry::_bind_getColorArray},
	{"setColorData", &luna_wrapper_osg_Geometry::_bind_setColorData},
	{"getColorData", &luna_wrapper_osg_Geometry::_bind_getColorData},
	{"setSecondaryColorBinding", &luna_wrapper_osg_Geometry::_bind_setSecondaryColorBinding},
	{"getSecondaryColorBinding", &luna_wrapper_osg_Geometry::_bind_getSecondaryColorBinding},
	{"setSecondaryColorArray", &luna_wrapper_osg_Geometry::_bind_setSecondaryColorArray},
	{"getSecondaryColorArray", &luna_wrapper_osg_Geometry::_bind_getSecondaryColorArray},
	{"setSecondaryColorData", &luna_wrapper_osg_Geometry::_bind_setSecondaryColorData},
	{"getSecondaryColorData", &luna_wrapper_osg_Geometry::_bind_getSecondaryColorData},
	{"setFogCoordBinding", &luna_wrapper_osg_Geometry::_bind_setFogCoordBinding},
	{"getFogCoordBinding", &luna_wrapper_osg_Geometry::_bind_getFogCoordBinding},
	{"setFogCoordArray", &luna_wrapper_osg_Geometry::_bind_setFogCoordArray},
	{"getFogCoordArray", &luna_wrapper_osg_Geometry::_bind_getFogCoordArray},
	{"setFogCoordData", &luna_wrapper_osg_Geometry::_bind_setFogCoordData},
	{"getFogCoordData", &luna_wrapper_osg_Geometry::_bind_getFogCoordData},
	{"setTexCoordArray", &luna_wrapper_osg_Geometry::_bind_setTexCoordArray},
	{"getTexCoordArray", &luna_wrapper_osg_Geometry::_bind_getTexCoordArray},
	{"setTexCoordData", &luna_wrapper_osg_Geometry::_bind_setTexCoordData},
	{"getTexCoordData", &luna_wrapper_osg_Geometry::_bind_getTexCoordData},
	{"getNumTexCoordArrays", &luna_wrapper_osg_Geometry::_bind_getNumTexCoordArrays},
	{"getTexCoordArrayList", &luna_wrapper_osg_Geometry::_bind_getTexCoordArrayList},
	{"setVertexAttribArray", &luna_wrapper_osg_Geometry::_bind_setVertexAttribArray},
	{"getVertexAttribArray", &luna_wrapper_osg_Geometry::_bind_getVertexAttribArray},
	{"setVertexAttribBinding", &luna_wrapper_osg_Geometry::_bind_setVertexAttribBinding},
	{"getVertexAttribBinding", &luna_wrapper_osg_Geometry::_bind_getVertexAttribBinding},
	{"setVertexAttribNormalize", &luna_wrapper_osg_Geometry::_bind_setVertexAttribNormalize},
	{"getVertexAttribNormalize", &luna_wrapper_osg_Geometry::_bind_getVertexAttribNormalize},
	{"setVertexAttribData", &luna_wrapper_osg_Geometry::_bind_setVertexAttribData},
	{"getVertexAttribData", &luna_wrapper_osg_Geometry::_bind_getVertexAttribData},
	{"getNumVertexAttribArrays", &luna_wrapper_osg_Geometry::_bind_getNumVertexAttribArrays},
	{"getVertexAttribArrayList", &luna_wrapper_osg_Geometry::_bind_getVertexAttribArrayList},
	{"getNumPrimitiveSets", &luna_wrapper_osg_Geometry::_bind_getNumPrimitiveSets},
	{"getPrimitiveSet", &luna_wrapper_osg_Geometry::_bind_getPrimitiveSet},
	{"addPrimitiveSet", &luna_wrapper_osg_Geometry::_bind_addPrimitiveSet},
	{"setPrimitiveSet", &luna_wrapper_osg_Geometry::_bind_setPrimitiveSet},
	{"insertPrimitiveSet", &luna_wrapper_osg_Geometry::_bind_insertPrimitiveSet},
	{"removePrimitiveSet", &luna_wrapper_osg_Geometry::_bind_removePrimitiveSet},
	{"getPrimitiveSetIndex", &luna_wrapper_osg_Geometry::_bind_getPrimitiveSetIndex},
	{"setVertexIndices", &luna_wrapper_osg_Geometry::_bind_setVertexIndices},
	{"getVertexIndices", &luna_wrapper_osg_Geometry::_bind_getVertexIndices},
	{"setNormalIndices", &luna_wrapper_osg_Geometry::_bind_setNormalIndices},
	{"getNormalIndices", &luna_wrapper_osg_Geometry::_bind_getNormalIndices},
	{"setColorIndices", &luna_wrapper_osg_Geometry::_bind_setColorIndices},
	{"getColorIndices", &luna_wrapper_osg_Geometry::_bind_getColorIndices},
	{"setSecondaryColorIndices", &luna_wrapper_osg_Geometry::_bind_setSecondaryColorIndices},
	{"getSecondaryColorIndices", &luna_wrapper_osg_Geometry::_bind_getSecondaryColorIndices},
	{"setFogCoordIndices", &luna_wrapper_osg_Geometry::_bind_setFogCoordIndices},
	{"getFogCoordIndices", &luna_wrapper_osg_Geometry::_bind_getFogCoordIndices},
	{"setTexCoordIndices", &luna_wrapper_osg_Geometry::_bind_setTexCoordIndices},
	{"getTexCoordIndices", &luna_wrapper_osg_Geometry::_bind_getTexCoordIndices},
	{"setVertexAttribIndices", &luna_wrapper_osg_Geometry::_bind_setVertexAttribIndices},
	{"getVertexAttribIndices", &luna_wrapper_osg_Geometry::_bind_getVertexAttribIndices},
	{"setUseVertexBufferObjects", &luna_wrapper_osg_Geometry::_bind_setUseVertexBufferObjects},
	{"dirtyDisplayList", &luna_wrapper_osg_Geometry::_bind_dirtyDisplayList},
	{"releaseGLObjects", &luna_wrapper_osg_Geometry::_bind_releaseGLObjects},
	{"getArrayList", &luna_wrapper_osg_Geometry::_bind_getArrayList},
	{"getDrawElementsList", &luna_wrapper_osg_Geometry::_bind_getDrawElementsList},
	{"getOrCreateVertexBufferObject", &luna_wrapper_osg_Geometry::_bind_getOrCreateVertexBufferObject},
	{"getOrCreateElementBufferObject", &luna_wrapper_osg_Geometry::_bind_getOrCreateElementBufferObject},
	{"setFastPathHint", &luna_wrapper_osg_Geometry::_bind_setFastPathHint},
	{"getFastPathHint", &luna_wrapper_osg_Geometry::_bind_getFastPathHint},
	{"areFastPathsUsed", &luna_wrapper_osg_Geometry::_bind_areFastPathsUsed},
	{"computeFastPathsUsed", &luna_wrapper_osg_Geometry::_bind_computeFastPathsUsed},
	{"verifyBindings", &luna_wrapper_osg_Geometry::_bind_verifyBindings},
	{"computeCorrectBindingsAndArraySizes", &luna_wrapper_osg_Geometry::_bind_computeCorrectBindingsAndArraySizes},
	{"verifyArrays", &luna_wrapper_osg_Geometry::_bind_verifyArrays},
	{"suitableForOptimization", &luna_wrapper_osg_Geometry::_bind_suitableForOptimization},
	{"copyToAndOptimize", &luna_wrapper_osg_Geometry::_bind_copyToAndOptimize},
	{"containsSharedArrays", &luna_wrapper_osg_Geometry::_bind_containsSharedArrays},
	{"duplicateSharedArrays", &luna_wrapper_osg_Geometry::_bind_duplicateSharedArrays},
	{"computeInternalOptimizedGeometry", &luna_wrapper_osg_Geometry::_bind_computeInternalOptimizedGeometry},
	{"removeInternalOptimizedGeometry", &luna_wrapper_osg_Geometry::_bind_removeInternalOptimizedGeometry},
	{"setInternalOptimizedGeometry", &luna_wrapper_osg_Geometry::_bind_setInternalOptimizedGeometry},
	{"getInternalOptimizedGeometry", &luna_wrapper_osg_Geometry::_bind_getInternalOptimizedGeometry},
	{"getGLObjectSizeHint", &luna_wrapper_osg_Geometry::_bind_getGLObjectSizeHint},
	{"compileGLObjects", &luna_wrapper_osg_Geometry::_bind_compileGLObjects},
	{"drawImplementation", &luna_wrapper_osg_Geometry::_bind_drawImplementation},
	{"get_s_InvalidArrayData", &luna_wrapper_osg_Geometry::_bind_get_s_InvalidArrayData},
	{"base_setName", &luna_wrapper_osg_Geometry::_bind_base_setName},
	{"base_setUserData", &luna_wrapper_osg_Geometry::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Geometry::_bind_base_getUserData},
	{"base_computeDataVariance", &luna_wrapper_osg_Geometry::_bind_base_computeDataVariance},
	{"base_computeBound", &luna_wrapper_osg_Geometry::_bind_base_computeBound},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Geometry::_bind_base_setThreadSafeRefUnref},
	{"base_setUpdateCallback", &luna_wrapper_osg_Geometry::_bind_base_setUpdateCallback},
	{"base_setEventCallback", &luna_wrapper_osg_Geometry::_bind_base_setEventCallback},
	{"base_setCullCallback", &luna_wrapper_osg_Geometry::_bind_base_setCullCallback},
	{"base_setDrawCallback", &luna_wrapper_osg_Geometry::_bind_base_setDrawCallback},
	{"base_cloneType", &luna_wrapper_osg_Geometry::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Geometry::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Geometry::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Geometry::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Geometry::_bind_base_className},
	{"base_asGeometry", &luna_wrapper_osg_Geometry::_bind_base_asGeometry},
	{"base_setUseVertexBufferObjects", &luna_wrapper_osg_Geometry::_bind_base_setUseVertexBufferObjects},
	{"base_dirtyDisplayList", &luna_wrapper_osg_Geometry::_bind_base_dirtyDisplayList},
	{"base_releaseGLObjects", &luna_wrapper_osg_Geometry::_bind_base_releaseGLObjects},
	{"base_getGLObjectSizeHint", &luna_wrapper_osg_Geometry::_bind_base_getGLObjectSizeHint},
	{"base_compileGLObjects", &luna_wrapper_osg_Geometry::_bind_base_compileGLObjects},
	{"base_drawImplementation", &luna_wrapper_osg_Geometry::_bind_base_drawImplementation},
	{"fromVoid", &luna_wrapper_osg_Geometry::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Geometry::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Geometry::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Geometry >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Geometry::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Geometry >::enumValues[] = {
	{"BIND_OFF", osg::Geometry::BIND_OFF},
	{"BIND_OVERALL", osg::Geometry::BIND_OVERALL},
	{"BIND_PER_PRIMITIVE_SET", osg::Geometry::BIND_PER_PRIMITIVE_SET},
	{"BIND_PER_PRIMITIVE", osg::Geometry::BIND_PER_PRIMITIVE},
	{"BIND_PER_VERTEX", osg::Geometry::BIND_PER_VERTEX},
	{0,0}
};


