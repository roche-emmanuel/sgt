#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TweakSceneGraph.h>

class luna_wrapper_proland_TweakSceneGraph {
public:
	typedef Luna< proland::TweakSceneGraph > luna_t;

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

		proland::TweakSceneGraph* self= (proland::TweakSceneGraph*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TweakSceneGraph >::push(L,self,false);
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
		//proland::TweakSceneGraph* ptr= dynamic_cast< proland::TweakSceneGraph* >(Luna< ork::Object >::check(L,1));
		proland::TweakSceneGraph* ptr= luna_caster< ork::Object, proland::TweakSceneGraph >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TweakSceneGraph >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getCurrentTexture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentArea(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentNorm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCurrentTexture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCurrentLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCurrentMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCurrentArea(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151911) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCurrentNorm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304302) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_redisplay(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseClick(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( lua_isboolean(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseWheel(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseMotion(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mousePassiveMotion(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setActive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reshape(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_idle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_keyTyped(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_keyReleased(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_specialKey(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_specialKeyReleased(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_redisplay(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_mouseClick(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( lua_isboolean(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_mouseWheel(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_mouseMotion(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_mousePassiveMotion(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TweakSceneGraph::TweakSceneGraph(ork::ptr< ork::SceneNode > scene, bool active)
	static proland::TweakSceneGraph* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TweakSceneGraph::TweakSceneGraph(ork::ptr< ork::SceneNode > scene, bool active) function, expected prototype:\nproland::TweakSceneGraph::TweakSceneGraph(ork::ptr< ork::SceneNode > scene, bool active)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > scene = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		bool active=(bool)(lua_toboolean(L,2)==1);

		return new proland::TweakSceneGraph(scene, active);
	}

	// proland::TweakSceneGraph::TweakSceneGraph(lua_Table * data, ork::ptr< ork::SceneNode > scene, bool active)
	static proland::TweakSceneGraph* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::TweakSceneGraph::TweakSceneGraph(lua_Table * data, ork::ptr< ork::SceneNode > scene, bool active) function, expected prototype:\nproland::TweakSceneGraph::TweakSceneGraph(lua_Table * data, ork::ptr< ork::SceneNode > scene, bool active)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > scene = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);
		bool active=(bool)(lua_toboolean(L,3)==1);

		return new wrapper_proland_TweakSceneGraph(L,NULL, scene, active);
	}

	// Overload binder for proland::TweakSceneGraph::TweakSceneGraph
	static proland::TweakSceneGraph* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TweakSceneGraph, cannot match any of the overloads for function TweakSceneGraph:\n  TweakSceneGraph(ork::ptr< ork::SceneNode >, bool)\n  TweakSceneGraph(lua_Table *, ork::ptr< ork::SceneNode >, bool)\n");
		return NULL;
	}


	// Function binds:
	// int proland::TweakSceneGraph::getCurrentTexture() const
	static int _bind_getCurrentTexture(lua_State *L) {
		if (!_lg_typecheck_getCurrentTexture(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TweakSceneGraph::getCurrentTexture() const function, expected prototype:\nint proland::TweakSceneGraph::getCurrentTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TweakSceneGraph::getCurrentTexture() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCurrentTexture();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::TweakSceneGraph::getCurrentLevel() const
	static int _bind_getCurrentLevel(lua_State *L) {
		if (!_lg_typecheck_getCurrentLevel(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TweakSceneGraph::getCurrentLevel() const function, expected prototype:\nint proland::TweakSceneGraph::getCurrentLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TweakSceneGraph::getCurrentLevel() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCurrentLevel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::TweakSceneGraph::getCurrentMode() const
	static int _bind_getCurrentMode(lua_State *L) {
		if (!_lg_typecheck_getCurrentMode(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TweakSceneGraph::getCurrentMode() const function, expected prototype:\nint proland::TweakSceneGraph::getCurrentMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TweakSceneGraph::getCurrentMode() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCurrentMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::box2f proland::TweakSceneGraph::getCurrentArea() const
	static int _bind_getCurrentArea(lua_State *L) {
		if (!_lg_typecheck_getCurrentArea(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2f proland::TweakSceneGraph::getCurrentArea() const function, expected prototype:\nork::box2f proland::TweakSceneGraph::getCurrentArea() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2f proland::TweakSceneGraph::getCurrentArea() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2f stack_lret = self->getCurrentArea();
		ork::box2f* lret = new ork::box2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2f >::push(L,lret,true);

		return 1;
	}

	// ork::vec4f proland::TweakSceneGraph::getCurrentNorm() const
	static int _bind_getCurrentNorm(lua_State *L) {
		if (!_lg_typecheck_getCurrentNorm(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f proland::TweakSceneGraph::getCurrentNorm() const function, expected prototype:\nork::vec4f proland::TweakSceneGraph::getCurrentNorm() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f proland::TweakSceneGraph::getCurrentNorm() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->getCurrentNorm();
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// void proland::TweakSceneGraph::setCurrentTexture(int tex)
	static int _bind_setCurrentTexture(lua_State *L) {
		if (!_lg_typecheck_setCurrentTexture(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakSceneGraph::setCurrentTexture(int tex) function, expected prototype:\nvoid proland::TweakSceneGraph::setCurrentTexture(int tex)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tex=(int)lua_tointeger(L,2);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakSceneGraph::setCurrentTexture(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCurrentTexture(tex);

		return 0;
	}

	// void proland::TweakSceneGraph::setCurrentLevel(int level)
	static int _bind_setCurrentLevel(lua_State *L) {
		if (!_lg_typecheck_setCurrentLevel(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakSceneGraph::setCurrentLevel(int level) function, expected prototype:\nvoid proland::TweakSceneGraph::setCurrentLevel(int level)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakSceneGraph::setCurrentLevel(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCurrentLevel(level);

		return 0;
	}

	// void proland::TweakSceneGraph::setCurrentMode(int mode)
	static int _bind_setCurrentMode(lua_State *L) {
		if (!_lg_typecheck_setCurrentMode(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakSceneGraph::setCurrentMode(int mode) function, expected prototype:\nvoid proland::TweakSceneGraph::setCurrentMode(int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int mode=(int)lua_tointeger(L,2);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakSceneGraph::setCurrentMode(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCurrentMode(mode);

		return 0;
	}

	// void proland::TweakSceneGraph::setCurrentArea(const ork::box2f & area)
	static int _bind_setCurrentArea(lua_State *L) {
		if (!_lg_typecheck_setCurrentArea(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakSceneGraph::setCurrentArea(const ork::box2f & area) function, expected prototype:\nvoid proland::TweakSceneGraph::setCurrentArea(const ork::box2f & area)\nClass arguments details:\narg 1 ID = 63151911\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2f* area_ptr=(Luna< ork::box2f >::check(L,2));
		if( !area_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg area in proland::TweakSceneGraph::setCurrentArea function");
		}
		const ork::box2f & area=*area_ptr;

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakSceneGraph::setCurrentArea(const ork::box2f &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCurrentArea(area);

		return 0;
	}

	// void proland::TweakSceneGraph::setCurrentNorm(const ork::vec4f & n)
	static int _bind_setCurrentNorm(lua_State *L) {
		if (!_lg_typecheck_setCurrentNorm(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakSceneGraph::setCurrentNorm(const ork::vec4f & n) function, expected prototype:\nvoid proland::TweakSceneGraph::setCurrentNorm(const ork::vec4f & n)\nClass arguments details:\narg 1 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4f* n_ptr=(Luna< ork::vec4f >::check(L,2));
		if( !n_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg n in proland::TweakSceneGraph::setCurrentNorm function");
		}
		const ork::vec4f & n=*n_ptr;

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakSceneGraph::setCurrentNorm(const ork::vec4f &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCurrentNorm(n);

		return 0;
	}

	// void proland::TweakSceneGraph::redisplay(double t, double dt, bool & needUpdate)
	static int _bind_redisplay(lua_State *L) {
		if (!_lg_typecheck_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakSceneGraph::redisplay(double t, double dt, bool & needUpdate) function, expected prototype:\nvoid proland::TweakSceneGraph::redisplay(double t, double dt, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakSceneGraph::redisplay(double, double, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->redisplay(t, dt, needUpdate);

		lua_pushboolean(L,needUpdate?1:0);
		return 1;
	}

	// bool proland::TweakSceneGraph::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_mouseClick(lua_State *L) {
		if (!_lg_typecheck_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakSceneGraph::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakSceneGraph::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);
		bool needUpdate=(bool)(lua_toboolean(L,7)==1);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakSceneGraph::mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseClick(b, s, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakSceneGraph::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakSceneGraph::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakSceneGraph::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakSceneGraph::mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseWheel(b, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakSceneGraph::mouseMotion(int x, int y, bool & needUpdate)
	static int _bind_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakSceneGraph::mouseMotion(int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakSceneGraph::mouseMotion(int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakSceneGraph::mouseMotion(int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseMotion(x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakSceneGraph::mousePassiveMotion(int x, int y, bool & needUpdate)
	static int _bind_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakSceneGraph::mousePassiveMotion(int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakSceneGraph::mousePassiveMotion(int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakSceneGraph::mousePassiveMotion(int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mousePassiveMotion(x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// const char * proland::TweakSceneGraph::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::TweakSceneGraph::base_toString() function, expected prototype:\nconst char * proland::TweakSceneGraph::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::TweakSceneGraph::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TweakSceneGraph::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::TweakSceneGraph::base_setActive(bool active)
	static int _bind_base_setActive(lua_State *L) {
		if (!_lg_typecheck_base_setActive(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakSceneGraph::base_setActive(bool active) function, expected prototype:\nvoid proland::TweakSceneGraph::base_setActive(bool active)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool active=(bool)(lua_toboolean(L,2)==1);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakSceneGraph::base_setActive(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakSceneGraph::setActive(active);

		return 0;
	}

	// void proland::TweakSceneGraph::base_reshape(int x, int y, bool & needUpdate)
	static int _bind_base_reshape(lua_State *L) {
		if (!_lg_typecheck_base_reshape(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakSceneGraph::base_reshape(int x, int y, bool & needUpdate) function, expected prototype:\nvoid proland::TweakSceneGraph::base_reshape(int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakSceneGraph::base_reshape(int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakSceneGraph::reshape(x, y, needUpdate);

		lua_pushboolean(L,needUpdate?1:0);
		return 1;
	}

	// void proland::TweakSceneGraph::base_idle(bool damaged, bool & needUpdate)
	static int _bind_base_idle(lua_State *L) {
		if (!_lg_typecheck_base_idle(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakSceneGraph::base_idle(bool damaged, bool & needUpdate) function, expected prototype:\nvoid proland::TweakSceneGraph::base_idle(bool damaged, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool damaged=(bool)(lua_toboolean(L,2)==1);
		bool needUpdate=(bool)(lua_toboolean(L,3)==1);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakSceneGraph::base_idle(bool, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakSceneGraph::idle(damaged, needUpdate);

		lua_pushboolean(L,needUpdate?1:0);
		return 1;
	}

	// bool proland::TweakSceneGraph::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_keyTyped(lua_State *L) {
		if (!_lg_typecheck_base_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakSceneGraph::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakSceneGraph::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakSceneGraph::base_keyTyped(unsigned char, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakSceneGraph::keyTyped(c, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakSceneGraph::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_keyReleased(lua_State *L) {
		if (!_lg_typecheck_base_keyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakSceneGraph::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakSceneGraph::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakSceneGraph::base_keyReleased(unsigned char, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakSceneGraph::keyReleased(c, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakSceneGraph::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_specialKey(lua_State *L) {
		if (!_lg_typecheck_base_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakSceneGraph::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakSceneGraph::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakSceneGraph::base_specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakSceneGraph::specialKey(k, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakSceneGraph::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_specialKeyReleased(lua_State *L) {
		if (!_lg_typecheck_base_specialKeyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakSceneGraph::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakSceneGraph::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakSceneGraph::base_specialKeyReleased(ork::EventHandler::key, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakSceneGraph::specialKeyReleased(k, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// void proland::TweakSceneGraph::base_redisplay(double t, double dt, bool & needUpdate)
	static int _bind_base_redisplay(lua_State *L) {
		if (!_lg_typecheck_base_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakSceneGraph::base_redisplay(double t, double dt, bool & needUpdate) function, expected prototype:\nvoid proland::TweakSceneGraph::base_redisplay(double t, double dt, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakSceneGraph::base_redisplay(double, double, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakSceneGraph::redisplay(t, dt, needUpdate);

		lua_pushboolean(L,needUpdate?1:0);
		return 1;
	}

	// bool proland::TweakSceneGraph::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_mouseClick(lua_State *L) {
		if (!_lg_typecheck_base_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakSceneGraph::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakSceneGraph::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);
		bool needUpdate=(bool)(lua_toboolean(L,7)==1);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakSceneGraph::base_mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakSceneGraph::mouseClick(b, s, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakSceneGraph::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_base_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakSceneGraph::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakSceneGraph::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakSceneGraph::base_mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakSceneGraph::mouseWheel(b, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakSceneGraph::base_mouseMotion(int x, int y, bool & needUpdate)
	static int _bind_base_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_base_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakSceneGraph::base_mouseMotion(int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakSceneGraph::base_mouseMotion(int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakSceneGraph::base_mouseMotion(int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakSceneGraph::mouseMotion(x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakSceneGraph::base_mousePassiveMotion(int x, int y, bool & needUpdate)
	static int _bind_base_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_base_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakSceneGraph::base_mousePassiveMotion(int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakSceneGraph::base_mousePassiveMotion(int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakSceneGraph* self=Luna< ork::Object >::checkSubType< proland::TweakSceneGraph >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakSceneGraph::base_mousePassiveMotion(int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakSceneGraph::mousePassiveMotion(x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}


	// Operator binds:

};

proland::TweakSceneGraph* LunaTraits< proland::TweakSceneGraph >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TweakSceneGraph::_bind_ctor(L);
}

void LunaTraits< proland::TweakSceneGraph >::_bind_dtor(proland::TweakSceneGraph* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::TweakSceneGraph >::className[] = "TweakSceneGraph";
const char LunaTraits< proland::TweakSceneGraph >::fullName[] = "proland::TweakSceneGraph";
const char LunaTraits< proland::TweakSceneGraph >::moduleName[] = "proland";
const char* LunaTraits< proland::TweakSceneGraph >::parents[] = {"proland.TweakBarHandler", 0};
const int LunaTraits< proland::TweakSceneGraph >::hash = 54447496;
const int LunaTraits< proland::TweakSceneGraph >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TweakSceneGraph >::methods[] = {
	{"getCurrentTexture", &luna_wrapper_proland_TweakSceneGraph::_bind_getCurrentTexture},
	{"getCurrentLevel", &luna_wrapper_proland_TweakSceneGraph::_bind_getCurrentLevel},
	{"getCurrentMode", &luna_wrapper_proland_TweakSceneGraph::_bind_getCurrentMode},
	{"getCurrentArea", &luna_wrapper_proland_TweakSceneGraph::_bind_getCurrentArea},
	{"getCurrentNorm", &luna_wrapper_proland_TweakSceneGraph::_bind_getCurrentNorm},
	{"setCurrentTexture", &luna_wrapper_proland_TweakSceneGraph::_bind_setCurrentTexture},
	{"setCurrentLevel", &luna_wrapper_proland_TweakSceneGraph::_bind_setCurrentLevel},
	{"setCurrentMode", &luna_wrapper_proland_TweakSceneGraph::_bind_setCurrentMode},
	{"setCurrentArea", &luna_wrapper_proland_TweakSceneGraph::_bind_setCurrentArea},
	{"setCurrentNorm", &luna_wrapper_proland_TweakSceneGraph::_bind_setCurrentNorm},
	{"redisplay", &luna_wrapper_proland_TweakSceneGraph::_bind_redisplay},
	{"mouseClick", &luna_wrapper_proland_TweakSceneGraph::_bind_mouseClick},
	{"mouseWheel", &luna_wrapper_proland_TweakSceneGraph::_bind_mouseWheel},
	{"mouseMotion", &luna_wrapper_proland_TweakSceneGraph::_bind_mouseMotion},
	{"mousePassiveMotion", &luna_wrapper_proland_TweakSceneGraph::_bind_mousePassiveMotion},
	{"base_toString", &luna_wrapper_proland_TweakSceneGraph::_bind_base_toString},
	{"base_setActive", &luna_wrapper_proland_TweakSceneGraph::_bind_base_setActive},
	{"base_reshape", &luna_wrapper_proland_TweakSceneGraph::_bind_base_reshape},
	{"base_idle", &luna_wrapper_proland_TweakSceneGraph::_bind_base_idle},
	{"base_keyTyped", &luna_wrapper_proland_TweakSceneGraph::_bind_base_keyTyped},
	{"base_keyReleased", &luna_wrapper_proland_TweakSceneGraph::_bind_base_keyReleased},
	{"base_specialKey", &luna_wrapper_proland_TweakSceneGraph::_bind_base_specialKey},
	{"base_specialKeyReleased", &luna_wrapper_proland_TweakSceneGraph::_bind_base_specialKeyReleased},
	{"base_redisplay", &luna_wrapper_proland_TweakSceneGraph::_bind_base_redisplay},
	{"base_mouseClick", &luna_wrapper_proland_TweakSceneGraph::_bind_base_mouseClick},
	{"base_mouseWheel", &luna_wrapper_proland_TweakSceneGraph::_bind_base_mouseWheel},
	{"base_mouseMotion", &luna_wrapper_proland_TweakSceneGraph::_bind_base_mouseMotion},
	{"base_mousePassiveMotion", &luna_wrapper_proland_TweakSceneGraph::_bind_base_mousePassiveMotion},
	{"fromVoid", &luna_wrapper_proland_TweakSceneGraph::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TweakSceneGraph::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TweakSceneGraph::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TweakSceneGraph >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TweakSceneGraph::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TweakSceneGraph >::enumValues[] = {
	{0,0}
};


