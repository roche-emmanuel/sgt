#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_BasicCurvePart.h>

class luna_wrapper_proland_BasicCurvePart {
public:
	typedef Luna< proland::BasicCurvePart > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::CurvePart,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		proland::BasicCurvePart* self= (proland::BasicCurvePart*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::BasicCurvePart >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53366307) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_CurvePart(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::BasicCurvePart* ptr= dynamic_cast< proland::BasicCurvePart* >(Luna< proland::CurvePart >::check(L,1));
		proland::BasicCurvePart* ptr= luna_caster< proland::CurvePart, proland::BasicCurvePart >::cast(Luna< proland::CurvePart >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::BasicCurvePart >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,1))) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,1))) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParentId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurve(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurveIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_getEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getXY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIsControl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_canClip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clip(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getParentId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getCurve(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getXY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getIsControl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getBounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_canClip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_clip(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::BasicCurvePart::BasicCurvePart(proland::CurvePtr p, int start, int end)
	static proland::BasicCurvePart* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::BasicCurvePart::BasicCurvePart(proland::CurvePtr p, int start, int end) function, expected prototype:\nproland::BasicCurvePart::BasicCurvePart(proland::CurvePtr p, int start, int end)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* p_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,1));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::BasicCurvePart::BasicCurvePart function");
		}
		proland::CurvePtr p=*p_ptr;
		int start=(int)lua_tointeger(L,2);
		int end=(int)lua_tointeger(L,3);

		return new proland::BasicCurvePart(p, start, end);
	}

	// proland::BasicCurvePart::BasicCurvePart(proland::CurvePtr p, int orientation, int start, int end)
	static proland::BasicCurvePart* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::BasicCurvePart::BasicCurvePart(proland::CurvePtr p, int orientation, int start, int end) function, expected prototype:\nproland::BasicCurvePart::BasicCurvePart(proland::CurvePtr p, int orientation, int start, int end)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* p_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,1));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::BasicCurvePart::BasicCurvePart function");
		}
		proland::CurvePtr p=*p_ptr;
		int orientation=(int)lua_tointeger(L,2);
		int start=(int)lua_tointeger(L,3);
		int end=(int)lua_tointeger(L,4);

		return new proland::BasicCurvePart(p, orientation, start, end);
	}

	// proland::BasicCurvePart::BasicCurvePart(lua_Table * data, proland::CurvePtr p, int start, int end)
	static proland::BasicCurvePart* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in proland::BasicCurvePart::BasicCurvePart(lua_Table * data, proland::CurvePtr p, int start, int end) function, expected prototype:\nproland::BasicCurvePart::BasicCurvePart(lua_Table * data, proland::CurvePtr p, int start, int end)\nClass arguments details:\narg 2 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* p_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::BasicCurvePart::BasicCurvePart function");
		}
		proland::CurvePtr p=*p_ptr;
		int start=(int)lua_tointeger(L,3);
		int end=(int)lua_tointeger(L,4);

		return new wrapper_proland_BasicCurvePart(L,NULL, p, start, end);
	}

	// proland::BasicCurvePart::BasicCurvePart(lua_Table * data, proland::CurvePtr p, int orientation, int start, int end)
	static proland::BasicCurvePart* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in proland::BasicCurvePart::BasicCurvePart(lua_Table * data, proland::CurvePtr p, int orientation, int start, int end) function, expected prototype:\nproland::BasicCurvePart::BasicCurvePart(lua_Table * data, proland::CurvePtr p, int orientation, int start, int end)\nClass arguments details:\narg 2 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* p_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::BasicCurvePart::BasicCurvePart function");
		}
		proland::CurvePtr p=*p_ptr;
		int orientation=(int)lua_tointeger(L,3);
		int start=(int)lua_tointeger(L,4);
		int end=(int)lua_tointeger(L,5);

		return new wrapper_proland_BasicCurvePart(L,NULL, p, orientation, start, end);
	}

	// Overload binder for proland::BasicCurvePart::BasicCurvePart
	static proland::BasicCurvePart* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function BasicCurvePart, cannot match any of the overloads for function BasicCurvePart:\n  BasicCurvePart(proland::CurvePtr, int, int)\n  BasicCurvePart(proland::CurvePtr, int, int, int)\n  BasicCurvePart(lua_Table *, proland::CurvePtr, int, int)\n  BasicCurvePart(lua_Table *, proland::CurvePtr, int, int, int)\n");
		return NULL;
	}


	// Function binds:
	// proland::CurveId proland::BasicCurvePart::getId() const
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::BasicCurvePart::getId() const function, expected prototype:\nproland::CurveId proland::BasicCurvePart::getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::BasicCurvePart::getId() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->getId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::CurveId proland::BasicCurvePart::getParentId() const
	static int _bind_getParentId(lua_State *L) {
		if (!_lg_typecheck_getParentId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::BasicCurvePart::getParentId() const function, expected prototype:\nproland::CurveId proland::BasicCurvePart::getParentId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::BasicCurvePart::getParentId() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->getParentId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::BasicCurvePart::getCurve() const
	static int _bind_getCurve(lua_State *L) {
		if (!_lg_typecheck_getCurve(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::BasicCurvePart::getCurve() const function, expected prototype:\nproland::CurvePtr proland::BasicCurvePart::getCurve() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::BasicCurvePart::getCurve() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->getCurve();
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// int proland::BasicCurvePart::getCurveIndex(int i) const
	static int _bind_getCurveIndex(lua_State *L) {
		if (!_lg_typecheck_getCurveIndex(L)) {
			luaL_error(L, "luna typecheck failed in int proland::BasicCurvePart::getCurveIndex(int i) const function, expected prototype:\nint proland::BasicCurvePart::getCurveIndex(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::BasicCurvePart::getCurveIndex(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCurveIndex(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::BasicCurvePart::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in int proland::BasicCurvePart::getType() const function, expected prototype:\nint proland::BasicCurvePart::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::BasicCurvePart::getType() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::BasicCurvePart::getWidth() const
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in float proland::BasicCurvePart::getWidth() const function, expected prototype:\nfloat proland::BasicCurvePart::getWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::BasicCurvePart::getWidth() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::BasicCurvePart::getEnd() const
	static int _bind_getEnd(lua_State *L) {
		if (!_lg_typecheck_getEnd(L)) {
			luaL_error(L, "luna typecheck failed in int proland::BasicCurvePart::getEnd() const function, expected prototype:\nint proland::BasicCurvePart::getEnd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::BasicCurvePart::getEnd() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec2d proland::BasicCurvePart::getXY(int i) const
	static int _bind_getXY(lua_State *L) {
		if (!_lg_typecheck_getXY(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2d proland::BasicCurvePart::getXY(int i) const function, expected prototype:\nork::vec2d proland::BasicCurvePart::getXY(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2d proland::BasicCurvePart::getXY(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2d stack_lret = self->getXY(i);
		ork::vec2d* lret = new ork::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2d >::push(L,lret,true);

		return 1;
	}

	// bool proland::BasicCurvePart::getIsControl(int i) const
	static int _bind_getIsControl(lua_State *L) {
		if (!_lg_typecheck_getIsControl(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicCurvePart::getIsControl(int i) const function, expected prototype:\nbool proland::BasicCurvePart::getIsControl(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicCurvePart::getIsControl(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getIsControl(i);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float proland::BasicCurvePart::getS(int i) const
	static int _bind_getS(lua_State *L) {
		if (!_lg_typecheck_getS(L)) {
			luaL_error(L, "luna typecheck failed in float proland::BasicCurvePart::getS(int i) const function, expected prototype:\nfloat proland::BasicCurvePart::getS(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::BasicCurvePart::getS(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getS(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::box2d proland::BasicCurvePart::getBounds() const
	static int _bind_getBounds(lua_State *L) {
		if (!_lg_typecheck_getBounds(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2d proland::BasicCurvePart::getBounds() const function, expected prototype:\nork::box2d proland::BasicCurvePart::getBounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2d proland::BasicCurvePart::getBounds() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2d stack_lret = self->getBounds();
		ork::box2d* lret = new ork::box2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2d >::push(L,lret,true);

		return 1;
	}

	// bool proland::BasicCurvePart::canClip(int i) const
	static int _bind_canClip(lua_State *L) {
		if (!_lg_typecheck_canClip(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicCurvePart::canClip(int i) const function, expected prototype:\nbool proland::BasicCurvePart::canClip(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicCurvePart::canClip(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->canClip(i);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// proland::CurvePart * proland::BasicCurvePart::clip(int start, int end) const
	static int _bind_clip(lua_State *L) {
		if (!_lg_typecheck_clip(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePart * proland::BasicCurvePart::clip(int start, int end) const function, expected prototype:\nproland::CurvePart * proland::BasicCurvePart::clip(int start, int end) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int start=(int)lua_tointeger(L,2);
		int end=(int)lua_tointeger(L,3);

		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePart * proland::BasicCurvePart::clip(int, int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePart * lret = self->clip(start, end);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePart >::push(L,lret,false);

		return 1;
	}

	// proland::CurveId proland::BasicCurvePart::base_getId() const
	static int _bind_base_getId(lua_State *L) {
		if (!_lg_typecheck_base_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::BasicCurvePart::base_getId() const function, expected prototype:\nproland::CurveId proland::BasicCurvePart::base_getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::BasicCurvePart::base_getId() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->BasicCurvePart::getId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::CurveId proland::BasicCurvePart::base_getParentId() const
	static int _bind_base_getParentId(lua_State *L) {
		if (!_lg_typecheck_base_getParentId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::BasicCurvePart::base_getParentId() const function, expected prototype:\nproland::CurveId proland::BasicCurvePart::base_getParentId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::BasicCurvePart::base_getParentId() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->BasicCurvePart::getParentId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::BasicCurvePart::base_getCurve() const
	static int _bind_base_getCurve(lua_State *L) {
		if (!_lg_typecheck_base_getCurve(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::BasicCurvePart::base_getCurve() const function, expected prototype:\nproland::CurvePtr proland::BasicCurvePart::base_getCurve() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::BasicCurvePart::base_getCurve() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->BasicCurvePart::getCurve();
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// int proland::BasicCurvePart::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in int proland::BasicCurvePart::base_getType() const function, expected prototype:\nint proland::BasicCurvePart::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::BasicCurvePart::base_getType() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->BasicCurvePart::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::BasicCurvePart::base_getWidth() const
	static int _bind_base_getWidth(lua_State *L) {
		if (!_lg_typecheck_base_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in float proland::BasicCurvePart::base_getWidth() const function, expected prototype:\nfloat proland::BasicCurvePart::base_getWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::BasicCurvePart::base_getWidth() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->BasicCurvePart::getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::BasicCurvePart::base_getEnd() const
	static int _bind_base_getEnd(lua_State *L) {
		if (!_lg_typecheck_base_getEnd(L)) {
			luaL_error(L, "luna typecheck failed in int proland::BasicCurvePart::base_getEnd() const function, expected prototype:\nint proland::BasicCurvePart::base_getEnd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::BasicCurvePart::base_getEnd() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->BasicCurvePart::getEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec2d proland::BasicCurvePart::base_getXY(int i) const
	static int _bind_base_getXY(lua_State *L) {
		if (!_lg_typecheck_base_getXY(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2d proland::BasicCurvePart::base_getXY(int i) const function, expected prototype:\nork::vec2d proland::BasicCurvePart::base_getXY(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2d proland::BasicCurvePart::base_getXY(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2d stack_lret = self->BasicCurvePart::getXY(i);
		ork::vec2d* lret = new ork::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2d >::push(L,lret,true);

		return 1;
	}

	// bool proland::BasicCurvePart::base_getIsControl(int i) const
	static int _bind_base_getIsControl(lua_State *L) {
		if (!_lg_typecheck_base_getIsControl(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicCurvePart::base_getIsControl(int i) const function, expected prototype:\nbool proland::BasicCurvePart::base_getIsControl(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicCurvePart::base_getIsControl(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BasicCurvePart::getIsControl(i);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float proland::BasicCurvePart::base_getS(int i) const
	static int _bind_base_getS(lua_State *L) {
		if (!_lg_typecheck_base_getS(L)) {
			luaL_error(L, "luna typecheck failed in float proland::BasicCurvePart::base_getS(int i) const function, expected prototype:\nfloat proland::BasicCurvePart::base_getS(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::BasicCurvePart::base_getS(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->BasicCurvePart::getS(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::box2d proland::BasicCurvePart::base_getBounds() const
	static int _bind_base_getBounds(lua_State *L) {
		if (!_lg_typecheck_base_getBounds(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2d proland::BasicCurvePart::base_getBounds() const function, expected prototype:\nork::box2d proland::BasicCurvePart::base_getBounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2d proland::BasicCurvePart::base_getBounds() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2d stack_lret = self->BasicCurvePart::getBounds();
		ork::box2d* lret = new ork::box2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2d >::push(L,lret,true);

		return 1;
	}

	// bool proland::BasicCurvePart::base_canClip(int i) const
	static int _bind_base_canClip(lua_State *L) {
		if (!_lg_typecheck_base_canClip(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicCurvePart::base_canClip(int i) const function, expected prototype:\nbool proland::BasicCurvePart::base_canClip(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicCurvePart::base_canClip(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BasicCurvePart::canClip(i);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// proland::CurvePart * proland::BasicCurvePart::base_clip(int start, int end) const
	static int _bind_base_clip(lua_State *L) {
		if (!_lg_typecheck_base_clip(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePart * proland::BasicCurvePart::base_clip(int start, int end) const function, expected prototype:\nproland::CurvePart * proland::BasicCurvePart::base_clip(int start, int end) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int start=(int)lua_tointeger(L,2);
		int end=(int)lua_tointeger(L,3);

		proland::BasicCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::BasicCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePart * proland::BasicCurvePart::base_clip(int, int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePart * lret = self->BasicCurvePart::clip(start, end);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePart >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

proland::BasicCurvePart* LunaTraits< proland::BasicCurvePart >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_BasicCurvePart::_bind_ctor(L);
}

void LunaTraits< proland::BasicCurvePart >::_bind_dtor(proland::BasicCurvePart* obj) {
	delete obj;
}

const char LunaTraits< proland::BasicCurvePart >::className[] = "BasicCurvePart";
const char LunaTraits< proland::BasicCurvePart >::fullName[] = "proland::BasicCurvePart";
const char LunaTraits< proland::BasicCurvePart >::moduleName[] = "proland";
const char* LunaTraits< proland::BasicCurvePart >::parents[] = {"proland.CurvePart", 0};
const int LunaTraits< proland::BasicCurvePart >::hash = 64711754;
const int LunaTraits< proland::BasicCurvePart >::uniqueIDs[] = {53366307,0};

luna_RegType LunaTraits< proland::BasicCurvePart >::methods[] = {
	{"getId", &luna_wrapper_proland_BasicCurvePart::_bind_getId},
	{"getParentId", &luna_wrapper_proland_BasicCurvePart::_bind_getParentId},
	{"getCurve", &luna_wrapper_proland_BasicCurvePart::_bind_getCurve},
	{"getCurveIndex", &luna_wrapper_proland_BasicCurvePart::_bind_getCurveIndex},
	{"getType", &luna_wrapper_proland_BasicCurvePart::_bind_getType},
	{"getWidth", &luna_wrapper_proland_BasicCurvePart::_bind_getWidth},
	{"getEnd", &luna_wrapper_proland_BasicCurvePart::_bind_getEnd},
	{"getXY", &luna_wrapper_proland_BasicCurvePart::_bind_getXY},
	{"getIsControl", &luna_wrapper_proland_BasicCurvePart::_bind_getIsControl},
	{"getS", &luna_wrapper_proland_BasicCurvePart::_bind_getS},
	{"getBounds", &luna_wrapper_proland_BasicCurvePart::_bind_getBounds},
	{"canClip", &luna_wrapper_proland_BasicCurvePart::_bind_canClip},
	{"clip", &luna_wrapper_proland_BasicCurvePart::_bind_clip},
	{"base_getId", &luna_wrapper_proland_BasicCurvePart::_bind_base_getId},
	{"base_getParentId", &luna_wrapper_proland_BasicCurvePart::_bind_base_getParentId},
	{"base_getCurve", &luna_wrapper_proland_BasicCurvePart::_bind_base_getCurve},
	{"base_getType", &luna_wrapper_proland_BasicCurvePart::_bind_base_getType},
	{"base_getWidth", &luna_wrapper_proland_BasicCurvePart::_bind_base_getWidth},
	{"base_getEnd", &luna_wrapper_proland_BasicCurvePart::_bind_base_getEnd},
	{"base_getXY", &luna_wrapper_proland_BasicCurvePart::_bind_base_getXY},
	{"base_getIsControl", &luna_wrapper_proland_BasicCurvePart::_bind_base_getIsControl},
	{"base_getS", &luna_wrapper_proland_BasicCurvePart::_bind_base_getS},
	{"base_getBounds", &luna_wrapper_proland_BasicCurvePart::_bind_base_getBounds},
	{"base_canClip", &luna_wrapper_proland_BasicCurvePart::_bind_base_canClip},
	{"base_clip", &luna_wrapper_proland_BasicCurvePart::_bind_base_clip},
	{"fromVoid", &luna_wrapper_proland_BasicCurvePart::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_BasicCurvePart::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_BasicCurvePart::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::BasicCurvePart >::converters[] = {
	{"proland::CurvePart", &luna_wrapper_proland_BasicCurvePart::_cast_from_CurvePart},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::BasicCurvePart >::enumValues[] = {
	{0,0}
};


