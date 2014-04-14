#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_BasicViewHandler.h>

class luna_wrapper_proland_BasicViewHandler {
public:
	typedef Luna< proland::BasicViewHandler > luna_t;

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

		proland::BasicViewHandler* self= (proland::BasicViewHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::BasicViewHandler >::push(L,self,false);
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
		//proland::BasicViewHandler* ptr= dynamic_cast< proland::BasicViewHandler* >(Luna< ork::Object >::check(L,1));
		proland::BasicViewHandler* ptr= luna_caster< ork::Object, proland::BasicViewHandler >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::BasicViewHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,2915545)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< proland::ViewManager >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::EventHandler >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,2915545)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< proland::ViewManager >::check(L,3)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::EventHandler >(L,4) ) return false;
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

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6582046) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6582046) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_goToPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6582046) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_jumpToPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6582046) ) return false;
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

	inline static bool _lg_typecheck_base_goToPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6582046) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::BasicViewHandler::BasicViewHandler(bool smooth, proland::ViewManager * view, ork::ptr< ork::EventHandler > next)
	static proland::BasicViewHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::BasicViewHandler::BasicViewHandler(bool smooth, proland::ViewManager * view, ork::ptr< ork::EventHandler > next) function, expected prototype:\nproland::BasicViewHandler::BasicViewHandler(bool smooth, proland::ViewManager * view, ork::ptr< ork::EventHandler > next)\nClass arguments details:\narg 2 ID = 2915545\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		bool smooth=(bool)(lua_toboolean(L,1)==1);
		proland::ViewManager* view=(Luna< proland::ViewManager >::check(L,2));
		ork::ptr< ork::EventHandler > next = Luna< ork::Object >::checkSubType< ork::EventHandler >(L,3);

		return new proland::BasicViewHandler(smooth, view, next);
	}

	// proland::BasicViewHandler::BasicViewHandler(lua_Table * data, bool smooth, proland::ViewManager * view, ork::ptr< ork::EventHandler > next)
	static proland::BasicViewHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::BasicViewHandler::BasicViewHandler(lua_Table * data, bool smooth, proland::ViewManager * view, ork::ptr< ork::EventHandler > next) function, expected prototype:\nproland::BasicViewHandler::BasicViewHandler(lua_Table * data, bool smooth, proland::ViewManager * view, ork::ptr< ork::EventHandler > next)\nClass arguments details:\narg 3 ID = 2915545\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		bool smooth=(bool)(lua_toboolean(L,2)==1);
		proland::ViewManager* view=(Luna< proland::ViewManager >::check(L,3));
		ork::ptr< ork::EventHandler > next = Luna< ork::Object >::checkSubType< ork::EventHandler >(L,4);

		return new wrapper_proland_BasicViewHandler(L,NULL, smooth, view, next);
	}

	// Overload binder for proland::BasicViewHandler::BasicViewHandler
	static proland::BasicViewHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function BasicViewHandler, cannot match any of the overloads for function BasicViewHandler:\n  BasicViewHandler(bool, proland::ViewManager *, ork::ptr< ork::EventHandler >)\n  BasicViewHandler(lua_Table *, bool, proland::ViewManager *, ork::ptr< ork::EventHandler >)\n");
		return NULL;
	}


	// Function binds:
	// void proland::BasicViewHandler::redisplay(double t, double dt)
	static int _bind_redisplay(lua_State *L) {
		if (!_lg_typecheck_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::redisplay(double t, double dt) function, expected prototype:\nvoid proland::BasicViewHandler::redisplay(double t, double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::redisplay(double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->redisplay(t, dt);

		return 0;
	}

	// void proland::BasicViewHandler::reshape(int x, int y)
	static int _bind_reshape(lua_State *L) {
		if (!_lg_typecheck_reshape(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::reshape(int x, int y) function, expected prototype:\nvoid proland::BasicViewHandler::reshape(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::reshape(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reshape(x, y);

		return 0;
	}

	// void proland::BasicViewHandler::idle(bool damaged)
	static int _bind_idle(lua_State *L) {
		if (!_lg_typecheck_idle(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::idle(bool damaged) function, expected prototype:\nvoid proland::BasicViewHandler::idle(bool damaged)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool damaged=(bool)(lua_toboolean(L,2)==1);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::idle(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->idle(damaged);

		return 0;
	}

	// bool proland::BasicViewHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	static int _bind_mouseClick(lua_State *L) {
		if (!_lg_typecheck_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicViewHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::BasicViewHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicViewHandler::mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseClick(b, s, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::BasicViewHandler::mouseMotion(int x, int y)
	static int _bind_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicViewHandler::mouseMotion(int x, int y) function, expected prototype:\nbool proland::BasicViewHandler::mouseMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicViewHandler::mouseMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::BasicViewHandler::mousePassiveMotion(int x, int y)
	static int _bind_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicViewHandler::mousePassiveMotion(int x, int y) function, expected prototype:\nbool proland::BasicViewHandler::mousePassiveMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicViewHandler::mousePassiveMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mousePassiveMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::BasicViewHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	static int _bind_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicViewHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::BasicViewHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicViewHandler::mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseWheel(b, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::BasicViewHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_keyTyped(lua_State *L) {
		if (!_lg_typecheck_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicViewHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::BasicViewHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicViewHandler::keyTyped(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->keyTyped(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::BasicViewHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_keyReleased(lua_State *L) {
		if (!_lg_typecheck_keyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicViewHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::BasicViewHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicViewHandler::keyReleased(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->keyReleased(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::BasicViewHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_specialKey(lua_State *L) {
		if (!_lg_typecheck_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicViewHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::BasicViewHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicViewHandler::specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->specialKey(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::BasicViewHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_specialKeyReleased(lua_State *L) {
		if (!_lg_typecheck_specialKeyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicViewHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::BasicViewHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicViewHandler::specialKeyReleased(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->specialKeyReleased(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::BasicViewHandler::getPosition(proland::BasicViewHandler::Position & p, bool light = true)
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::getPosition(proland::BasicViewHandler::Position & p, bool light = true) function, expected prototype:\nvoid proland::BasicViewHandler::getPosition(proland::BasicViewHandler::Position & p, bool light = true)\nClass arguments details:\narg 1 ID = 6582046\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::BasicViewHandler::Position* p_ptr=(Luna< proland::BasicViewHandler::Position >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::BasicViewHandler::getPosition function");
		}
		proland::BasicViewHandler::Position & p=*p_ptr;
		bool light=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::getPosition(proland::BasicViewHandler::Position &, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getPosition(p, light);

		return 0;
	}

	// void proland::BasicViewHandler::setPosition(const proland::BasicViewHandler::Position & p, bool light = true)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::setPosition(const proland::BasicViewHandler::Position & p, bool light = true) function, expected prototype:\nvoid proland::BasicViewHandler::setPosition(const proland::BasicViewHandler::Position & p, bool light = true)\nClass arguments details:\narg 1 ID = 6582046\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const proland::BasicViewHandler::Position* p_ptr=(Luna< proland::BasicViewHandler::Position >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::BasicViewHandler::setPosition function");
		}
		const proland::BasicViewHandler::Position & p=*p_ptr;
		bool light=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::setPosition(const proland::BasicViewHandler::Position &, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPosition(p, light);

		return 0;
	}

	// void proland::BasicViewHandler::goToPosition(const proland::BasicViewHandler::Position & p)
	static int _bind_goToPosition(lua_State *L) {
		if (!_lg_typecheck_goToPosition(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::goToPosition(const proland::BasicViewHandler::Position & p) function, expected prototype:\nvoid proland::BasicViewHandler::goToPosition(const proland::BasicViewHandler::Position & p)\nClass arguments details:\narg 1 ID = 6582046\n\n%s",luna_dumpStack(L).c_str());
		}

		const proland::BasicViewHandler::Position* p_ptr=(Luna< proland::BasicViewHandler::Position >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::BasicViewHandler::goToPosition function");
		}
		const proland::BasicViewHandler::Position & p=*p_ptr;

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::goToPosition(const proland::BasicViewHandler::Position &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->goToPosition(p);

		return 0;
	}

	// void proland::BasicViewHandler::jumpToPosition(const proland::BasicViewHandler::Position & p)
	static int _bind_jumpToPosition(lua_State *L) {
		if (!_lg_typecheck_jumpToPosition(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::jumpToPosition(const proland::BasicViewHandler::Position & p) function, expected prototype:\nvoid proland::BasicViewHandler::jumpToPosition(const proland::BasicViewHandler::Position & p)\nClass arguments details:\narg 1 ID = 6582046\n\n%s",luna_dumpStack(L).c_str());
		}

		const proland::BasicViewHandler::Position* p_ptr=(Luna< proland::BasicViewHandler::Position >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::BasicViewHandler::jumpToPosition function");
		}
		const proland::BasicViewHandler::Position & p=*p_ptr;

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::jumpToPosition(const proland::BasicViewHandler::Position &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->jumpToPosition(p);

		return 0;
	}

	// const char * proland::BasicViewHandler::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::BasicViewHandler::base_toString() function, expected prototype:\nconst char * proland::BasicViewHandler::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::BasicViewHandler::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->BasicViewHandler::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::BasicViewHandler::base_redisplay(double t, double dt)
	static int _bind_base_redisplay(lua_State *L) {
		if (!_lg_typecheck_base_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::base_redisplay(double t, double dt) function, expected prototype:\nvoid proland::BasicViewHandler::base_redisplay(double t, double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::base_redisplay(double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BasicViewHandler::redisplay(t, dt);

		return 0;
	}

	// void proland::BasicViewHandler::base_reshape(int x, int y)
	static int _bind_base_reshape(lua_State *L) {
		if (!_lg_typecheck_base_reshape(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::base_reshape(int x, int y) function, expected prototype:\nvoid proland::BasicViewHandler::base_reshape(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::base_reshape(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BasicViewHandler::reshape(x, y);

		return 0;
	}

	// void proland::BasicViewHandler::base_idle(bool damaged)
	static int _bind_base_idle(lua_State *L) {
		if (!_lg_typecheck_base_idle(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::base_idle(bool damaged) function, expected prototype:\nvoid proland::BasicViewHandler::base_idle(bool damaged)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool damaged=(bool)(lua_toboolean(L,2)==1);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::base_idle(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BasicViewHandler::idle(damaged);

		return 0;
	}

	// bool proland::BasicViewHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_mouseClick(lua_State *L) {
		if (!_lg_typecheck_base_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicViewHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::BasicViewHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicViewHandler::base_mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BasicViewHandler::mouseClick(b, s, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::BasicViewHandler::base_mouseMotion(int x, int y)
	static int _bind_base_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_base_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicViewHandler::base_mouseMotion(int x, int y) function, expected prototype:\nbool proland::BasicViewHandler::base_mouseMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicViewHandler::base_mouseMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BasicViewHandler::mouseMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::BasicViewHandler::base_mousePassiveMotion(int x, int y)
	static int _bind_base_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_base_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicViewHandler::base_mousePassiveMotion(int x, int y) function, expected prototype:\nbool proland::BasicViewHandler::base_mousePassiveMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicViewHandler::base_mousePassiveMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BasicViewHandler::mousePassiveMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::BasicViewHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_base_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicViewHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::BasicViewHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicViewHandler::base_mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BasicViewHandler::mouseWheel(b, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::BasicViewHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_keyTyped(lua_State *L) {
		if (!_lg_typecheck_base_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicViewHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::BasicViewHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicViewHandler::base_keyTyped(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BasicViewHandler::keyTyped(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::BasicViewHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_keyReleased(lua_State *L) {
		if (!_lg_typecheck_base_keyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicViewHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::BasicViewHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicViewHandler::base_keyReleased(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BasicViewHandler::keyReleased(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::BasicViewHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_specialKey(lua_State *L) {
		if (!_lg_typecheck_base_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicViewHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::BasicViewHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicViewHandler::base_specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BasicViewHandler::specialKey(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::BasicViewHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_specialKeyReleased(lua_State *L) {
		if (!_lg_typecheck_base_specialKeyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::BasicViewHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::BasicViewHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::BasicViewHandler::base_specialKeyReleased(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BasicViewHandler::specialKeyReleased(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::BasicViewHandler::base_goToPosition(const proland::BasicViewHandler::Position & p)
	static int _bind_base_goToPosition(lua_State *L) {
		if (!_lg_typecheck_base_goToPosition(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::base_goToPosition(const proland::BasicViewHandler::Position & p) function, expected prototype:\nvoid proland::BasicViewHandler::base_goToPosition(const proland::BasicViewHandler::Position & p)\nClass arguments details:\narg 1 ID = 6582046\n\n%s",luna_dumpStack(L).c_str());
		}

		const proland::BasicViewHandler::Position* p_ptr=(Luna< proland::BasicViewHandler::Position >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::BasicViewHandler::base_goToPosition function");
		}
		const proland::BasicViewHandler::Position & p=*p_ptr;

		proland::BasicViewHandler* self=Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::base_goToPosition(const proland::BasicViewHandler::Position &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BasicViewHandler::goToPosition(p);

		return 0;
	}


	// Operator binds:

};

proland::BasicViewHandler* LunaTraits< proland::BasicViewHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_BasicViewHandler::_bind_ctor(L);
}

void LunaTraits< proland::BasicViewHandler >::_bind_dtor(proland::BasicViewHandler* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::BasicViewHandler >::className[] = "BasicViewHandler";
const char LunaTraits< proland::BasicViewHandler >::fullName[] = "proland::BasicViewHandler";
const char LunaTraits< proland::BasicViewHandler >::moduleName[] = "proland";
const char* LunaTraits< proland::BasicViewHandler >::parents[] = {"ork.EventHandler", 0};
const int LunaTraits< proland::BasicViewHandler >::hash = 34863129;
const int LunaTraits< proland::BasicViewHandler >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::BasicViewHandler >::methods[] = {
	{"redisplay", &luna_wrapper_proland_BasicViewHandler::_bind_redisplay},
	{"reshape", &luna_wrapper_proland_BasicViewHandler::_bind_reshape},
	{"idle", &luna_wrapper_proland_BasicViewHandler::_bind_idle},
	{"mouseClick", &luna_wrapper_proland_BasicViewHandler::_bind_mouseClick},
	{"mouseMotion", &luna_wrapper_proland_BasicViewHandler::_bind_mouseMotion},
	{"mousePassiveMotion", &luna_wrapper_proland_BasicViewHandler::_bind_mousePassiveMotion},
	{"mouseWheel", &luna_wrapper_proland_BasicViewHandler::_bind_mouseWheel},
	{"keyTyped", &luna_wrapper_proland_BasicViewHandler::_bind_keyTyped},
	{"keyReleased", &luna_wrapper_proland_BasicViewHandler::_bind_keyReleased},
	{"specialKey", &luna_wrapper_proland_BasicViewHandler::_bind_specialKey},
	{"specialKeyReleased", &luna_wrapper_proland_BasicViewHandler::_bind_specialKeyReleased},
	{"getPosition", &luna_wrapper_proland_BasicViewHandler::_bind_getPosition},
	{"setPosition", &luna_wrapper_proland_BasicViewHandler::_bind_setPosition},
	{"goToPosition", &luna_wrapper_proland_BasicViewHandler::_bind_goToPosition},
	{"jumpToPosition", &luna_wrapper_proland_BasicViewHandler::_bind_jumpToPosition},
	{"base_toString", &luna_wrapper_proland_BasicViewHandler::_bind_base_toString},
	{"base_redisplay", &luna_wrapper_proland_BasicViewHandler::_bind_base_redisplay},
	{"base_reshape", &luna_wrapper_proland_BasicViewHandler::_bind_base_reshape},
	{"base_idle", &luna_wrapper_proland_BasicViewHandler::_bind_base_idle},
	{"base_mouseClick", &luna_wrapper_proland_BasicViewHandler::_bind_base_mouseClick},
	{"base_mouseMotion", &luna_wrapper_proland_BasicViewHandler::_bind_base_mouseMotion},
	{"base_mousePassiveMotion", &luna_wrapper_proland_BasicViewHandler::_bind_base_mousePassiveMotion},
	{"base_mouseWheel", &luna_wrapper_proland_BasicViewHandler::_bind_base_mouseWheel},
	{"base_keyTyped", &luna_wrapper_proland_BasicViewHandler::_bind_base_keyTyped},
	{"base_keyReleased", &luna_wrapper_proland_BasicViewHandler::_bind_base_keyReleased},
	{"base_specialKey", &luna_wrapper_proland_BasicViewHandler::_bind_base_specialKey},
	{"base_specialKeyReleased", &luna_wrapper_proland_BasicViewHandler::_bind_base_specialKeyReleased},
	{"base_goToPosition", &luna_wrapper_proland_BasicViewHandler::_bind_base_goToPosition},
	{"fromVoid", &luna_wrapper_proland_BasicViewHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_BasicViewHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_BasicViewHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::BasicViewHandler >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_BasicViewHandler::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::BasicViewHandler >::enumValues[] = {
	{0,0}
};


