#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_MousePositionHandler.h>

class luna_wrapper_proland_MousePositionHandler {
public:
	typedef Luna< proland::MousePositionHandler > luna_t;

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

		proland::MousePositionHandler* self= (proland::MousePositionHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::MousePositionHandler >::push(L,self,false);
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
		//proland::MousePositionHandler* ptr= dynamic_cast< proland::MousePositionHandler* >(Luna< ork::Object >::check(L,1));
		proland::MousePositionHandler* ptr= luna_caster< ork::Object, proland::MousePositionHandler >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::MousePositionHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9346150) ) return false;
		if( (!(Luna< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::EventHandler >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,9346150) ) return false;
		if( (!(Luna< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::EventHandler >(L,3) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_redisplay(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reshape(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_idle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,4) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWorldCoordinates(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseClick(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseMotion(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mousePassiveMotion(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseWheel(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_keyTyped(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_keyReleased(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_specialKey(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_specialKeyReleased(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_redisplay(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reshape(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_idle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_mouseClick(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_mouseMotion(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_mousePassiveMotion(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_mouseWheel(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_keyTyped(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_keyReleased(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_specialKey(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_specialKeyReleased(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::MousePositionHandler::MousePositionHandler(map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > terrains, ork::ptr< ork::EventHandler > next)
	static proland::MousePositionHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::MousePositionHandler::MousePositionHandler(map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > terrains, ork::ptr< ork::EventHandler > next) function, expected prototype:\nproland::MousePositionHandler::MousePositionHandler(map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > terrains, ork::ptr< ork::EventHandler > next)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >* terrains_ptr=(Luna< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::check(L,1));
		if( !terrains_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg terrains in proland::MousePositionHandler::MousePositionHandler function");
		}
		map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > terrains=*terrains_ptr;
		ork::ptr< ork::EventHandler > next = Luna< ork::Object >::checkSubType< ork::EventHandler >(L,2);

		return new proland::MousePositionHandler(terrains, next);
	}

	// proland::MousePositionHandler::MousePositionHandler(lua_Table * data, map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > terrains, ork::ptr< ork::EventHandler > next)
	static proland::MousePositionHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::MousePositionHandler::MousePositionHandler(lua_Table * data, map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > terrains, ork::ptr< ork::EventHandler > next) function, expected prototype:\nproland::MousePositionHandler::MousePositionHandler(lua_Table * data, map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > terrains, ork::ptr< ork::EventHandler > next)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >* terrains_ptr=(Luna< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::check(L,2));
		if( !terrains_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg terrains in proland::MousePositionHandler::MousePositionHandler function");
		}
		map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > terrains=*terrains_ptr;
		ork::ptr< ork::EventHandler > next = Luna< ork::Object >::checkSubType< ork::EventHandler >(L,3);

		return new wrapper_proland_MousePositionHandler(L,NULL, terrains, next);
	}

	// Overload binder for proland::MousePositionHandler::MousePositionHandler
	static proland::MousePositionHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function MousePositionHandler, cannot match any of the overloads for function MousePositionHandler:\n  MousePositionHandler(map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >, ork::ptr< ork::EventHandler >)\n  MousePositionHandler(lua_Table *, map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >, ork::ptr< ork::EventHandler >)\n");
		return NULL;
	}


	// Function binds:
	// void proland::MousePositionHandler::redisplay(double t, double dt)
	static int _bind_redisplay(lua_State *L) {
		if (!_lg_typecheck_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MousePositionHandler::redisplay(double t, double dt) function, expected prototype:\nvoid proland::MousePositionHandler::redisplay(double t, double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MousePositionHandler::redisplay(double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->redisplay(t, dt);

		return 0;
	}

	// void proland::MousePositionHandler::reshape(int x, int y)
	static int _bind_reshape(lua_State *L) {
		if (!_lg_typecheck_reshape(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MousePositionHandler::reshape(int x, int y) function, expected prototype:\nvoid proland::MousePositionHandler::reshape(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MousePositionHandler::reshape(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reshape(x, y);

		return 0;
	}

	// void proland::MousePositionHandler::idle(bool damaged)
	static int _bind_idle(lua_State *L) {
		if (!_lg_typecheck_idle(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MousePositionHandler::idle(bool damaged) function, expected prototype:\nvoid proland::MousePositionHandler::idle(bool damaged)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool damaged=(bool)(lua_toboolean(L,2)==1);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MousePositionHandler::idle(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->idle(damaged);

		return 0;
	}

	// ork::ptr< proland::TerrainQuad > proland::MousePositionHandler::findTile(float x, float y, ork::ptr< proland::TerrainQuad > quad)
	static int _bind_findTile(lua_State *L) {
		if (!_lg_typecheck_findTile(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TerrainQuad > proland::MousePositionHandler::findTile(float x, float y, ork::ptr< proland::TerrainQuad > quad) function, expected prototype:\nork::ptr< proland::TerrainQuad > proland::MousePositionHandler::findTile(float x, float y, ork::ptr< proland::TerrainQuad > quad)\nClass arguments details:\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		ork::ptr< proland::TerrainQuad > quad = Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,4);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TerrainQuad > proland::MousePositionHandler::findTile(float, float, ork::ptr< proland::TerrainQuad >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TerrainQuad > lret = self->findTile(x, y, quad);
		Luna< proland::TerrainQuad >::push(L,lret.get(),false);

		return 1;
	}

	// void proland::MousePositionHandler::getWorldCoordinates(int x, int y)
	static int _bind_getWorldCoordinates(lua_State *L) {
		if (!_lg_typecheck_getWorldCoordinates(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MousePositionHandler::getWorldCoordinates(int x, int y) function, expected prototype:\nvoid proland::MousePositionHandler::getWorldCoordinates(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MousePositionHandler::getWorldCoordinates(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getWorldCoordinates(x, y);

		return 0;
	}

	// bool proland::MousePositionHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	static int _bind_mouseClick(lua_State *L) {
		if (!_lg_typecheck_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MousePositionHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::MousePositionHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MousePositionHandler::mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseClick(b, s, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::MousePositionHandler::mouseMotion(int x, int y)
	static int _bind_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MousePositionHandler::mouseMotion(int x, int y) function, expected prototype:\nbool proland::MousePositionHandler::mouseMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MousePositionHandler::mouseMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::MousePositionHandler::mousePassiveMotion(int x, int y)
	static int _bind_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MousePositionHandler::mousePassiveMotion(int x, int y) function, expected prototype:\nbool proland::MousePositionHandler::mousePassiveMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MousePositionHandler::mousePassiveMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mousePassiveMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::MousePositionHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	static int _bind_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MousePositionHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::MousePositionHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MousePositionHandler::mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseWheel(b, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::MousePositionHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_keyTyped(lua_State *L) {
		if (!_lg_typecheck_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MousePositionHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::MousePositionHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MousePositionHandler::keyTyped(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->keyTyped(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::MousePositionHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_keyReleased(lua_State *L) {
		if (!_lg_typecheck_keyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MousePositionHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::MousePositionHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MousePositionHandler::keyReleased(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->keyReleased(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::MousePositionHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_specialKey(lua_State *L) {
		if (!_lg_typecheck_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MousePositionHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::MousePositionHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MousePositionHandler::specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->specialKey(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::MousePositionHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_specialKeyReleased(lua_State *L) {
		if (!_lg_typecheck_specialKeyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MousePositionHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::MousePositionHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MousePositionHandler::specialKeyReleased(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->specialKeyReleased(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * proland::MousePositionHandler::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::MousePositionHandler::base_toString() function, expected prototype:\nconst char * proland::MousePositionHandler::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::MousePositionHandler::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->MousePositionHandler::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::MousePositionHandler::base_redisplay(double t, double dt)
	static int _bind_base_redisplay(lua_State *L) {
		if (!_lg_typecheck_base_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MousePositionHandler::base_redisplay(double t, double dt) function, expected prototype:\nvoid proland::MousePositionHandler::base_redisplay(double t, double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MousePositionHandler::base_redisplay(double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MousePositionHandler::redisplay(t, dt);

		return 0;
	}

	// void proland::MousePositionHandler::base_reshape(int x, int y)
	static int _bind_base_reshape(lua_State *L) {
		if (!_lg_typecheck_base_reshape(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MousePositionHandler::base_reshape(int x, int y) function, expected prototype:\nvoid proland::MousePositionHandler::base_reshape(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MousePositionHandler::base_reshape(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MousePositionHandler::reshape(x, y);

		return 0;
	}

	// void proland::MousePositionHandler::base_idle(bool damaged)
	static int _bind_base_idle(lua_State *L) {
		if (!_lg_typecheck_base_idle(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MousePositionHandler::base_idle(bool damaged) function, expected prototype:\nvoid proland::MousePositionHandler::base_idle(bool damaged)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool damaged=(bool)(lua_toboolean(L,2)==1);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MousePositionHandler::base_idle(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MousePositionHandler::idle(damaged);

		return 0;
	}

	// bool proland::MousePositionHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_mouseClick(lua_State *L) {
		if (!_lg_typecheck_base_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MousePositionHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::MousePositionHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MousePositionHandler::base_mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MousePositionHandler::mouseClick(b, s, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::MousePositionHandler::base_mouseMotion(int x, int y)
	static int _bind_base_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_base_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MousePositionHandler::base_mouseMotion(int x, int y) function, expected prototype:\nbool proland::MousePositionHandler::base_mouseMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MousePositionHandler::base_mouseMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MousePositionHandler::mouseMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::MousePositionHandler::base_mousePassiveMotion(int x, int y)
	static int _bind_base_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_base_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MousePositionHandler::base_mousePassiveMotion(int x, int y) function, expected prototype:\nbool proland::MousePositionHandler::base_mousePassiveMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MousePositionHandler::base_mousePassiveMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MousePositionHandler::mousePassiveMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::MousePositionHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_base_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MousePositionHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::MousePositionHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MousePositionHandler::base_mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MousePositionHandler::mouseWheel(b, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::MousePositionHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_keyTyped(lua_State *L) {
		if (!_lg_typecheck_base_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MousePositionHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::MousePositionHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MousePositionHandler::base_keyTyped(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MousePositionHandler::keyTyped(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::MousePositionHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_keyReleased(lua_State *L) {
		if (!_lg_typecheck_base_keyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MousePositionHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::MousePositionHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MousePositionHandler::base_keyReleased(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MousePositionHandler::keyReleased(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::MousePositionHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_specialKey(lua_State *L) {
		if (!_lg_typecheck_base_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MousePositionHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::MousePositionHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MousePositionHandler::base_specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MousePositionHandler::specialKey(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::MousePositionHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_specialKeyReleased(lua_State *L) {
		if (!_lg_typecheck_base_specialKeyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MousePositionHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::MousePositionHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::MousePositionHandler* self=Luna< ork::Object >::checkSubType< proland::MousePositionHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MousePositionHandler::base_specialKeyReleased(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MousePositionHandler::specialKeyReleased(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

proland::MousePositionHandler* LunaTraits< proland::MousePositionHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_MousePositionHandler::_bind_ctor(L);
}

void LunaTraits< proland::MousePositionHandler >::_bind_dtor(proland::MousePositionHandler* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::MousePositionHandler >::className[] = "MousePositionHandler";
const char LunaTraits< proland::MousePositionHandler >::fullName[] = "proland::MousePositionHandler";
const char LunaTraits< proland::MousePositionHandler >::moduleName[] = "proland";
const char* LunaTraits< proland::MousePositionHandler >::parents[] = {"ork.EventHandler", 0};
const int LunaTraits< proland::MousePositionHandler >::hash = 82789350;
const int LunaTraits< proland::MousePositionHandler >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::MousePositionHandler >::methods[] = {
	{"redisplay", &luna_wrapper_proland_MousePositionHandler::_bind_redisplay},
	{"reshape", &luna_wrapper_proland_MousePositionHandler::_bind_reshape},
	{"idle", &luna_wrapper_proland_MousePositionHandler::_bind_idle},
	{"findTile", &luna_wrapper_proland_MousePositionHandler::_bind_findTile},
	{"getWorldCoordinates", &luna_wrapper_proland_MousePositionHandler::_bind_getWorldCoordinates},
	{"mouseClick", &luna_wrapper_proland_MousePositionHandler::_bind_mouseClick},
	{"mouseMotion", &luna_wrapper_proland_MousePositionHandler::_bind_mouseMotion},
	{"mousePassiveMotion", &luna_wrapper_proland_MousePositionHandler::_bind_mousePassiveMotion},
	{"mouseWheel", &luna_wrapper_proland_MousePositionHandler::_bind_mouseWheel},
	{"keyTyped", &luna_wrapper_proland_MousePositionHandler::_bind_keyTyped},
	{"keyReleased", &luna_wrapper_proland_MousePositionHandler::_bind_keyReleased},
	{"specialKey", &luna_wrapper_proland_MousePositionHandler::_bind_specialKey},
	{"specialKeyReleased", &luna_wrapper_proland_MousePositionHandler::_bind_specialKeyReleased},
	{"base_toString", &luna_wrapper_proland_MousePositionHandler::_bind_base_toString},
	{"base_redisplay", &luna_wrapper_proland_MousePositionHandler::_bind_base_redisplay},
	{"base_reshape", &luna_wrapper_proland_MousePositionHandler::_bind_base_reshape},
	{"base_idle", &luna_wrapper_proland_MousePositionHandler::_bind_base_idle},
	{"base_mouseClick", &luna_wrapper_proland_MousePositionHandler::_bind_base_mouseClick},
	{"base_mouseMotion", &luna_wrapper_proland_MousePositionHandler::_bind_base_mouseMotion},
	{"base_mousePassiveMotion", &luna_wrapper_proland_MousePositionHandler::_bind_base_mousePassiveMotion},
	{"base_mouseWheel", &luna_wrapper_proland_MousePositionHandler::_bind_base_mouseWheel},
	{"base_keyTyped", &luna_wrapper_proland_MousePositionHandler::_bind_base_keyTyped},
	{"base_keyReleased", &luna_wrapper_proland_MousePositionHandler::_bind_base_keyReleased},
	{"base_specialKey", &luna_wrapper_proland_MousePositionHandler::_bind_base_specialKey},
	{"base_specialKeyReleased", &luna_wrapper_proland_MousePositionHandler::_bind_base_specialKeyReleased},
	{"fromVoid", &luna_wrapper_proland_MousePositionHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_MousePositionHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_MousePositionHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::MousePositionHandler >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_MousePositionHandler::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::MousePositionHandler >::enumValues[] = {
	{0,0}
};


