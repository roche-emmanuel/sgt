#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_Node.h>

class luna_wrapper_proland_Node {
public:
	typedef Luna< proland::Node > luna_t;

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

		proland::Node* self= (proland::Node*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::Node >::push(L,self,false);
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
		//proland::Node* ptr= dynamic_cast< proland::Node* >(Luna< ork::Object >::check(L,1));
		proland::Node* ptr= luna_caster< ork::Object, proland::Node >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::Node >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< ork::Object >::checkSubType< proland::Graph >(L,1)) ) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< proland::Graph >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurveCount_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurveCount_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92772708) ) return false;
		if( (!(Luna< set< proland::CurveId > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurve_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurve_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41768114) ) return false;
		if( (!(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOpposite(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41768114) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOwner(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addCurve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeCurve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
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

	inline static bool _lg_typecheck_base_getCurveCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getCurve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addCurve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeCurve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::Node::Node(proland::Graph * owner, double x, double y)
	static proland::Node* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::Node::Node(proland::Graph * owner, double x, double y) function, expected prototype:\nproland::Node::Node(proland::Graph * owner, double x, double y)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,1));
		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);

		return new proland::Node(owner, x, y);
	}

	// proland::Node::Node(lua_Table * data, proland::Graph * owner, double x, double y)
	static proland::Node* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::Node::Node(lua_Table * data, proland::Graph * owner, double x, double y) function, expected prototype:\nproland::Node::Node(lua_Table * data, proland::Graph * owner, double x, double y)\nClass arguments details:\narg 2 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));
		double x=(double)lua_tonumber(L,3);
		double y=(double)lua_tonumber(L,4);

		return new wrapper_proland_Node(L,NULL, owner, x, y);
	}

	// Overload binder for proland::Node::Node
	static proland::Node* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Node, cannot match any of the overloads for function Node:\n  Node(proland::Graph *, double, double)\n  Node(lua_Table *, proland::Graph *, double, double)\n");
		return NULL;
	}


	// Function binds:
	// proland::NodeId proland::Node::getId() const
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodeId proland::Node::getId() const function, expected prototype:\nproland::NodeId proland::Node::getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Node* self=Luna< ork::Object >::checkSubType< proland::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodeId proland::Node::getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodeId stack_lret = self->getId();
		proland::NodeId* lret = new proland::NodeId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodeId >::push(L,lret,true);

		return 1;
	}

	// ork::vec2d proland::Node::getPos() const
	static int _bind_getPos(lua_State *L) {
		if (!_lg_typecheck_getPos(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2d proland::Node::getPos() const function, expected prototype:\nork::vec2d proland::Node::getPos() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Node* self=Luna< ork::Object >::checkSubType< proland::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2d proland::Node::getPos() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2d stack_lret = self->getPos();
		ork::vec2d* lret = new ork::vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2d >::push(L,lret,true);

		return 1;
	}

	// int proland::Node::getCurveCount() const
	static int _bind_getCurveCount_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCurveCount_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Node::getCurveCount() const function, expected prototype:\nint proland::Node::getCurveCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Node* self=Luna< ork::Object >::checkSubType< proland::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Node::getCurveCount() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCurveCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::Node::getCurveCount(const set< proland::CurveId > & includedCurves) const
	static int _bind_getCurveCount_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCurveCount_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Node::getCurveCount(const set< proland::CurveId > & includedCurves) const function, expected prototype:\nint proland::Node::getCurveCount(const set< proland::CurveId > & includedCurves) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const set< proland::CurveId >* includedCurves_ptr=(Luna< set< proland::CurveId > >::check(L,2));
		if( !includedCurves_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg includedCurves in proland::Node::getCurveCount function");
		}
		const set< proland::CurveId > & includedCurves=*includedCurves_ptr;

		proland::Node* self=Luna< ork::Object >::checkSubType< proland::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Node::getCurveCount(const set< proland::CurveId > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCurveCount(includedCurves);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for proland::Node::getCurveCount
	static int _bind_getCurveCount(lua_State *L) {
		if (_lg_typecheck_getCurveCount_overload_1(L)) return _bind_getCurveCount_overload_1(L);
		if (_lg_typecheck_getCurveCount_overload_2(L)) return _bind_getCurveCount_overload_2(L);

		luaL_error(L, "error in function getCurveCount, cannot match any of the overloads for function getCurveCount:\n  getCurveCount()\n  getCurveCount(const set< proland::CurveId > &)\n");
		return 0;
	}

	// proland::CurvePtr proland::Node::getCurve(int i) const
	static int _bind_getCurve_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCurve_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Node::getCurve(int i) const function, expected prototype:\nproland::CurvePtr proland::Node::getCurve(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::Node* self=Luna< ork::Object >::checkSubType< proland::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Node::getCurve(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->getCurve(i);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::CurvePtr proland::Node::getCurve(const proland::NodePtr n) const
	static int _bind_getCurve_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCurve_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Node::getCurve(const proland::NodePtr n) const function, expected prototype:\nproland::CurvePtr proland::Node::getCurve(const proland::NodePtr n) const\nClass arguments details:\narg 1 ID = 35325349\n\n%s",luna_dumpStack(L).c_str());
		}

		const proland::NodePtr* n_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,2));
		if( !n_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg n in proland::Node::getCurve function");
		}
		const proland::NodePtr n=*n_ptr;

		proland::Node* self=Luna< ork::Object >::checkSubType< proland::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Node::getCurve(const proland::NodePtr) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->getCurve(n);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// Overload binder for proland::Node::getCurve
	static int _bind_getCurve(lua_State *L) {
		if (_lg_typecheck_getCurve_overload_1(L)) return _bind_getCurve_overload_1(L);
		if (_lg_typecheck_getCurve_overload_2(L)) return _bind_getCurve_overload_2(L);

		luaL_error(L, "error in function getCurve, cannot match any of the overloads for function getCurve:\n  getCurve(int)\n  getCurve(const proland::NodePtr)\n");
		return 0;
	}

	// proland::NodePtr proland::Node::getOpposite(const proland::NodePtr n) const
	static int _bind_getOpposite(lua_State *L) {
		if (!_lg_typecheck_getOpposite(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodePtr proland::Node::getOpposite(const proland::NodePtr n) const function, expected prototype:\nproland::NodePtr proland::Node::getOpposite(const proland::NodePtr n) const\nClass arguments details:\narg 1 ID = 35325349\n\n%s",luna_dumpStack(L).c_str());
		}

		const proland::NodePtr* n_ptr=(Luna< ork::ptr< proland::Node > >::checkSubType< proland::NodePtr >(L,2));
		if( !n_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg n in proland::Node::getOpposite function");
		}
		const proland::NodePtr n=*n_ptr;

		proland::Node* self=Luna< ork::Object >::checkSubType< proland::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodePtr proland::Node::getOpposite(const proland::NodePtr) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodePtr stack_lret = self->getOpposite(n);
		proland::NodePtr* lret = new proland::NodePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodePtr >::push(L,lret,true);

		return 1;
	}

	// void proland::Node::setPos(const ork::vec2d & v)
	static int _bind_setPos(lua_State *L) {
		if (!_lg_typecheck_setPos(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Node::setPos(const ork::vec2d & v) function, expected prototype:\nvoid proland::Node::setPos(const ork::vec2d & v)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2d* v_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in proland::Node::setPos function");
		}
		const ork::vec2d & v=*v_ptr;

		proland::Node* self=Luna< ork::Object >::checkSubType< proland::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Node::setPos(const ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPos(v);

		return 0;
	}

	// void proland::Node::setOwner(proland::Graph * owner)
	static int _bind_setOwner(lua_State *L) {
		if (!_lg_typecheck_setOwner(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Node::setOwner(proland::Graph * owner) function, expected prototype:\nvoid proland::Node::setOwner(proland::Graph * owner)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));

		proland::Node* self=Luna< ork::Object >::checkSubType< proland::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Node::setOwner(proland::Graph *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOwner(owner);

		return 0;
	}

	// void proland::Node::addCurve(proland::CurveId c)
	static int _bind_addCurve(lua_State *L) {
		if (!_lg_typecheck_addCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Node::addCurve(proland::CurveId c) function, expected prototype:\nvoid proland::Node::addCurve(proland::CurveId c)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* c_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::Node::addCurve function");
		}
		proland::CurveId c=*c_ptr;

		proland::Node* self=Luna< ork::Object >::checkSubType< proland::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Node::addCurve(proland::CurveId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addCurve(c);

		return 0;
	}

	// void proland::Node::removeCurve(proland::CurveId c)
	static int _bind_removeCurve(lua_State *L) {
		if (!_lg_typecheck_removeCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Node::removeCurve(proland::CurveId c) function, expected prototype:\nvoid proland::Node::removeCurve(proland::CurveId c)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* c_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::Node::removeCurve function");
		}
		proland::CurveId c=*c_ptr;

		proland::Node* self=Luna< ork::Object >::checkSubType< proland::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Node::removeCurve(proland::CurveId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeCurve(c);

		return 0;
	}

	// const char * proland::Node::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::Node::base_toString() function, expected prototype:\nconst char * proland::Node::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Node* self=Luna< ork::Object >::checkSubType< proland::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::Node::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Node::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// proland::NodeId proland::Node::base_getId() const
	static int _bind_base_getId(lua_State *L) {
		if (!_lg_typecheck_base_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodeId proland::Node::base_getId() const function, expected prototype:\nproland::NodeId proland::Node::base_getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Node* self=Luna< ork::Object >::checkSubType< proland::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodeId proland::Node::base_getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodeId stack_lret = self->Node::getId();
		proland::NodeId* lret = new proland::NodeId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodeId >::push(L,lret,true);

		return 1;
	}

	// int proland::Node::base_getCurveCount() const
	static int _bind_base_getCurveCount(lua_State *L) {
		if (!_lg_typecheck_base_getCurveCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Node::base_getCurveCount() const function, expected prototype:\nint proland::Node::base_getCurveCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Node* self=Luna< ork::Object >::checkSubType< proland::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Node::base_getCurveCount() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Node::getCurveCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::CurvePtr proland::Node::base_getCurve(int i) const
	static int _bind_base_getCurve(lua_State *L) {
		if (!_lg_typecheck_base_getCurve(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::Node::base_getCurve(int i) const function, expected prototype:\nproland::CurvePtr proland::Node::base_getCurve(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::Node* self=Luna< ork::Object >::checkSubType< proland::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::Node::base_getCurve(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->Node::getCurve(i);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// void proland::Node::base_addCurve(proland::CurveId c)
	static int _bind_base_addCurve(lua_State *L) {
		if (!_lg_typecheck_base_addCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Node::base_addCurve(proland::CurveId c) function, expected prototype:\nvoid proland::Node::base_addCurve(proland::CurveId c)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* c_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::Node::base_addCurve function");
		}
		proland::CurveId c=*c_ptr;

		proland::Node* self=Luna< ork::Object >::checkSubType< proland::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Node::base_addCurve(proland::CurveId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Node::addCurve(c);

		return 0;
	}

	// void proland::Node::base_removeCurve(proland::CurveId c)
	static int _bind_base_removeCurve(lua_State *L) {
		if (!_lg_typecheck_base_removeCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Node::base_removeCurve(proland::CurveId c) function, expected prototype:\nvoid proland::Node::base_removeCurve(proland::CurveId c)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* c_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::Node::base_removeCurve function");
		}
		proland::CurveId c=*c_ptr;

		proland::Node* self=Luna< ork::Object >::checkSubType< proland::Node >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Node::base_removeCurve(proland::CurveId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Node::removeCurve(c);

		return 0;
	}


	// Operator binds:

};

proland::Node* LunaTraits< proland::Node >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_Node::_bind_ctor(L);
}

void LunaTraits< proland::Node >::_bind_dtor(proland::Node* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::Node >::className[] = "Node";
const char LunaTraits< proland::Node >::fullName[] = "proland::Node";
const char LunaTraits< proland::Node >::moduleName[] = "proland";
const char* LunaTraits< proland::Node >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::Node >::hash = 97577646;
const int LunaTraits< proland::Node >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::Node >::methods[] = {
	{"getId", &luna_wrapper_proland_Node::_bind_getId},
	{"getPos", &luna_wrapper_proland_Node::_bind_getPos},
	{"getCurveCount", &luna_wrapper_proland_Node::_bind_getCurveCount},
	{"getCurve", &luna_wrapper_proland_Node::_bind_getCurve},
	{"getOpposite", &luna_wrapper_proland_Node::_bind_getOpposite},
	{"setPos", &luna_wrapper_proland_Node::_bind_setPos},
	{"setOwner", &luna_wrapper_proland_Node::_bind_setOwner},
	{"addCurve", &luna_wrapper_proland_Node::_bind_addCurve},
	{"removeCurve", &luna_wrapper_proland_Node::_bind_removeCurve},
	{"base_toString", &luna_wrapper_proland_Node::_bind_base_toString},
	{"base_getId", &luna_wrapper_proland_Node::_bind_base_getId},
	{"base_getCurveCount", &luna_wrapper_proland_Node::_bind_base_getCurveCount},
	{"base_getCurve", &luna_wrapper_proland_Node::_bind_base_getCurve},
	{"base_addCurve", &luna_wrapper_proland_Node::_bind_base_addCurve},
	{"base_removeCurve", &luna_wrapper_proland_Node::_bind_base_removeCurve},
	{"fromVoid", &luna_wrapper_proland_Node::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_Node::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_Node::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::Node >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_Node::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::Node >::enumValues[] = {
	{0,0}
};


