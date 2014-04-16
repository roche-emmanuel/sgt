#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_LazyNode.h>

class luna_wrapper_proland_LazyNode {
public:
	typedef Luna< proland::LazyNode > luna_t;

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

		proland::LazyNode* self= (proland::LazyNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::LazyNode >::push(L,self,false);
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
		//proland::LazyNode* ptr= dynamic_cast< proland::LazyNode* >(Luna< ork::Object >::check(L,1));
		proland::LazyNode* ptr= luna_caster< ork::Object, proland::LazyNode >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::LazyNode >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< ork::Object >::checkSubType< proland::Graph >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,72107044) ) return false;
		if( (!(Luna< proland::NodeId >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< proland::Graph >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,72107044) ) return false;
		if( (!(Luna< proland::NodeId >::check(L,3))) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_getCurveCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getCurve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// proland::LazyNode::LazyNode(proland::Graph * owner, proland::NodeId id, double x, double y)
	static proland::LazyNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::LazyNode::LazyNode(proland::Graph * owner, proland::NodeId id, double x, double y) function, expected prototype:\nproland::LazyNode::LazyNode(proland::Graph * owner, proland::NodeId id, double x, double y)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = 72107044\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,1));
		proland::NodeId* id_ptr=(Luna< proland::NodeId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::LazyNode::LazyNode function");
		}
		proland::NodeId id=*id_ptr;
		double x=(double)lua_tonumber(L,3);
		double y=(double)lua_tonumber(L,4);

		return new proland::LazyNode(owner, id, x, y);
	}

	// proland::LazyNode::LazyNode(lua_Table * data, proland::Graph * owner, proland::NodeId id, double x, double y)
	static proland::LazyNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::LazyNode::LazyNode(lua_Table * data, proland::Graph * owner, proland::NodeId id, double x, double y) function, expected prototype:\nproland::LazyNode::LazyNode(lua_Table * data, proland::Graph * owner, proland::NodeId id, double x, double y)\nClass arguments details:\narg 2 ID = 1381405\narg 3 ID = 72107044\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Graph* owner=(Luna< ork::Object >::checkSubType< proland::Graph >(L,2));
		proland::NodeId* id_ptr=(Luna< proland::NodeId >::check(L,3));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::LazyNode::LazyNode function");
		}
		proland::NodeId id=*id_ptr;
		double x=(double)lua_tonumber(L,4);
		double y=(double)lua_tonumber(L,5);

		return new wrapper_proland_LazyNode(L,NULL, owner, id, x, y);
	}

	// Overload binder for proland::LazyNode::LazyNode
	static proland::LazyNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function LazyNode, cannot match any of the overloads for function LazyNode:\n  LazyNode(proland::Graph *, proland::NodeId, double, double)\n  LazyNode(lua_Table *, proland::Graph *, proland::NodeId, double, double)\n");
		return NULL;
	}


	// Function binds:
	// proland::NodeId proland::LazyNode::getId() const
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodeId proland::LazyNode::getId() const function, expected prototype:\nproland::NodeId proland::LazyNode::getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyNode* self=Luna< ork::Object >::checkSubType< proland::LazyNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodeId proland::LazyNode::getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodeId stack_lret = self->getId();
		proland::NodeId* lret = new proland::NodeId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodeId >::push(L,lret,true);

		return 1;
	}

	// void proland::LazyNode::addCurve(proland::CurveId c)
	static int _bind_addCurve(lua_State *L) {
		if (!_lg_typecheck_addCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyNode::addCurve(proland::CurveId c) function, expected prototype:\nvoid proland::LazyNode::addCurve(proland::CurveId c)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* c_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::LazyNode::addCurve function");
		}
		proland::CurveId c=*c_ptr;

		proland::LazyNode* self=Luna< ork::Object >::checkSubType< proland::LazyNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyNode::addCurve(proland::CurveId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addCurve(c);

		return 0;
	}

	// void proland::LazyNode::removeCurve(proland::CurveId c)
	static int _bind_removeCurve(lua_State *L) {
		if (!_lg_typecheck_removeCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyNode::removeCurve(proland::CurveId c) function, expected prototype:\nvoid proland::LazyNode::removeCurve(proland::CurveId c)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* c_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::LazyNode::removeCurve function");
		}
		proland::CurveId c=*c_ptr;

		proland::LazyNode* self=Luna< ork::Object >::checkSubType< proland::LazyNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyNode::removeCurve(proland::CurveId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeCurve(c);

		return 0;
	}

	// const char * proland::LazyNode::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::LazyNode::base_toString() function, expected prototype:\nconst char * proland::LazyNode::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyNode* self=Luna< ork::Object >::checkSubType< proland::LazyNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::LazyNode::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LazyNode::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// int proland::LazyNode::base_getCurveCount() const
	static int _bind_base_getCurveCount(lua_State *L) {
		if (!_lg_typecheck_base_getCurveCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::LazyNode::base_getCurveCount() const function, expected prototype:\nint proland::LazyNode::base_getCurveCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyNode* self=Luna< ork::Object >::checkSubType< proland::LazyNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::LazyNode::base_getCurveCount() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->LazyNode::getCurveCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::CurvePtr proland::LazyNode::base_getCurve(int i) const
	static int _bind_base_getCurve(lua_State *L) {
		if (!_lg_typecheck_base_getCurve(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurvePtr proland::LazyNode::base_getCurve(int i) const function, expected prototype:\nproland::CurvePtr proland::LazyNode::base_getCurve(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::LazyNode* self=Luna< ork::Object >::checkSubType< proland::LazyNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurvePtr proland::LazyNode::base_getCurve(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurvePtr stack_lret = self->LazyNode::getCurve(i);
		proland::CurvePtr* lret = new proland::CurvePtr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurvePtr >::push(L,lret,true);

		return 1;
	}

	// proland::NodeId proland::LazyNode::base_getId() const
	static int _bind_base_getId(lua_State *L) {
		if (!_lg_typecheck_base_getId(L)) {
			luaL_error(L, "luna typecheck failed in proland::NodeId proland::LazyNode::base_getId() const function, expected prototype:\nproland::NodeId proland::LazyNode::base_getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::LazyNode* self=Luna< ork::Object >::checkSubType< proland::LazyNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::NodeId proland::LazyNode::base_getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::NodeId stack_lret = self->LazyNode::getId();
		proland::NodeId* lret = new proland::NodeId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::NodeId >::push(L,lret,true);

		return 1;
	}

	// void proland::LazyNode::base_addCurve(proland::CurveId c)
	static int _bind_base_addCurve(lua_State *L) {
		if (!_lg_typecheck_base_addCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyNode::base_addCurve(proland::CurveId c) function, expected prototype:\nvoid proland::LazyNode::base_addCurve(proland::CurveId c)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* c_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::LazyNode::base_addCurve function");
		}
		proland::CurveId c=*c_ptr;

		proland::LazyNode* self=Luna< ork::Object >::checkSubType< proland::LazyNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyNode::base_addCurve(proland::CurveId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyNode::addCurve(c);

		return 0;
	}

	// void proland::LazyNode::base_removeCurve(proland::CurveId c)
	static int _bind_base_removeCurve(lua_State *L) {
		if (!_lg_typecheck_base_removeCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LazyNode::base_removeCurve(proland::CurveId c) function, expected prototype:\nvoid proland::LazyNode::base_removeCurve(proland::CurveId c)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* c_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::LazyNode::base_removeCurve function");
		}
		proland::CurveId c=*c_ptr;

		proland::LazyNode* self=Luna< ork::Object >::checkSubType< proland::LazyNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LazyNode::base_removeCurve(proland::CurveId). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LazyNode::removeCurve(c);

		return 0;
	}


	// Operator binds:

};

proland::LazyNode* LunaTraits< proland::LazyNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_LazyNode::_bind_ctor(L);
}

void LunaTraits< proland::LazyNode >::_bind_dtor(proland::LazyNode* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::LazyNode >::className[] = "LazyNode";
const char LunaTraits< proland::LazyNode >::fullName[] = "proland::LazyNode";
const char LunaTraits< proland::LazyNode >::moduleName[] = "proland";
const char* LunaTraits< proland::LazyNode >::parents[] = {"proland.Node", 0};
const int LunaTraits< proland::LazyNode >::hash = 93063589;
const int LunaTraits< proland::LazyNode >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::LazyNode >::methods[] = {
	{"getId", &luna_wrapper_proland_LazyNode::_bind_getId},
	{"addCurve", &luna_wrapper_proland_LazyNode::_bind_addCurve},
	{"removeCurve", &luna_wrapper_proland_LazyNode::_bind_removeCurve},
	{"base_toString", &luna_wrapper_proland_LazyNode::_bind_base_toString},
	{"base_getCurveCount", &luna_wrapper_proland_LazyNode::_bind_base_getCurveCount},
	{"base_getCurve", &luna_wrapper_proland_LazyNode::_bind_base_getCurve},
	{"base_getId", &luna_wrapper_proland_LazyNode::_bind_base_getId},
	{"base_addCurve", &luna_wrapper_proland_LazyNode::_bind_base_addCurve},
	{"base_removeCurve", &luna_wrapper_proland_LazyNode::_bind_base_removeCurve},
	{"fromVoid", &luna_wrapper_proland_LazyNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_LazyNode::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_LazyNode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::LazyNode >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_LazyNode::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::LazyNode >::enumValues[] = {
	{0,0}
};


