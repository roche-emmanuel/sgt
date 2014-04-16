#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_HydroCurve.h>

class luna_wrapper_proland_HydroCurve {
public:
	typedef Luna< proland::HydroCurve > luna_t;

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

		proland::HydroCurve* self= (proland::HydroCurve*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::HydroCurve >::push(L,self,false);
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
		//proland::HydroCurve* ptr= dynamic_cast< proland::HydroCurve* >(Luna< ork::Object >::check(L,1));
		proland::HydroCurve* ptr= luna_caster< ork::Object, proland::HydroCurve >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::HydroCurve >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPotential(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPotential(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRiver(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRiverPtr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRiver(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_print(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
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

	inline static bool _lg_typecheck_base_print(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::HydroCurve::HydroCurve(proland::Graph * owner)
	static proland::HydroCurve* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::HydroCurve::HydroCurve(proland::Graph * owner) function, expected prototype:\nproland::HydroCurve::HydroCurve(proland::Graph * owner)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,1));

		return new proland::HydroCurve(owner);
	}

	// proland::HydroCurve::HydroCurve(proland::Graph * owner, proland::CurvePtr c, proland::NodePtr s, proland::NodePtr e)
	static proland::HydroCurve* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::HydroCurve::HydroCurve(proland::Graph * owner, proland::CurvePtr c, proland::NodePtr s, proland::NodePtr e) function, expected prototype:\nproland::HydroCurve::HydroCurve(proland::Graph * owner, proland::CurvePtr c, proland::NodePtr s, proland::NodePtr e)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = 98496290\narg 3 ID = 35325349\narg 4 ID = 35325349\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,1));
		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::HydroCurve::HydroCurve function");
		}
		proland::CurvePtr c=*c_ptr;
		proland::NodePtr* s_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,3));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in proland::HydroCurve::HydroCurve function");
		}
		proland::NodePtr s=*s_ptr;
		proland::NodePtr* e_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,4));
		if( !e_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg e in proland::HydroCurve::HydroCurve function");
		}
		proland::NodePtr e=*e_ptr;

		return new proland::HydroCurve(owner, c, s, e);
	}

	// proland::HydroCurve::HydroCurve(lua_Table * data, proland::Graph * owner)
	static proland::HydroCurve* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in proland::HydroCurve::HydroCurve(lua_Table * data, proland::Graph * owner) function, expected prototype:\nproland::HydroCurve::HydroCurve(lua_Table * data, proland::Graph * owner)\nClass arguments details:\narg 2 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));

		return new wrapper_proland_HydroCurve(L,NULL, owner);
	}

	// proland::HydroCurve::HydroCurve(lua_Table * data, proland::Graph * owner, proland::CurvePtr c, proland::NodePtr s, proland::NodePtr e)
	static proland::HydroCurve* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in proland::HydroCurve::HydroCurve(lua_Table * data, proland::Graph * owner, proland::CurvePtr c, proland::NodePtr s, proland::NodePtr e) function, expected prototype:\nproland::HydroCurve::HydroCurve(lua_Table * data, proland::Graph * owner, proland::CurvePtr c, proland::NodePtr s, proland::NodePtr e)\nClass arguments details:\narg 2 ID = 1381405\narg 3 ID = 98496290\narg 4 ID = 35325349\narg 5 ID = 35325349\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));
		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::HydroCurve::HydroCurve function");
		}
		proland::CurvePtr c=*c_ptr;
		proland::NodePtr* s_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,4));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in proland::HydroCurve::HydroCurve function");
		}
		proland::NodePtr s=*s_ptr;
		proland::NodePtr* e_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,5));
		if( !e_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg e in proland::HydroCurve::HydroCurve function");
		}
		proland::NodePtr e=*e_ptr;

		return new wrapper_proland_HydroCurve(L,NULL, owner, c, s, e);
	}

	// Overload binder for proland::HydroCurve::HydroCurve
	static proland::HydroCurve* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function HydroCurve, cannot match any of the overloads for function HydroCurve:\n  HydroCurve(proland::Graph *)\n  HydroCurve(proland::Graph *, proland::CurvePtr, proland::NodePtr, proland::NodePtr)\n  HydroCurve(lua_Table *, proland::Graph *)\n  HydroCurve(lua_Table *, proland::Graph *, proland::CurvePtr, proland::NodePtr, proland::NodePtr)\n");
		return NULL;
	}


	// Function binds:
	// float proland::HydroCurve::getWidth() const
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in float proland::HydroCurve::getWidth() const function, expected prototype:\nfloat proland::HydroCurve::getWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::HydroCurve::getWidth() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::HydroCurve::getPotential() const
	static int _bind_getPotential(lua_State *L) {
		if (!_lg_typecheck_getPotential(L)) {
			luaL_error(L, "luna typecheck failed in float proland::HydroCurve::getPotential() const function, expected prototype:\nfloat proland::HydroCurve::getPotential() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::HydroCurve::getPotential() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getPotential();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::HydroCurve::setPotential(float potential)
	static int _bind_setPotential(lua_State *L) {
		if (!_lg_typecheck_setPotential(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::setPotential(float potential) function, expected prototype:\nvoid proland::HydroCurve::setPotential(float potential)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float potential=(float)lua_tonumber(L,2);

		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::setPotential(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPotential(potential);

		return 0;
	}

	// proland::CurveId proland::HydroCurve::getRiver() const
	static int _bind_getRiver(lua_State *L) {
		if (!_lg_typecheck_getRiver(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::HydroCurve::getRiver() const function, expected prototype:\nproland::CurveId proland::HydroCurve::getRiver() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::HydroCurve::getRiver() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->getRiver();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::HydroCurve::getRiverPtr() const
	static int _bind_getRiverPtr(lua_State *L) {
		if (!_lg_typecheck_getRiverPtr(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::HydroCurve::getRiverPtr() const function, expected prototype:\nproland::CurvePtr proland::HydroCurve::getRiverPtr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::HydroCurve::getRiverPtr() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->getRiverPtr();
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// void proland::HydroCurve::setRiver(proland::CurveId river)
	static int _bind_setRiver(lua_State *L) {
		if (!_lg_typecheck_setRiver(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::setRiver(proland::CurveId river) function, expected prototype:\nvoid proland::HydroCurve::setRiver(proland::CurveId river)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* river_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !river_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg river in proland::HydroCurve::setRiver function");
		}
		proland::CurveId river=*river_ptr;

		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::setRiver(proland::CurveId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRiver(river);

		return 0;
	}

	// void proland::HydroCurve::print() const
	static int _bind_print(lua_State *L) {
		if (!_lg_typecheck_print(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::print() const function, expected prototype:\nvoid proland::HydroCurve::print() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::print() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->print();

		return 0;
	}

	// const char * proland::HydroCurve::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::HydroCurve::base_toString() function, expected prototype:\nconst char * proland::HydroCurve::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::HydroCurve::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->HydroCurve::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// proland::CurveId proland::HydroCurve::base_getId() const
	static int _bind_base_getId(lua_State *L) {
		if (!_lg_typecheck_base_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::HydroCurve::base_getId() const function, expected prototype:\nproland::CurveId proland::HydroCurve::base_getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::HydroCurve::base_getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->HydroCurve::getId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::HydroCurve::base_getParent() const
	static int _bind_base_getParent(lua_State *L) {
		if (!_lg_typecheck_base_getParent(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::HydroCurve::base_getParent() const function, expected prototype:\nproland::CurvePtr proland::HydroCurve::base_getParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::HydroCurve::base_getParent() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->HydroCurve::getParent();
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurveId proland::HydroCurve::base_getParentId() const
	static int _bind_base_getParentId(lua_State *L) {
		if (!_lg_typecheck_base_getParentId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::HydroCurve::base_getParentId() const function, expected prototype:\nproland::CurveId proland::HydroCurve::base_getParentId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::HydroCurve::base_getParentId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->HydroCurve::getParentId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::CurveId proland::HydroCurve::base_getAncestorId() const
	static int _bind_base_getAncestorId(lua_State *L) {
		if (!_lg_typecheck_base_getAncestorId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::HydroCurve::base_getAncestorId() const function, expected prototype:\nproland::CurveId proland::HydroCurve::base_getAncestorId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::HydroCurve::base_getAncestorId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->HydroCurve::getAncestorId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::NodePtr proland::HydroCurve::base_getStart() const
	static int _bind_base_getStart(lua_State *L) {
		if (!_lg_typecheck_base_getStart(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::HydroCurve::base_getStart() const function, expected prototype:\nproland::NodePtr proland::HydroCurve::base_getStart() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::HydroCurve::base_getStart() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->HydroCurve::getStart();
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// proland::NodePtr proland::HydroCurve::base_getEnd() const
	static int _bind_base_getEnd(lua_State *L) {
		if (!_lg_typecheck_base_getEnd(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::HydroCurve::base_getEnd() const function, expected prototype:\nproland::NodePtr proland::HydroCurve::base_getEnd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::HydroCurve::base_getEnd() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->HydroCurve::getEnd();
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// void proland::HydroCurve::base_addVertex(proland::NodeId id, bool isEnd = 1)
	static int _bind_base_addVertex_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_addVertex_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::base_addVertex(proland::NodeId id, bool isEnd = 1) function, expected prototype:\nvoid proland::HydroCurve::base_addVertex(proland::NodeId id, bool isEnd = 1)\nClass arguments details:\narg 1 ID = 72107044\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::NodeId* id_ptr=(Luna< proland::NodeId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::HydroCurve::base_addVertex function");
		}
		proland::NodeId id=*id_ptr;
		bool isEnd=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)1;

		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::base_addVertex(proland::NodeId, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroCurve::addVertex(id, isEnd);

		return 0;
	}

	// void proland::HydroCurve::base_addVertex(double x, double y, float s, bool isControl)
	static int _bind_base_addVertex_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_addVertex_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::base_addVertex(double x, double y, float s, bool isControl) function, expected prototype:\nvoid proland::HydroCurve::base_addVertex(double x, double y, float s, bool isControl)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		float s=(float)lua_tonumber(L,4);
		bool isControl=(bool)(lua_toboolean(L,5)==1);

		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::base_addVertex(double, double, float, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroCurve::addVertex(x, y, s, isControl);

		return 0;
	}

	// void proland::HydroCurve::base_addVertex(ork::vec2d pt, int rank, bool isControl)
	static int _bind_base_addVertex_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_addVertex_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::base_addVertex(ork::vec2d pt, int rank, bool isControl) function, expected prototype:\nvoid proland::HydroCurve::base_addVertex(ork::vec2d pt, int rank, bool isControl)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* pt_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in proland::HydroCurve::base_addVertex function");
		}
		ork::vec2d pt=*pt_ptr;
		int rank=(int)lua_tointeger(L,3);
		bool isControl=(bool)(lua_toboolean(L,4)==1);

		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::base_addVertex(ork::vec2d, int, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroCurve::addVertex(pt, rank, isControl);

		return 0;
	}

	// void proland::HydroCurve::base_addVertex(const ork::vec2d & p, float s, float l, bool isControl)
	static int _bind_base_addVertex_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_addVertex_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::base_addVertex(const ork::vec2d & p, float s, float l, bool isControl) function, expected prototype:\nvoid proland::HydroCurve::base_addVertex(const ork::vec2d & p, float s, float l, bool isControl)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::HydroCurve::base_addVertex function");
		}
		const ork::vec2d & p=*p_ptr;
		float s=(float)lua_tonumber(L,3);
		float l=(float)lua_tonumber(L,4);
		bool isControl=(bool)(lua_toboolean(L,5)==1);

		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::base_addVertex(const ork::vec2d &, float, float, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroCurve::addVertex(p, s, l, isControl);

		return 0;
	}

	// void proland::HydroCurve::base_addVertex(const proland::Vertex & pt)
	static int _bind_base_addVertex_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_addVertex_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::base_addVertex(const proland::Vertex & pt) function, expected prototype:\nvoid proland::HydroCurve::base_addVertex(const proland::Vertex & pt)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const proland::Vertex* pt_ptr=(Luna< ork::vec2d >::checkSubType< proland::Vertex >(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in proland::HydroCurve::base_addVertex function");
		}
		const proland::Vertex & pt=*pt_ptr;

		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::base_addVertex(const proland::Vertex &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroCurve::addVertex(pt);

		return 0;
	}

	// Overload binder for proland::HydroCurve::base_addVertex
	static int _bind_base_addVertex(lua_State *L) {
		if (_lg_typecheck_base_addVertex_overload_1(L)) return _bind_base_addVertex_overload_1(L);
		if (_lg_typecheck_base_addVertex_overload_2(L)) return _bind_base_addVertex_overload_2(L);
		if (_lg_typecheck_base_addVertex_overload_3(L)) return _bind_base_addVertex_overload_3(L);
		if (_lg_typecheck_base_addVertex_overload_4(L)) return _bind_base_addVertex_overload_4(L);
		if (_lg_typecheck_base_addVertex_overload_5(L)) return _bind_base_addVertex_overload_5(L);

		luaL_error(L, "error in function base_addVertex, cannot match any of the overloads for function base_addVertex:\n  base_addVertex(proland::NodeId, bool)\n  base_addVertex(double, double, float, bool)\n  base_addVertex(ork::vec2d, int, bool)\n  base_addVertex(const ork::vec2d &, float, float, bool)\n  base_addVertex(const proland::Vertex &)\n");
		return 0;
	}

	// void proland::HydroCurve::base_addVertices(const vector< ork::vec2d > & v)
	static int _bind_base_addVertices(lua_State *L) {
		if (!_lg_typecheck_base_addVertices(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::base_addVertices(const vector< ork::vec2d > & v) function, expected prototype:\nvoid proland::HydroCurve::base_addVertices(const vector< ork::vec2d > & v)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const vector< ork::vec2d >* v_ptr=(Luna< vector< ork::vec2d > >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in proland::HydroCurve::base_addVertices function");
		}
		const vector< ork::vec2d > & v=*v_ptr;

		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::base_addVertices(const vector< ork::vec2d > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroCurve::addVertices(v);

		return 0;
	}

	// void proland::HydroCurve::base_removeVertex(int i)
	static int _bind_base_removeVertex(lua_State *L) {
		if (!_lg_typecheck_base_removeVertex(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::base_removeVertex(int i) function, expected prototype:\nvoid proland::HydroCurve::base_removeVertex(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::base_removeVertex(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroCurve::removeVertex(i);

		return 0;
	}

	// void proland::HydroCurve::base_setIsControl(int i, bool c)
	static int _bind_base_setIsControl(lua_State *L) {
		if (!_lg_typecheck_base_setIsControl(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::base_setIsControl(int i, bool c) function, expected prototype:\nvoid proland::HydroCurve::base_setIsControl(int i, bool c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		bool c=(bool)(lua_toboolean(L,3)==1);

		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::base_setIsControl(int, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroCurve::setIsControl(i, c);

		return 0;
	}

	// void proland::HydroCurve::base_setS(int i, float s)
	static int _bind_base_setS(lua_State *L) {
		if (!_lg_typecheck_base_setS(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::base_setS(int i, float s) function, expected prototype:\nvoid proland::HydroCurve::base_setS(int i, float s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		float s=(float)lua_tonumber(L,3);

		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::base_setS(int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroCurve::setS(i, s);

		return 0;
	}

	// void proland::HydroCurve::base_setXY(int i, const ork::vec2d & p)
	static int _bind_base_setXY(lua_State *L) {
		if (!_lg_typecheck_base_setXY(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::base_setXY(int i, const ork::vec2d & p) function, expected prototype:\nvoid proland::HydroCurve::base_setXY(int i, const ork::vec2d & p)\nClass arguments details:\narg 2 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::HydroCurve::base_setXY function");
		}
		const ork::vec2d & p=*p_ptr;

		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::base_setXY(int, const ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroCurve::setXY(i, p);

		return 0;
	}

	// void proland::HydroCurve::base_setWidth(float width)
	static int _bind_base_setWidth(lua_State *L) {
		if (!_lg_typecheck_base_setWidth(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::base_setWidth(float width) function, expected prototype:\nvoid proland::HydroCurve::base_setWidth(float width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float width=(float)lua_tonumber(L,2);

		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::base_setWidth(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroCurve::setWidth(width);

		return 0;
	}

	// void proland::HydroCurve::base_setType(int type)
	static int _bind_base_setType(lua_State *L) {
		if (!_lg_typecheck_base_setType(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::base_setType(int type) function, expected prototype:\nvoid proland::HydroCurve::base_setType(int type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int type=(int)lua_tointeger(L,2);

		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::base_setType(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroCurve::setType(type);

		return 0;
	}

	// void proland::HydroCurve::base_flatten(float squareFlatness)
	static int _bind_base_flatten(lua_State *L) {
		if (!_lg_typecheck_base_flatten(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::base_flatten(float squareFlatness) function, expected prototype:\nvoid proland::HydroCurve::base_flatten(float squareFlatness)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float squareFlatness=(float)lua_tonumber(L,2);

		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::base_flatten(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroCurve::flatten(squareFlatness);

		return 0;
	}

	// void proland::HydroCurve::base_clear()
	static int _bind_base_clear(lua_State *L) {
		if (!_lg_typecheck_base_clear(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::base_clear() function, expected prototype:\nvoid proland::HydroCurve::base_clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::base_clear(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroCurve::clear();

		return 0;
	}

	// void proland::HydroCurve::base_invert()
	static int _bind_base_invert(lua_State *L) {
		if (!_lg_typecheck_base_invert(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::base_invert() function, expected prototype:\nvoid proland::HydroCurve::base_invert()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::base_invert(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroCurve::invert();

		return 0;
	}

	// void proland::HydroCurve::base_addArea(proland::AreaId a)
	static int _bind_base_addArea(lua_State *L) {
		if (!_lg_typecheck_base_addArea(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::base_addArea(proland::AreaId a) function, expected prototype:\nvoid proland::HydroCurve::base_addArea(proland::AreaId a)\nClass arguments details:\narg 1 ID = 2724636\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::AreaId* a_ptr=(Luna< proland::AreaId >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in proland::HydroCurve::base_addArea function");
		}
		proland::AreaId a=*a_ptr;

		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::base_addArea(proland::AreaId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroCurve::addArea(a);

		return 0;
	}

	// void proland::HydroCurve::base_print() const
	static int _bind_base_print(lua_State *L) {
		if (!_lg_typecheck_base_print(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroCurve::base_print() const function, expected prototype:\nvoid proland::HydroCurve::base_print() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroCurve* self=Luna< ork::Object >::checkSubType< proland::HydroCurve >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroCurve::base_print() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroCurve::print();

		return 0;
	}


	// Operator binds:

};

proland::HydroCurve* LunaTraits< proland::HydroCurve >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_HydroCurve::_bind_ctor(L);
}

void LunaTraits< proland::HydroCurve >::_bind_dtor(proland::HydroCurve* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::HydroCurve >::className[] = "HydroCurve";
const char LunaTraits< proland::HydroCurve >::fullName[] = "proland::HydroCurve";
const char LunaTraits< proland::HydroCurve >::moduleName[] = "proland";
const char* LunaTraits< proland::HydroCurve >::parents[] = {"proland.Curve", 0};
const int LunaTraits< proland::HydroCurve >::hash = 57778691;
const int LunaTraits< proland::HydroCurve >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::HydroCurve >::methods[] = {
	{"getWidth", &luna_wrapper_proland_HydroCurve::_bind_getWidth},
	{"getPotential", &luna_wrapper_proland_HydroCurve::_bind_getPotential},
	{"setPotential", &luna_wrapper_proland_HydroCurve::_bind_setPotential},
	{"getRiver", &luna_wrapper_proland_HydroCurve::_bind_getRiver},
	{"getRiverPtr", &luna_wrapper_proland_HydroCurve::_bind_getRiverPtr},
	{"setRiver", &luna_wrapper_proland_HydroCurve::_bind_setRiver},
	{"print", &luna_wrapper_proland_HydroCurve::_bind_print},
	{"base_toString", &luna_wrapper_proland_HydroCurve::_bind_base_toString},
	{"base_getId", &luna_wrapper_proland_HydroCurve::_bind_base_getId},
	{"base_getParent", &luna_wrapper_proland_HydroCurve::_bind_base_getParent},
	{"base_getParentId", &luna_wrapper_proland_HydroCurve::_bind_base_getParentId},
	{"base_getAncestorId", &luna_wrapper_proland_HydroCurve::_bind_base_getAncestorId},
	{"base_getStart", &luna_wrapper_proland_HydroCurve::_bind_base_getStart},
	{"base_getEnd", &luna_wrapper_proland_HydroCurve::_bind_base_getEnd},
	{"base_addVertex", &luna_wrapper_proland_HydroCurve::_bind_base_addVertex},
	{"base_addVertices", &luna_wrapper_proland_HydroCurve::_bind_base_addVertices},
	{"base_removeVertex", &luna_wrapper_proland_HydroCurve::_bind_base_removeVertex},
	{"base_setIsControl", &luna_wrapper_proland_HydroCurve::_bind_base_setIsControl},
	{"base_setS", &luna_wrapper_proland_HydroCurve::_bind_base_setS},
	{"base_setXY", &luna_wrapper_proland_HydroCurve::_bind_base_setXY},
	{"base_setWidth", &luna_wrapper_proland_HydroCurve::_bind_base_setWidth},
	{"base_setType", &luna_wrapper_proland_HydroCurve::_bind_base_setType},
	{"base_flatten", &luna_wrapper_proland_HydroCurve::_bind_base_flatten},
	{"base_clear", &luna_wrapper_proland_HydroCurve::_bind_base_clear},
	{"base_invert", &luna_wrapper_proland_HydroCurve::_bind_base_invert},
	{"base_addArea", &luna_wrapper_proland_HydroCurve::_bind_base_addArea},
	{"base_print", &luna_wrapper_proland_HydroCurve::_bind_base_print},
	{"fromVoid", &luna_wrapper_proland_HydroCurve::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_HydroCurve::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_HydroCurve::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::HydroCurve >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_HydroCurve::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::HydroCurve >::enumValues[] = {
	{"AXIS", proland::HydroCurve::AXIS},
	{"CLOSING_SEGMENT", proland::HydroCurve::CLOSING_SEGMENT},
	{"BANK", proland::HydroCurve::BANK},
	{0,0}
};


