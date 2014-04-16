#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_CurvePart.h>

class luna_wrapper_proland_CurvePart {
public:
	typedef Luna< proland::CurvePart > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53366307) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::CurvePart*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePart* rhs =(Luna< proland::CurvePart >::check(L,2));
		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
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

		proland::CurvePart* self= (proland::CurvePart*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::CurvePart >::push(L,self,false);
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

		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::CurvePart");
		
		return luna_dynamicCast(L,converters,"proland::CurvePart",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
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

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurve(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getXY_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getXY_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (!(Luna< ork::vec2d >::check(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

	inline static bool _lg_typecheck_clip_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clip_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151909) ) return false;
		if( (!(Luna< ork::box2d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,60197354) ) return false;
		if( (!(Luna< vector< proland::CurvePart * > >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clip_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60197354) ) return false;
		if( (!(Luna< vector< proland::CurvePart * > >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,63151909) ) return false;
		if( (!(Luna< ork::box2d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,60197354) ) return false;
		if( (!(Luna< vector< proland::CurvePart * > >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_equals(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
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

	inline static bool _lg_typecheck_base_getIsControl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_canClip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::CurvePart::CurvePart(lua_Table * data)
	static proland::CurvePart* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePart::CurvePart(lua_Table * data) function, expected prototype:\nproland::CurvePart::CurvePart(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_CurvePart(L,NULL);
	}


	// Function binds:
	// proland::CurveId proland::CurvePart::getId() const
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::CurvePart::getId() const function, expected prototype:\nproland::CurveId proland::CurvePart::getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::CurvePart::getId() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->getId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::CurveId proland::CurvePart::getParentId() const
	static int _bind_getParentId(lua_State *L) {
		if (!_lg_typecheck_getParentId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::CurvePart::getParentId() const function, expected prototype:\nproland::CurveId proland::CurvePart::getParentId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::CurvePart::getParentId() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->getParentId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// int proland::CurvePart::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in int proland::CurvePart::getType() const function, expected prototype:\nint proland::CurvePart::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::CurvePart::getType() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::CurvePart::getWidth() const
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in float proland::CurvePart::getWidth() const function, expected prototype:\nfloat proland::CurvePart::getWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::CurvePart::getWidth() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::CurvePtr proland::CurvePart::getCurve() const
	static int _bind_getCurve(lua_State *L) {
		if (!_lg_typecheck_getCurve(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::CurvePart::getCurve() const function, expected prototype:\nproland::CurvePtr proland::CurvePart::getCurve() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::CurvePart::getCurve() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->getCurve();
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// int proland::CurvePart::getEnd() const
	static int _bind_getEnd(lua_State *L) {
		if (!_lg_typecheck_getEnd(L)) {
			luaL_error(L, "luna typecheck failed in int proland::CurvePart::getEnd() const function, expected prototype:\nint proland::CurvePart::getEnd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::CurvePart::getEnd() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec2d proland::CurvePart::getXY(int i) const
	static int _bind_getXY_overload_1(lua_State *L) {
		if (!_lg_typecheck_getXY_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2d proland::CurvePart::getXY(int i) const function, expected prototype:\nork::vec2d proland::CurvePart::getXY(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2d proland::CurvePart::getXY(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2d stack_lret = self->getXY(i);
		ork::vec2d* lret = new ork::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2d >::push(L,lret,true);

		return 1;
	}

	// ork::vec2d proland::CurvePart::getXY(const ork::vec2d & start, int offset) const
	static int _bind_getXY_overload_2(lua_State *L) {
		if (!_lg_typecheck_getXY_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2d proland::CurvePart::getXY(const ork::vec2d & start, int offset) const function, expected prototype:\nork::vec2d proland::CurvePart::getXY(const ork::vec2d & start, int offset) const\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2d* start_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in proland::CurvePart::getXY function");
		}
		const ork::vec2d & start=*start_ptr;
		int offset=(int)lua_tointeger(L,3);

		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2d proland::CurvePart::getXY(const ork::vec2d &, int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2d stack_lret = self->getXY(start, offset);
		ork::vec2d* lret = new ork::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for proland::CurvePart::getXY
	static int _bind_getXY(lua_State *L) {
		if (_lg_typecheck_getXY_overload_1(L)) return _bind_getXY_overload_1(L);
		if (_lg_typecheck_getXY_overload_2(L)) return _bind_getXY_overload_2(L);

		luaL_error(L, "error in function getXY, cannot match any of the overloads for function getXY:\n  getXY(int)\n  getXY(const ork::vec2d &, int)\n");
		return 0;
	}

	// bool proland::CurvePart::getIsControl(int i) const
	static int _bind_getIsControl(lua_State *L) {
		if (!_lg_typecheck_getIsControl(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::CurvePart::getIsControl(int i) const function, expected prototype:\nbool proland::CurvePart::getIsControl(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::CurvePart::getIsControl(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getIsControl(i);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float proland::CurvePart::getS(int i) const
	static int _bind_getS(lua_State *L) {
		if (!_lg_typecheck_getS(L)) {
			luaL_error(L, "luna typecheck failed in float proland::CurvePart::getS(int i) const function, expected prototype:\nfloat proland::CurvePart::getS(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::CurvePart::getS(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getS(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::box2d proland::CurvePart::getBounds() const
	static int _bind_getBounds(lua_State *L) {
		if (!_lg_typecheck_getBounds(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2d proland::CurvePart::getBounds() const function, expected prototype:\nork::box2d proland::CurvePart::getBounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2d proland::CurvePart::getBounds() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2d stack_lret = self->getBounds();
		ork::box2d* lret = new ork::box2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2d >::push(L,lret,true);

		return 1;
	}

	// bool proland::CurvePart::canClip(int i) const
	static int _bind_canClip(lua_State *L) {
		if (!_lg_typecheck_canClip(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::CurvePart::canClip(int i) const function, expected prototype:\nbool proland::CurvePart::canClip(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::CurvePart::canClip(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->canClip(i);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// proland::CurvePart * proland::CurvePart::clip(int start, int end) const
	static int _bind_clip_overload_1(lua_State *L) {
		if (!_lg_typecheck_clip_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePart * proland::CurvePart::clip(int start, int end) const function, expected prototype:\nproland::CurvePart * proland::CurvePart::clip(int start, int end) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int start=(int)lua_tointeger(L,2);
		int end=(int)lua_tointeger(L,3);

		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePart * proland::CurvePart::clip(int, int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePart * lret = self->clip(start, end);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePart >::push(L,lret,false);

		return 1;
	}

	// void proland::CurvePart::clip(const ork::box2d & clip, vector< proland::CurvePart * > & result) const
	static int _bind_clip_overload_2(lua_State *L) {
		if (!_lg_typecheck_clip_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CurvePart::clip(const ork::box2d & clip, vector< proland::CurvePart * > & result) const function, expected prototype:\nvoid proland::CurvePart::clip(const ork::box2d & clip, vector< proland::CurvePart * > & result) const\nClass arguments details:\narg 1 ID = 63151909\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2d* clip_ptr=(Luna< ork::box2d >::check(L,2));
		if( !clip_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clip in proland::CurvePart::clip function");
		}
		const ork::box2d & clip=*clip_ptr;
		vector< proland::CurvePart * >* result_ptr=(Luna< vector< proland::CurvePart * > >::check(L,3));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in proland::CurvePart::clip function");
		}
		vector< proland::CurvePart * > & result=*result_ptr;

		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CurvePart::clip(const ork::box2d &, vector< proland::CurvePart * > &) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clip(clip, result);

		return 0;
	}

	// static void proland::CurvePart::clip(const vector< proland::CurvePart * > & paths, const ork::box2d & clip, vector< proland::CurvePart * > & result)
	static int _bind_clip_overload_3(lua_State *L) {
		if (!_lg_typecheck_clip_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in static void proland::CurvePart::clip(const vector< proland::CurvePart * > & paths, const ork::box2d & clip, vector< proland::CurvePart * > & result) function, expected prototype:\nstatic void proland::CurvePart::clip(const vector< proland::CurvePart * > & paths, const ork::box2d & clip, vector< proland::CurvePart * > & result)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = 63151909\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const vector< proland::CurvePart * >* paths_ptr=(Luna< vector< proland::CurvePart * > >::check(L,1));
		if( !paths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg paths in proland::CurvePart::clip function");
		}
		const vector< proland::CurvePart * > & paths=*paths_ptr;
		const ork::box2d* clip_ptr=(Luna< ork::box2d >::check(L,2));
		if( !clip_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clip in proland::CurvePart::clip function");
		}
		const ork::box2d & clip=*clip_ptr;
		vector< proland::CurvePart * >* result_ptr=(Luna< vector< proland::CurvePart * > >::check(L,3));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in proland::CurvePart::clip function");
		}
		vector< proland::CurvePart * > & result=*result_ptr;

		proland::CurvePart::clip(paths, clip, result);

		return 0;
	}

	// Overload binder for proland::CurvePart::clip
	static int _bind_clip(lua_State *L) {
		if (_lg_typecheck_clip_overload_1(L)) return _bind_clip_overload_1(L);
		if (_lg_typecheck_clip_overload_2(L)) return _bind_clip_overload_2(L);
		if (_lg_typecheck_clip_overload_3(L)) return _bind_clip_overload_3(L);

		luaL_error(L, "error in function clip, cannot match any of the overloads for function clip:\n  clip(int, int)\n  clip(const ork::box2d &, vector< proland::CurvePart * > &)\n  clip(const vector< proland::CurvePart * > &, const ork::box2d &, vector< proland::CurvePart * > &)\n");
		return 0;
	}

	// bool proland::CurvePart::equals(proland::CurvePtr c) const
	static int _bind_equals(lua_State *L) {
		if (!_lg_typecheck_equals(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::CurvePart::equals(proland::CurvePtr c) const function, expected prototype:\nbool proland::CurvePart::equals(proland::CurvePtr c) const\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::CurvePart::equals function");
		}
		proland::CurvePtr c=*c_ptr;

		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::CurvePart::equals(proland::CurvePtr) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->equals(c);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// proland::CurveId proland::CurvePart::base_getId() const
	static int _bind_base_getId(lua_State *L) {
		if (!_lg_typecheck_base_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::CurvePart::base_getId() const function, expected prototype:\nproland::CurveId proland::CurvePart::base_getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::CurvePart::base_getId() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->CurvePart::getId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// proland::CurveId proland::CurvePart::base_getParentId() const
	static int _bind_base_getParentId(lua_State *L) {
		if (!_lg_typecheck_base_getParentId(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveId proland::CurvePart::base_getParentId() const function, expected prototype:\nproland::CurveId proland::CurvePart::base_getParentId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveId proland::CurvePart::base_getParentId() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveId stack_lret = self->CurvePart::getParentId();
		proland::CurveId* lret = new proland::CurveId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveId >::push(L,lret,true);

		return 1;
	}

	// int proland::CurvePart::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in int proland::CurvePart::base_getType() const function, expected prototype:\nint proland::CurvePart::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::CurvePart::base_getType() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->CurvePart::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::CurvePart::base_getWidth() const
	static int _bind_base_getWidth(lua_State *L) {
		if (!_lg_typecheck_base_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in float proland::CurvePart::base_getWidth() const function, expected prototype:\nfloat proland::CurvePart::base_getWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::CurvePart::base_getWidth() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->CurvePart::getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::CurvePtr proland::CurvePart::base_getCurve() const
	static int _bind_base_getCurve(lua_State *L) {
		if (!_lg_typecheck_base_getCurve(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::CurvePart::base_getCurve() const function, expected prototype:\nproland::CurvePtr proland::CurvePart::base_getCurve() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::CurvePart::base_getCurve() const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->CurvePart::getCurve();
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// bool proland::CurvePart::base_getIsControl(int i) const
	static int _bind_base_getIsControl(lua_State *L) {
		if (!_lg_typecheck_base_getIsControl(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::CurvePart::base_getIsControl(int i) const function, expected prototype:\nbool proland::CurvePart::base_getIsControl(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::CurvePart::base_getIsControl(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CurvePart::getIsControl(i);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::CurvePart::base_canClip(int i) const
	static int _bind_base_canClip(lua_State *L) {
		if (!_lg_typecheck_base_canClip(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::CurvePart::base_canClip(int i) const function, expected prototype:\nbool proland::CurvePart::base_canClip(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::CurvePart* self=(Luna< proland::CurvePart >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::CurvePart::base_canClip(int) const. Got : '%s'\n%s",typeid(Luna< proland::CurvePart >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CurvePart::canClip(i);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

proland::CurvePart* LunaTraits< proland::CurvePart >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_CurvePart::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// int proland::CurvePart::getEnd() const
	// ork::vec2d proland::CurvePart::getXY(int i) const
	// float proland::CurvePart::getS(int i) const
	// ork::box2d proland::CurvePart::getBounds() const
	// proland::CurvePart * proland::CurvePart::clip(int start, int end) const
}

void LunaTraits< proland::CurvePart >::_bind_dtor(proland::CurvePart* obj) {
	delete obj;
}

const char LunaTraits< proland::CurvePart >::className[] = "CurvePart";
const char LunaTraits< proland::CurvePart >::fullName[] = "proland::CurvePart";
const char LunaTraits< proland::CurvePart >::moduleName[] = "proland";
const char* LunaTraits< proland::CurvePart >::parents[] = {0};
const int LunaTraits< proland::CurvePart >::hash = 53366307;
const int LunaTraits< proland::CurvePart >::uniqueIDs[] = {53366307,0};

luna_RegType LunaTraits< proland::CurvePart >::methods[] = {
	{"getId", &luna_wrapper_proland_CurvePart::_bind_getId},
	{"getParentId", &luna_wrapper_proland_CurvePart::_bind_getParentId},
	{"getType", &luna_wrapper_proland_CurvePart::_bind_getType},
	{"getWidth", &luna_wrapper_proland_CurvePart::_bind_getWidth},
	{"getCurve", &luna_wrapper_proland_CurvePart::_bind_getCurve},
	{"getEnd", &luna_wrapper_proland_CurvePart::_bind_getEnd},
	{"getXY", &luna_wrapper_proland_CurvePart::_bind_getXY},
	{"getIsControl", &luna_wrapper_proland_CurvePart::_bind_getIsControl},
	{"getS", &luna_wrapper_proland_CurvePart::_bind_getS},
	{"getBounds", &luna_wrapper_proland_CurvePart::_bind_getBounds},
	{"canClip", &luna_wrapper_proland_CurvePart::_bind_canClip},
	{"clip", &luna_wrapper_proland_CurvePart::_bind_clip},
	{"equals", &luna_wrapper_proland_CurvePart::_bind_equals},
	{"base_getId", &luna_wrapper_proland_CurvePart::_bind_base_getId},
	{"base_getParentId", &luna_wrapper_proland_CurvePart::_bind_base_getParentId},
	{"base_getType", &luna_wrapper_proland_CurvePart::_bind_base_getType},
	{"base_getWidth", &luna_wrapper_proland_CurvePart::_bind_base_getWidth},
	{"base_getCurve", &luna_wrapper_proland_CurvePart::_bind_base_getCurve},
	{"base_getIsControl", &luna_wrapper_proland_CurvePart::_bind_base_getIsControl},
	{"base_canClip", &luna_wrapper_proland_CurvePart::_bind_base_canClip},
	{"dynCast", &luna_wrapper_proland_CurvePart::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_CurvePart::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_CurvePart::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_CurvePart::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_CurvePart::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::CurvePart >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::CurvePart >::enumValues[] = {
	{0,0}
};


