#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_LazyArea.h>

class luna_wrapper_proland_LazyArea {
public:
	typedef Luna< proland::LazyArea > luna_t;

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

		proland::LazyArea* self= (proland::LazyArea*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::LazyArea >::push(L,self,false);
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
		//proland::LazyArea* ptr= dynamic_cast< proland::LazyArea* >(Luna< ork::Object >::check(L,1));
		proland::LazyArea* ptr= luna_caster< ork::Object, proland::LazyArea >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::LazyArea >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< ork::Object >::checkSubType< proland::Graph >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,2724636) ) return false;
		if( (!(Luna< proland::AreaId >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< proland::Graph >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,2724636) ) return false;
		if( (!(Luna< proland::AreaId >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_getCurveCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOrientation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_invertCurve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addCurve(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getParentId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72385761) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setSubgraph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
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

	inline static bool _lg_typecheck_base_getCurveCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_addCurve(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::LazyArea::LazyArea(proland::Graph * owner, proland::AreaId id)
	static proland::LazyArea* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::LazyArea::LazyArea(proland::Graph * owner, proland::AreaId id) function, expected prototype:\nproland::LazyArea::LazyArea(proland::Graph * owner, proland::AreaId id)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = 2724636\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,1));
		proland::AreaId* id_ptr=(Luna< proland::AreaId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::LazyArea::LazyArea function");
		}
		proland::AreaId id=*id_ptr;

		return new proland::LazyArea(owner, id);
	}

	// proland::LazyArea::LazyArea(lua_Table * data, proland::Graph * owner, proland::AreaId id)
	static proland::LazyArea* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::LazyArea::LazyArea(lua_Table * data, proland::Graph * owner, proland::AreaId id) function, expected prototype:\nproland::LazyArea::LazyArea(lua_Table * data, proland::Graph * owner, proland::AreaId id)\nClass arguments details:\narg 2 ID = 1381405\narg 3 ID = 2724636\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));
		proland::AreaId* id_ptr=(Luna< proland::AreaId >::check(L,3));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::LazyArea::LazyArea function");
		}
		proland::AreaId id=*id_ptr;

		return new wrapper_proland_LazyArea(L,NULL, owner, id);
	}

	// Overload binder for proland::LazyArea::LazyArea
	static proland::LazyArea* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function LazyArea, cannot match any of the overloads for function LazyArea:\n  LazyArea(proland::Graph *, proland::AreaId)\n  LazyArea(lua_Table *, proland::Graph *, proland::AreaId)\n");
		return NULL;
	}


	// Function binds:
	// proland::AreaId proland::LazyArea::getId() const
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaId proland::LazyArea::getId() const function, expected prototype:\nproland::AreaId proland::LazyArea::getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaId proland::LazyArea::getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaId stack_lret = self->getId();
		proland::AreaId* lret = new proland::AreaId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaId >::push(L,lret,true);

		return 1;
	}

	// proland::AreaPtr proland::LazyArea::getParent() const
	static int _bind_getParent(lua_State *L) {
		if (!_lg_typecheck_getParent(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaPtr proland::LazyArea::getParent() const function, expected prototype:\nproland::AreaPtr proland::LazyArea::getParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaPtr proland::LazyArea::getParent() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaPtr stack_lret = self->getParent();
		proland::AreaPtr* lret = new proland::AreaPtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaPtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::LazyArea::getCurve(int i) const
	static int _bind_getCurve_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCurve_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::LazyArea::getCurve(int i) const function, expected prototype:\nproland::CurvePtr proland::LazyArea::getCurve(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::LazyArea::getCurve(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->getCurve(i);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::LazyArea::getCurve(int i, int & orientation) const
	static int _bind_getCurve_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCurve_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::LazyArea::getCurve(int i, int & orientation) const function, expected prototype:\nproland::CurvePtr proland::LazyArea::getCurve(int i, int & orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		int orientation=(int)lua_tointeger(L,3);

		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::LazyArea::getCurve(int, int &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->getCurve(i, orientation);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		lua_pushnumber(L,orientation);
		return 2;
	}

	// Overload binder for proland::LazyArea::getCurve
	static int _bind_getCurve(lua_State *L) {
		if (_lg_typecheck_getCurve_overload_1(L)) return _bind_getCurve_overload_1(L);
		if (_lg_typecheck_getCurve_overload_2(L)) return _bind_getCurve_overload_2(L);

		luaL_error(L, "error in function getCurve, cannot match any of the overloads for function getCurve:\n  getCurve(int)\n  getCurve(int, int &)\n");
		return 0;
	}

	// int proland::LazyArea::getCurveCount() const
	static int _bind_getCurveCount(lua_State *L) {
		if (!_lg_typecheck_getCurveCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::LazyArea::getCurveCount() const function, expected prototype:\nint proland::LazyArea::getCurveCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::LazyArea::getCurveCount() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCurveCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::LazyArea::setOrientation(int i, int orientation)
	static int _bind_setOrientation(lua_State *L) {
		if (!_lg_typecheck_setOrientation(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyArea::setOrientation(int i, int orientation) function, expected prototype:\nvoid proland::LazyArea::setOrientation(int i, int orientation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		int orientation=(int)lua_tointeger(L,3);

		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyArea::setOrientation(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOrientation(i, orientation);

		return 0;
	}

	// void proland::LazyArea::invertCurve(proland::CurveId cid)
	static int _bind_invertCurve(lua_State *L) {
		if (!_lg_typecheck_invertCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyArea::invertCurve(proland::CurveId cid) function, expected prototype:\nvoid proland::LazyArea::invertCurve(proland::CurveId cid)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* cid_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !cid_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cid in proland::LazyArea::invertCurve function");
		}
		proland::CurveId cid=*cid_ptr;

		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyArea::invertCurve(proland::CurveId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->invertCurve(cid);

		return 0;
	}

	// void proland::LazyArea::addCurve(proland::CurveId id, int orientation)
	static int _bind_addCurve(lua_State *L) {
		if (!_lg_typecheck_addCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyArea::addCurve(proland::CurveId id, int orientation) function, expected prototype:\nvoid proland::LazyArea::addCurve(proland::CurveId id, int orientation)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::LazyArea::addCurve function");
		}
		proland::CurveId id=*id_ptr;
		int orientation=(int)lua_tointeger(L,3);

		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyArea::addCurve(proland::CurveId, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addCurve(id, orientation);

		return 0;
	}

	// const char * proland::LazyArea::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::LazyArea::base_toString() function, expected prototype:\nconst char * proland::LazyArea::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::LazyArea::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LazyArea::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// proland::AreaId proland::LazyArea::base_getParentId() const
	static int _bind_base_getParentId(lua_State *L) {
		if (!_lg_typecheck_base_getParentId(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaId proland::LazyArea::base_getParentId() const function, expected prototype:\nproland::AreaId proland::LazyArea::base_getParentId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaId proland::LazyArea::base_getParentId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaId stack_lret = self->LazyArea::getParentId();
		proland::AreaId* lret = new proland::AreaId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaId >::push(L,lret,true);

		return 1;
	}

	// void proland::LazyArea::base_setParent(proland::AreaPtr a)
	static int _bind_base_setParent(lua_State *L) {
		if (!_lg_typecheck_base_setParent(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyArea::base_setParent(proland::AreaPtr a) function, expected prototype:\nvoid proland::LazyArea::base_setParent(proland::AreaPtr a)\nClass arguments details:\narg 1 ID = 84471053\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::AreaPtr* a_ptr=(Luna< ork::ptr< proland::Area > >::checkSubType< proland::AreaPtr >(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in proland::LazyArea::base_setParent function");
		}
		proland::AreaPtr a=*a_ptr;

		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyArea::base_setParent(proland::AreaPtr). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyArea::setParent(a);

		return 0;
	}

	// void proland::LazyArea::base_setSubgraph(proland::Graph * g)
	static int _bind_base_setSubgraph(lua_State *L) {
		if (!_lg_typecheck_base_setSubgraph(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyArea::base_setSubgraph(proland::Graph * g) function, expected prototype:\nvoid proland::LazyArea::base_setSubgraph(proland::Graph * g)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* g=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));

		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyArea::base_setSubgraph(proland::Graph *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyArea::setSubgraph(g);

		return 0;
	}

	// proland::AreaId proland::LazyArea::base_getId() const
	static int _bind_base_getId(lua_State *L) {
		if (!_lg_typecheck_base_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaId proland::LazyArea::base_getId() const function, expected prototype:\nproland::AreaId proland::LazyArea::base_getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaId proland::LazyArea::base_getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaId stack_lret = self->LazyArea::getId();
		proland::AreaId* lret = new proland::AreaId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaId >::push(L,lret,true);

		return 1;
	}

	// proland::AreaPtr proland::LazyArea::base_getParent() const
	static int _bind_base_getParent(lua_State *L) {
		if (!_lg_typecheck_base_getParent(L)) {
			luaL_error(L, "luna typecheck failed in proland::AreaPtr proland::LazyArea::base_getParent() const function, expected prototype:\nproland::AreaPtr proland::LazyArea::base_getParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AreaPtr proland::LazyArea::base_getParent() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::AreaPtr stack_lret = self->LazyArea::getParent();
		proland::AreaPtr* lret = new proland::AreaPtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AreaPtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::LazyArea::base_getCurve(int i) const
	static int _bind_base_getCurve_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getCurve_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::LazyArea::base_getCurve(int i) const function, expected prototype:\nproland::CurvePtr proland::LazyArea::base_getCurve(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::LazyArea::base_getCurve(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->LazyArea::getCurve(i);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::LazyArea::base_getCurve(int i, int & orientation) const
	static int _bind_base_getCurve_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getCurve_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::LazyArea::base_getCurve(int i, int & orientation) const function, expected prototype:\nproland::CurvePtr proland::LazyArea::base_getCurve(int i, int & orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		int orientation=(int)lua_tointeger(L,3);

		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::LazyArea::base_getCurve(int, int &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->LazyArea::getCurve(i, orientation);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		lua_pushnumber(L,orientation);
		return 2;
	}

	// Overload binder for proland::LazyArea::base_getCurve
	static int _bind_base_getCurve(lua_State *L) {
		if (_lg_typecheck_base_getCurve_overload_1(L)) return _bind_base_getCurve_overload_1(L);
		if (_lg_typecheck_base_getCurve_overload_2(L)) return _bind_base_getCurve_overload_2(L);

		luaL_error(L, "error in function base_getCurve, cannot match any of the overloads for function base_getCurve:\n  base_getCurve(int)\n  base_getCurve(int, int &)\n");
		return 0;
	}

	// int proland::LazyArea::base_getCurveCount() const
	static int _bind_base_getCurveCount(lua_State *L) {
		if (!_lg_typecheck_base_getCurveCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::LazyArea::base_getCurveCount() const function, expected prototype:\nint proland::LazyArea::base_getCurveCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::LazyArea::base_getCurveCount() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->LazyArea::getCurveCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::LazyArea::base_setOrientation(int i, int orientation)
	static int _bind_base_setOrientation(lua_State *L) {
		if (!_lg_typecheck_base_setOrientation(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyArea::base_setOrientation(int i, int orientation) function, expected prototype:\nvoid proland::LazyArea::base_setOrientation(int i, int orientation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		int orientation=(int)lua_tointeger(L,3);

		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyArea::base_setOrientation(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyArea::setOrientation(i, orientation);

		return 0;
	}

	// void proland::LazyArea::base_invertCurve(proland::CurveId cid)
	static int _bind_base_invertCurve(lua_State *L) {
		if (!_lg_typecheck_base_invertCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyArea::base_invertCurve(proland::CurveId cid) function, expected prototype:\nvoid proland::LazyArea::base_invertCurve(proland::CurveId cid)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* cid_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !cid_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cid in proland::LazyArea::base_invertCurve function");
		}
		proland::CurveId cid=*cid_ptr;

		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyArea::base_invertCurve(proland::CurveId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyArea::invertCurve(cid);

		return 0;
	}

	// void proland::LazyArea::base_addCurve(proland::CurveId id, int orientation)
	static int _bind_base_addCurve(lua_State *L) {
		if (!_lg_typecheck_base_addCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyArea::base_addCurve(proland::CurveId id, int orientation) function, expected prototype:\nvoid proland::LazyArea::base_addCurve(proland::CurveId id, int orientation)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::LazyArea::base_addCurve function");
		}
		proland::CurveId id=*id_ptr;
		int orientation=(int)lua_tointeger(L,3);

		proland::LazyArea* self=Luna< ork::Object >::checkSubType< proland::LazyArea >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyArea::base_addCurve(proland::CurveId, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyArea::addCurve(id, orientation);

		return 0;
	}


	// Operator binds:

};

proland::LazyArea* LunaTraits< proland::LazyArea >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_LazyArea::_bind_ctor(L);
}

void LunaTraits< proland::LazyArea >::_bind_dtor(proland::LazyArea* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::LazyArea >::className[] = "LazyArea";
const char LunaTraits< proland::LazyArea >::fullName[] = "proland::LazyArea";
const char LunaTraits< proland::LazyArea >::moduleName[] = "proland";
const char* LunaTraits< proland::LazyArea >::parents[] = {"proland.Area", 0};
const int LunaTraits< proland::LazyArea >::hash = 92679216;
const int LunaTraits< proland::LazyArea >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::LazyArea >::methods[] = {
	{"getId", &luna_wrapper_proland_LazyArea::_bind_getId},
	{"getParent", &luna_wrapper_proland_LazyArea::_bind_getParent},
	{"getCurve", &luna_wrapper_proland_LazyArea::_bind_getCurve},
	{"getCurveCount", &luna_wrapper_proland_LazyArea::_bind_getCurveCount},
	{"setOrientation", &luna_wrapper_proland_LazyArea::_bind_setOrientation},
	{"invertCurve", &luna_wrapper_proland_LazyArea::_bind_invertCurve},
	{"addCurve", &luna_wrapper_proland_LazyArea::_bind_addCurve},
	{"base_toString", &luna_wrapper_proland_LazyArea::_bind_base_toString},
	{"base_getParentId", &luna_wrapper_proland_LazyArea::_bind_base_getParentId},
	{"base_setParent", &luna_wrapper_proland_LazyArea::_bind_base_setParent},
	{"base_setSubgraph", &luna_wrapper_proland_LazyArea::_bind_base_setSubgraph},
	{"base_getId", &luna_wrapper_proland_LazyArea::_bind_base_getId},
	{"base_getParent", &luna_wrapper_proland_LazyArea::_bind_base_getParent},
	{"base_getCurve", &luna_wrapper_proland_LazyArea::_bind_base_getCurve},
	{"base_getCurveCount", &luna_wrapper_proland_LazyArea::_bind_base_getCurveCount},
	{"base_setOrientation", &luna_wrapper_proland_LazyArea::_bind_base_setOrientation},
	{"base_invertCurve", &luna_wrapper_proland_LazyArea::_bind_base_invertCurve},
	{"base_addCurve", &luna_wrapper_proland_LazyArea::_bind_base_addCurve},
	{"fromVoid", &luna_wrapper_proland_LazyArea::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_LazyArea::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_LazyArea::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::LazyArea >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_LazyArea::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::LazyArea >::enumValues[] = {
	{0,0}
};


