#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_LineCurvePart.h>

class luna_wrapper_proland_LineCurvePart {
public:
	typedef Luna< proland::LineCurvePart > luna_t;

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

		proland::LineCurvePart* self= (proland::LineCurvePart*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::LineCurvePart >::push(L,self,false);
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
		//proland::LineCurvePart* ptr= dynamic_cast< proland::LineCurvePart* >(Luna< proland::CurvePart >::check(L,1));
		proland::LineCurvePart* ptr= luna_caster< proland::CurvePart, proland::LineCurvePart >::cast(Luna< proland::CurvePart >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::LineCurvePart >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
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

	inline static bool _lg_typecheck_base_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getCurve(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_canClip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_base_clip(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::LineCurvePart::LineCurvePart(ork::vec2d start, ork::vec2d end)
	static proland::LineCurvePart* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::LineCurvePart::LineCurvePart(ork::vec2d start, ork::vec2d end) function, expected prototype:\nproland::LineCurvePart::LineCurvePart(ork::vec2d start, ork::vec2d end)\nClass arguments details:\narg 1 ID = 81304238\narg 2 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* start_ptr=(Luna< ork::vec2d >::check(L,1));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::LineCurvePart::LineCurvePart function");
		}
		ork::vec2d start=*start_ptr;
		ork::vec2d* end_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in proland::LineCurvePart::LineCurvePart function");
		}
		ork::vec2d end=*end_ptr;

		return new proland::LineCurvePart(start, end);
	}

	// proland::LineCurvePart::LineCurvePart(lua_Table * data, ork::vec2d start, ork::vec2d end)
	static proland::LineCurvePart* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::LineCurvePart::LineCurvePart(lua_Table * data, ork::vec2d start, ork::vec2d end) function, expected prototype:\nproland::LineCurvePart::LineCurvePart(lua_Table * data, ork::vec2d start, ork::vec2d end)\nClass arguments details:\narg 2 ID = 81304238\narg 3 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* start_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::LineCurvePart::LineCurvePart function");
		}
		ork::vec2d start=*start_ptr;
		ork::vec2d* end_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in proland::LineCurvePart::LineCurvePart function");
		}
		ork::vec2d end=*end_ptr;

		return new wrapper_proland_LineCurvePart(L,NULL, start, end);
	}

	// Overload binder for proland::LineCurvePart::LineCurvePart
	static proland::LineCurvePart* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function LineCurvePart, cannot match any of the overloads for function LineCurvePart:\n  LineCurvePart(ork::vec2d, ork::vec2d)\n  LineCurvePart(lua_Table *, ork::vec2d, ork::vec2d)\n");
		return NULL;
	}


	// Function binds:
	// int proland::LineCurvePart::getEnd() const
	static int _bind_getEnd(lua_State *L) {
		if (!_lg_typecheck_getEnd(L)) {
			luaL_error(L, "luna typecheck failed in int proland::LineCurvePart::getEnd() const function, expected prototype:\nint proland::LineCurvePart::getEnd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LineCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::LineCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::LineCurvePart::getEnd() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec2d proland::LineCurvePart::getXY(int i) const
	static int _bind_getXY(lua_State *L) {
		if (!_lg_typecheck_getXY(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2d proland::LineCurvePart::getXY(int i) const function, expected prototype:\nork::vec2d proland::LineCurvePart::getXY(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::LineCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::LineCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2d proland::LineCurvePart::getXY(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2d stack_lret = self->getXY(i);
		ork::vec2d* lret = new ork::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2d >::push(L,lret,true);

		return 1;
	}

	// bool proland::LineCurvePart::getIsControl(int i) const
	static int _bind_getIsControl(lua_State *L) {
		if (!_lg_typecheck_getIsControl(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::LineCurvePart::getIsControl(int i) const function, expected prototype:\nbool proland::LineCurvePart::getIsControl(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::LineCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::LineCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::LineCurvePart::getIsControl(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getIsControl(i);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float proland::LineCurvePart::getS(int i) const
	static int _bind_getS(lua_State *L) {
		if (!_lg_typecheck_getS(L)) {
			luaL_error(L, "luna typecheck failed in float proland::LineCurvePart::getS(int i) const function, expected prototype:\nfloat proland::LineCurvePart::getS(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::LineCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::LineCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::LineCurvePart::getS(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getS(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::box2d proland::LineCurvePart::getBounds() const
	static int _bind_getBounds(lua_State *L) {
		if (!_lg_typecheck_getBounds(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2d proland::LineCurvePart::getBounds() const function, expected prototype:\nork::box2d proland::LineCurvePart::getBounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LineCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::LineCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2d proland::LineCurvePart::getBounds() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2d stack_lret = self->getBounds();
		ork::box2d* lret = new ork::box2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2d >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePart * proland::LineCurvePart::clip(int start, int end) const
	static int _bind_clip(lua_State *L) {
		if (!_lg_typecheck_clip(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePart * proland::LineCurvePart::clip(int start, int end) const function, expected prototype:\nproland::CurvePart * proland::LineCurvePart::clip(int start, int end) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int start=(int)lua_tointeger(L,2);
		int end=(int)lua_tointeger(L,3);

		proland::LineCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::LineCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePart * proland::LineCurvePart::clip(int, int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePart * lret = self->clip(start, end);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePart >::push(L,lret,false);

		return 1;
	}

	// proland::CurveId proland::LineCurvePart::base_getId() const
	static int _bind_base_getId(lua_State *L) {
		if (!_lg_typecheck_base_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::LineCurvePart::base_getId() const function, expected prototype:\nproland::CurveId proland::LineCurvePart::base_getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LineCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::LineCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::LineCurvePart::base_getId() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->LineCurvePart::getId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::CurveId proland::LineCurvePart::base_getParentId() const
	static int _bind_base_getParentId(lua_State *L) {
		if (!_lg_typecheck_base_getParentId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::LineCurvePart::base_getParentId() const function, expected prototype:\nproland::CurveId proland::LineCurvePart::base_getParentId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LineCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::LineCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::LineCurvePart::base_getParentId() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->LineCurvePart::getParentId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// int proland::LineCurvePart::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in int proland::LineCurvePart::base_getType() const function, expected prototype:\nint proland::LineCurvePart::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LineCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::LineCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::LineCurvePart::base_getType() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->LineCurvePart::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::LineCurvePart::base_getWidth() const
	static int _bind_base_getWidth(lua_State *L) {
		if (!_lg_typecheck_base_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in float proland::LineCurvePart::base_getWidth() const function, expected prototype:\nfloat proland::LineCurvePart::base_getWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LineCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::LineCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::LineCurvePart::base_getWidth() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->LineCurvePart::getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::CurvePtr proland::LineCurvePart::base_getCurve() const
	static int _bind_base_getCurve(lua_State *L) {
		if (!_lg_typecheck_base_getCurve(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::LineCurvePart::base_getCurve() const function, expected prototype:\nproland::CurvePtr proland::LineCurvePart::base_getCurve() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LineCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::LineCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::LineCurvePart::base_getCurve() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->LineCurvePart::getCurve();
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// bool proland::LineCurvePart::base_canClip(int i) const
	static int _bind_base_canClip(lua_State *L) {
		if (!_lg_typecheck_base_canClip(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::LineCurvePart::base_canClip(int i) const function, expected prototype:\nbool proland::LineCurvePart::base_canClip(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::LineCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::LineCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::LineCurvePart::base_canClip(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LineCurvePart::canClip(i);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int proland::LineCurvePart::base_getEnd() const
	static int _bind_base_getEnd(lua_State *L) {
		if (!_lg_typecheck_base_getEnd(L)) {
			luaL_error(L, "luna typecheck failed in int proland::LineCurvePart::base_getEnd() const function, expected prototype:\nint proland::LineCurvePart::base_getEnd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LineCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::LineCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::LineCurvePart::base_getEnd() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->LineCurvePart::getEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec2d proland::LineCurvePart::base_getXY(int i) const
	static int _bind_base_getXY(lua_State *L) {
		if (!_lg_typecheck_base_getXY(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2d proland::LineCurvePart::base_getXY(int i) const function, expected prototype:\nork::vec2d proland::LineCurvePart::base_getXY(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::LineCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::LineCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2d proland::LineCurvePart::base_getXY(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2d stack_lret = self->LineCurvePart::getXY(i);
		ork::vec2d* lret = new ork::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2d >::push(L,lret,true);

		return 1;
	}

	// bool proland::LineCurvePart::base_getIsControl(int i) const
	static int _bind_base_getIsControl(lua_State *L) {
		if (!_lg_typecheck_base_getIsControl(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::LineCurvePart::base_getIsControl(int i) const function, expected prototype:\nbool proland::LineCurvePart::base_getIsControl(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::LineCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::LineCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::LineCurvePart::base_getIsControl(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LineCurvePart::getIsControl(i);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float proland::LineCurvePart::base_getS(int i) const
	static int _bind_base_getS(lua_State *L) {
		if (!_lg_typecheck_base_getS(L)) {
			luaL_error(L, "luna typecheck failed in float proland::LineCurvePart::base_getS(int i) const function, expected prototype:\nfloat proland::LineCurvePart::base_getS(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::LineCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::LineCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::LineCurvePart::base_getS(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->LineCurvePart::getS(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::box2d proland::LineCurvePart::base_getBounds() const
	static int _bind_base_getBounds(lua_State *L) {
		if (!_lg_typecheck_base_getBounds(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2d proland::LineCurvePart::base_getBounds() const function, expected prototype:\nork::box2d proland::LineCurvePart::base_getBounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LineCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::LineCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2d proland::LineCurvePart::base_getBounds() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2d stack_lret = self->LineCurvePart::getBounds();
		ork::box2d* lret = new ork::box2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2d >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePart * proland::LineCurvePart::base_clip(int start, int end) const
	static int _bind_base_clip(lua_State *L) {
		if (!_lg_typecheck_base_clip(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePart * proland::LineCurvePart::base_clip(int start, int end) const function, expected prototype:\nproland::CurvePart * proland::LineCurvePart::base_clip(int start, int end) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int start=(int)lua_tointeger(L,2);
		int end=(int)lua_tointeger(L,3);

		proland::LineCurvePart* self=Luna< proland::CurvePart >::checkSubType< proland::LineCurvePart >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePart * proland::LineCurvePart::base_clip(int, int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePart * lret = self->LineCurvePart::clip(start, end);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePart >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

proland::LineCurvePart* LunaTraits< proland::LineCurvePart >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_LineCurvePart::_bind_ctor(L);
}

void LunaTraits< proland::LineCurvePart >::_bind_dtor(proland::LineCurvePart* obj) {
	delete obj;
}

const char LunaTraits< proland::LineCurvePart >::className[] = "LineCurvePart";
const char LunaTraits< proland::LineCurvePart >::fullName[] = "proland::LineCurvePart";
const char LunaTraits< proland::LineCurvePart >::moduleName[] = "proland";
const char* LunaTraits< proland::LineCurvePart >::parents[] = {"proland.CurvePart", 0};
const int LunaTraits< proland::LineCurvePart >::hash = 28851727;
const int LunaTraits< proland::LineCurvePart >::uniqueIDs[] = {53366307,0};

luna_RegType LunaTraits< proland::LineCurvePart >::methods[] = {
	{"getEnd", &luna_wrapper_proland_LineCurvePart::_bind_getEnd},
	{"getXY", &luna_wrapper_proland_LineCurvePart::_bind_getXY},
	{"getIsControl", &luna_wrapper_proland_LineCurvePart::_bind_getIsControl},
	{"getS", &luna_wrapper_proland_LineCurvePart::_bind_getS},
	{"getBounds", &luna_wrapper_proland_LineCurvePart::_bind_getBounds},
	{"clip", &luna_wrapper_proland_LineCurvePart::_bind_clip},
	{"base_getId", &luna_wrapper_proland_LineCurvePart::_bind_base_getId},
	{"base_getParentId", &luna_wrapper_proland_LineCurvePart::_bind_base_getParentId},
	{"base_getType", &luna_wrapper_proland_LineCurvePart::_bind_base_getType},
	{"base_getWidth", &luna_wrapper_proland_LineCurvePart::_bind_base_getWidth},
	{"base_getCurve", &luna_wrapper_proland_LineCurvePart::_bind_base_getCurve},
	{"base_canClip", &luna_wrapper_proland_LineCurvePart::_bind_base_canClip},
	{"base_getEnd", &luna_wrapper_proland_LineCurvePart::_bind_base_getEnd},
	{"base_getXY", &luna_wrapper_proland_LineCurvePart::_bind_base_getXY},
	{"base_getIsControl", &luna_wrapper_proland_LineCurvePart::_bind_base_getIsControl},
	{"base_getS", &luna_wrapper_proland_LineCurvePart::_bind_base_getS},
	{"base_getBounds", &luna_wrapper_proland_LineCurvePart::_bind_base_getBounds},
	{"base_clip", &luna_wrapper_proland_LineCurvePart::_bind_base_clip},
	{"fromVoid", &luna_wrapper_proland_LineCurvePart::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_LineCurvePart::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_LineCurvePart::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::LineCurvePart >::converters[] = {
	{"proland::CurvePart", &luna_wrapper_proland_LineCurvePart::_cast_from_CurvePart},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::LineCurvePart >::enumValues[] = {
	{0,0}
};


