#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_Statistics.h>

class luna_wrapper_osgUtil_Statistics {
public:
	typedef Luna< osgUtil::Statistics > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osgUtil::Statistics,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95996950) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::Statistics*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Statistics* rhs =(Luna< osgUtil::Statistics >::check(L,2));
		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		osgUtil::Statistics* self= (osgUtil::Statistics*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::Statistics >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95996950) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::Statistics");
		
		return luna_dynamicCast(L,converters,"osgUtil::Statistics",name);
	}


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
	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303204)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Vec3f >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303173)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Vec2f >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexArray_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303235)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Vec4f >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexArray_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303202)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Vec3d >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexArray_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303171)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Vec2d >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexArray_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303233)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Vec4d >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawArrays(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawElements_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawElements_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawElements_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_begin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_vertex_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_vertex_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_vertex_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_vertex_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_vertex_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_vertex_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_vertex_overload_7(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_end(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addDrawable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addFastDrawable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addLight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addImpostor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addBins(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBinNo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addStateGraphs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addOrderedLeaves(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95996950) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveCountMap_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveCountMap_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveValueMap_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveValueMap_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumDrawables(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNummat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNbins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumStateGraphs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumFastDrawables(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNlights(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBinNo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStattype(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNimpostor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumOrderedLeaves(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumDrawables(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNummat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNbins(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumStateGraphs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumFastDrawables(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNlights(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStattype(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNimpostor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumOrderedLeaves(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPrimitiveCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14759504) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setVertexArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303204)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Vec3f >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setVertexArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303173)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Vec2f >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setVertexArray_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303235)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Vec4f >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setVertexArray_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303202)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Vec3d >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setVertexArray_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303171)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Vec2d >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setVertexArray_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303233)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Vec4d >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawArrays(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawElements_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawElements_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawElements_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_begin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_vertex_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_vertex_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_vertex_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_vertex_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_vertex_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_vertex_overload_6(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_end(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::Statistics::Statistics()
	static osgUtil::Statistics* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Statistics::Statistics() function, expected prototype:\nosgUtil::Statistics::Statistics()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::Statistics();
	}

	// osgUtil::Statistics::Statistics(lua_Table * data)
	static osgUtil::Statistics* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Statistics::Statistics(lua_Table * data) function, expected prototype:\nosgUtil::Statistics::Statistics(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_Statistics(L,NULL);
	}

	// Overload binder for osgUtil::Statistics::Statistics
	static osgUtil::Statistics* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Statistics, cannot match any of the overloads for function Statistics:\n  Statistics()\n  Statistics(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::Statistics::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::reset() function, expected prototype:\nvoid osgUtil::Statistics::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::reset(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// void osgUtil::Statistics::setType(osgUtil::Statistics::StatsType t)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::setType(osgUtil::Statistics::StatsType t) function, expected prototype:\nvoid osgUtil::Statistics::setType(osgUtil::Statistics::StatsType t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Statistics::StatsType t=(osgUtil::Statistics::StatsType)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::setType(osgUtil::Statistics::StatsType). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setType(t);

		return 0;
	}

	// void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec3f * vertices)
	static int _bind_setVertexArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_setVertexArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec3f * vertices) function, expected prototype:\nvoid osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec3f * vertices)\nClass arguments details:\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec3f* vertices=(Luna< osg::Vec3f >::check(L,3));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::setVertexArray(unsigned int, const osg::Vec3f *). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexArray(count, vertices);

		return 0;
	}

	// void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec2f * vertices)
	static int _bind_setVertexArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_setVertexArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec2f * vertices) function, expected prototype:\nvoid osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec2f * vertices)\nClass arguments details:\narg 2 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec2f* vertices=(Luna< osg::Vec2f >::check(L,3));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::setVertexArray(unsigned int, const osg::Vec2f *). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexArray(count, vertices);

		return 0;
	}

	// void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec4f * vertices)
	static int _bind_setVertexArray_overload_3(lua_State *L) {
		if (!_lg_typecheck_setVertexArray_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec4f * vertices) function, expected prototype:\nvoid osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec4f * vertices)\nClass arguments details:\narg 2 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec4f* vertices=(Luna< osg::Vec4f >::check(L,3));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::setVertexArray(unsigned int, const osg::Vec4f *). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexArray(count, vertices);

		return 0;
	}

	// void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec3d * vertices)
	static int _bind_setVertexArray_overload_4(lua_State *L) {
		if (!_lg_typecheck_setVertexArray_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec3d * vertices) function, expected prototype:\nvoid osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec3d * vertices)\nClass arguments details:\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec3d* vertices=(Luna< osg::Vec3d >::check(L,3));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::setVertexArray(unsigned int, const osg::Vec3d *). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexArray(count, vertices);

		return 0;
	}

	// void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec2d * vertices)
	static int _bind_setVertexArray_overload_5(lua_State *L) {
		if (!_lg_typecheck_setVertexArray_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec2d * vertices) function, expected prototype:\nvoid osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec2d * vertices)\nClass arguments details:\narg 2 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec2d* vertices=(Luna< osg::Vec2d >::check(L,3));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::setVertexArray(unsigned int, const osg::Vec2d *). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexArray(count, vertices);

		return 0;
	}

	// void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec4d * vertices)
	static int _bind_setVertexArray_overload_6(lua_State *L) {
		if (!_lg_typecheck_setVertexArray_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec4d * vertices) function, expected prototype:\nvoid osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec4d * vertices)\nClass arguments details:\narg 2 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec4d* vertices=(Luna< osg::Vec4d >::check(L,3));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::setVertexArray(unsigned int, const osg::Vec4d *). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexArray(count, vertices);

		return 0;
	}

	// Overload binder for osgUtil::Statistics::setVertexArray
	static int _bind_setVertexArray(lua_State *L) {
		if (_lg_typecheck_setVertexArray_overload_1(L)) return _bind_setVertexArray_overload_1(L);
		if (_lg_typecheck_setVertexArray_overload_2(L)) return _bind_setVertexArray_overload_2(L);
		if (_lg_typecheck_setVertexArray_overload_3(L)) return _bind_setVertexArray_overload_3(L);
		if (_lg_typecheck_setVertexArray_overload_4(L)) return _bind_setVertexArray_overload_4(L);
		if (_lg_typecheck_setVertexArray_overload_5(L)) return _bind_setVertexArray_overload_5(L);
		if (_lg_typecheck_setVertexArray_overload_6(L)) return _bind_setVertexArray_overload_6(L);

		luaL_error(L, "error in function setVertexArray, cannot match any of the overloads for function setVertexArray:\n  setVertexArray(unsigned int, const osg::Vec3f *)\n  setVertexArray(unsigned int, const osg::Vec2f *)\n  setVertexArray(unsigned int, const osg::Vec4f *)\n  setVertexArray(unsigned int, const osg::Vec3d *)\n  setVertexArray(unsigned int, const osg::Vec2d *)\n  setVertexArray(unsigned int, const osg::Vec4d *)\n");
		return 0;
	}

	// void osgUtil::Statistics::drawArrays(unsigned int mode, int first, int count)
	static int _bind_drawArrays(lua_State *L) {
		if (!_lg_typecheck_drawArrays(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::drawArrays(unsigned int mode, int first, int count) function, expected prototype:\nvoid osgUtil::Statistics::drawArrays(unsigned int mode, int first, int count)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int first=(int)lua_tointeger(L,3);
		int count=(int)lua_tointeger(L,4);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::drawArrays(unsigned int, int, int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawArrays(mode, first, count);

		return 0;
	}

	// void osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned char * indices)
	static int _bind_drawElements_overload_1(lua_State *L) {
		if (!_lg_typecheck_drawElements_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned char * indices) function, expected prototype:\nvoid osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned char * indices)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned char indices = (unsigned char)(lua_tointeger(L,4));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::drawElements(unsigned int, int, const unsigned char *). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawElements(mode, count, &indices);

		return 0;
	}

	// void osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned short * indices)
	static int _bind_drawElements_overload_2(lua_State *L) {
		if (!_lg_typecheck_drawElements_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned short * indices) function, expected prototype:\nvoid osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned short * indices)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		const unsigned short* indices=(const unsigned short*)Luna< void >::check(L,4);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::drawElements(unsigned int, int, const unsigned short *). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawElements(mode, count, indices);

		return 0;
	}

	// void osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned int * indices)
	static int _bind_drawElements_overload_3(lua_State *L) {
		if (!_lg_typecheck_drawElements_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned int * indices) function, expected prototype:\nvoid osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned int * indices)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		const unsigned int* indices=(const unsigned int*)Luna< void >::check(L,4);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::drawElements(unsigned int, int, const unsigned int *). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawElements(mode, count, indices);

		return 0;
	}

	// Overload binder for osgUtil::Statistics::drawElements
	static int _bind_drawElements(lua_State *L) {
		if (_lg_typecheck_drawElements_overload_1(L)) return _bind_drawElements_overload_1(L);
		if (_lg_typecheck_drawElements_overload_2(L)) return _bind_drawElements_overload_2(L);
		if (_lg_typecheck_drawElements_overload_3(L)) return _bind_drawElements_overload_3(L);

		luaL_error(L, "error in function drawElements, cannot match any of the overloads for function drawElements:\n  drawElements(unsigned int, int, const unsigned char *)\n  drawElements(unsigned int, int, const unsigned short *)\n  drawElements(unsigned int, int, const unsigned int *)\n");
		return 0;
	}

	// void osgUtil::Statistics::begin(unsigned int mode)
	static int _bind_begin(lua_State *L) {
		if (!_lg_typecheck_begin(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::begin(unsigned int mode) function, expected prototype:\nvoid osgUtil::Statistics::begin(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::begin(unsigned int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->begin(mode);

		return 0;
	}

	// void osgUtil::Statistics::vertex()
	static int _bind_vertex_overload_1(lua_State *L) {
		if (!_lg_typecheck_vertex_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::vertex() function, expected prototype:\nvoid osgUtil::Statistics::vertex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::vertex(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->vertex();

		return 0;
	}

	// void osgUtil::Statistics::vertex(float x, float y, float z)
	static int _bind_vertex_overload_2(lua_State *L) {
		if (!_lg_typecheck_vertex_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::vertex(float x, float y, float z) function, expected prototype:\nvoid osgUtil::Statistics::vertex(float x, float y, float z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::vertex(float, float, float). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->vertex(x, y, z);

		return 0;
	}

	// void osgUtil::Statistics::vertex(const osg::Vec3f & vert)
	static int _bind_vertex_overload_3(lua_State *L) {
		if (!_lg_typecheck_vertex_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::vertex(const osg::Vec3f & vert) function, expected prototype:\nvoid osgUtil::Statistics::vertex(const osg::Vec3f & vert)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* vert_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !vert_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vert in osgUtil::Statistics::vertex function");
		}
		const osg::Vec3f & vert=*vert_ptr;

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::vertex(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->vertex(vert);

		return 0;
	}

	// void osgUtil::Statistics::vertex(const osg::Vec2f & vert)
	static int _bind_vertex_overload_4(lua_State *L) {
		if (!_lg_typecheck_vertex_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::vertex(const osg::Vec2f & vert) function, expected prototype:\nvoid osgUtil::Statistics::vertex(const osg::Vec2f & vert)\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2f* vert_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !vert_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vert in osgUtil::Statistics::vertex function");
		}
		const osg::Vec2f & vert=*vert_ptr;

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::vertex(const osg::Vec2f &). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->vertex(vert);

		return 0;
	}

	// void osgUtil::Statistics::vertex(const osg::Vec4f & vert)
	static int _bind_vertex_overload_5(lua_State *L) {
		if (!_lg_typecheck_vertex_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::vertex(const osg::Vec4f & vert) function, expected prototype:\nvoid osgUtil::Statistics::vertex(const osg::Vec4f & vert)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* vert_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !vert_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vert in osgUtil::Statistics::vertex function");
		}
		const osg::Vec4f & vert=*vert_ptr;

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::vertex(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->vertex(vert);

		return 0;
	}

	// void osgUtil::Statistics::vertex(float x, float y)
	static int _bind_vertex_overload_6(lua_State *L) {
		if (!_lg_typecheck_vertex_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::vertex(float x, float y) function, expected prototype:\nvoid osgUtil::Statistics::vertex(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::vertex(float, float). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->vertex(x, y);

		return 0;
	}

	// void osgUtil::Statistics::vertex(float x, float y, float z, float w)
	static int _bind_vertex_overload_7(lua_State *L) {
		if (!_lg_typecheck_vertex_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::vertex(float x, float y, float z, float w) function, expected prototype:\nvoid osgUtil::Statistics::vertex(float x, float y, float z, float w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);
		float w=(float)lua_tonumber(L,5);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::vertex(float, float, float, float). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->vertex(x, y, z, w);

		return 0;
	}

	// Overload binder for osgUtil::Statistics::vertex
	static int _bind_vertex(lua_State *L) {
		if (_lg_typecheck_vertex_overload_1(L)) return _bind_vertex_overload_1(L);
		if (_lg_typecheck_vertex_overload_2(L)) return _bind_vertex_overload_2(L);
		if (_lg_typecheck_vertex_overload_3(L)) return _bind_vertex_overload_3(L);
		if (_lg_typecheck_vertex_overload_4(L)) return _bind_vertex_overload_4(L);
		if (_lg_typecheck_vertex_overload_5(L)) return _bind_vertex_overload_5(L);
		if (_lg_typecheck_vertex_overload_6(L)) return _bind_vertex_overload_6(L);
		if (_lg_typecheck_vertex_overload_7(L)) return _bind_vertex_overload_7(L);

		luaL_error(L, "error in function vertex, cannot match any of the overloads for function vertex:\n  vertex()\n  vertex(float, float, float)\n  vertex(const osg::Vec3f &)\n  vertex(const osg::Vec2f &)\n  vertex(const osg::Vec4f &)\n  vertex(float, float)\n  vertex(float, float, float, float)\n");
		return 0;
	}

	// void osgUtil::Statistics::end()
	static int _bind_end(lua_State *L) {
		if (!_lg_typecheck_end(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::end() function, expected prototype:\nvoid osgUtil::Statistics::end()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::end(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->end();

		return 0;
	}

	// void osgUtil::Statistics::addDrawable()
	static int _bind_addDrawable(lua_State *L) {
		if (!_lg_typecheck_addDrawable(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::addDrawable() function, expected prototype:\nvoid osgUtil::Statistics::addDrawable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::addDrawable(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addDrawable();

		return 0;
	}

	// void osgUtil::Statistics::addFastDrawable()
	static int _bind_addFastDrawable(lua_State *L) {
		if (!_lg_typecheck_addFastDrawable(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::addFastDrawable() function, expected prototype:\nvoid osgUtil::Statistics::addFastDrawable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::addFastDrawable(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addFastDrawable();

		return 0;
	}

	// void osgUtil::Statistics::addMatrix()
	static int _bind_addMatrix(lua_State *L) {
		if (!_lg_typecheck_addMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::addMatrix() function, expected prototype:\nvoid osgUtil::Statistics::addMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::addMatrix(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addMatrix();

		return 0;
	}

	// void osgUtil::Statistics::addLight(int np)
	static int _bind_addLight(lua_State *L) {
		if (!_lg_typecheck_addLight(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::addLight(int np) function, expected prototype:\nvoid osgUtil::Statistics::addLight(int np)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int np=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::addLight(int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addLight(np);

		return 0;
	}

	// void osgUtil::Statistics::addImpostor(int np)
	static int _bind_addImpostor(lua_State *L) {
		if (!_lg_typecheck_addImpostor(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::addImpostor(int np) function, expected prototype:\nvoid osgUtil::Statistics::addImpostor(int np)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int np=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::addImpostor(int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addImpostor(np);

		return 0;
	}

	// int osgUtil::Statistics::getBins()
	static int _bind_getBins(lua_State *L) {
		if (!_lg_typecheck_getBins(L)) {
			luaL_error(L, "luna typecheck failed in int osgUtil::Statistics::getBins() function, expected prototype:\nint osgUtil::Statistics::getBins()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgUtil::Statistics::getBins(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getBins();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::Statistics::setDepth(int d)
	static int _bind_setDepth(lua_State *L) {
		if (!_lg_typecheck_setDepth(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::setDepth(int d) function, expected prototype:\nvoid osgUtil::Statistics::setDepth(int d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int d=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::setDepth(int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDepth(d);

		return 0;
	}

	// void osgUtil::Statistics::addBins(int np)
	static int _bind_addBins(lua_State *L) {
		if (!_lg_typecheck_addBins(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::addBins(int np) function, expected prototype:\nvoid osgUtil::Statistics::addBins(int np)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int np=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::addBins(int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addBins(np);

		return 0;
	}

	// void osgUtil::Statistics::setBinNo(int n)
	static int _bind_setBinNo(lua_State *L) {
		if (!_lg_typecheck_setBinNo(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::setBinNo(int n) function, expected prototype:\nvoid osgUtil::Statistics::setBinNo(int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::setBinNo(int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBinNo(n);

		return 0;
	}

	// void osgUtil::Statistics::addStateGraphs(int n)
	static int _bind_addStateGraphs(lua_State *L) {
		if (!_lg_typecheck_addStateGraphs(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::addStateGraphs(int n) function, expected prototype:\nvoid osgUtil::Statistics::addStateGraphs(int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::addStateGraphs(int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addStateGraphs(n);

		return 0;
	}

	// void osgUtil::Statistics::addOrderedLeaves(int n)
	static int _bind_addOrderedLeaves(lua_State *L) {
		if (!_lg_typecheck_addOrderedLeaves(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::addOrderedLeaves(int n) function, expected prototype:\nvoid osgUtil::Statistics::addOrderedLeaves(int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::addOrderedLeaves(int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addOrderedLeaves(n);

		return 0;
	}

	// void osgUtil::Statistics::add(const osgUtil::Statistics & stats)
	static int _bind_add(lua_State *L) {
		if (!_lg_typecheck_add(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::add(const osgUtil::Statistics & stats) function, expected prototype:\nvoid osgUtil::Statistics::add(const osgUtil::Statistics & stats)\nClass arguments details:\narg 1 ID = 95996950\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::Statistics* stats_ptr=(Luna< osgUtil::Statistics >::check(L,2));
		if( !stats_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stats in osgUtil::Statistics::add function");
		}
		const osgUtil::Statistics & stats=*stats_ptr;

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::add(const osgUtil::Statistics &). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->add(stats);

		return 0;
	}

	// osgUtil::Statistics::PrimitiveCountMap & osgUtil::Statistics::getPrimitiveCountMap()
	static int _bind_getPrimitiveCountMap_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveCountMap_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Statistics::PrimitiveCountMap & osgUtil::Statistics::getPrimitiveCountMap() function, expected prototype:\nosgUtil::Statistics::PrimitiveCountMap & osgUtil::Statistics::getPrimitiveCountMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Statistics::PrimitiveCountMap & osgUtil::Statistics::getPrimitiveCountMap(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::Statistics::PrimitiveCountMap* lret = &self->getPrimitiveCountMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Statistics::PrimitiveCountMap >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::Statistics::PrimitiveCountMap & osgUtil::Statistics::getPrimitiveCountMap() const
	static int _bind_getPrimitiveCountMap_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveCountMap_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgUtil::Statistics::PrimitiveCountMap & osgUtil::Statistics::getPrimitiveCountMap() const function, expected prototype:\nconst osgUtil::Statistics::PrimitiveCountMap & osgUtil::Statistics::getPrimitiveCountMap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgUtil::Statistics::PrimitiveCountMap & osgUtil::Statistics::getPrimitiveCountMap() const. Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::Statistics::PrimitiveCountMap* lret = &self->getPrimitiveCountMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Statistics::PrimitiveCountMap >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::Statistics::getPrimitiveCountMap
	static int _bind_getPrimitiveCountMap(lua_State *L) {
		if (_lg_typecheck_getPrimitiveCountMap_overload_1(L)) return _bind_getPrimitiveCountMap_overload_1(L);
		if (_lg_typecheck_getPrimitiveCountMap_overload_2(L)) return _bind_getPrimitiveCountMap_overload_2(L);

		luaL_error(L, "error in function getPrimitiveCountMap, cannot match any of the overloads for function getPrimitiveCountMap:\n  getPrimitiveCountMap()\n  getPrimitiveCountMap()\n");
		return 0;
	}

	// osgUtil::Statistics::PrimitiveValueMap & osgUtil::Statistics::getPrimitiveValueMap()
	static int _bind_getPrimitiveValueMap_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveValueMap_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Statistics::PrimitiveValueMap & osgUtil::Statistics::getPrimitiveValueMap() function, expected prototype:\nosgUtil::Statistics::PrimitiveValueMap & osgUtil::Statistics::getPrimitiveValueMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Statistics::PrimitiveValueMap & osgUtil::Statistics::getPrimitiveValueMap(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::Statistics::PrimitiveValueMap* lret = &self->getPrimitiveValueMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Statistics::PrimitiveValueMap >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::Statistics::PrimitiveValueMap & osgUtil::Statistics::getPrimitiveValueMap() const
	static int _bind_getPrimitiveValueMap_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveValueMap_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgUtil::Statistics::PrimitiveValueMap & osgUtil::Statistics::getPrimitiveValueMap() const function, expected prototype:\nconst osgUtil::Statistics::PrimitiveValueMap & osgUtil::Statistics::getPrimitiveValueMap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgUtil::Statistics::PrimitiveValueMap & osgUtil::Statistics::getPrimitiveValueMap() const. Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::Statistics::PrimitiveValueMap* lret = &self->getPrimitiveValueMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Statistics::PrimitiveValueMap >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::Statistics::getPrimitiveValueMap
	static int _bind_getPrimitiveValueMap(lua_State *L) {
		if (_lg_typecheck_getPrimitiveValueMap_overload_1(L)) return _bind_getPrimitiveValueMap_overload_1(L);
		if (_lg_typecheck_getPrimitiveValueMap_overload_2(L)) return _bind_getPrimitiveValueMap_overload_2(L);

		luaL_error(L, "error in function getPrimitiveValueMap, cannot match any of the overloads for function getPrimitiveValueMap:\n  getPrimitiveValueMap()\n  getPrimitiveValueMap()\n");
		return 0;
	}

	// int osgUtil::Statistics::numDrawables()
	static int _bind_getNumDrawables(lua_State *L) {
		if (!_lg_typecheck_getNumDrawables(L)) {
			luaL_error(L, "luna typecheck failed in int osgUtil::Statistics::numDrawables() function, expected prototype:\nint osgUtil::Statistics::numDrawables()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgUtil::Statistics::numDrawables(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->numDrawables;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgUtil::Statistics::nummat()
	static int _bind_getNummat(lua_State *L) {
		if (!_lg_typecheck_getNummat(L)) {
			luaL_error(L, "luna typecheck failed in int osgUtil::Statistics::nummat() function, expected prototype:\nint osgUtil::Statistics::nummat()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgUtil::Statistics::nummat(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->nummat;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgUtil::Statistics::nbins()
	static int _bind_getNbins(lua_State *L) {
		if (!_lg_typecheck_getNbins(L)) {
			luaL_error(L, "luna typecheck failed in int osgUtil::Statistics::nbins() function, expected prototype:\nint osgUtil::Statistics::nbins()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgUtil::Statistics::nbins(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->nbins;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgUtil::Statistics::numStateGraphs()
	static int _bind_getNumStateGraphs(lua_State *L) {
		if (!_lg_typecheck_getNumStateGraphs(L)) {
			luaL_error(L, "luna typecheck failed in int osgUtil::Statistics::numStateGraphs() function, expected prototype:\nint osgUtil::Statistics::numStateGraphs()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgUtil::Statistics::numStateGraphs(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->numStateGraphs;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgUtil::Statistics::numFastDrawables()
	static int _bind_getNumFastDrawables(lua_State *L) {
		if (!_lg_typecheck_getNumFastDrawables(L)) {
			luaL_error(L, "luna typecheck failed in int osgUtil::Statistics::numFastDrawables() function, expected prototype:\nint osgUtil::Statistics::numFastDrawables()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgUtil::Statistics::numFastDrawables(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->numFastDrawables;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgUtil::Statistics::nlights()
	static int _bind_getNlights(lua_State *L) {
		if (!_lg_typecheck_getNlights(L)) {
			luaL_error(L, "luna typecheck failed in int osgUtil::Statistics::nlights() function, expected prototype:\nint osgUtil::Statistics::nlights()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgUtil::Statistics::nlights(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->nlights;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgUtil::Statistics::depth()
	static int _bind_getDepth(lua_State *L) {
		if (!_lg_typecheck_getDepth(L)) {
			luaL_error(L, "luna typecheck failed in int osgUtil::Statistics::depth() function, expected prototype:\nint osgUtil::Statistics::depth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgUtil::Statistics::depth(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->depth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgUtil::Statistics::_binNo()
	static int _bind_getBinNo(lua_State *L) {
		if (!_lg_typecheck_getBinNo(L)) {
			luaL_error(L, "luna typecheck failed in int osgUtil::Statistics::_binNo() function, expected prototype:\nint osgUtil::Statistics::_binNo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgUtil::Statistics::_binNo(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->_binNo;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgUtil::Statistics::StatsType osgUtil::Statistics::stattype()
	static int _bind_getStattype(lua_State *L) {
		if (!_lg_typecheck_getStattype(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Statistics::StatsType osgUtil::Statistics::stattype() function, expected prototype:\nosgUtil::Statistics::StatsType osgUtil::Statistics::stattype()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Statistics::StatsType osgUtil::Statistics::stattype(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::Statistics::StatsType lret = self->stattype;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgUtil::Statistics::nimpostor()
	static int _bind_getNimpostor(lua_State *L) {
		if (!_lg_typecheck_getNimpostor(L)) {
			luaL_error(L, "luna typecheck failed in int osgUtil::Statistics::nimpostor() function, expected prototype:\nint osgUtil::Statistics::nimpostor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgUtil::Statistics::nimpostor(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->nimpostor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgUtil::Statistics::numOrderedLeaves()
	static int _bind_getNumOrderedLeaves(lua_State *L) {
		if (!_lg_typecheck_getNumOrderedLeaves(L)) {
			luaL_error(L, "luna typecheck failed in int osgUtil::Statistics::numOrderedLeaves() function, expected prototype:\nint osgUtil::Statistics::numOrderedLeaves()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgUtil::Statistics::numOrderedLeaves(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->numOrderedLeaves;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::Statistics::_vertexCount()
	static int _bind_getVertexCount(lua_State *L) {
		if (!_lg_typecheck_getVertexCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::Statistics::_vertexCount() function, expected prototype:\nunsigned int osgUtil::Statistics::_vertexCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::Statistics::_vertexCount(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_vertexCount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgUtil::Statistics::PrimitiveValueMap osgUtil::Statistics::_primitiveCount()
	static int _bind_getPrimitiveCount(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveCount(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Statistics::PrimitiveValueMap osgUtil::Statistics::_primitiveCount() function, expected prototype:\nosgUtil::Statistics::PrimitiveValueMap osgUtil::Statistics::_primitiveCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Statistics::PrimitiveValueMap osgUtil::Statistics::_primitiveCount(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::Statistics::PrimitiveValueMap* lret = &self->_primitiveCount;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Statistics::PrimitiveValueMap >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::Statistics::numDrawables(int value)
	static int _bind_setNumDrawables(lua_State *L) {
		if (!_lg_typecheck_setNumDrawables(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::numDrawables(int value) function, expected prototype:\nvoid osgUtil::Statistics::numDrawables(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::numDrawables(int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->numDrawables = value;

		return 0;
	}

	// void osgUtil::Statistics::nummat(int value)
	static int _bind_setNummat(lua_State *L) {
		if (!_lg_typecheck_setNummat(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::nummat(int value) function, expected prototype:\nvoid osgUtil::Statistics::nummat(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::nummat(int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->nummat = value;

		return 0;
	}

	// void osgUtil::Statistics::nbins(int value)
	static int _bind_setNbins(lua_State *L) {
		if (!_lg_typecheck_setNbins(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::nbins(int value) function, expected prototype:\nvoid osgUtil::Statistics::nbins(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::nbins(int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->nbins = value;

		return 0;
	}

	// void osgUtil::Statistics::numStateGraphs(int value)
	static int _bind_setNumStateGraphs(lua_State *L) {
		if (!_lg_typecheck_setNumStateGraphs(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::numStateGraphs(int value) function, expected prototype:\nvoid osgUtil::Statistics::numStateGraphs(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::numStateGraphs(int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->numStateGraphs = value;

		return 0;
	}

	// void osgUtil::Statistics::numFastDrawables(int value)
	static int _bind_setNumFastDrawables(lua_State *L) {
		if (!_lg_typecheck_setNumFastDrawables(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::numFastDrawables(int value) function, expected prototype:\nvoid osgUtil::Statistics::numFastDrawables(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::numFastDrawables(int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->numFastDrawables = value;

		return 0;
	}

	// void osgUtil::Statistics::nlights(int value)
	static int _bind_setNlights(lua_State *L) {
		if (!_lg_typecheck_setNlights(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::nlights(int value) function, expected prototype:\nvoid osgUtil::Statistics::nlights(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::nlights(int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->nlights = value;

		return 0;
	}

	// void osgUtil::Statistics::stattype(osgUtil::Statistics::StatsType value)
	static int _bind_setStattype(lua_State *L) {
		if (!_lg_typecheck_setStattype(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::stattype(osgUtil::Statistics::StatsType value) function, expected prototype:\nvoid osgUtil::Statistics::stattype(osgUtil::Statistics::StatsType value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Statistics::StatsType value=(osgUtil::Statistics::StatsType)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::stattype(osgUtil::Statistics::StatsType). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->stattype = value;

		return 0;
	}

	// void osgUtil::Statistics::nimpostor(int value)
	static int _bind_setNimpostor(lua_State *L) {
		if (!_lg_typecheck_setNimpostor(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::nimpostor(int value) function, expected prototype:\nvoid osgUtil::Statistics::nimpostor(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::nimpostor(int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->nimpostor = value;

		return 0;
	}

	// void osgUtil::Statistics::numOrderedLeaves(int value)
	static int _bind_setNumOrderedLeaves(lua_State *L) {
		if (!_lg_typecheck_setNumOrderedLeaves(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::numOrderedLeaves(int value) function, expected prototype:\nvoid osgUtil::Statistics::numOrderedLeaves(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::numOrderedLeaves(int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->numOrderedLeaves = value;

		return 0;
	}

	// void osgUtil::Statistics::_vertexCount(unsigned int value)
	static int _bind_setVertexCount(lua_State *L) {
		if (!_lg_typecheck_setVertexCount(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::_vertexCount(unsigned int value) function, expected prototype:\nvoid osgUtil::Statistics::_vertexCount(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::_vertexCount(unsigned int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_vertexCount = value;

		return 0;
	}

	// void osgUtil::Statistics::_primitiveCount(osgUtil::Statistics::PrimitiveValueMap value)
	static int _bind_setPrimitiveCount(lua_State *L) {
		if (!_lg_typecheck_setPrimitiveCount(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::_primitiveCount(osgUtil::Statistics::PrimitiveValueMap value) function, expected prototype:\nvoid osgUtil::Statistics::_primitiveCount(osgUtil::Statistics::PrimitiveValueMap value)\nClass arguments details:\narg 1 ID = 74391787\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Statistics::PrimitiveValueMap* value_ptr=(Luna< std::map< unsigned int, osgUtil::Statistics::PrimitivePair > >::checkSubType< osgUtil::Statistics::PrimitiveValueMap >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::Statistics::_primitiveCount function");
		}
		osgUtil::Statistics::PrimitiveValueMap value=*value_ptr;

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::_primitiveCount(osgUtil::Statistics::PrimitiveValueMap). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_primitiveCount = value;

		return 0;
	}

	// void osgUtil::Statistics::base_setVertexArray(unsigned int count, const osg::Vec3f * vertices)
	static int _bind_base_setVertexArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_setVertexArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::base_setVertexArray(unsigned int count, const osg::Vec3f * vertices) function, expected prototype:\nvoid osgUtil::Statistics::base_setVertexArray(unsigned int count, const osg::Vec3f * vertices)\nClass arguments details:\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec3f* vertices=(Luna< osg::Vec3f >::check(L,3));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::base_setVertexArray(unsigned int, const osg::Vec3f *). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Statistics::setVertexArray(count, vertices);

		return 0;
	}

	// void osgUtil::Statistics::base_setVertexArray(unsigned int count, const osg::Vec2f * vertices)
	static int _bind_base_setVertexArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_setVertexArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::base_setVertexArray(unsigned int count, const osg::Vec2f * vertices) function, expected prototype:\nvoid osgUtil::Statistics::base_setVertexArray(unsigned int count, const osg::Vec2f * vertices)\nClass arguments details:\narg 2 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec2f* vertices=(Luna< osg::Vec2f >::check(L,3));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::base_setVertexArray(unsigned int, const osg::Vec2f *). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Statistics::setVertexArray(count, vertices);

		return 0;
	}

	// void osgUtil::Statistics::base_setVertexArray(unsigned int count, const osg::Vec4f * vertices)
	static int _bind_base_setVertexArray_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_setVertexArray_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::base_setVertexArray(unsigned int count, const osg::Vec4f * vertices) function, expected prototype:\nvoid osgUtil::Statistics::base_setVertexArray(unsigned int count, const osg::Vec4f * vertices)\nClass arguments details:\narg 2 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec4f* vertices=(Luna< osg::Vec4f >::check(L,3));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::base_setVertexArray(unsigned int, const osg::Vec4f *). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Statistics::setVertexArray(count, vertices);

		return 0;
	}

	// void osgUtil::Statistics::base_setVertexArray(unsigned int count, const osg::Vec3d * vertices)
	static int _bind_base_setVertexArray_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_setVertexArray_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::base_setVertexArray(unsigned int count, const osg::Vec3d * vertices) function, expected prototype:\nvoid osgUtil::Statistics::base_setVertexArray(unsigned int count, const osg::Vec3d * vertices)\nClass arguments details:\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec3d* vertices=(Luna< osg::Vec3d >::check(L,3));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::base_setVertexArray(unsigned int, const osg::Vec3d *). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Statistics::setVertexArray(count, vertices);

		return 0;
	}

	// void osgUtil::Statistics::base_setVertexArray(unsigned int count, const osg::Vec2d * vertices)
	static int _bind_base_setVertexArray_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_setVertexArray_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::base_setVertexArray(unsigned int count, const osg::Vec2d * vertices) function, expected prototype:\nvoid osgUtil::Statistics::base_setVertexArray(unsigned int count, const osg::Vec2d * vertices)\nClass arguments details:\narg 2 ID = 92303171\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec2d* vertices=(Luna< osg::Vec2d >::check(L,3));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::base_setVertexArray(unsigned int, const osg::Vec2d *). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Statistics::setVertexArray(count, vertices);

		return 0;
	}

	// void osgUtil::Statistics::base_setVertexArray(unsigned int count, const osg::Vec4d * vertices)
	static int _bind_base_setVertexArray_overload_6(lua_State *L) {
		if (!_lg_typecheck_base_setVertexArray_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::base_setVertexArray(unsigned int count, const osg::Vec4d * vertices) function, expected prototype:\nvoid osgUtil::Statistics::base_setVertexArray(unsigned int count, const osg::Vec4d * vertices)\nClass arguments details:\narg 2 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec4d* vertices=(Luna< osg::Vec4d >::check(L,3));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::base_setVertexArray(unsigned int, const osg::Vec4d *). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Statistics::setVertexArray(count, vertices);

		return 0;
	}

	// Overload binder for osgUtil::Statistics::base_setVertexArray
	static int _bind_base_setVertexArray(lua_State *L) {
		if (_lg_typecheck_base_setVertexArray_overload_1(L)) return _bind_base_setVertexArray_overload_1(L);
		if (_lg_typecheck_base_setVertexArray_overload_2(L)) return _bind_base_setVertexArray_overload_2(L);
		if (_lg_typecheck_base_setVertexArray_overload_3(L)) return _bind_base_setVertexArray_overload_3(L);
		if (_lg_typecheck_base_setVertexArray_overload_4(L)) return _bind_base_setVertexArray_overload_4(L);
		if (_lg_typecheck_base_setVertexArray_overload_5(L)) return _bind_base_setVertexArray_overload_5(L);
		if (_lg_typecheck_base_setVertexArray_overload_6(L)) return _bind_base_setVertexArray_overload_6(L);

		luaL_error(L, "error in function base_setVertexArray, cannot match any of the overloads for function base_setVertexArray:\n  base_setVertexArray(unsigned int, const osg::Vec3f *)\n  base_setVertexArray(unsigned int, const osg::Vec2f *)\n  base_setVertexArray(unsigned int, const osg::Vec4f *)\n  base_setVertexArray(unsigned int, const osg::Vec3d *)\n  base_setVertexArray(unsigned int, const osg::Vec2d *)\n  base_setVertexArray(unsigned int, const osg::Vec4d *)\n");
		return 0;
	}

	// void osgUtil::Statistics::base_drawArrays(unsigned int mode, int first, int count)
	static int _bind_base_drawArrays(lua_State *L) {
		if (!_lg_typecheck_base_drawArrays(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::base_drawArrays(unsigned int mode, int first, int count) function, expected prototype:\nvoid osgUtil::Statistics::base_drawArrays(unsigned int mode, int first, int count)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int first=(int)lua_tointeger(L,3);
		int count=(int)lua_tointeger(L,4);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::base_drawArrays(unsigned int, int, int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Statistics::drawArrays(mode, first, count);

		return 0;
	}

	// void osgUtil::Statistics::base_drawElements(unsigned int mode, int count, const unsigned char * indices)
	static int _bind_base_drawElements_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_drawElements_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::base_drawElements(unsigned int mode, int count, const unsigned char * indices) function, expected prototype:\nvoid osgUtil::Statistics::base_drawElements(unsigned int mode, int count, const unsigned char * indices)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned char indices = (unsigned char)(lua_tointeger(L,4));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::base_drawElements(unsigned int, int, const unsigned char *). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Statistics::drawElements(mode, count, &indices);

		return 0;
	}

	// void osgUtil::Statistics::base_drawElements(unsigned int mode, int count, const unsigned short * indices)
	static int _bind_base_drawElements_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_drawElements_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::base_drawElements(unsigned int mode, int count, const unsigned short * indices) function, expected prototype:\nvoid osgUtil::Statistics::base_drawElements(unsigned int mode, int count, const unsigned short * indices)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		const unsigned short* indices=(const unsigned short*)Luna< void >::check(L,4);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::base_drawElements(unsigned int, int, const unsigned short *). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Statistics::drawElements(mode, count, indices);

		return 0;
	}

	// void osgUtil::Statistics::base_drawElements(unsigned int mode, int count, const unsigned int * indices)
	static int _bind_base_drawElements_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_drawElements_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::base_drawElements(unsigned int mode, int count, const unsigned int * indices) function, expected prototype:\nvoid osgUtil::Statistics::base_drawElements(unsigned int mode, int count, const unsigned int * indices)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		const unsigned int* indices=(const unsigned int*)Luna< void >::check(L,4);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::base_drawElements(unsigned int, int, const unsigned int *). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Statistics::drawElements(mode, count, indices);

		return 0;
	}

	// Overload binder for osgUtil::Statistics::base_drawElements
	static int _bind_base_drawElements(lua_State *L) {
		if (_lg_typecheck_base_drawElements_overload_1(L)) return _bind_base_drawElements_overload_1(L);
		if (_lg_typecheck_base_drawElements_overload_2(L)) return _bind_base_drawElements_overload_2(L);
		if (_lg_typecheck_base_drawElements_overload_3(L)) return _bind_base_drawElements_overload_3(L);

		luaL_error(L, "error in function base_drawElements, cannot match any of the overloads for function base_drawElements:\n  base_drawElements(unsigned int, int, const unsigned char *)\n  base_drawElements(unsigned int, int, const unsigned short *)\n  base_drawElements(unsigned int, int, const unsigned int *)\n");
		return 0;
	}

	// void osgUtil::Statistics::base_begin(unsigned int mode)
	static int _bind_base_begin(lua_State *L) {
		if (!_lg_typecheck_base_begin(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::base_begin(unsigned int mode) function, expected prototype:\nvoid osgUtil::Statistics::base_begin(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::base_begin(unsigned int). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Statistics::begin(mode);

		return 0;
	}

	// void osgUtil::Statistics::base_vertex(float x, float y, float z)
	static int _bind_base_vertex_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_vertex_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::base_vertex(float x, float y, float z) function, expected prototype:\nvoid osgUtil::Statistics::base_vertex(float x, float y, float z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::base_vertex(float, float, float). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Statistics::vertex(x, y, z);

		return 0;
	}

	// void osgUtil::Statistics::base_vertex(const osg::Vec3f & vert)
	static int _bind_base_vertex_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_vertex_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::base_vertex(const osg::Vec3f & vert) function, expected prototype:\nvoid osgUtil::Statistics::base_vertex(const osg::Vec3f & vert)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* vert_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !vert_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vert in osgUtil::Statistics::base_vertex function");
		}
		const osg::Vec3f & vert=*vert_ptr;

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::base_vertex(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Statistics::vertex(vert);

		return 0;
	}

	// void osgUtil::Statistics::base_vertex(const osg::Vec2f & vert)
	static int _bind_base_vertex_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_vertex_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::base_vertex(const osg::Vec2f & vert) function, expected prototype:\nvoid osgUtil::Statistics::base_vertex(const osg::Vec2f & vert)\nClass arguments details:\narg 1 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec2f* vert_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !vert_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vert in osgUtil::Statistics::base_vertex function");
		}
		const osg::Vec2f & vert=*vert_ptr;

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::base_vertex(const osg::Vec2f &). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Statistics::vertex(vert);

		return 0;
	}

	// void osgUtil::Statistics::base_vertex(const osg::Vec4f & vert)
	static int _bind_base_vertex_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_vertex_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::base_vertex(const osg::Vec4f & vert) function, expected prototype:\nvoid osgUtil::Statistics::base_vertex(const osg::Vec4f & vert)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* vert_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !vert_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vert in osgUtil::Statistics::base_vertex function");
		}
		const osg::Vec4f & vert=*vert_ptr;

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::base_vertex(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Statistics::vertex(vert);

		return 0;
	}

	// void osgUtil::Statistics::base_vertex(float x, float y)
	static int _bind_base_vertex_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_vertex_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::base_vertex(float x, float y) function, expected prototype:\nvoid osgUtil::Statistics::base_vertex(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::base_vertex(float, float). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Statistics::vertex(x, y);

		return 0;
	}

	// void osgUtil::Statistics::base_vertex(float x, float y, float z, float w)
	static int _bind_base_vertex_overload_6(lua_State *L) {
		if (!_lg_typecheck_base_vertex_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::base_vertex(float x, float y, float z, float w) function, expected prototype:\nvoid osgUtil::Statistics::base_vertex(float x, float y, float z, float w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);
		float w=(float)lua_tonumber(L,5);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::base_vertex(float, float, float, float). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Statistics::vertex(x, y, z, w);

		return 0;
	}

	// Overload binder for osgUtil::Statistics::base_vertex
	static int _bind_base_vertex(lua_State *L) {
		if (_lg_typecheck_base_vertex_overload_1(L)) return _bind_base_vertex_overload_1(L);
		if (_lg_typecheck_base_vertex_overload_2(L)) return _bind_base_vertex_overload_2(L);
		if (_lg_typecheck_base_vertex_overload_3(L)) return _bind_base_vertex_overload_3(L);
		if (_lg_typecheck_base_vertex_overload_4(L)) return _bind_base_vertex_overload_4(L);
		if (_lg_typecheck_base_vertex_overload_5(L)) return _bind_base_vertex_overload_5(L);
		if (_lg_typecheck_base_vertex_overload_6(L)) return _bind_base_vertex_overload_6(L);

		luaL_error(L, "error in function base_vertex, cannot match any of the overloads for function base_vertex:\n  base_vertex(float, float, float)\n  base_vertex(const osg::Vec3f &)\n  base_vertex(const osg::Vec2f &)\n  base_vertex(const osg::Vec4f &)\n  base_vertex(float, float)\n  base_vertex(float, float, float, float)\n");
		return 0;
	}

	// void osgUtil::Statistics::base_end()
	static int _bind_base_end(lua_State *L) {
		if (!_lg_typecheck_base_end(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::base_end() function, expected prototype:\nvoid osgUtil::Statistics::base_end()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::base_end(). Got : '%s'\n%s",typeid(Luna< osgUtil::Statistics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Statistics::end();

		return 0;
	}


	// Operator binds:

};

osgUtil::Statistics* LunaTraits< osgUtil::Statistics >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_Statistics::_bind_ctor(L);
}

void LunaTraits< osgUtil::Statistics >::_bind_dtor(osgUtil::Statistics* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::Statistics >::className[] = "Statistics";
const char LunaTraits< osgUtil::Statistics >::fullName[] = "osgUtil::Statistics";
const char LunaTraits< osgUtil::Statistics >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::Statistics >::parents[] = {0};
const int LunaTraits< osgUtil::Statistics >::hash = 95996950;
const int LunaTraits< osgUtil::Statistics >::uniqueIDs[] = {95996950,0};

luna_RegType LunaTraits< osgUtil::Statistics >::methods[] = {
	{"reset", &luna_wrapper_osgUtil_Statistics::_bind_reset},
	{"setType", &luna_wrapper_osgUtil_Statistics::_bind_setType},
	{"setVertexArray", &luna_wrapper_osgUtil_Statistics::_bind_setVertexArray},
	{"drawArrays", &luna_wrapper_osgUtil_Statistics::_bind_drawArrays},
	{"drawElements", &luna_wrapper_osgUtil_Statistics::_bind_drawElements},
	{"begin", &luna_wrapper_osgUtil_Statistics::_bind_begin},
	{"vertex", &luna_wrapper_osgUtil_Statistics::_bind_vertex},
	{"end", &luna_wrapper_osgUtil_Statistics::_bind_end},
	{"addDrawable", &luna_wrapper_osgUtil_Statistics::_bind_addDrawable},
	{"addFastDrawable", &luna_wrapper_osgUtil_Statistics::_bind_addFastDrawable},
	{"addMatrix", &luna_wrapper_osgUtil_Statistics::_bind_addMatrix},
	{"addLight", &luna_wrapper_osgUtil_Statistics::_bind_addLight},
	{"addImpostor", &luna_wrapper_osgUtil_Statistics::_bind_addImpostor},
	{"getBins", &luna_wrapper_osgUtil_Statistics::_bind_getBins},
	{"setDepth", &luna_wrapper_osgUtil_Statistics::_bind_setDepth},
	{"addBins", &luna_wrapper_osgUtil_Statistics::_bind_addBins},
	{"setBinNo", &luna_wrapper_osgUtil_Statistics::_bind_setBinNo},
	{"addStateGraphs", &luna_wrapper_osgUtil_Statistics::_bind_addStateGraphs},
	{"addOrderedLeaves", &luna_wrapper_osgUtil_Statistics::_bind_addOrderedLeaves},
	{"add", &luna_wrapper_osgUtil_Statistics::_bind_add},
	{"getPrimitiveCountMap", &luna_wrapper_osgUtil_Statistics::_bind_getPrimitiveCountMap},
	{"getPrimitiveValueMap", &luna_wrapper_osgUtil_Statistics::_bind_getPrimitiveValueMap},
	{"getNumDrawables", &luna_wrapper_osgUtil_Statistics::_bind_getNumDrawables},
	{"getNummat", &luna_wrapper_osgUtil_Statistics::_bind_getNummat},
	{"getNbins", &luna_wrapper_osgUtil_Statistics::_bind_getNbins},
	{"getNumStateGraphs", &luna_wrapper_osgUtil_Statistics::_bind_getNumStateGraphs},
	{"getNumFastDrawables", &luna_wrapper_osgUtil_Statistics::_bind_getNumFastDrawables},
	{"getNlights", &luna_wrapper_osgUtil_Statistics::_bind_getNlights},
	{"getDepth", &luna_wrapper_osgUtil_Statistics::_bind_getDepth},
	{"getBinNo", &luna_wrapper_osgUtil_Statistics::_bind_getBinNo},
	{"getStattype", &luna_wrapper_osgUtil_Statistics::_bind_getStattype},
	{"getNimpostor", &luna_wrapper_osgUtil_Statistics::_bind_getNimpostor},
	{"getNumOrderedLeaves", &luna_wrapper_osgUtil_Statistics::_bind_getNumOrderedLeaves},
	{"getVertexCount", &luna_wrapper_osgUtil_Statistics::_bind_getVertexCount},
	{"getPrimitiveCount", &luna_wrapper_osgUtil_Statistics::_bind_getPrimitiveCount},
	{"setNumDrawables", &luna_wrapper_osgUtil_Statistics::_bind_setNumDrawables},
	{"setNummat", &luna_wrapper_osgUtil_Statistics::_bind_setNummat},
	{"setNbins", &luna_wrapper_osgUtil_Statistics::_bind_setNbins},
	{"setNumStateGraphs", &luna_wrapper_osgUtil_Statistics::_bind_setNumStateGraphs},
	{"setNumFastDrawables", &luna_wrapper_osgUtil_Statistics::_bind_setNumFastDrawables},
	{"setNlights", &luna_wrapper_osgUtil_Statistics::_bind_setNlights},
	{"setStattype", &luna_wrapper_osgUtil_Statistics::_bind_setStattype},
	{"setNimpostor", &luna_wrapper_osgUtil_Statistics::_bind_setNimpostor},
	{"setNumOrderedLeaves", &luna_wrapper_osgUtil_Statistics::_bind_setNumOrderedLeaves},
	{"setVertexCount", &luna_wrapper_osgUtil_Statistics::_bind_setVertexCount},
	{"setPrimitiveCount", &luna_wrapper_osgUtil_Statistics::_bind_setPrimitiveCount},
	{"base_setVertexArray", &luna_wrapper_osgUtil_Statistics::_bind_base_setVertexArray},
	{"base_drawArrays", &luna_wrapper_osgUtil_Statistics::_bind_base_drawArrays},
	{"base_drawElements", &luna_wrapper_osgUtil_Statistics::_bind_base_drawElements},
	{"base_begin", &luna_wrapper_osgUtil_Statistics::_bind_base_begin},
	{"base_vertex", &luna_wrapper_osgUtil_Statistics::_bind_base_vertex},
	{"base_end", &luna_wrapper_osgUtil_Statistics::_bind_base_end},
	{"dynCast", &luna_wrapper_osgUtil_Statistics::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_Statistics::_bind___eq},
	{"fromVoid", &luna_wrapper_osgUtil_Statistics::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_Statistics::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_Statistics::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::Statistics >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::Statistics >::enumValues[] = {
	{"STAT_NONE", osgUtil::Statistics::STAT_NONE},
	{"STAT_FRAMERATE", osgUtil::Statistics::STAT_FRAMERATE},
	{"STAT_GRAPHS", osgUtil::Statistics::STAT_GRAPHS},
	{"STAT_PRIMS", osgUtil::Statistics::STAT_PRIMS},
	{"STAT_PRIMSPERVIEW", osgUtil::Statistics::STAT_PRIMSPERVIEW},
	{"STAT_PRIMSPERBIN", osgUtil::Statistics::STAT_PRIMSPERBIN},
	{"STAT_DC", osgUtil::Statistics::STAT_DC},
	{"STAT_RESTART", osgUtil::Statistics::STAT_RESTART},
	{0,0}
};


