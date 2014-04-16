#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_LazyCurve.h>

class luna_wrapper_proland_LazyCurve {
public:
	typedef Luna< proland::LazyCurve > luna_t;

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

		proland::LazyCurve* self= (proland::LazyCurve*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::LazyCurve >::push(L,self,false);
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
		//proland::LazyCurve* ptr= dynamic_cast< proland::LazyCurve* >(Luna< ork::Object >::check(L,1));
		proland::LazyCurve* ptr= luna_caster< ork::Object, proland::LazyCurve >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::LazyCurve >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< ork::Object >::checkSubType< proland::Graph >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		if( (!(Luna< proland::CurveId >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< ork::Object >::checkSubType< proland::Graph >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		if( (!(Luna< proland::CurveId >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,72107044) ) return false;
		if( (!(Luna< proland::NodeId >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,72107044) ) return false;
		if( (!(Luna< proland::NodeId >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< proland::Graph >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58015782) ) return false;
		if( (!(Luna< proland::CurveId >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< proland::Graph >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,58015782) ) return false;
		if( (!(Luna< proland::CurveId >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,72107044) ) return false;
		if( (!(Luna< proland::NodeId >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,72107044) ) return false;
		if( (!(Luna< proland::NodeId >::check(L,5))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent(lua_State *L) {
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

	inline static bool _lg_typecheck_loadVertex_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72107044) ) return false;
		if( (!(Luna< proland::NodeId >::check(L,2))) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_loadVertex_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
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

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_invert(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addArea(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2724636) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_loadArea(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2724636) ) return false;
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

	inline static bool _lg_typecheck_base_getParentId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getAncestorId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_flatten(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_loadVertex(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72107044) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
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
	// proland::LazyCurve::LazyCurve(proland::Graph * owner, proland::CurveId id)
	static proland::LazyCurve* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::LazyCurve::LazyCurve(proland::Graph * owner, proland::CurveId id) function, expected prototype:\nproland::LazyCurve::LazyCurve(proland::Graph * owner, proland::CurveId id)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,1));
		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::LazyCurve::LazyCurve function");
		}
		proland::CurveId id=*id_ptr;

		return new proland::LazyCurve(owner, id);
	}

	// proland::LazyCurve::LazyCurve(proland::Graph * owner, proland::CurveId id, proland::NodeId s, proland::NodeId e)
	static proland::LazyCurve* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::LazyCurve::LazyCurve(proland::Graph * owner, proland::CurveId id, proland::NodeId s, proland::NodeId e) function, expected prototype:\nproland::LazyCurve::LazyCurve(proland::Graph * owner, proland::CurveId id, proland::NodeId s, proland::NodeId e)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = 58015782\narg 3 ID = 72107044\narg 4 ID = 72107044\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,1));
		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::LazyCurve::LazyCurve function");
		}
		proland::CurveId id=*id_ptr;
		proland::NodeId* s_ptr=(Luna< proland::NodeId >::check(L,3));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in proland::LazyCurve::LazyCurve function");
		}
		proland::NodeId s=*s_ptr;
		proland::NodeId* e_ptr=(Luna< proland::NodeId >::check(L,4));
		if( !e_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg e in proland::LazyCurve::LazyCurve function");
		}
		proland::NodeId e=*e_ptr;

		return new proland::LazyCurve(owner, id, s, e);
	}

	// proland::LazyCurve::LazyCurve(lua_Table * data, proland::Graph * owner, proland::CurveId id)
	static proland::LazyCurve* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in proland::LazyCurve::LazyCurve(lua_Table * data, proland::Graph * owner, proland::CurveId id) function, expected prototype:\nproland::LazyCurve::LazyCurve(lua_Table * data, proland::Graph * owner, proland::CurveId id)\nClass arguments details:\narg 2 ID = 1381405\narg 3 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));
		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,3));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::LazyCurve::LazyCurve function");
		}
		proland::CurveId id=*id_ptr;

		return new wrapper_proland_LazyCurve(L,NULL, owner, id);
	}

	// proland::LazyCurve::LazyCurve(lua_Table * data, proland::Graph * owner, proland::CurveId id, proland::NodeId s, proland::NodeId e)
	static proland::LazyCurve* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in proland::LazyCurve::LazyCurve(lua_Table * data, proland::Graph * owner, proland::CurveId id, proland::NodeId s, proland::NodeId e) function, expected prototype:\nproland::LazyCurve::LazyCurve(lua_Table * data, proland::Graph * owner, proland::CurveId id, proland::NodeId s, proland::NodeId e)\nClass arguments details:\narg 2 ID = 1381405\narg 3 ID = 58015782\narg 4 ID = 72107044\narg 5 ID = 72107044\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));
		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,3));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::LazyCurve::LazyCurve function");
		}
		proland::CurveId id=*id_ptr;
		proland::NodeId* s_ptr=(Luna< proland::NodeId >::check(L,4));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in proland::LazyCurve::LazyCurve function");
		}
		proland::NodeId s=*s_ptr;
		proland::NodeId* e_ptr=(Luna< proland::NodeId >::check(L,5));
		if( !e_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg e in proland::LazyCurve::LazyCurve function");
		}
		proland::NodeId e=*e_ptr;

		return new wrapper_proland_LazyCurve(L,NULL, owner, id, s, e);
	}

	// Overload binder for proland::LazyCurve::LazyCurve
	static proland::LazyCurve* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function LazyCurve, cannot match any of the overloads for function LazyCurve:\n  LazyCurve(proland::Graph *, proland::CurveId)\n  LazyCurve(proland::Graph *, proland::CurveId, proland::NodeId, proland::NodeId)\n  LazyCurve(lua_Table *, proland::Graph *, proland::CurveId)\n  LazyCurve(lua_Table *, proland::Graph *, proland::CurveId, proland::NodeId, proland::NodeId)\n");
		return NULL;
	}


	// Function binds:
	// proland::CurveId proland::LazyCurve::getId() const
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::LazyCurve::getId() const function, expected prototype:\nproland::CurveId proland::LazyCurve::getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::LazyCurve::getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->getId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::LazyCurve::getParent() const
	static int _bind_getParent(lua_State *L) {
		if (!_lg_typecheck_getParent(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::LazyCurve::getParent() const function, expected prototype:\nproland::CurvePtr proland::LazyCurve::getParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::LazyCurve::getParent() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->getParent();
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::NodePtr proland::LazyCurve::getStart() const
	static int _bind_getStart(lua_State *L) {
		if (!_lg_typecheck_getStart(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::LazyCurve::getStart() const function, expected prototype:\nproland::NodePtr proland::LazyCurve::getStart() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::LazyCurve::getStart() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->getStart();
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// proland::NodePtr proland::LazyCurve::getEnd() const
	static int _bind_getEnd(lua_State *L) {
		if (!_lg_typecheck_getEnd(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::LazyCurve::getEnd() const function, expected prototype:\nproland::NodePtr proland::LazyCurve::getEnd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::LazyCurve::getEnd() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->getEnd();
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// void proland::LazyCurve::addVertex(proland::NodeId id, bool isEnd = 1)
	static int _bind_addVertex_overload_1(lua_State *L) {
		if (!_lg_typecheck_addVertex_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::addVertex(proland::NodeId id, bool isEnd = 1) function, expected prototype:\nvoid proland::LazyCurve::addVertex(proland::NodeId id, bool isEnd = 1)\nClass arguments details:\narg 1 ID = 72107044\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::NodeId* id_ptr=(Luna< proland::NodeId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::LazyCurve::addVertex function");
		}
		proland::NodeId id=*id_ptr;
		bool isEnd=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)1;

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::addVertex(proland::NodeId, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addVertex(id, isEnd);

		return 0;
	}

	// void proland::LazyCurve::addVertex(double x, double y, float s, bool isControl)
	static int _bind_addVertex_overload_2(lua_State *L) {
		if (!_lg_typecheck_addVertex_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::addVertex(double x, double y, float s, bool isControl) function, expected prototype:\nvoid proland::LazyCurve::addVertex(double x, double y, float s, bool isControl)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		float s=(float)lua_tonumber(L,4);
		bool isControl=(bool)(lua_toboolean(L,5)==1);

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::addVertex(double, double, float, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addVertex(x, y, s, isControl);

		return 0;
	}

	// void proland::LazyCurve::addVertex(ork::vec2d pt, int rank, bool isControl)
	static int _bind_addVertex_overload_3(lua_State *L) {
		if (!_lg_typecheck_addVertex_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::addVertex(ork::vec2d pt, int rank, bool isControl) function, expected prototype:\nvoid proland::LazyCurve::addVertex(ork::vec2d pt, int rank, bool isControl)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* pt_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in proland::LazyCurve::addVertex function");
		}
		ork::vec2d pt=*pt_ptr;
		int rank=(int)lua_tointeger(L,3);
		bool isControl=(bool)(lua_toboolean(L,4)==1);

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::addVertex(ork::vec2d, int, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addVertex(pt, rank, isControl);

		return 0;
	}

	// void proland::LazyCurve::addVertex(const ork::vec2d & p, float s, float l, bool isControl)
	static int _bind_addVertex_overload_4(lua_State *L) {
		if (!_lg_typecheck_addVertex_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::addVertex(const ork::vec2d & p, float s, float l, bool isControl) function, expected prototype:\nvoid proland::LazyCurve::addVertex(const ork::vec2d & p, float s, float l, bool isControl)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::LazyCurve::addVertex function");
		}
		const ork::vec2d & p=*p_ptr;
		float s=(float)lua_tonumber(L,3);
		float l=(float)lua_tonumber(L,4);
		bool isControl=(bool)(lua_toboolean(L,5)==1);

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::addVertex(const ork::vec2d &, float, float, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addVertex(p, s, l, isControl);

		return 0;
	}

	// void proland::LazyCurve::addVertex(const proland::Vertex & pt)
	static int _bind_addVertex_overload_5(lua_State *L) {
		if (!_lg_typecheck_addVertex_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::addVertex(const proland::Vertex & pt) function, expected prototype:\nvoid proland::LazyCurve::addVertex(const proland::Vertex & pt)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const proland::Vertex* pt_ptr=(Luna< ork::vec2d >::checkSubType< proland::Vertex >(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in proland::LazyCurve::addVertex function");
		}
		const proland::Vertex & pt=*pt_ptr;

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::addVertex(const proland::Vertex &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addVertex(pt);

		return 0;
	}

	// Overload binder for proland::LazyCurve::addVertex
	static int _bind_addVertex(lua_State *L) {
		if (_lg_typecheck_addVertex_overload_1(L)) return _bind_addVertex_overload_1(L);
		if (_lg_typecheck_addVertex_overload_2(L)) return _bind_addVertex_overload_2(L);
		if (_lg_typecheck_addVertex_overload_3(L)) return _bind_addVertex_overload_3(L);
		if (_lg_typecheck_addVertex_overload_4(L)) return _bind_addVertex_overload_4(L);
		if (_lg_typecheck_addVertex_overload_5(L)) return _bind_addVertex_overload_5(L);

		luaL_error(L, "error in function addVertex, cannot match any of the overloads for function addVertex:\n  addVertex(proland::NodeId, bool)\n  addVertex(double, double, float, bool)\n  addVertex(ork::vec2d, int, bool)\n  addVertex(const ork::vec2d &, float, float, bool)\n  addVertex(const proland::Vertex &)\n");
		return 0;
	}

	// void proland::LazyCurve::loadVertex(proland::NodeId id, bool isEnd = 1)
	static int _bind_loadVertex_overload_1(lua_State *L) {
		if (!_lg_typecheck_loadVertex_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::loadVertex(proland::NodeId id, bool isEnd = 1) function, expected prototype:\nvoid proland::LazyCurve::loadVertex(proland::NodeId id, bool isEnd = 1)\nClass arguments details:\narg 1 ID = 72107044\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::NodeId* id_ptr=(Luna< proland::NodeId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::LazyCurve::loadVertex function");
		}
		proland::NodeId id=*id_ptr;
		bool isEnd=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)1;

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::loadVertex(proland::NodeId, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->loadVertex(id, isEnd);

		return 0;
	}

	// void proland::LazyCurve::loadVertex(float x, float y, float s, bool isControl)
	static int _bind_loadVertex_overload_2(lua_State *L) {
		if (!_lg_typecheck_loadVertex_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::loadVertex(float x, float y, float s, bool isControl) function, expected prototype:\nvoid proland::LazyCurve::loadVertex(float x, float y, float s, bool isControl)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float s=(float)lua_tonumber(L,4);
		bool isControl=(bool)(lua_toboolean(L,5)==1);

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::loadVertex(float, float, float, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->loadVertex(x, y, s, isControl);

		return 0;
	}

	// Overload binder for proland::LazyCurve::loadVertex
	static int _bind_loadVertex(lua_State *L) {
		if (_lg_typecheck_loadVertex_overload_1(L)) return _bind_loadVertex_overload_1(L);
		if (_lg_typecheck_loadVertex_overload_2(L)) return _bind_loadVertex_overload_2(L);

		luaL_error(L, "error in function loadVertex, cannot match any of the overloads for function loadVertex:\n  loadVertex(proland::NodeId, bool)\n  loadVertex(float, float, float, bool)\n");
		return 0;
	}

	// void proland::LazyCurve::addVertices(const vector< ork::vec2d > & v)
	static int _bind_addVertices(lua_State *L) {
		if (!_lg_typecheck_addVertices(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::addVertices(const vector< ork::vec2d > & v) function, expected prototype:\nvoid proland::LazyCurve::addVertices(const vector< ork::vec2d > & v)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const vector< ork::vec2d >* v_ptr=(Luna< vector< ork::vec2d > >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in proland::LazyCurve::addVertices function");
		}
		const vector< ork::vec2d > & v=*v_ptr;

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::addVertices(const vector< ork::vec2d > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addVertices(v);

		return 0;
	}

	// void proland::LazyCurve::removeVertex(int i)
	static int _bind_removeVertex(lua_State *L) {
		if (!_lg_typecheck_removeVertex(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::removeVertex(int i) function, expected prototype:\nvoid proland::LazyCurve::removeVertex(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::removeVertex(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeVertex(i);

		return 0;
	}

	// void proland::LazyCurve::setIsControl(int i, bool c)
	static int _bind_setIsControl(lua_State *L) {
		if (!_lg_typecheck_setIsControl(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::setIsControl(int i, bool c) function, expected prototype:\nvoid proland::LazyCurve::setIsControl(int i, bool c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		bool c=(bool)(lua_toboolean(L,3)==1);

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::setIsControl(int, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setIsControl(i, c);

		return 0;
	}

	// void proland::LazyCurve::setS(int i, float s)
	static int _bind_setS(lua_State *L) {
		if (!_lg_typecheck_setS(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::setS(int i, float s) function, expected prototype:\nvoid proland::LazyCurve::setS(int i, float s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		float s=(float)lua_tonumber(L,3);

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::setS(int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setS(i, s);

		return 0;
	}

	// void proland::LazyCurve::setXY(int i, const ork::vec2d & p)
	static int _bind_setXY(lua_State *L) {
		if (!_lg_typecheck_setXY(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::setXY(int i, const ork::vec2d & p) function, expected prototype:\nvoid proland::LazyCurve::setXY(int i, const ork::vec2d & p)\nClass arguments details:\narg 2 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::LazyCurve::setXY function");
		}
		const ork::vec2d & p=*p_ptr;

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::setXY(int, const ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setXY(i, p);

		return 0;
	}

	// void proland::LazyCurve::setWidth(float width)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::setWidth(float width) function, expected prototype:\nvoid proland::LazyCurve::setWidth(float width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float width=(float)lua_tonumber(L,2);

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::setWidth(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWidth(width);

		return 0;
	}

	// void proland::LazyCurve::setType(int type)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::setType(int type) function, expected prototype:\nvoid proland::LazyCurve::setType(int type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int type=(int)lua_tointeger(L,2);

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::setType(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setType(type);

		return 0;
	}

	// void proland::LazyCurve::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::clear() function, expected prototype:\nvoid proland::LazyCurve::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::clear(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// void proland::LazyCurve::invert()
	static int _bind_invert(lua_State *L) {
		if (!_lg_typecheck_invert(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::invert() function, expected prototype:\nvoid proland::LazyCurve::invert()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::invert(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->invert();

		return 0;
	}

	// void proland::LazyCurve::addArea(proland::AreaId a)
	static int _bind_addArea(lua_State *L) {
		if (!_lg_typecheck_addArea(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::addArea(proland::AreaId a) function, expected prototype:\nvoid proland::LazyCurve::addArea(proland::AreaId a)\nClass arguments details:\narg 1 ID = 2724636\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::AreaId* a_ptr=(Luna< proland::AreaId >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in proland::LazyCurve::addArea function");
		}
		proland::AreaId a=*a_ptr;

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::addArea(proland::AreaId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addArea(a);

		return 0;
	}

	// void proland::LazyCurve::loadArea(proland::AreaId a)
	static int _bind_loadArea(lua_State *L) {
		if (!_lg_typecheck_loadArea(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::loadArea(proland::AreaId a) function, expected prototype:\nvoid proland::LazyCurve::loadArea(proland::AreaId a)\nClass arguments details:\narg 1 ID = 2724636\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::AreaId* a_ptr=(Luna< proland::AreaId >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in proland::LazyCurve::loadArea function");
		}
		proland::AreaId a=*a_ptr;

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::loadArea(proland::AreaId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->loadArea(a);

		return 0;
	}

	// const char * proland::LazyCurve::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::LazyCurve::base_toString() function, expected prototype:\nconst char * proland::LazyCurve::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::LazyCurve::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LazyCurve::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::LazyCurve::base_print() const
	static int _bind_base_print(lua_State *L) {
		if (!_lg_typecheck_base_print(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::base_print() const function, expected prototype:\nvoid proland::LazyCurve::base_print() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::base_print() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyCurve::print();

		return 0;
	}

	// proland::CurveId proland::LazyCurve::base_getParentId() const
	static int _bind_base_getParentId(lua_State *L) {
		if (!_lg_typecheck_base_getParentId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::LazyCurve::base_getParentId() const function, expected prototype:\nproland::CurveId proland::LazyCurve::base_getParentId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::LazyCurve::base_getParentId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->LazyCurve::getParentId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::CurveId proland::LazyCurve::base_getAncestorId() const
	static int _bind_base_getAncestorId(lua_State *L) {
		if (!_lg_typecheck_base_getAncestorId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::LazyCurve::base_getAncestorId() const function, expected prototype:\nproland::CurveId proland::LazyCurve::base_getAncestorId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::LazyCurve::base_getAncestorId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->LazyCurve::getAncestorId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// void proland::LazyCurve::base_flatten(float squareFlatness)
	static int _bind_base_flatten(lua_State *L) {
		if (!_lg_typecheck_base_flatten(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::base_flatten(float squareFlatness) function, expected prototype:\nvoid proland::LazyCurve::base_flatten(float squareFlatness)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float squareFlatness=(float)lua_tonumber(L,2);

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::base_flatten(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyCurve::flatten(squareFlatness);

		return 0;
	}

	// proland::CurveId proland::LazyCurve::base_getId() const
	static int _bind_base_getId(lua_State *L) {
		if (!_lg_typecheck_base_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::LazyCurve::base_getId() const function, expected prototype:\nproland::CurveId proland::LazyCurve::base_getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::LazyCurve::base_getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->LazyCurve::getId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::LazyCurve::base_getParent() const
	static int _bind_base_getParent(lua_State *L) {
		if (!_lg_typecheck_base_getParent(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::LazyCurve::base_getParent() const function, expected prototype:\nproland::CurvePtr proland::LazyCurve::base_getParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::LazyCurve::base_getParent() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->LazyCurve::getParent();
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::NodePtr proland::LazyCurve::base_getStart() const
	static int _bind_base_getStart(lua_State *L) {
		if (!_lg_typecheck_base_getStart(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::LazyCurve::base_getStart() const function, expected prototype:\nproland::NodePtr proland::LazyCurve::base_getStart() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::LazyCurve::base_getStart() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->LazyCurve::getStart();
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// proland::NodePtr proland::LazyCurve::base_getEnd() const
	static int _bind_base_getEnd(lua_State *L) {
		if (!_lg_typecheck_base_getEnd(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::LazyCurve::base_getEnd() const function, expected prototype:\nproland::NodePtr proland::LazyCurve::base_getEnd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::LazyCurve::base_getEnd() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->LazyCurve::getEnd();
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// void proland::LazyCurve::base_addVertex(proland::NodeId id, bool isEnd = 1)
	static int _bind_base_addVertex_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_addVertex_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::base_addVertex(proland::NodeId id, bool isEnd = 1) function, expected prototype:\nvoid proland::LazyCurve::base_addVertex(proland::NodeId id, bool isEnd = 1)\nClass arguments details:\narg 1 ID = 72107044\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::NodeId* id_ptr=(Luna< proland::NodeId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::LazyCurve::base_addVertex function");
		}
		proland::NodeId id=*id_ptr;
		bool isEnd=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)1;

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::base_addVertex(proland::NodeId, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyCurve::addVertex(id, isEnd);

		return 0;
	}

	// void proland::LazyCurve::base_addVertex(double x, double y, float s, bool isControl)
	static int _bind_base_addVertex_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_addVertex_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::base_addVertex(double x, double y, float s, bool isControl) function, expected prototype:\nvoid proland::LazyCurve::base_addVertex(double x, double y, float s, bool isControl)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		float s=(float)lua_tonumber(L,4);
		bool isControl=(bool)(lua_toboolean(L,5)==1);

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::base_addVertex(double, double, float, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyCurve::addVertex(x, y, s, isControl);

		return 0;
	}

	// void proland::LazyCurve::base_addVertex(ork::vec2d pt, int rank, bool isControl)
	static int _bind_base_addVertex_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_addVertex_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::base_addVertex(ork::vec2d pt, int rank, bool isControl) function, expected prototype:\nvoid proland::LazyCurve::base_addVertex(ork::vec2d pt, int rank, bool isControl)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* pt_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in proland::LazyCurve::base_addVertex function");
		}
		ork::vec2d pt=*pt_ptr;
		int rank=(int)lua_tointeger(L,3);
		bool isControl=(bool)(lua_toboolean(L,4)==1);

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::base_addVertex(ork::vec2d, int, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyCurve::addVertex(pt, rank, isControl);

		return 0;
	}

	// void proland::LazyCurve::base_addVertex(const ork::vec2d & p, float s, float l, bool isControl)
	static int _bind_base_addVertex_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_addVertex_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::base_addVertex(const ork::vec2d & p, float s, float l, bool isControl) function, expected prototype:\nvoid proland::LazyCurve::base_addVertex(const ork::vec2d & p, float s, float l, bool isControl)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::LazyCurve::base_addVertex function");
		}
		const ork::vec2d & p=*p_ptr;
		float s=(float)lua_tonumber(L,3);
		float l=(float)lua_tonumber(L,4);
		bool isControl=(bool)(lua_toboolean(L,5)==1);

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::base_addVertex(const ork::vec2d &, float, float, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyCurve::addVertex(p, s, l, isControl);

		return 0;
	}

	// void proland::LazyCurve::base_addVertex(const proland::Vertex & pt)
	static int _bind_base_addVertex_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_addVertex_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::base_addVertex(const proland::Vertex & pt) function, expected prototype:\nvoid proland::LazyCurve::base_addVertex(const proland::Vertex & pt)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const proland::Vertex* pt_ptr=(Luna< ork::vec2d >::checkSubType< proland::Vertex >(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in proland::LazyCurve::base_addVertex function");
		}
		const proland::Vertex & pt=*pt_ptr;

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::base_addVertex(const proland::Vertex &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyCurve::addVertex(pt);

		return 0;
	}

	// Overload binder for proland::LazyCurve::base_addVertex
	static int _bind_base_addVertex(lua_State *L) {
		if (_lg_typecheck_base_addVertex_overload_1(L)) return _bind_base_addVertex_overload_1(L);
		if (_lg_typecheck_base_addVertex_overload_2(L)) return _bind_base_addVertex_overload_2(L);
		if (_lg_typecheck_base_addVertex_overload_3(L)) return _bind_base_addVertex_overload_3(L);
		if (_lg_typecheck_base_addVertex_overload_4(L)) return _bind_base_addVertex_overload_4(L);
		if (_lg_typecheck_base_addVertex_overload_5(L)) return _bind_base_addVertex_overload_5(L);

		luaL_error(L, "error in function base_addVertex, cannot match any of the overloads for function base_addVertex:\n  base_addVertex(proland::NodeId, bool)\n  base_addVertex(double, double, float, bool)\n  base_addVertex(ork::vec2d, int, bool)\n  base_addVertex(const ork::vec2d &, float, float, bool)\n  base_addVertex(const proland::Vertex &)\n");
		return 0;
	}

	// void proland::LazyCurve::base_loadVertex(proland::NodeId id, bool isEnd = 1)
	static int _bind_base_loadVertex(lua_State *L) {
		if (!_lg_typecheck_base_loadVertex(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::base_loadVertex(proland::NodeId id, bool isEnd = 1) function, expected prototype:\nvoid proland::LazyCurve::base_loadVertex(proland::NodeId id, bool isEnd = 1)\nClass arguments details:\narg 1 ID = 72107044\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::NodeId* id_ptr=(Luna< proland::NodeId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::LazyCurve::base_loadVertex function");
		}
		proland::NodeId id=*id_ptr;
		bool isEnd=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)1;

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::base_loadVertex(proland::NodeId, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyCurve::loadVertex(id, isEnd);

		return 0;
	}

	// void proland::LazyCurve::base_addVertices(const vector< ork::vec2d > & v)
	static int _bind_base_addVertices(lua_State *L) {
		if (!_lg_typecheck_base_addVertices(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::base_addVertices(const vector< ork::vec2d > & v) function, expected prototype:\nvoid proland::LazyCurve::base_addVertices(const vector< ork::vec2d > & v)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const vector< ork::vec2d >* v_ptr=(Luna< vector< ork::vec2d > >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in proland::LazyCurve::base_addVertices function");
		}
		const vector< ork::vec2d > & v=*v_ptr;

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::base_addVertices(const vector< ork::vec2d > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyCurve::addVertices(v);

		return 0;
	}

	// void proland::LazyCurve::base_removeVertex(int i)
	static int _bind_base_removeVertex(lua_State *L) {
		if (!_lg_typecheck_base_removeVertex(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::base_removeVertex(int i) function, expected prototype:\nvoid proland::LazyCurve::base_removeVertex(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::base_removeVertex(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyCurve::removeVertex(i);

		return 0;
	}

	// void proland::LazyCurve::base_setIsControl(int i, bool c)
	static int _bind_base_setIsControl(lua_State *L) {
		if (!_lg_typecheck_base_setIsControl(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::base_setIsControl(int i, bool c) function, expected prototype:\nvoid proland::LazyCurve::base_setIsControl(int i, bool c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		bool c=(bool)(lua_toboolean(L,3)==1);

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::base_setIsControl(int, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyCurve::setIsControl(i, c);

		return 0;
	}

	// void proland::LazyCurve::base_setS(int i, float s)
	static int _bind_base_setS(lua_State *L) {
		if (!_lg_typecheck_base_setS(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::base_setS(int i, float s) function, expected prototype:\nvoid proland::LazyCurve::base_setS(int i, float s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		float s=(float)lua_tonumber(L,3);

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::base_setS(int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyCurve::setS(i, s);

		return 0;
	}

	// void proland::LazyCurve::base_setXY(int i, const ork::vec2d & p)
	static int _bind_base_setXY(lua_State *L) {
		if (!_lg_typecheck_base_setXY(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::base_setXY(int i, const ork::vec2d & p) function, expected prototype:\nvoid proland::LazyCurve::base_setXY(int i, const ork::vec2d & p)\nClass arguments details:\narg 2 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::LazyCurve::base_setXY function");
		}
		const ork::vec2d & p=*p_ptr;

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::base_setXY(int, const ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyCurve::setXY(i, p);

		return 0;
	}

	// void proland::LazyCurve::base_setWidth(float width)
	static int _bind_base_setWidth(lua_State *L) {
		if (!_lg_typecheck_base_setWidth(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::base_setWidth(float width) function, expected prototype:\nvoid proland::LazyCurve::base_setWidth(float width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float width=(float)lua_tonumber(L,2);

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::base_setWidth(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyCurve::setWidth(width);

		return 0;
	}

	// void proland::LazyCurve::base_setType(int type)
	static int _bind_base_setType(lua_State *L) {
		if (!_lg_typecheck_base_setType(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::base_setType(int type) function, expected prototype:\nvoid proland::LazyCurve::base_setType(int type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int type=(int)lua_tointeger(L,2);

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::base_setType(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyCurve::setType(type);

		return 0;
	}

	// void proland::LazyCurve::base_clear()
	static int _bind_base_clear(lua_State *L) {
		if (!_lg_typecheck_base_clear(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::base_clear() function, expected prototype:\nvoid proland::LazyCurve::base_clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::base_clear(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyCurve::clear();

		return 0;
	}

	// void proland::LazyCurve::base_invert()
	static int _bind_base_invert(lua_State *L) {
		if (!_lg_typecheck_base_invert(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::base_invert() function, expected prototype:\nvoid proland::LazyCurve::base_invert()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::base_invert(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyCurve::invert();

		return 0;
	}

	// void proland::LazyCurve::base_addArea(proland::AreaId a)
	static int _bind_base_addArea(lua_State *L) {
		if (!_lg_typecheck_base_addArea(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyCurve::base_addArea(proland::AreaId a) function, expected prototype:\nvoid proland::LazyCurve::base_addArea(proland::AreaId a)\nClass arguments details:\narg 1 ID = 2724636\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::AreaId* a_ptr=(Luna< proland::AreaId >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in proland::LazyCurve::base_addArea function");
		}
		proland::AreaId a=*a_ptr;

		proland::LazyCurve* self=Luna< ork::Object >::checkSubType< proland::LazyCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyCurve::base_addArea(proland::AreaId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyCurve::addArea(a);

		return 0;
	}


	// Operator binds:

};

proland::LazyCurve* LunaTraits< proland::LazyCurve >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_LazyCurve::_bind_ctor(L);
}

void LunaTraits< proland::LazyCurve >::_bind_dtor(proland::LazyCurve* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::LazyCurve >::className[] = "LazyCurve";
const char LunaTraits< proland::LazyCurve >::fullName[] = "proland::LazyCurve";
const char LunaTraits< proland::LazyCurve >::moduleName[] = "proland";
const char* LunaTraits< proland::LazyCurve >::parents[] = {"proland.Curve", 0};
const int LunaTraits< proland::LazyCurve >::hash = 75004852;
const int LunaTraits< proland::LazyCurve >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::LazyCurve >::methods[] = {
	{"getId", &luna_wrapper_proland_LazyCurve::_bind_getId},
	{"getParent", &luna_wrapper_proland_LazyCurve::_bind_getParent},
	{"getStart", &luna_wrapper_proland_LazyCurve::_bind_getStart},
	{"getEnd", &luna_wrapper_proland_LazyCurve::_bind_getEnd},
	{"addVertex", &luna_wrapper_proland_LazyCurve::_bind_addVertex},
	{"loadVertex", &luna_wrapper_proland_LazyCurve::_bind_loadVertex},
	{"addVertices", &luna_wrapper_proland_LazyCurve::_bind_addVertices},
	{"removeVertex", &luna_wrapper_proland_LazyCurve::_bind_removeVertex},
	{"setIsControl", &luna_wrapper_proland_LazyCurve::_bind_setIsControl},
	{"setS", &luna_wrapper_proland_LazyCurve::_bind_setS},
	{"setXY", &luna_wrapper_proland_LazyCurve::_bind_setXY},
	{"setWidth", &luna_wrapper_proland_LazyCurve::_bind_setWidth},
	{"setType", &luna_wrapper_proland_LazyCurve::_bind_setType},
	{"clear", &luna_wrapper_proland_LazyCurve::_bind_clear},
	{"invert", &luna_wrapper_proland_LazyCurve::_bind_invert},
	{"addArea", &luna_wrapper_proland_LazyCurve::_bind_addArea},
	{"loadArea", &luna_wrapper_proland_LazyCurve::_bind_loadArea},
	{"base_toString", &luna_wrapper_proland_LazyCurve::_bind_base_toString},
	{"base_print", &luna_wrapper_proland_LazyCurve::_bind_base_print},
	{"base_getParentId", &luna_wrapper_proland_LazyCurve::_bind_base_getParentId},
	{"base_getAncestorId", &luna_wrapper_proland_LazyCurve::_bind_base_getAncestorId},
	{"base_flatten", &luna_wrapper_proland_LazyCurve::_bind_base_flatten},
	{"base_getId", &luna_wrapper_proland_LazyCurve::_bind_base_getId},
	{"base_getParent", &luna_wrapper_proland_LazyCurve::_bind_base_getParent},
	{"base_getStart", &luna_wrapper_proland_LazyCurve::_bind_base_getStart},
	{"base_getEnd", &luna_wrapper_proland_LazyCurve::_bind_base_getEnd},
	{"base_addVertex", &luna_wrapper_proland_LazyCurve::_bind_base_addVertex},
	{"base_loadVertex", &luna_wrapper_proland_LazyCurve::_bind_base_loadVertex},
	{"base_addVertices", &luna_wrapper_proland_LazyCurve::_bind_base_addVertices},
	{"base_removeVertex", &luna_wrapper_proland_LazyCurve::_bind_base_removeVertex},
	{"base_setIsControl", &luna_wrapper_proland_LazyCurve::_bind_base_setIsControl},
	{"base_setS", &luna_wrapper_proland_LazyCurve::_bind_base_setS},
	{"base_setXY", &luna_wrapper_proland_LazyCurve::_bind_base_setXY},
	{"base_setWidth", &luna_wrapper_proland_LazyCurve::_bind_base_setWidth},
	{"base_setType", &luna_wrapper_proland_LazyCurve::_bind_base_setType},
	{"base_clear", &luna_wrapper_proland_LazyCurve::_bind_base_clear},
	{"base_invert", &luna_wrapper_proland_LazyCurve::_bind_base_invert},
	{"base_addArea", &luna_wrapper_proland_LazyCurve::_bind_base_addArea},
	{"fromVoid", &luna_wrapper_proland_LazyCurve::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_LazyCurve::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_LazyCurve::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::LazyCurve >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_LazyCurve::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::LazyCurve >::enumValues[] = {
	{0,0}
};


