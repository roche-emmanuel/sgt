#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_Area.h>

class luna_wrapper_proland_Area {
public:
	typedef Luna< proland::Area > luna_t;

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

		proland::Area* self= (proland::Area*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::Area >::push(L,self,false);
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
		//proland::Area* ptr= dynamic_cast< proland::Area* >(Luna< ork::Object >::check(L,1));
		proland::Area* ptr= luna_caster< ork::Object, proland::Area >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::Area >::push(L,ptr,false);
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
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< proland::Graph >(L,2)) ) ) return false;
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

	inline static bool _lg_typecheck_getParentId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAncestor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurveCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurve_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurve_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSubgraph(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isInside(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRectanglePosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151909) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTrianglePosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81304238)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_equals_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92772708) ) return false;
		if( (!(Luna< set< proland::CurveId > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_equals_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< proland::Area >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92772708) ) return false;
		if( (!(Luna< set< proland::CurveId > >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,99348114) ) return false;
		if( (!(Luna< set< proland::NodeId > >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOrientation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_invertCurve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOwner(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_check(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72385761) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addCurve(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSubgraph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isDirect_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isDirect_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49338298) ) return false;
		if( (!(Luna< vector< proland::Vertex > >::check(L,1))) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clip(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60197354) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,63151909) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,60197354) ) return false;
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

	inline static bool _lg_typecheck_base_getCurveCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getCurve_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getCurve_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setOrientation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_invertCurve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72385761) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addCurve(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setSubgraph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::Area::Area(proland::Graph * owner)
	static proland::Area* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::Area::Area(proland::Graph * owner) function, expected prototype:\nproland::Area::Area(proland::Graph * owner)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,1));

		return new proland::Area(owner);
	}

	// proland::Area::Area(lua_Table * data, proland::Graph * owner)
	static proland::Area* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::Area::Area(lua_Table * data, proland::Graph * owner) function, expected prototype:\nproland::Area::Area(lua_Table * data, proland::Graph * owner)\nClass arguments details:\narg 2 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));

		return new wrapper_proland_Area(L,NULL, owner);
	}

	// Overload binder for proland::Area::Area
	static proland::Area* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Area, cannot match any of the overloads for function Area:\n  Area(proland::Graph *)\n  Area(lua_Table *, proland::Graph *)\n");
		return NULL;
	}


	// Function binds:
	// void proland::Area::print() const
	static int _bind_print(lua_State *L) {
		if (!_lg_typecheck_print(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Area::print() const function, expected prototype:\nvoid proland::Area::print() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Area::print() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->print();

		return 0;
	}

	// proland::AreaId proland::Area::getId() const
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaId proland::Area::getId() const function, expected prototype:\nproland::AreaId proland::Area::getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaId proland::Area::getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaId stack_lret = self->getId();
		proland::AreaId* lret = new proland::AreaId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaId >::push(L,lret,true);

		return 1;
	}

	// proland::AreaPtr proland::Area::getParent() const
	static int _bind_getParent(lua_State *L) {
		if (!_lg_typecheck_getParent(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaPtr proland::Area::getParent() const function, expected prototype:\nproland::AreaPtr proland::Area::getParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaPtr proland::Area::getParent() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaPtr stack_lret = self->getParent();
		proland::AreaPtr* lret = new proland::AreaPtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaPtr >::push(L,lret,true);

		return 1;
	}

	// proland::AreaId proland::Area::getParentId() const
	static int _bind_getParentId(lua_State *L) {
		if (!_lg_typecheck_getParentId(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaId proland::Area::getParentId() const function, expected prototype:\nproland::AreaId proland::Area::getParentId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaId proland::Area::getParentId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaId stack_lret = self->getParentId();
		proland::AreaId* lret = new proland::AreaId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaId >::push(L,lret,true);

		return 1;
	}

	// proland::AreaPtr proland::Area::getAncestor()
	static int _bind_getAncestor(lua_State *L) {
		if (!_lg_typecheck_getAncestor(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaPtr proland::Area::getAncestor() function, expected prototype:\nproland::AreaPtr proland::Area::getAncestor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaPtr proland::Area::getAncestor(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaPtr stack_lret = self->getAncestor();
		proland::AreaPtr* lret = new proland::AreaPtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaPtr >::push(L,lret,true);

		return 1;
	}

	// int proland::Area::getInfo() const
	static int _bind_getInfo(lua_State *L) {
		if (!_lg_typecheck_getInfo(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Area::getInfo() const function, expected prototype:\nint proland::Area::getInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Area::getInfo() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getInfo();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::Area::getCurveCount() const
	static int _bind_getCurveCount(lua_State *L) {
		if (!_lg_typecheck_getCurveCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Area::getCurveCount() const function, expected prototype:\nint proland::Area::getCurveCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Area::getCurveCount() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCurveCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::CurvePtr proland::Area::getCurve(int i) const
	static int _bind_getCurve_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCurve_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Area::getCurve(int i) const function, expected prototype:\nproland::CurvePtr proland::Area::getCurve(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Area::getCurve(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->getCurve(i);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::Area::getCurve(int i, int & orientation) const
	static int _bind_getCurve_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCurve_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Area::getCurve(int i, int & orientation) const function, expected prototype:\nproland::CurvePtr proland::Area::getCurve(int i, int & orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		int orientation=(int)lua_tointeger(L,3);

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Area::getCurve(int, int &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->getCurve(i, orientation);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		lua_pushnumber(L,orientation);
		return 2;
	}

	// Overload binder for proland::Area::getCurve
	static int _bind_getCurve(lua_State *L) {
		if (_lg_typecheck_getCurve_overload_1(L)) return _bind_getCurve_overload_1(L);
		if (_lg_typecheck_getCurve_overload_2(L)) return _bind_getCurve_overload_2(L);

		luaL_error(L, "error in function getCurve, cannot match any of the overloads for function getCurve:\n  getCurve(int)\n  getCurve(int, int &)\n");
		return 0;
	}

	// proland::GraphPtr proland::Area::getSubgraph() const
	static int _bind_getSubgraph(lua_State *L) {
		if (!_lg_typecheck_getSubgraph(L)) {
			luaL_error(L, "luna typecheck failed in proland::GraphPtr proland::Area::getSubgraph() const function, expected prototype:\nproland::GraphPtr proland::Area::getSubgraph() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::GraphPtr proland::Area::getSubgraph() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::GraphPtr stack_lret = self->getSubgraph();
		proland::GraphPtr* lret = new proland::GraphPtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::GraphPtr >::push(L,lret,true);

		return 1;
	}

	// ork::box2d proland::Area::getBounds() const
	static int _bind_getBounds(lua_State *L) {
		if (!_lg_typecheck_getBounds(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2d proland::Area::getBounds() const function, expected prototype:\nork::box2d proland::Area::getBounds() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2d proland::Area::getBounds() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2d stack_lret = self->getBounds();
		ork::box2d* lret = new ork::box2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2d >::push(L,lret,true);

		return 1;
	}

	// bool proland::Area::isInside(const ork::vec2d & p) const
	static int _bind_isInside(lua_State *L) {
		if (!_lg_typecheck_isInside(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::Area::isInside(const ork::vec2d & p) const function, expected prototype:\nbool proland::Area::isInside(const ork::vec2d & p) const\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Area::isInside function");
		}
		const ork::vec2d & p=*p_ptr;

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::Area::isInside(const ork::vec2d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isInside(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// proland::Curve::position proland::Area::getRectanglePosition(const ork::box2d & r) const
	static int _bind_getRectanglePosition(lua_State *L) {
		if (!_lg_typecheck_getRectanglePosition(L)) {
			luaL_error(L, "luna typecheck failed in proland::Curve::position proland::Area::getRectanglePosition(const ork::box2d & r) const function, expected prototype:\nproland::Curve::position proland::Area::getRectanglePosition(const ork::box2d & r) const\nClass arguments details:\narg 1 ID = 63151909\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2d* r_ptr=(Luna< ork::box2d >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in proland::Area::getRectanglePosition function");
		}
		const ork::box2d & r=*r_ptr;

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Curve::position proland::Area::getRectanglePosition(const ork::box2d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Curve::position lret = self->getRectanglePosition(r);
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::Curve::position proland::Area::getTrianglePosition(const ork::vec2d * t) const
	static int _bind_getTrianglePosition(lua_State *L) {
		if (!_lg_typecheck_getTrianglePosition(L)) {
			luaL_error(L, "luna typecheck failed in proland::Curve::position proland::Area::getTrianglePosition(const ork::vec2d * t) const function, expected prototype:\nproland::Curve::position proland::Area::getTrianglePosition(const ork::vec2d * t) const\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2d* t=(Luna< ork::vec2d >::check(L,2));

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Curve::position proland::Area::getTrianglePosition(const ork::vec2d *) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Curve::position lret = self->getTrianglePosition(t);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::Area::equals(set< proland::CurveId > curveList)
	static int _bind_equals_overload_1(lua_State *L) {
		if (!_lg_typecheck_equals_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::Area::equals(set< proland::CurveId > curveList) function, expected prototype:\nbool proland::Area::equals(set< proland::CurveId > curveList)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		set< proland::CurveId >* curveList_ptr=(Luna< set< proland::CurveId > >::check(L,2));
		if( !curveList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curveList in proland::Area::equals function");
		}
		set< proland::CurveId > curveList=*curveList_ptr;

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::Area::equals(set< proland::CurveId >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->equals(curveList);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::Area::equals(proland::Area * a, set< proland::CurveId > & visitedCurves, set< proland::NodeId > & visitedNodes)
	static int _bind_equals_overload_2(lua_State *L) {
		if (!_lg_typecheck_equals_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::Area::equals(proland::Area * a, set< proland::CurveId > & visitedCurves, set< proland::NodeId > & visitedNodes) function, expected prototype:\nbool proland::Area::equals(proland::Area * a, set< proland::CurveId > & visitedCurves, set< proland::NodeId > & visitedNodes)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Area* a=(Luna< ork::Object >::checkSubType< proland::Area >(L,2));
		set< proland::CurveId >* visitedCurves_ptr=(Luna< set< proland::CurveId > >::check(L,3));
		if( !visitedCurves_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg visitedCurves in proland::Area::equals function");
		}
		set< proland::CurveId > & visitedCurves=*visitedCurves_ptr;
		set< proland::NodeId >* visitedNodes_ptr=(Luna< set< proland::NodeId > >::check(L,4));
		if( !visitedNodes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg visitedNodes in proland::Area::equals function");
		}
		set< proland::NodeId > & visitedNodes=*visitedNodes_ptr;

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::Area::equals(proland::Area *, set< proland::CurveId > &, set< proland::NodeId > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->equals(a, visitedCurves, visitedNodes);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for proland::Area::equals
	static int _bind_equals(lua_State *L) {
		if (_lg_typecheck_equals_overload_1(L)) return _bind_equals_overload_1(L);
		if (_lg_typecheck_equals_overload_2(L)) return _bind_equals_overload_2(L);

		luaL_error(L, "error in function equals, cannot match any of the overloads for function equals:\n  equals(set< proland::CurveId >)\n  equals(proland::Area *, set< proland::CurveId > &, set< proland::NodeId > &)\n");
		return 0;
	}

	// void proland::Area::setOrientation(int i, int orientation)
	static int _bind_setOrientation(lua_State *L) {
		if (!_lg_typecheck_setOrientation(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Area::setOrientation(int i, int orientation) function, expected prototype:\nvoid proland::Area::setOrientation(int i, int orientation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		int orientation=(int)lua_tointeger(L,3);

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Area::setOrientation(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOrientation(i, orientation);

		return 0;
	}

	// void proland::Area::setInfo(int info)
	static int _bind_setInfo(lua_State *L) {
		if (!_lg_typecheck_setInfo(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Area::setInfo(int info) function, expected prototype:\nvoid proland::Area::setInfo(int info)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int info=(int)lua_tointeger(L,2);

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Area::setInfo(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInfo(info);

		return 0;
	}

	// void proland::Area::invertCurve(proland::CurveId cid)
	static int _bind_invertCurve(lua_State *L) {
		if (!_lg_typecheck_invertCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Area::invertCurve(proland::CurveId cid) function, expected prototype:\nvoid proland::Area::invertCurve(proland::CurveId cid)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* cid_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !cid_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cid in proland::Area::invertCurve function");
		}
		proland::CurveId cid=*cid_ptr;

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Area::invertCurve(proland::CurveId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->invertCurve(cid);

		return 0;
	}

	// void proland::Area::setOwner(proland::Graph * owner)
	static int _bind_setOwner(lua_State *L) {
		if (!_lg_typecheck_setOwner(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Area::setOwner(proland::Graph * owner) function, expected prototype:\nvoid proland::Area::setOwner(proland::Graph * owner)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Area::setOwner(proland::Graph *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOwner(owner);

		return 0;
	}

	// void proland::Area::check()
	static int _bind_check(lua_State *L) {
		if (!_lg_typecheck_check(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Area::check() function, expected prototype:\nvoid proland::Area::check()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Area::check(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->check();

		return 0;
	}

	// void proland::Area::setParent(proland::AreaPtr a)
	static int _bind_setParent(lua_State *L) {
		if (!_lg_typecheck_setParent(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Area::setParent(proland::AreaPtr a) function, expected prototype:\nvoid proland::Area::setParent(proland::AreaPtr a)\nClass arguments details:\narg 1 ID = 84471053\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::AreaPtr* a_ptr=(Luna< ork::ptr< proland::Area > >::checkSubType< proland::AreaPtr >(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in proland::Area::setParent function");
		}
		proland::AreaPtr a=*a_ptr;

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Area::setParent(proland::AreaPtr). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParent(a);

		return 0;
	}

	// void proland::Area::addCurve(proland::CurveId id, int orientation)
	static int _bind_addCurve(lua_State *L) {
		if (!_lg_typecheck_addCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Area::addCurve(proland::CurveId id, int orientation) function, expected prototype:\nvoid proland::Area::addCurve(proland::CurveId id, int orientation)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::Area::addCurve function");
		}
		proland::CurveId id=*id_ptr;
		int orientation=(int)lua_tointeger(L,3);

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Area::addCurve(proland::CurveId, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addCurve(id, orientation);

		return 0;
	}

	// void proland::Area::setSubgraph(proland::Graph * g)
	static int _bind_setSubgraph(lua_State *L) {
		if (!_lg_typecheck_setSubgraph(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Area::setSubgraph(proland::Graph * g) function, expected prototype:\nvoid proland::Area::setSubgraph(proland::Graph * g)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* g=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Area::setSubgraph(proland::Graph *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSubgraph(g);

		return 0;
	}

	// bool proland::Area::isDirect() const
	static int _bind_isDirect_overload_1(lua_State *L) {
		if (!_lg_typecheck_isDirect_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::Area::isDirect() const function, expected prototype:\nbool proland::Area::isDirect() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::Area::isDirect() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isDirect();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool proland::Area::isDirect(const vector< proland::Vertex > & points, int start, int end)
	static int _bind_isDirect_overload_2(lua_State *L) {
		if (!_lg_typecheck_isDirect_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static bool proland::Area::isDirect(const vector< proland::Vertex > & points, int start, int end) function, expected prototype:\nstatic bool proland::Area::isDirect(const vector< proland::Vertex > & points, int start, int end)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const vector< proland::Vertex >* points_ptr=(Luna< vector< proland::Vertex > >::check(L,1));
		if( !points_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg points in proland::Area::isDirect function");
		}
		const vector< proland::Vertex > & points=*points_ptr;
		int start=(int)lua_tointeger(L,2);
		int end=(int)lua_tointeger(L,3);

		bool lret = proland::Area::isDirect(points, start, end);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for proland::Area::isDirect
	static int _bind_isDirect(lua_State *L) {
		if (_lg_typecheck_isDirect_overload_1(L)) return _bind_isDirect_overload_1(L);
		if (_lg_typecheck_isDirect_overload_2(L)) return _bind_isDirect_overload_2(L);

		luaL_error(L, "error in function isDirect, cannot match any of the overloads for function isDirect:\n  isDirect()\n  isDirect(const vector< proland::Vertex > &, int, int)\n");
		return 0;
	}

	// static bool proland::Area::clip(vector< proland::CurvePart * > & cpaths, const ork::box2d & clip, vector< proland::CurvePart * > & result)
	static int _bind_clip(lua_State *L) {
		if (!_lg_typecheck_clip(L)) {
			luaL_error(L, "luna typecheck failed in static bool proland::Area::clip(vector< proland::CurvePart * > & cpaths, const ork::box2d & clip, vector< proland::CurvePart * > & result) function, expected prototype:\nstatic bool proland::Area::clip(vector< proland::CurvePart * > & cpaths, const ork::box2d & clip, vector< proland::CurvePart * > & result)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = 63151909\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< proland::CurvePart * >* cpaths_ptr=(Luna< vector< proland::CurvePart * > >::check(L,1));
		if( !cpaths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cpaths in proland::Area::clip function");
		}
		vector< proland::CurvePart * > & cpaths=*cpaths_ptr;
		const ork::box2d* clip_ptr=(Luna< ork::box2d >::check(L,2));
		if( !clip_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clip in proland::Area::clip function");
		}
		const ork::box2d & clip=*clip_ptr;
		vector< proland::CurvePart * >* result_ptr=(Luna< vector< proland::CurvePart * > >::check(L,3));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in proland::Area::clip function");
		}
		vector< proland::CurvePart * > & result=*result_ptr;

		bool lret = proland::Area::clip(cpaths, clip, result);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * proland::Area::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::Area::base_toString() function, expected prototype:\nconst char * proland::Area::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::Area::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Area::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// proland::AreaId proland::Area::base_getId() const
	static int _bind_base_getId(lua_State *L) {
		if (!_lg_typecheck_base_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaId proland::Area::base_getId() const function, expected prototype:\nproland::AreaId proland::Area::base_getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaId proland::Area::base_getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaId stack_lret = self->Area::getId();
		proland::AreaId* lret = new proland::AreaId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaId >::push(L,lret,true);

		return 1;
	}

	// proland::AreaPtr proland::Area::base_getParent() const
	static int _bind_base_getParent(lua_State *L) {
		if (!_lg_typecheck_base_getParent(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaPtr proland::Area::base_getParent() const function, expected prototype:\nproland::AreaPtr proland::Area::base_getParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaPtr proland::Area::base_getParent() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaPtr stack_lret = self->Area::getParent();
		proland::AreaPtr* lret = new proland::AreaPtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaPtr >::push(L,lret,true);

		return 1;
	}

	// proland::AreaId proland::Area::base_getParentId() const
	static int _bind_base_getParentId(lua_State *L) {
		if (!_lg_typecheck_base_getParentId(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaId proland::Area::base_getParentId() const function, expected prototype:\nproland::AreaId proland::Area::base_getParentId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaId proland::Area::base_getParentId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaId stack_lret = self->Area::getParentId();
		proland::AreaId* lret = new proland::AreaId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaId >::push(L,lret,true);

		return 1;
	}

	// int proland::Area::base_getCurveCount() const
	static int _bind_base_getCurveCount(lua_State *L) {
		if (!_lg_typecheck_base_getCurveCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Area::base_getCurveCount() const function, expected prototype:\nint proland::Area::base_getCurveCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Area::base_getCurveCount() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Area::getCurveCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::CurvePtr proland::Area::base_getCurve(int i) const
	static int _bind_base_getCurve_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getCurve_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Area::base_getCurve(int i) const function, expected prototype:\nproland::CurvePtr proland::Area::base_getCurve(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Area::base_getCurve(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->Area::getCurve(i);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::Area::base_getCurve(int i, int & orientation) const
	static int _bind_base_getCurve_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getCurve_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Area::base_getCurve(int i, int & orientation) const function, expected prototype:\nproland::CurvePtr proland::Area::base_getCurve(int i, int & orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		int orientation=(int)lua_tointeger(L,3);

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Area::base_getCurve(int, int &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->Area::getCurve(i, orientation);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		lua_pushnumber(L,orientation);
		return 2;
	}

	// Overload binder for proland::Area::base_getCurve
	static int _bind_base_getCurve(lua_State *L) {
		if (_lg_typecheck_base_getCurve_overload_1(L)) return _bind_base_getCurve_overload_1(L);
		if (_lg_typecheck_base_getCurve_overload_2(L)) return _bind_base_getCurve_overload_2(L);

		luaL_error(L, "error in function base_getCurve, cannot match any of the overloads for function base_getCurve:\n  base_getCurve(int)\n  base_getCurve(int, int &)\n");
		return 0;
	}

	// void proland::Area::base_setOrientation(int i, int orientation)
	static int _bind_base_setOrientation(lua_State *L) {
		if (!_lg_typecheck_base_setOrientation(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Area::base_setOrientation(int i, int orientation) function, expected prototype:\nvoid proland::Area::base_setOrientation(int i, int orientation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		int orientation=(int)lua_tointeger(L,3);

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Area::base_setOrientation(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Area::setOrientation(i, orientation);

		return 0;
	}

	// void proland::Area::base_invertCurve(proland::CurveId cid)
	static int _bind_base_invertCurve(lua_State *L) {
		if (!_lg_typecheck_base_invertCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Area::base_invertCurve(proland::CurveId cid) function, expected prototype:\nvoid proland::Area::base_invertCurve(proland::CurveId cid)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* cid_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !cid_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cid in proland::Area::base_invertCurve function");
		}
		proland::CurveId cid=*cid_ptr;

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Area::base_invertCurve(proland::CurveId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Area::invertCurve(cid);

		return 0;
	}

	// void proland::Area::base_setParent(proland::AreaPtr a)
	static int _bind_base_setParent(lua_State *L) {
		if (!_lg_typecheck_base_setParent(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Area::base_setParent(proland::AreaPtr a) function, expected prototype:\nvoid proland::Area::base_setParent(proland::AreaPtr a)\nClass arguments details:\narg 1 ID = 84471053\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::AreaPtr* a_ptr=(Luna< ork::ptr< proland::Area > >::checkSubType< proland::AreaPtr >(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in proland::Area::base_setParent function");
		}
		proland::AreaPtr a=*a_ptr;

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Area::base_setParent(proland::AreaPtr). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Area::setParent(a);

		return 0;
	}

	// void proland::Area::base_addCurve(proland::CurveId id, int orientation)
	static int _bind_base_addCurve(lua_State *L) {
		if (!_lg_typecheck_base_addCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Area::base_addCurve(proland::CurveId id, int orientation) function, expected prototype:\nvoid proland::Area::base_addCurve(proland::CurveId id, int orientation)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::Area::base_addCurve function");
		}
		proland::CurveId id=*id_ptr;
		int orientation=(int)lua_tointeger(L,3);

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Area::base_addCurve(proland::CurveId, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Area::addCurve(id, orientation);

		return 0;
	}

	// void proland::Area::base_setSubgraph(proland::Graph * g)
	static int _bind_base_setSubgraph(lua_State *L) {
		if (!_lg_typecheck_base_setSubgraph(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Area::base_setSubgraph(proland::Graph * g) function, expected prototype:\nvoid proland::Area::base_setSubgraph(proland::Graph * g)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* g=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));

		proland::Area* self=Luna< ork::Object >::checkSubType< proland::Area >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Area::base_setSubgraph(proland::Graph *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Area::setSubgraph(g);

		return 0;
	}


	// Operator binds:

};

proland::Area* LunaTraits< proland::Area >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_Area::_bind_ctor(L);
}

void LunaTraits< proland::Area >::_bind_dtor(proland::Area* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::Area >::className[] = "Area";
const char LunaTraits< proland::Area >::fullName[] = "proland::Area";
const char LunaTraits< proland::Area >::moduleName[] = "proland";
const char* LunaTraits< proland::Area >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::Area >::hash = 97193273;
const int LunaTraits< proland::Area >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::Area >::methods[] = {
	{"print", &luna_wrapper_proland_Area::_bind_print},
	{"getId", &luna_wrapper_proland_Area::_bind_getId},
	{"getParent", &luna_wrapper_proland_Area::_bind_getParent},
	{"getParentId", &luna_wrapper_proland_Area::_bind_getParentId},
	{"getAncestor", &luna_wrapper_proland_Area::_bind_getAncestor},
	{"getInfo", &luna_wrapper_proland_Area::_bind_getInfo},
	{"getCurveCount", &luna_wrapper_proland_Area::_bind_getCurveCount},
	{"getCurve", &luna_wrapper_proland_Area::_bind_getCurve},
	{"getSubgraph", &luna_wrapper_proland_Area::_bind_getSubgraph},
	{"getBounds", &luna_wrapper_proland_Area::_bind_getBounds},
	{"isInside", &luna_wrapper_proland_Area::_bind_isInside},
	{"getRectanglePosition", &luna_wrapper_proland_Area::_bind_getRectanglePosition},
	{"getTrianglePosition", &luna_wrapper_proland_Area::_bind_getTrianglePosition},
	{"equals", &luna_wrapper_proland_Area::_bind_equals},
	{"setOrientation", &luna_wrapper_proland_Area::_bind_setOrientation},
	{"setInfo", &luna_wrapper_proland_Area::_bind_setInfo},
	{"invertCurve", &luna_wrapper_proland_Area::_bind_invertCurve},
	{"setOwner", &luna_wrapper_proland_Area::_bind_setOwner},
	{"check", &luna_wrapper_proland_Area::_bind_check},
	{"setParent", &luna_wrapper_proland_Area::_bind_setParent},
	{"addCurve", &luna_wrapper_proland_Area::_bind_addCurve},
	{"setSubgraph", &luna_wrapper_proland_Area::_bind_setSubgraph},
	{"isDirect", &luna_wrapper_proland_Area::_bind_isDirect},
	{"clip", &luna_wrapper_proland_Area::_bind_clip},
	{"base_toString", &luna_wrapper_proland_Area::_bind_base_toString},
	{"base_getId", &luna_wrapper_proland_Area::_bind_base_getId},
	{"base_getParent", &luna_wrapper_proland_Area::_bind_base_getParent},
	{"base_getParentId", &luna_wrapper_proland_Area::_bind_base_getParentId},
	{"base_getCurveCount", &luna_wrapper_proland_Area::_bind_base_getCurveCount},
	{"base_getCurve", &luna_wrapper_proland_Area::_bind_base_getCurve},
	{"base_setOrientation", &luna_wrapper_proland_Area::_bind_base_setOrientation},
	{"base_invertCurve", &luna_wrapper_proland_Area::_bind_base_invertCurve},
	{"base_setParent", &luna_wrapper_proland_Area::_bind_base_setParent},
	{"base_addCurve", &luna_wrapper_proland_Area::_bind_base_addCurve},
	{"base_setSubgraph", &luna_wrapper_proland_Area::_bind_base_setSubgraph},
	{"fromVoid", &luna_wrapper_proland_Area::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_Area::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_Area::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::Area >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_Area::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::Area >::enumValues[] = {
	{0,0}
};


