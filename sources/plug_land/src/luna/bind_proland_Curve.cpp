#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_Curve.h>

class luna_wrapper_proland_Curve {
public:
	typedef Luna< proland::Curve > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		proland::Curve* self= (proland::Curve*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::Curve >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::Curve* ptr= dynamic_cast< proland::Curve* >(Luna< ork::Object >::check(L,1));
		proland::Curve* ptr= luna_caster< ork::Object, proland::Curve >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::Curve >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< ork::Object >::checkSubType< proland::Graph >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< ork::Object >::checkSubType< proland::Graph >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,41768114) ) return false;
		if( (!(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,41768114) ) return false;
		if( (!(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< proland::Graph >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< proland::Graph >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,41768114) ) return false;
		if( (!(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,41768114) ) return false;
		if( (!(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,5))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_print(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAncestor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParentId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAncestorId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertex_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertex_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertex_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41768114) ) return false;
		if( (!(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getXY_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getXY_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41768114) ) return false;
		if( (!(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIsControl_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIsControl_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41768114) ) return false;
		if( (!(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIsSmooth(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getS0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getS1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getS_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getS_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41768114) ) return false;
		if( (!(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getL_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getL_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41768114) ) return false;
		if( (!(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getArea1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getArea2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addVertex_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72107044) ) return false;
		if( (!(Luna< proland::NodeId >::check(L,2))) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVertex_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVertex_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVertex_overload_4(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVertex_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::checkSubType< proland::Vertex >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55792939) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_decimate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOpposite(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41768114) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNext(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41768114) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,31876471) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurvilinearLength(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,81304238)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,81304238)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurvilinearCoordinate(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,81304238)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,81304238)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRectanglePosition(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,63151909) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTrianglePosition(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,81304238)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,63151909) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isInside(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isDirect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIsControl(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setS(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setXY(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flatten(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeCurvilinearCoordinates(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeCurvilinearLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_equals(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,99348114) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_invert(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOwner(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addArea(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2724636) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOwner(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_check(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_removeDuplicateVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_print(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getParentId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getAncestorId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getStart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_addVertex_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72107044) ) return false;
		if( (!(Luna< proland::NodeId >::check(L,2))) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addVertex_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addVertex_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addVertex_overload_4(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addVertex_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::checkSubType< proland::Vertex >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55792939) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setIsControl(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setS(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setXY(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_flatten(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_invert(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_addArea(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2724636) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::Curve::Curve(proland::Graph * owner)
	static proland::Curve* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::Curve::Curve(proland::Graph * owner) function, expected prototype:\nproland::Curve::Curve(proland::Graph * owner)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,1));

		return new proland::Curve(owner);
	}

	// proland::Curve::Curve(proland::Graph * owner, proland::CurvePtr c, proland::NodePtr s, proland::NodePtr e)
	static proland::Curve* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::Curve::Curve(proland::Graph * owner, proland::CurvePtr c, proland::NodePtr s, proland::NodePtr e) function, expected prototype:\nproland::Curve::Curve(proland::Graph * owner, proland::CurvePtr c, proland::NodePtr s, proland::NodePtr e)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = 98496290\narg 3 ID = 35325349\narg 4 ID = 35325349\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,1));
		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::Curve::Curve function");
		}
		proland::CurvePtr c=*c_ptr;
		proland::NodePtr* s_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,3));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in proland::Curve::Curve function");
		}
		proland::NodePtr s=*s_ptr;
		proland::NodePtr* e_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,4));
		if( !e_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg e in proland::Curve::Curve function");
		}
		proland::NodePtr e=*e_ptr;

		return new proland::Curve(owner, c, s, e);
	}

	// proland::Curve::Curve(lua_Table * data, proland::Graph * owner)
	static proland::Curve* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in proland::Curve::Curve(lua_Table * data, proland::Graph * owner) function, expected prototype:\nproland::Curve::Curve(lua_Table * data, proland::Graph * owner)\nClass arguments details:\narg 2 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));

		return new wrapper_proland_Curve(L,NULL, owner);
	}

	// proland::Curve::Curve(lua_Table * data, proland::Graph * owner, proland::CurvePtr c, proland::NodePtr s, proland::NodePtr e)
	static proland::Curve* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in proland::Curve::Curve(lua_Table * data, proland::Graph * owner, proland::CurvePtr c, proland::NodePtr s, proland::NodePtr e) function, expected prototype:\nproland::Curve::Curve(lua_Table * data, proland::Graph * owner, proland::CurvePtr c, proland::NodePtr s, proland::NodePtr e)\nClass arguments details:\narg 2 ID = 1381405\narg 3 ID = 98496290\narg 4 ID = 35325349\narg 5 ID = 35325349\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));
		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::Curve::Curve function");
		}
		proland::CurvePtr c=*c_ptr;
		proland::NodePtr* s_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,4));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in proland::Curve::Curve function");
		}
		proland::NodePtr s=*s_ptr;
		proland::NodePtr* e_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,5));
		if( !e_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg e in proland::Curve::Curve function");
		}
		proland::NodePtr e=*e_ptr;

		return new wrapper_proland_Curve(L,NULL, owner, c, s, e);
	}

	// Overload binder for proland::Curve::Curve
	static proland::Curve* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Curve, cannot match any of the overloads for function Curve:\n  Curve(proland::Graph *)\n  Curve(proland::Graph *, proland::CurvePtr, proland::NodePtr, proland::NodePtr)\n  Curve(lua_Table *, proland::Graph *)\n  Curve(lua_Table *, proland::Graph *, proland::CurvePtr, proland::NodePtr, proland::NodePtr)\n");
		return NULL;
	}


	// Function binds:
	// void proland::Curve::print() const
	static int _bind_print(lua_State *L) {
		if (!_lg_typecheck_print(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::print() const function, expected prototype:\nvoid proland::Curve::print() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::print() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->print();

		return 0;
	}

	// proland::CurveId proland::Curve::getId() const
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::Curve::getId() const function, expected prototype:\nproland::CurveId proland::Curve::getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::Curve::getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->getId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::Curve::getParent() const
	static int _bind_getParent(lua_State *L) {
		if (!_lg_typecheck_getParent(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Curve::getParent() const function, expected prototype:\nproland::CurvePtr proland::Curve::getParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Curve::getParent() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->getParent();
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::Curve::getAncestor() const
	static int _bind_getAncestor(lua_State *L) {
		if (!_lg_typecheck_getAncestor(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Curve::getAncestor() const function, expected prototype:\nproland::CurvePtr proland::Curve::getAncestor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Curve::getAncestor() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->getAncestor();
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurveId proland::Curve::getParentId() const
	static int _bind_getParentId(lua_State *L) {
		if (!_lg_typecheck_getParentId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::Curve::getParentId() const function, expected prototype:\nproland::CurveId proland::Curve::getParentId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::Curve::getParentId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->getParentId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::CurveId proland::Curve::getAncestorId() const
	static int _bind_getAncestorId(lua_State *L) {
		if (!_lg_typecheck_getAncestorId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::Curve::getAncestorId() const function, expected prototype:\nproland::CurveId proland::Curve::getAncestorId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::Curve::getAncestorId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->getAncestorId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// int proland::Curve::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Curve::getType() const function, expected prototype:\nint proland::Curve::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Curve::getType() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::Curve::getWidth() const
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in float proland::Curve::getWidth() const function, expected prototype:\nfloat proland::Curve::getWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::Curve::getWidth() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::Curve::getSize() const
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Curve::getSize() const function, expected prototype:\nint proland::Curve::getSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Curve::getSize() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::Vertex proland::Curve::getVertex(int i) const
	static int _bind_getVertex_overload_1(lua_State *L) {
		if (!_lg_typecheck_getVertex_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::Vertex proland::Curve::getVertex(int i) const function, expected prototype:\nproland::Vertex proland::Curve::getVertex(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Vertex proland::Curve::getVertex(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Vertex stack_lret = self->getVertex(i);
		proland::Vertex* lret = new proland::Vertex(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Vertex >::push(L,lret,true);

		return 1;
	}

	// int proland::Curve::getVertex(ork::vec2d p) const
	static int _bind_getVertex_overload_2(lua_State *L) {
		if (!_lg_typecheck_getVertex_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Curve::getVertex(ork::vec2d p) const function, expected prototype:\nint proland::Curve::getVertex(ork::vec2d p) const\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Curve::getVertex function");
		}
		ork::vec2d p=*p_ptr;

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Curve::getVertex(ork::vec2d) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getVertex(p);
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::Vertex proland::Curve::getVertex(proland::NodePtr start, int offset) const
	static int _bind_getVertex_overload_3(lua_State *L) {
		if (!_lg_typecheck_getVertex_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in proland::Vertex proland::Curve::getVertex(proland::NodePtr start, int offset) const function, expected prototype:\nproland::Vertex proland::Curve::getVertex(proland::NodePtr start, int offset) const\nClass arguments details:\narg 1 ID = 35325349\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::NodePtr* start_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::Curve::getVertex function");
		}
		proland::NodePtr start=*start_ptr;
		int offset=(int)lua_tointeger(L,3);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Vertex proland::Curve::getVertex(proland::NodePtr, int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Vertex stack_lret = self->getVertex(start, offset);
		proland::Vertex* lret = new proland::Vertex(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Vertex >::push(L,lret,true);

		return 1;
	}

	// Overload binder for proland::Curve::getVertex
	static int _bind_getVertex(lua_State *L) {
		if (_lg_typecheck_getVertex_overload_1(L)) return _bind_getVertex_overload_1(L);
		if (_lg_typecheck_getVertex_overload_2(L)) return _bind_getVertex_overload_2(L);
		if (_lg_typecheck_getVertex_overload_3(L)) return _bind_getVertex_overload_3(L);

		luaL_error(L, "error in function getVertex, cannot match any of the overloads for function getVertex:\n  getVertex(int)\n  getVertex(ork::vec2d)\n  getVertex(proland::NodePtr, int)\n");
		return 0;
	}

	// ork::vec2d proland::Curve::getXY(int i) const
	static int _bind_getXY_overload_1(lua_State *L) {
		if (!_lg_typecheck_getXY_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2d proland::Curve::getXY(int i) const function, expected prototype:\nork::vec2d proland::Curve::getXY(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2d proland::Curve::getXY(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2d stack_lret = self->getXY(i);
		ork::vec2d* lret = new ork::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2d >::push(L,lret,true);

		return 1;
	}

	// ork::vec2d proland::Curve::getXY(proland::NodePtr start, int offset) const
	static int _bind_getXY_overload_2(lua_State *L) {
		if (!_lg_typecheck_getXY_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2d proland::Curve::getXY(proland::NodePtr start, int offset) const function, expected prototype:\nork::vec2d proland::Curve::getXY(proland::NodePtr start, int offset) const\nClass arguments details:\narg 1 ID = 35325349\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::NodePtr* start_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::Curve::getXY function");
		}
		proland::NodePtr start=*start_ptr;
		int offset=(int)lua_tointeger(L,3);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2d proland::Curve::getXY(proland::NodePtr, int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2d stack_lret = self->getXY(start, offset);
		ork::vec2d* lret = new ork::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for proland::Curve::getXY
	static int _bind_getXY(lua_State *L) {
		if (_lg_typecheck_getXY_overload_1(L)) return _bind_getXY_overload_1(L);
		if (_lg_typecheck_getXY_overload_2(L)) return _bind_getXY_overload_2(L);

		luaL_error(L, "error in function getXY, cannot match any of the overloads for function getXY:\n  getXY(int)\n  getXY(proland::NodePtr, int)\n");
		return 0;
	}

	// bool proland::Curve::getIsControl(int i) const
	static int _bind_getIsControl_overload_1(lua_State *L) {
		if (!_lg_typecheck_getIsControl_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::Curve::getIsControl(int i) const function, expected prototype:\nbool proland::Curve::getIsControl(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::Curve::getIsControl(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getIsControl(i);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::Curve::getIsControl(proland::NodePtr start, int offset) const
	static int _bind_getIsControl_overload_2(lua_State *L) {
		if (!_lg_typecheck_getIsControl_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::Curve::getIsControl(proland::NodePtr start, int offset) const function, expected prototype:\nbool proland::Curve::getIsControl(proland::NodePtr start, int offset) const\nClass arguments details:\narg 1 ID = 35325349\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::NodePtr* start_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::Curve::getIsControl function");
		}
		proland::NodePtr start=*start_ptr;
		int offset=(int)lua_tointeger(L,3);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::Curve::getIsControl(proland::NodePtr, int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getIsControl(start, offset);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for proland::Curve::getIsControl
	static int _bind_getIsControl(lua_State *L) {
		if (_lg_typecheck_getIsControl_overload_1(L)) return _bind_getIsControl_overload_1(L);
		if (_lg_typecheck_getIsControl_overload_2(L)) return _bind_getIsControl_overload_2(L);

		luaL_error(L, "error in function getIsControl, cannot match any of the overloads for function getIsControl:\n  getIsControl(int)\n  getIsControl(proland::NodePtr, int)\n");
		return 0;
	}

	// bool proland::Curve::getIsSmooth(int i, ork::vec2d & a, ork::vec2d & b) const
	static int _bind_getIsSmooth(lua_State *L) {
		if (!_lg_typecheck_getIsSmooth(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::Curve::getIsSmooth(int i, ork::vec2d & a, ork::vec2d & b) const function, expected prototype:\nbool proland::Curve::getIsSmooth(int i, ork::vec2d & a, ork::vec2d & b) const\nClass arguments details:\narg 2 ID = 81304238\narg 3 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		ork::vec2d* a_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in proland::Curve::getIsSmooth function");
		}
		ork::vec2d & a=*a_ptr;
		ork::vec2d* b_ptr=(Luna< ork::vec2d >::check(L,4));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in proland::Curve::getIsSmooth function");
		}
		ork::vec2d & b=*b_ptr;

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::Curve::getIsSmooth(int, ork::vec2d &, ork::vec2d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getIsSmooth(i, a, b);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float proland::Curve::getS0() const
	static int _bind_getS0(lua_State *L) {
		if (!_lg_typecheck_getS0(L)) {
			luaL_error(L, "luna typecheck failed in float proland::Curve::getS0() const function, expected prototype:\nfloat proland::Curve::getS0() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::Curve::getS0() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getS0();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::Curve::getS1() const
	static int _bind_getS1(lua_State *L) {
		if (!_lg_typecheck_getS1(L)) {
			luaL_error(L, "luna typecheck failed in float proland::Curve::getS1() const function, expected prototype:\nfloat proland::Curve::getS1() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::Curve::getS1() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getS1();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::Curve::getS(int i) const
	static int _bind_getS_overload_1(lua_State *L) {
		if (!_lg_typecheck_getS_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float proland::Curve::getS(int i) const function, expected prototype:\nfloat proland::Curve::getS(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::Curve::getS(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getS(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::Curve::getS(proland::NodePtr start, int offset) const
	static int _bind_getS_overload_2(lua_State *L) {
		if (!_lg_typecheck_getS_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float proland::Curve::getS(proland::NodePtr start, int offset) const function, expected prototype:\nfloat proland::Curve::getS(proland::NodePtr start, int offset) const\nClass arguments details:\narg 1 ID = 35325349\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::NodePtr* start_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::Curve::getS function");
		}
		proland::NodePtr start=*start_ptr;
		int offset=(int)lua_tointeger(L,3);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::Curve::getS(proland::NodePtr, int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getS(start, offset);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for proland::Curve::getS
	static int _bind_getS(lua_State *L) {
		if (_lg_typecheck_getS_overload_1(L)) return _bind_getS_overload_1(L);
		if (_lg_typecheck_getS_overload_2(L)) return _bind_getS_overload_2(L);

		luaL_error(L, "error in function getS, cannot match any of the overloads for function getS:\n  getS(int)\n  getS(proland::NodePtr, int)\n");
		return 0;
	}

	// float proland::Curve::getL(int i) const
	static int _bind_getL_overload_1(lua_State *L) {
		if (!_lg_typecheck_getL_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float proland::Curve::getL(int i) const function, expected prototype:\nfloat proland::Curve::getL(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::Curve::getL(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getL(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::Curve::getL(proland::NodePtr start, int offset) const
	static int _bind_getL_overload_2(lua_State *L) {
		if (!_lg_typecheck_getL_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float proland::Curve::getL(proland::NodePtr start, int offset) const function, expected prototype:\nfloat proland::Curve::getL(proland::NodePtr start, int offset) const\nClass arguments details:\narg 1 ID = 35325349\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::NodePtr* start_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::Curve::getL function");
		}
		proland::NodePtr start=*start_ptr;
		int offset=(int)lua_tointeger(L,3);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::Curve::getL(proland::NodePtr, int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getL(start, offset);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for proland::Curve::getL
	static int _bind_getL(lua_State *L) {
		if (_lg_typecheck_getL_overload_1(L)) return _bind_getL_overload_1(L);
		if (_lg_typecheck_getL_overload_2(L)) return _bind_getL_overload_2(L);

		luaL_error(L, "error in function getL, cannot match any of the overloads for function getL:\n  getL(int)\n  getL(proland::NodePtr, int)\n");
		return 0;
	}

	// ork::box2d proland::Curve::getBounds() const
	static int _bind_getBounds(lua_State *L) {
		if (!_lg_typecheck_getBounds(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2d proland::Curve::getBounds() const function, expected prototype:\nork::box2d proland::Curve::getBounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2d proland::Curve::getBounds() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2d stack_lret = self->getBounds();
		ork::box2d* lret = new ork::box2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2d >::push(L,lret,true);

		return 1;
	}

	// proland::NodePtr proland::Curve::getStart() const
	static int _bind_getStart(lua_State *L) {
		if (!_lg_typecheck_getStart(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::Curve::getStart() const function, expected prototype:\nproland::NodePtr proland::Curve::getStart() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::Curve::getStart() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->getStart();
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// proland::NodePtr proland::Curve::getEnd() const
	static int _bind_getEnd(lua_State *L) {
		if (!_lg_typecheck_getEnd(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::Curve::getEnd() const function, expected prototype:\nproland::NodePtr proland::Curve::getEnd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::Curve::getEnd() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->getEnd();
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// proland::AreaPtr proland::Curve::getArea1() const
	static int _bind_getArea1(lua_State *L) {
		if (!_lg_typecheck_getArea1(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaPtr proland::Curve::getArea1() const function, expected prototype:\nproland::AreaPtr proland::Curve::getArea1() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaPtr proland::Curve::getArea1() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaPtr stack_lret = self->getArea1();
		proland::AreaPtr* lret = new proland::AreaPtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaPtr >::push(L,lret,true);

		return 1;
	}

	// proland::AreaPtr proland::Curve::getArea2() const
	static int _bind_getArea2(lua_State *L) {
		if (!_lg_typecheck_getArea2(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaPtr proland::Curve::getArea2() const function, expected prototype:\nproland::AreaPtr proland::Curve::getArea2() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaPtr proland::Curve::getArea2() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaPtr stack_lret = self->getArea2();
		proland::AreaPtr* lret = new proland::AreaPtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaPtr >::push(L,lret,true);

		return 1;
	}

	// void proland::Curve::addVertex(proland::NodeId id, bool isEnd = 1)
	static int _bind_addVertex_overload_1(lua_State *L) {
		if (!_lg_typecheck_addVertex_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::addVertex(proland::NodeId id, bool isEnd = 1) function, expected prototype:\nvoid proland::Curve::addVertex(proland::NodeId id, bool isEnd = 1)\nClass arguments details:\narg 1 ID = 72107044\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::NodeId* id_ptr=(Luna< proland::NodeId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::Curve::addVertex function");
		}
		proland::NodeId id=*id_ptr;
		bool isEnd=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)1;

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::addVertex(proland::NodeId, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addVertex(id, isEnd);

		return 0;
	}

	// void proland::Curve::addVertex(double x, double y, float s, bool isControl)
	static int _bind_addVertex_overload_2(lua_State *L) {
		if (!_lg_typecheck_addVertex_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::addVertex(double x, double y, float s, bool isControl) function, expected prototype:\nvoid proland::Curve::addVertex(double x, double y, float s, bool isControl)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		float s=(float)lua_tonumber(L,4);
		bool isControl=(bool)(lua_toboolean(L,5)==1);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::addVertex(double, double, float, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addVertex(x, y, s, isControl);

		return 0;
	}

	// void proland::Curve::addVertex(ork::vec2d pt, int rank, bool isControl)
	static int _bind_addVertex_overload_3(lua_State *L) {
		if (!_lg_typecheck_addVertex_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::addVertex(ork::vec2d pt, int rank, bool isControl) function, expected prototype:\nvoid proland::Curve::addVertex(ork::vec2d pt, int rank, bool isControl)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* pt_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in proland::Curve::addVertex function");
		}
		ork::vec2d pt=*pt_ptr;
		int rank=(int)lua_tointeger(L,3);
		bool isControl=(bool)(lua_toboolean(L,4)==1);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::addVertex(ork::vec2d, int, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addVertex(pt, rank, isControl);

		return 0;
	}

	// void proland::Curve::addVertex(const ork::vec2d & p, float s, float l, bool isControl)
	static int _bind_addVertex_overload_4(lua_State *L) {
		if (!_lg_typecheck_addVertex_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::addVertex(const ork::vec2d & p, float s, float l, bool isControl) function, expected prototype:\nvoid proland::Curve::addVertex(const ork::vec2d & p, float s, float l, bool isControl)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Curve::addVertex function");
		}
		const ork::vec2d & p=*p_ptr;
		float s=(float)lua_tonumber(L,3);
		float l=(float)lua_tonumber(L,4);
		bool isControl=(bool)(lua_toboolean(L,5)==1);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::addVertex(const ork::vec2d &, float, float, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addVertex(p, s, l, isControl);

		return 0;
	}

	// void proland::Curve::addVertex(const proland::Vertex & pt)
	static int _bind_addVertex_overload_5(lua_State *L) {
		if (!_lg_typecheck_addVertex_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::addVertex(const proland::Vertex & pt) function, expected prototype:\nvoid proland::Curve::addVertex(const proland::Vertex & pt)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const proland::Vertex* pt_ptr=(Luna< ork::vec2d >::checkSubType< proland::Vertex >(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in proland::Curve::addVertex function");
		}
		const proland::Vertex & pt=*pt_ptr;

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::addVertex(const proland::Vertex &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addVertex(pt);

		return 0;
	}

	// Overload binder for proland::Curve::addVertex
	static int _bind_addVertex(lua_State *L) {
		if (_lg_typecheck_addVertex_overload_1(L)) return _bind_addVertex_overload_1(L);
		if (_lg_typecheck_addVertex_overload_2(L)) return _bind_addVertex_overload_2(L);
		if (_lg_typecheck_addVertex_overload_3(L)) return _bind_addVertex_overload_3(L);
		if (_lg_typecheck_addVertex_overload_4(L)) return _bind_addVertex_overload_4(L);
		if (_lg_typecheck_addVertex_overload_5(L)) return _bind_addVertex_overload_5(L);

		luaL_error(L, "error in function addVertex, cannot match any of the overloads for function addVertex:\n  addVertex(proland::NodeId, bool)\n  addVertex(double, double, float, bool)\n  addVertex(ork::vec2d, int, bool)\n  addVertex(const ork::vec2d &, float, float, bool)\n  addVertex(const proland::Vertex &)\n");
		return 0;
	}

	// void proland::Curve::addVertices(const vector< ork::vec2d > & v)
	static int _bind_addVertices(lua_State *L) {
		if (!_lg_typecheck_addVertices(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::addVertices(const vector< ork::vec2d > & v) function, expected prototype:\nvoid proland::Curve::addVertices(const vector< ork::vec2d > & v)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const vector< ork::vec2d >* v_ptr=(Luna< vector< ork::vec2d > >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in proland::Curve::addVertices function");
		}
		const vector< ork::vec2d > & v=*v_ptr;

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::addVertices(const vector< ork::vec2d > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addVertices(v);

		return 0;
	}

	// void proland::Curve::removeVertex(int i)
	static int _bind_removeVertex(lua_State *L) {
		if (!_lg_typecheck_removeVertex(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::removeVertex(int i) function, expected prototype:\nvoid proland::Curve::removeVertex(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::removeVertex(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeVertex(i);

		return 0;
	}

	// void proland::Curve::decimate(float minDistance)
	static int _bind_decimate(lua_State *L) {
		if (!_lg_typecheck_decimate(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::decimate(float minDistance) function, expected prototype:\nvoid proland::Curve::decimate(float minDistance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float minDistance=(float)lua_tonumber(L,2);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::decimate(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->decimate(minDistance);

		return 0;
	}

	// proland::NodePtr proland::Curve::getOpposite(const proland::NodePtr n) const
	static int _bind_getOpposite(lua_State *L) {
		if (!_lg_typecheck_getOpposite(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::Curve::getOpposite(const proland::NodePtr n) const function, expected prototype:\nproland::NodePtr proland::Curve::getOpposite(const proland::NodePtr n) const\nClass arguments details:\narg 1 ID = 35325349\n\n%s",luna_dumpStack(L).c_str());
		}

		const proland::NodePtr* n_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,2));
		if( !n_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg n in proland::Curve::getOpposite function");
		}
		const proland::NodePtr n=*n_ptr;

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::Curve::getOpposite(const proland::NodePtr) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->getOpposite(n);
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::Curve::getNext(const proland::NodePtr n, const std::set< proland::CurveId > & excludedCurves, bool reverse = false) const
	static int _bind_getNext(lua_State *L) {
		if (!_lg_typecheck_getNext(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Curve::getNext(const proland::NodePtr n, const std::set< proland::CurveId > & excludedCurves, bool reverse = false) const function, expected prototype:\nproland::CurvePtr proland::Curve::getNext(const proland::NodePtr n, const std::set< proland::CurveId > & excludedCurves, bool reverse = false) const\nClass arguments details:\narg 1 ID = 35325349\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const proland::NodePtr* n_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,2));
		if( !n_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg n in proland::Curve::getNext function");
		}
		const proland::NodePtr n=*n_ptr;
		const std::set< proland::CurveId >* excludedCurves_ptr=(Luna< std::set< proland::CurveId > >::check(L,3));
		if( !excludedCurves_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg excludedCurves in proland::Curve::getNext function");
		}
		const std::set< proland::CurveId > & excludedCurves=*excludedCurves_ptr;
		bool reverse=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Curve::getNext(const proland::NodePtr, const std::set< proland::CurveId > &, bool) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->getNext(n, excludedCurves, reverse);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// float proland::Curve::getCurvilinearLength(float s, ork::vec2d * p, ork::vec2d * n) const
	static int _bind_getCurvilinearLength(lua_State *L) {
		if (!_lg_typecheck_getCurvilinearLength(L)) {
			luaL_error(L, "luna typecheck failed in float proland::Curve::getCurvilinearLength(float s, ork::vec2d * p, ork::vec2d * n) const function, expected prototype:\nfloat proland::Curve::getCurvilinearLength(float s, ork::vec2d * p, ork::vec2d * n) const\nClass arguments details:\narg 2 ID = 81304238\narg 3 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		float s=(float)lua_tonumber(L,2);
		ork::vec2d* p=(Luna< ork::vec2d >::check(L,3));
		ork::vec2d* n=(Luna< ork::vec2d >::check(L,4));

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::Curve::getCurvilinearLength(float, ork::vec2d *, ork::vec2d *) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getCurvilinearLength(s, p, n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::Curve::getCurvilinearCoordinate(float l, ork::vec2d * p, ork::vec2d * n) const
	static int _bind_getCurvilinearCoordinate(lua_State *L) {
		if (!_lg_typecheck_getCurvilinearCoordinate(L)) {
			luaL_error(L, "luna typecheck failed in float proland::Curve::getCurvilinearCoordinate(float l, ork::vec2d * p, ork::vec2d * n) const function, expected prototype:\nfloat proland::Curve::getCurvilinearCoordinate(float l, ork::vec2d * p, ork::vec2d * n) const\nClass arguments details:\narg 2 ID = 81304238\narg 3 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		float l=(float)lua_tonumber(L,2);
		ork::vec2d* p=(Luna< ork::vec2d >::check(L,3));
		ork::vec2d* n=(Luna< ork::vec2d >::check(L,4));

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::Curve::getCurvilinearCoordinate(float, ork::vec2d *, ork::vec2d *) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getCurvilinearCoordinate(l, p, n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::Curve::position proland::Curve::getRectanglePosition(float width, float cap, const ork::box2d & r, double * coords) const
	static int _bind_getRectanglePosition(lua_State *L) {
		if (!_lg_typecheck_getRectanglePosition(L)) {
			luaL_error(L, "luna typecheck failed in proland::Curve::position proland::Curve::getRectanglePosition(float width, float cap, const ork::box2d & r, double * coords) const function, expected prototype:\nproland::Curve::position proland::Curve::getRectanglePosition(float width, float cap, const ork::box2d & r, double * coords) const\nClass arguments details:\narg 3 ID = 63151909\n\n%s",luna_dumpStack(L).c_str());
		}

		float width=(float)lua_tonumber(L,2);
		float cap=(float)lua_tonumber(L,3);
		const ork::box2d* r_ptr=(Luna< ork::box2d >::check(L,4));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in proland::Curve::getRectanglePosition function");
		}
		const ork::box2d & r=*r_ptr;
		double* coords=(double*)Luna< void >::check(L,5);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Curve::position proland::Curve::getRectanglePosition(float, float, const ork::box2d &, double *) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Curve::position lret = self->getRectanglePosition(width, cap, r, coords);
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::Curve::position proland::Curve::getTrianglePosition(float width, float cap, const ork::vec2d * t, const ork::box2d & r, double * coords) const
	static int _bind_getTrianglePosition(lua_State *L) {
		if (!_lg_typecheck_getTrianglePosition(L)) {
			luaL_error(L, "luna typecheck failed in proland::Curve::position proland::Curve::getTrianglePosition(float width, float cap, const ork::vec2d * t, const ork::box2d & r, double * coords) const function, expected prototype:\nproland::Curve::position proland::Curve::getTrianglePosition(float width, float cap, const ork::vec2d * t, const ork::box2d & r, double * coords) const\nClass arguments details:\narg 3 ID = 81304238\narg 4 ID = 63151909\n\n%s",luna_dumpStack(L).c_str());
		}

		float width=(float)lua_tonumber(L,2);
		float cap=(float)lua_tonumber(L,3);
		const ork::vec2d* t=(Luna< ork::vec2d >::check(L,4));
		const ork::box2d* r_ptr=(Luna< ork::box2d >::check(L,5));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in proland::Curve::getTrianglePosition function");
		}
		const ork::box2d & r=*r_ptr;
		double* coords=(double*)Luna< void >::check(L,6);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Curve::position proland::Curve::getTrianglePosition(float, float, const ork::vec2d *, const ork::box2d &, double *) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Curve::position lret = self->getTrianglePosition(width, cap, t, r, coords);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::Curve::isInside(const ork::vec2d & p) const
	static int _bind_isInside(lua_State *L) {
		if (!_lg_typecheck_isInside(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::Curve::isInside(const ork::vec2d & p) const function, expected prototype:\nbool proland::Curve::isInside(const ork::vec2d & p) const\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Curve::isInside function");
		}
		const ork::vec2d & p=*p_ptr;

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::Curve::isInside(const ork::vec2d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isInside(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::Curve::isDirect() const
	static int _bind_isDirect(lua_State *L) {
		if (!_lg_typecheck_isDirect(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::Curve::isDirect() const function, expected prototype:\nbool proland::Curve::isDirect() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::Curve::isDirect() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isDirect();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::Curve::setIsControl(int i, bool c)
	static int _bind_setIsControl(lua_State *L) {
		if (!_lg_typecheck_setIsControl(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::setIsControl(int i, bool c) function, expected prototype:\nvoid proland::Curve::setIsControl(int i, bool c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		bool c=(bool)(lua_toboolean(L,3)==1);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::setIsControl(int, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setIsControl(i, c);

		return 0;
	}

	// void proland::Curve::setS(int i, float s)
	static int _bind_setS(lua_State *L) {
		if (!_lg_typecheck_setS(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::setS(int i, float s) function, expected prototype:\nvoid proland::Curve::setS(int i, float s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		float s=(float)lua_tonumber(L,3);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::setS(int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setS(i, s);

		return 0;
	}

	// void proland::Curve::setXY(int i, const ork::vec2d & p)
	static int _bind_setXY(lua_State *L) {
		if (!_lg_typecheck_setXY(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::setXY(int i, const ork::vec2d & p) function, expected prototype:\nvoid proland::Curve::setXY(int i, const ork::vec2d & p)\nClass arguments details:\narg 2 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Curve::setXY function");
		}
		const ork::vec2d & p=*p_ptr;

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::setXY(int, const ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setXY(i, p);

		return 0;
	}

	// void proland::Curve::setWidth(float width)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::setWidth(float width) function, expected prototype:\nvoid proland::Curve::setWidth(float width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float width=(float)lua_tonumber(L,2);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::setWidth(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWidth(width);

		return 0;
	}

	// void proland::Curve::setType(int type)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::setType(int type) function, expected prototype:\nvoid proland::Curve::setType(int type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int type=(int)lua_tointeger(L,2);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::setType(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setType(type);

		return 0;
	}

	// void proland::Curve::flatten(float squareFlatness)
	static int _bind_flatten(lua_State *L) {
		if (!_lg_typecheck_flatten(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::flatten(float squareFlatness) function, expected prototype:\nvoid proland::Curve::flatten(float squareFlatness)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float squareFlatness=(float)lua_tonumber(L,2);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::flatten(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flatten(squareFlatness);

		return 0;
	}

	// void proland::Curve::computeCurvilinearCoordinates()
	static int _bind_computeCurvilinearCoordinates(lua_State *L) {
		if (!_lg_typecheck_computeCurvilinearCoordinates(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::computeCurvilinearCoordinates() function, expected prototype:\nvoid proland::Curve::computeCurvilinearCoordinates()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::computeCurvilinearCoordinates(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->computeCurvilinearCoordinates();

		return 0;
	}

	// float proland::Curve::computeCurvilinearLength()
	static int _bind_computeCurvilinearLength(lua_State *L) {
		if (!_lg_typecheck_computeCurvilinearLength(L)) {
			luaL_error(L, "luna typecheck failed in float proland::Curve::computeCurvilinearLength() function, expected prototype:\nfloat proland::Curve::computeCurvilinearLength()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::Curve::computeCurvilinearLength(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->computeCurvilinearLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::Curve::equals(proland::Curve * c, set< proland::NodeId > & visited) const
	static int _bind_equals(lua_State *L) {
		if (!_lg_typecheck_equals(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::Curve::equals(proland::Curve * c, set< proland::NodeId > & visited) const function, expected prototype:\nbool proland::Curve::equals(proland::Curve * c, set< proland::NodeId > & visited) const\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Curve* c=(Luna< ork::Object >::checkSubType< proland::Curve >(L,2));
		set< proland::NodeId >* visited_ptr=(Luna< set< proland::NodeId > >::check(L,3));
		if( !visited_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg visited in proland::Curve::equals function");
		}
		set< proland::NodeId > & visited=*visited_ptr;

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::Curve::equals(proland::Curve *, set< proland::NodeId > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->equals(c, visited);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::Curve::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::clear() function, expected prototype:\nvoid proland::Curve::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::clear(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// void proland::Curve::invert()
	static int _bind_invert(lua_State *L) {
		if (!_lg_typecheck_invert(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::invert() function, expected prototype:\nvoid proland::Curve::invert()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::invert(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->invert();

		return 0;
	}

	// void proland::Curve::setOwner(proland::Graph * owner)
	static int _bind_setOwner(lua_State *L) {
		if (!_lg_typecheck_setOwner(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::setOwner(proland::Graph * owner) function, expected prototype:\nvoid proland::Curve::setOwner(proland::Graph * owner)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::setOwner(proland::Graph *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOwner(owner);

		return 0;
	}

	// void proland::Curve::setParent(proland::CurvePtr c)
	static int _bind_setParent(lua_State *L) {
		if (!_lg_typecheck_setParent(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::setParent(proland::CurvePtr c) function, expected prototype:\nvoid proland::Curve::setParent(proland::CurvePtr c)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::Curve::setParent function");
		}
		proland::CurvePtr c=*c_ptr;

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::setParent(proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParent(c);

		return 0;
	}

	// void proland::Curve::addArea(proland::AreaId a)
	static int _bind_addArea(lua_State *L) {
		if (!_lg_typecheck_addArea(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::addArea(proland::AreaId a) function, expected prototype:\nvoid proland::Curve::addArea(proland::AreaId a)\nClass arguments details:\narg 1 ID = 2724636\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::AreaId* a_ptr=(Luna< proland::AreaId >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in proland::Curve::addArea function");
		}
		proland::AreaId a=*a_ptr;

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::addArea(proland::AreaId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addArea(a);

		return 0;
	}

	// proland::Graph * proland::Curve::getOwner() const
	static int _bind_getOwner(lua_State *L) {
		if (!_lg_typecheck_getOwner(L)) {
			luaL_error(L, "luna typecheck failed in proland::Graph * proland::Curve::getOwner() const function, expected prototype:\nproland::Graph * proland::Curve::getOwner() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Graph * proland::Curve::getOwner() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Graph * lret = self->getOwner();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Graph >::push(L,lret,false);

		return 1;
	}

	// void proland::Curve::check()
	static int _bind_check(lua_State *L) {
		if (!_lg_typecheck_check(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::check() function, expected prototype:\nvoid proland::Curve::check()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::check(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->check();

		return 0;
	}

	// void proland::Curve::removeDuplicateVertices()
	static int _bind_removeDuplicateVertices(lua_State *L) {
		if (!_lg_typecheck_removeDuplicateVertices(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::removeDuplicateVertices() function, expected prototype:\nvoid proland::Curve::removeDuplicateVertices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::removeDuplicateVertices(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeDuplicateVertices();

		return 0;
	}

	// const char * proland::Curve::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::Curve::base_toString() function, expected prototype:\nconst char * proland::Curve::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::Curve::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Curve::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::Curve::base_print() const
	static int _bind_base_print(lua_State *L) {
		if (!_lg_typecheck_base_print(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::base_print() const function, expected prototype:\nvoid proland::Curve::base_print() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::base_print() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Curve::print();

		return 0;
	}

	// proland::CurveId proland::Curve::base_getId() const
	static int _bind_base_getId(lua_State *L) {
		if (!_lg_typecheck_base_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::Curve::base_getId() const function, expected prototype:\nproland::CurveId proland::Curve::base_getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::Curve::base_getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->Curve::getId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::Curve::base_getParent() const
	static int _bind_base_getParent(lua_State *L) {
		if (!_lg_typecheck_base_getParent(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Curve::base_getParent() const function, expected prototype:\nproland::CurvePtr proland::Curve::base_getParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Curve::base_getParent() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->Curve::getParent();
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurveId proland::Curve::base_getParentId() const
	static int _bind_base_getParentId(lua_State *L) {
		if (!_lg_typecheck_base_getParentId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::Curve::base_getParentId() const function, expected prototype:\nproland::CurveId proland::Curve::base_getParentId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::Curve::base_getParentId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->Curve::getParentId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::CurveId proland::Curve::base_getAncestorId() const
	static int _bind_base_getAncestorId(lua_State *L) {
		if (!_lg_typecheck_base_getAncestorId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::Curve::base_getAncestorId() const function, expected prototype:\nproland::CurveId proland::Curve::base_getAncestorId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::Curve::base_getAncestorId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->Curve::getAncestorId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::NodePtr proland::Curve::base_getStart() const
	static int _bind_base_getStart(lua_State *L) {
		if (!_lg_typecheck_base_getStart(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::Curve::base_getStart() const function, expected prototype:\nproland::NodePtr proland::Curve::base_getStart() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::Curve::base_getStart() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->Curve::getStart();
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// proland::NodePtr proland::Curve::base_getEnd() const
	static int _bind_base_getEnd(lua_State *L) {
		if (!_lg_typecheck_base_getEnd(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::Curve::base_getEnd() const function, expected prototype:\nproland::NodePtr proland::Curve::base_getEnd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::Curve::base_getEnd() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->Curve::getEnd();
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// void proland::Curve::base_addVertex(proland::NodeId id, bool isEnd = 1)
	static int _bind_base_addVertex_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_addVertex_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::base_addVertex(proland::NodeId id, bool isEnd = 1) function, expected prototype:\nvoid proland::Curve::base_addVertex(proland::NodeId id, bool isEnd = 1)\nClass arguments details:\narg 1 ID = 72107044\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::NodeId* id_ptr=(Luna< proland::NodeId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::Curve::base_addVertex function");
		}
		proland::NodeId id=*id_ptr;
		bool isEnd=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)1;

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::base_addVertex(proland::NodeId, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Curve::addVertex(id, isEnd);

		return 0;
	}

	// void proland::Curve::base_addVertex(double x, double y, float s, bool isControl)
	static int _bind_base_addVertex_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_addVertex_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::base_addVertex(double x, double y, float s, bool isControl) function, expected prototype:\nvoid proland::Curve::base_addVertex(double x, double y, float s, bool isControl)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		float s=(float)lua_tonumber(L,4);
		bool isControl=(bool)(lua_toboolean(L,5)==1);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::base_addVertex(double, double, float, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Curve::addVertex(x, y, s, isControl);

		return 0;
	}

	// void proland::Curve::base_addVertex(ork::vec2d pt, int rank, bool isControl)
	static int _bind_base_addVertex_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_addVertex_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::base_addVertex(ork::vec2d pt, int rank, bool isControl) function, expected prototype:\nvoid proland::Curve::base_addVertex(ork::vec2d pt, int rank, bool isControl)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* pt_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in proland::Curve::base_addVertex function");
		}
		ork::vec2d pt=*pt_ptr;
		int rank=(int)lua_tointeger(L,3);
		bool isControl=(bool)(lua_toboolean(L,4)==1);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::base_addVertex(ork::vec2d, int, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Curve::addVertex(pt, rank, isControl);

		return 0;
	}

	// void proland::Curve::base_addVertex(const ork::vec2d & p, float s, float l, bool isControl)
	static int _bind_base_addVertex_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_addVertex_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::base_addVertex(const ork::vec2d & p, float s, float l, bool isControl) function, expected prototype:\nvoid proland::Curve::base_addVertex(const ork::vec2d & p, float s, float l, bool isControl)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Curve::base_addVertex function");
		}
		const ork::vec2d & p=*p_ptr;
		float s=(float)lua_tonumber(L,3);
		float l=(float)lua_tonumber(L,4);
		bool isControl=(bool)(lua_toboolean(L,5)==1);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::base_addVertex(const ork::vec2d &, float, float, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Curve::addVertex(p, s, l, isControl);

		return 0;
	}

	// void proland::Curve::base_addVertex(const proland::Vertex & pt)
	static int _bind_base_addVertex_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_addVertex_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::base_addVertex(const proland::Vertex & pt) function, expected prototype:\nvoid proland::Curve::base_addVertex(const proland::Vertex & pt)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const proland::Vertex* pt_ptr=(Luna< ork::vec2d >::checkSubType< proland::Vertex >(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in proland::Curve::base_addVertex function");
		}
		const proland::Vertex & pt=*pt_ptr;

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::base_addVertex(const proland::Vertex &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Curve::addVertex(pt);

		return 0;
	}

	// Overload binder for proland::Curve::base_addVertex
	static int _bind_base_addVertex(lua_State *L) {
		if (_lg_typecheck_base_addVertex_overload_1(L)) return _bind_base_addVertex_overload_1(L);
		if (_lg_typecheck_base_addVertex_overload_2(L)) return _bind_base_addVertex_overload_2(L);
		if (_lg_typecheck_base_addVertex_overload_3(L)) return _bind_base_addVertex_overload_3(L);
		if (_lg_typecheck_base_addVertex_overload_4(L)) return _bind_base_addVertex_overload_4(L);
		if (_lg_typecheck_base_addVertex_overload_5(L)) return _bind_base_addVertex_overload_5(L);

		luaL_error(L, "error in function base_addVertex, cannot match any of the overloads for function base_addVertex:\n  base_addVertex(proland::NodeId, bool)\n  base_addVertex(double, double, float, bool)\n  base_addVertex(ork::vec2d, int, bool)\n  base_addVertex(const ork::vec2d &, float, float, bool)\n  base_addVertex(const proland::Vertex &)\n");
		return 0;
	}

	// void proland::Curve::base_addVertices(const vector< ork::vec2d > & v)
	static int _bind_base_addVertices(lua_State *L) {
		if (!_lg_typecheck_base_addVertices(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::base_addVertices(const vector< ork::vec2d > & v) function, expected prototype:\nvoid proland::Curve::base_addVertices(const vector< ork::vec2d > & v)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const vector< ork::vec2d >* v_ptr=(Luna< vector< ork::vec2d > >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in proland::Curve::base_addVertices function");
		}
		const vector< ork::vec2d > & v=*v_ptr;

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::base_addVertices(const vector< ork::vec2d > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Curve::addVertices(v);

		return 0;
	}

	// void proland::Curve::base_removeVertex(int i)
	static int _bind_base_removeVertex(lua_State *L) {
		if (!_lg_typecheck_base_removeVertex(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::base_removeVertex(int i) function, expected prototype:\nvoid proland::Curve::base_removeVertex(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::base_removeVertex(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Curve::removeVertex(i);

		return 0;
	}

	// void proland::Curve::base_setIsControl(int i, bool c)
	static int _bind_base_setIsControl(lua_State *L) {
		if (!_lg_typecheck_base_setIsControl(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::base_setIsControl(int i, bool c) function, expected prototype:\nvoid proland::Curve::base_setIsControl(int i, bool c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		bool c=(bool)(lua_toboolean(L,3)==1);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::base_setIsControl(int, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Curve::setIsControl(i, c);

		return 0;
	}

	// void proland::Curve::base_setS(int i, float s)
	static int _bind_base_setS(lua_State *L) {
		if (!_lg_typecheck_base_setS(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::base_setS(int i, float s) function, expected prototype:\nvoid proland::Curve::base_setS(int i, float s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		float s=(float)lua_tonumber(L,3);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::base_setS(int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Curve::setS(i, s);

		return 0;
	}

	// void proland::Curve::base_setXY(int i, const ork::vec2d & p)
	static int _bind_base_setXY(lua_State *L) {
		if (!_lg_typecheck_base_setXY(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::base_setXY(int i, const ork::vec2d & p) function, expected prototype:\nvoid proland::Curve::base_setXY(int i, const ork::vec2d & p)\nClass arguments details:\narg 2 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Curve::base_setXY function");
		}
		const ork::vec2d & p=*p_ptr;

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::base_setXY(int, const ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Curve::setXY(i, p);

		return 0;
	}

	// void proland::Curve::base_setWidth(float width)
	static int _bind_base_setWidth(lua_State *L) {
		if (!_lg_typecheck_base_setWidth(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::base_setWidth(float width) function, expected prototype:\nvoid proland::Curve::base_setWidth(float width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float width=(float)lua_tonumber(L,2);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::base_setWidth(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Curve::setWidth(width);

		return 0;
	}

	// void proland::Curve::base_setType(int type)
	static int _bind_base_setType(lua_State *L) {
		if (!_lg_typecheck_base_setType(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::base_setType(int type) function, expected prototype:\nvoid proland::Curve::base_setType(int type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int type=(int)lua_tointeger(L,2);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::base_setType(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Curve::setType(type);

		return 0;
	}

	// void proland::Curve::base_flatten(float squareFlatness)
	static int _bind_base_flatten(lua_State *L) {
		if (!_lg_typecheck_base_flatten(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::base_flatten(float squareFlatness) function, expected prototype:\nvoid proland::Curve::base_flatten(float squareFlatness)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float squareFlatness=(float)lua_tonumber(L,2);

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::base_flatten(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Curve::flatten(squareFlatness);

		return 0;
	}

	// void proland::Curve::base_clear()
	static int _bind_base_clear(lua_State *L) {
		if (!_lg_typecheck_base_clear(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::base_clear() function, expected prototype:\nvoid proland::Curve::base_clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::base_clear(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Curve::clear();

		return 0;
	}

	// void proland::Curve::base_invert()
	static int _bind_base_invert(lua_State *L) {
		if (!_lg_typecheck_base_invert(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::base_invert() function, expected prototype:\nvoid proland::Curve::base_invert()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::base_invert(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Curve::invert();

		return 0;
	}

	// void proland::Curve::base_addArea(proland::AreaId a)
	static int _bind_base_addArea(lua_State *L) {
		if (!_lg_typecheck_base_addArea(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Curve::base_addArea(proland::AreaId a) function, expected prototype:\nvoid proland::Curve::base_addArea(proland::AreaId a)\nClass arguments details:\narg 1 ID = 2724636\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::AreaId* a_ptr=(Luna< proland::AreaId >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in proland::Curve::base_addArea function");
		}
		proland::AreaId a=*a_ptr;

		proland::Curve* self=Luna< ork::Object >::checkSubType< proland::Curve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Curve::base_addArea(proland::AreaId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Curve::addArea(a);

		return 0;
	}


	// Operator binds:

};

proland::Curve* LunaTraits< proland::Curve >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_Curve::_bind_ctor(L);
}

void LunaTraits< proland::Curve >::_bind_dtor(proland::Curve* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::Curve >::className[] = "Curve";
const char LunaTraits< proland::Curve >::fullName[] = "proland::Curve";
const char LunaTraits< proland::Curve >::moduleName[] = "proland";
const char* LunaTraits< proland::Curve >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::Curve >::hash = 14940703;
const int LunaTraits< proland::Curve >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::Curve >::methods[] = {
	{"print", &luna_wrapper_proland_Curve::_bind_print},
	{"getId", &luna_wrapper_proland_Curve::_bind_getId},
	{"getParent", &luna_wrapper_proland_Curve::_bind_getParent},
	{"getAncestor", &luna_wrapper_proland_Curve::_bind_getAncestor},
	{"getParentId", &luna_wrapper_proland_Curve::_bind_getParentId},
	{"getAncestorId", &luna_wrapper_proland_Curve::_bind_getAncestorId},
	{"getType", &luna_wrapper_proland_Curve::_bind_getType},
	{"getWidth", &luna_wrapper_proland_Curve::_bind_getWidth},
	{"getSize", &luna_wrapper_proland_Curve::_bind_getSize},
	{"getVertex", &luna_wrapper_proland_Curve::_bind_getVertex},
	{"getXY", &luna_wrapper_proland_Curve::_bind_getXY},
	{"getIsControl", &luna_wrapper_proland_Curve::_bind_getIsControl},
	{"getIsSmooth", &luna_wrapper_proland_Curve::_bind_getIsSmooth},
	{"getS0", &luna_wrapper_proland_Curve::_bind_getS0},
	{"getS1", &luna_wrapper_proland_Curve::_bind_getS1},
	{"getS", &luna_wrapper_proland_Curve::_bind_getS},
	{"getL", &luna_wrapper_proland_Curve::_bind_getL},
	{"getBounds", &luna_wrapper_proland_Curve::_bind_getBounds},
	{"getStart", &luna_wrapper_proland_Curve::_bind_getStart},
	{"getEnd", &luna_wrapper_proland_Curve::_bind_getEnd},
	{"getArea1", &luna_wrapper_proland_Curve::_bind_getArea1},
	{"getArea2", &luna_wrapper_proland_Curve::_bind_getArea2},
	{"addVertex", &luna_wrapper_proland_Curve::_bind_addVertex},
	{"addVertices", &luna_wrapper_proland_Curve::_bind_addVertices},
	{"removeVertex", &luna_wrapper_proland_Curve::_bind_removeVertex},
	{"decimate", &luna_wrapper_proland_Curve::_bind_decimate},
	{"getOpposite", &luna_wrapper_proland_Curve::_bind_getOpposite},
	{"getNext", &luna_wrapper_proland_Curve::_bind_getNext},
	{"getCurvilinearLength", &luna_wrapper_proland_Curve::_bind_getCurvilinearLength},
	{"getCurvilinearCoordinate", &luna_wrapper_proland_Curve::_bind_getCurvilinearCoordinate},
	{"getRectanglePosition", &luna_wrapper_proland_Curve::_bind_getRectanglePosition},
	{"getTrianglePosition", &luna_wrapper_proland_Curve::_bind_getTrianglePosition},
	{"isInside", &luna_wrapper_proland_Curve::_bind_isInside},
	{"isDirect", &luna_wrapper_proland_Curve::_bind_isDirect},
	{"setIsControl", &luna_wrapper_proland_Curve::_bind_setIsControl},
	{"setS", &luna_wrapper_proland_Curve::_bind_setS},
	{"setXY", &luna_wrapper_proland_Curve::_bind_setXY},
	{"setWidth", &luna_wrapper_proland_Curve::_bind_setWidth},
	{"setType", &luna_wrapper_proland_Curve::_bind_setType},
	{"flatten", &luna_wrapper_proland_Curve::_bind_flatten},
	{"computeCurvilinearCoordinates", &luna_wrapper_proland_Curve::_bind_computeCurvilinearCoordinates},
	{"computeCurvilinearLength", &luna_wrapper_proland_Curve::_bind_computeCurvilinearLength},
	{"equals", &luna_wrapper_proland_Curve::_bind_equals},
	{"clear", &luna_wrapper_proland_Curve::_bind_clear},
	{"invert", &luna_wrapper_proland_Curve::_bind_invert},
	{"setOwner", &luna_wrapper_proland_Curve::_bind_setOwner},
	{"setParent", &luna_wrapper_proland_Curve::_bind_setParent},
	{"addArea", &luna_wrapper_proland_Curve::_bind_addArea},
	{"getOwner", &luna_wrapper_proland_Curve::_bind_getOwner},
	{"check", &luna_wrapper_proland_Curve::_bind_check},
	{"removeDuplicateVertices", &luna_wrapper_proland_Curve::_bind_removeDuplicateVertices},
	{"base_toString", &luna_wrapper_proland_Curve::_bind_base_toString},
	{"base_print", &luna_wrapper_proland_Curve::_bind_base_print},
	{"base_getId", &luna_wrapper_proland_Curve::_bind_base_getId},
	{"base_getParent", &luna_wrapper_proland_Curve::_bind_base_getParent},
	{"base_getParentId", &luna_wrapper_proland_Curve::_bind_base_getParentId},
	{"base_getAncestorId", &luna_wrapper_proland_Curve::_bind_base_getAncestorId},
	{"base_getStart", &luna_wrapper_proland_Curve::_bind_base_getStart},
	{"base_getEnd", &luna_wrapper_proland_Curve::_bind_base_getEnd},
	{"base_addVertex", &luna_wrapper_proland_Curve::_bind_base_addVertex},
	{"base_addVertices", &luna_wrapper_proland_Curve::_bind_base_addVertices},
	{"base_removeVertex", &luna_wrapper_proland_Curve::_bind_base_removeVertex},
	{"base_setIsControl", &luna_wrapper_proland_Curve::_bind_base_setIsControl},
	{"base_setS", &luna_wrapper_proland_Curve::_bind_base_setS},
	{"base_setXY", &luna_wrapper_proland_Curve::_bind_base_setXY},
	{"base_setWidth", &luna_wrapper_proland_Curve::_bind_base_setWidth},
	{"base_setType", &luna_wrapper_proland_Curve::_bind_base_setType},
	{"base_flatten", &luna_wrapper_proland_Curve::_bind_base_flatten},
	{"base_clear", &luna_wrapper_proland_Curve::_bind_base_clear},
	{"base_invert", &luna_wrapper_proland_Curve::_bind_base_invert},
	{"base_addArea", &luna_wrapper_proland_Curve::_bind_base_addArea},
	{"fromVoid", &luna_wrapper_proland_Curve::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_Curve::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_Curve::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::Curve >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_Curve::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::Curve >::enumValues[] = {
	{"INSIDE", proland::Curve::INSIDE},
	{"OUTSIDE", proland::Curve::OUTSIDE},
	{"INTERSECT", proland::Curve::INTERSECT},
	{0,0}
};


