#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TweakBarManager.h>

class luna_wrapper_proland_TweakBarManager {
public:
	typedef Luna< proland::TweakBarManager > luna_t;

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

		proland::TweakBarManager* self= (proland::TweakBarManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TweakBarManager >::push(L,self,false);
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
		//proland::TweakBarManager* ptr= dynamic_cast< proland::TweakBarManager* >(Luna< ork::Object >::check(L,1));
		proland::TweakBarManager* ptr= luna_caster< ork::Object, proland::TweakBarManager >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TweakBarManager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40535768) ) return false;
		if( (!(Luna< vector< proland::TweakBarManager::BarData > >::check(L,1))) ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,40535768) ) return false;
		if( (!(Luna< vector< proland::TweakBarManager::BarData > >::check(L,2))) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::EventHandler >(L,2) ) return false;
		return true;
	}

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

	inline static bool _lg_typecheck_mouseWheel(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
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

	inline static bool _lg_typecheck_resetStates(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_mouseWheel(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
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
	// proland::TweakBarManager::TweakBarManager(vector< proland::TweakBarManager::BarData > bars, bool minimized = true)
	static proland::TweakBarManager* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TweakBarManager::TweakBarManager(vector< proland::TweakBarManager::BarData > bars, bool minimized = true) function, expected prototype:\nproland::TweakBarManager::TweakBarManager(vector< proland::TweakBarManager::BarData > bars, bool minimized = true)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		vector< proland::TweakBarManager::BarData >* bars_ptr=(Luna< vector< proland::TweakBarManager::BarData > >::check(L,1));
		if( !bars_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bars in proland::TweakBarManager::TweakBarManager function");
		}
		vector< proland::TweakBarManager::BarData > bars=*bars_ptr;
		bool minimized=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		return new proland::TweakBarManager(bars, minimized);
	}

	// proland::TweakBarManager::TweakBarManager(lua_Table * data, vector< proland::TweakBarManager::BarData > bars, bool minimized = true)
	static proland::TweakBarManager* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::TweakBarManager::TweakBarManager(lua_Table * data, vector< proland::TweakBarManager::BarData > bars, bool minimized = true) function, expected prototype:\nproland::TweakBarManager::TweakBarManager(lua_Table * data, vector< proland::TweakBarManager::BarData > bars, bool minimized = true)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		vector< proland::TweakBarManager::BarData >* bars_ptr=(Luna< vector< proland::TweakBarManager::BarData > >::check(L,2));
		if( !bars_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bars in proland::TweakBarManager::TweakBarManager function");
		}
		vector< proland::TweakBarManager::BarData > bars=*bars_ptr;
		bool minimized=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		return new wrapper_proland_TweakBarManager(L,NULL, bars, minimized);
	}

	// Overload binder for proland::TweakBarManager::TweakBarManager
	static proland::TweakBarManager* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TweakBarManager, cannot match any of the overloads for function TweakBarManager:\n  TweakBarManager(vector< proland::TweakBarManager::BarData >, bool)\n  TweakBarManager(lua_Table *, vector< proland::TweakBarManager::BarData >, bool)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::EventHandler > proland::TweakBarManager::getNext()
	static int _bind_getNext(lua_State *L) {
		if (!_lg_typecheck_getNext(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::EventHandler > proland::TweakBarManager::getNext() function, expected prototype:\nork::ptr< ork::EventHandler > proland::TweakBarManager::getNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::EventHandler > proland::TweakBarManager::getNext(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::EventHandler > lret = self->getNext();
		Luna< ork::EventHandler >::push(L,lret.get(),false);

		return 1;
	}

	// void proland::TweakBarManager::setNext(ork::ptr< ork::EventHandler > next)
	static int _bind_setNext(lua_State *L) {
		if (!_lg_typecheck_setNext(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakBarManager::setNext(ork::ptr< ork::EventHandler > next) function, expected prototype:\nvoid proland::TweakBarManager::setNext(ork::ptr< ork::EventHandler > next)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::EventHandler > next = Luna< ork::Object >::checkSubType< ork::EventHandler >(L,2);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakBarManager::setNext(ork::ptr< ork::EventHandler >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNext(next);

		return 0;
	}

	// void proland::TweakBarManager::redisplay(double t, double dt)
	static int _bind_redisplay(lua_State *L) {
		if (!_lg_typecheck_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakBarManager::redisplay(double t, double dt) function, expected prototype:\nvoid proland::TweakBarManager::redisplay(double t, double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakBarManager::redisplay(double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->redisplay(t, dt);

		return 0;
	}

	// void proland::TweakBarManager::reshape(int x, int y)
	static int _bind_reshape(lua_State *L) {
		if (!_lg_typecheck_reshape(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakBarManager::reshape(int x, int y) function, expected prototype:\nvoid proland::TweakBarManager::reshape(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakBarManager::reshape(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reshape(x, y);

		return 0;
	}

	// void proland::TweakBarManager::idle(bool damaged)
	static int _bind_idle(lua_State *L) {
		if (!_lg_typecheck_idle(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakBarManager::idle(bool damaged) function, expected prototype:\nvoid proland::TweakBarManager::idle(bool damaged)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool damaged=(bool)(lua_toboolean(L,2)==1);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakBarManager::idle(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->idle(damaged);

		return 0;
	}

	// bool proland::TweakBarManager::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	static int _bind_mouseClick(lua_State *L) {
		if (!_lg_typecheck_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakBarManager::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::TweakBarManager::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakBarManager::mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseClick(b, s, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TweakBarManager::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	static int _bind_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakBarManager::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::TweakBarManager::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakBarManager::mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseWheel(b, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TweakBarManager::mouseMotion(int x, int y)
	static int _bind_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakBarManager::mouseMotion(int x, int y) function, expected prototype:\nbool proland::TweakBarManager::mouseMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakBarManager::mouseMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TweakBarManager::mousePassiveMotion(int x, int y)
	static int _bind_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakBarManager::mousePassiveMotion(int x, int y) function, expected prototype:\nbool proland::TweakBarManager::mousePassiveMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakBarManager::mousePassiveMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mousePassiveMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TweakBarManager::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_keyTyped(lua_State *L) {
		if (!_lg_typecheck_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakBarManager::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::TweakBarManager::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakBarManager::keyTyped(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->keyTyped(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TweakBarManager::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_keyReleased(lua_State *L) {
		if (!_lg_typecheck_keyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakBarManager::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::TweakBarManager::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakBarManager::keyReleased(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->keyReleased(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TweakBarManager::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_specialKey(lua_State *L) {
		if (!_lg_typecheck_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakBarManager::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::TweakBarManager::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakBarManager::specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->specialKey(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TweakBarManager::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_specialKeyReleased(lua_State *L) {
		if (!_lg_typecheck_specialKeyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakBarManager::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::TweakBarManager::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakBarManager::specialKeyReleased(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->specialKeyReleased(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::TweakBarManager::resetStates()
	static int _bind_resetStates(lua_State *L) {
		if (!_lg_typecheck_resetStates(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakBarManager::resetStates() function, expected prototype:\nvoid proland::TweakBarManager::resetStates()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakBarManager::resetStates(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resetStates();

		return 0;
	}

	// const char * proland::TweakBarManager::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::TweakBarManager::base_toString() function, expected prototype:\nconst char * proland::TweakBarManager::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::TweakBarManager::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TweakBarManager::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::TweakBarManager::base_redisplay(double t, double dt)
	static int _bind_base_redisplay(lua_State *L) {
		if (!_lg_typecheck_base_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakBarManager::base_redisplay(double t, double dt) function, expected prototype:\nvoid proland::TweakBarManager::base_redisplay(double t, double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakBarManager::base_redisplay(double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakBarManager::redisplay(t, dt);

		return 0;
	}

	// void proland::TweakBarManager::base_reshape(int x, int y)
	static int _bind_base_reshape(lua_State *L) {
		if (!_lg_typecheck_base_reshape(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakBarManager::base_reshape(int x, int y) function, expected prototype:\nvoid proland::TweakBarManager::base_reshape(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakBarManager::base_reshape(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakBarManager::reshape(x, y);

		return 0;
	}

	// void proland::TweakBarManager::base_idle(bool damaged)
	static int _bind_base_idle(lua_State *L) {
		if (!_lg_typecheck_base_idle(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakBarManager::base_idle(bool damaged) function, expected prototype:\nvoid proland::TweakBarManager::base_idle(bool damaged)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool damaged=(bool)(lua_toboolean(L,2)==1);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakBarManager::base_idle(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakBarManager::idle(damaged);

		return 0;
	}

	// bool proland::TweakBarManager::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_mouseClick(lua_State *L) {
		if (!_lg_typecheck_base_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakBarManager::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::TweakBarManager::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakBarManager::base_mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakBarManager::mouseClick(b, s, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TweakBarManager::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_base_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakBarManager::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::TweakBarManager::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakBarManager::base_mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakBarManager::mouseWheel(b, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TweakBarManager::base_mouseMotion(int x, int y)
	static int _bind_base_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_base_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakBarManager::base_mouseMotion(int x, int y) function, expected prototype:\nbool proland::TweakBarManager::base_mouseMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakBarManager::base_mouseMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakBarManager::mouseMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TweakBarManager::base_mousePassiveMotion(int x, int y)
	static int _bind_base_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_base_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakBarManager::base_mousePassiveMotion(int x, int y) function, expected prototype:\nbool proland::TweakBarManager::base_mousePassiveMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakBarManager::base_mousePassiveMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakBarManager::mousePassiveMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TweakBarManager::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_keyTyped(lua_State *L) {
		if (!_lg_typecheck_base_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakBarManager::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::TweakBarManager::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakBarManager::base_keyTyped(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakBarManager::keyTyped(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TweakBarManager::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_keyReleased(lua_State *L) {
		if (!_lg_typecheck_base_keyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakBarManager::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::TweakBarManager::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakBarManager::base_keyReleased(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakBarManager::keyReleased(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TweakBarManager::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_specialKey(lua_State *L) {
		if (!_lg_typecheck_base_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakBarManager::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::TweakBarManager::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakBarManager::base_specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakBarManager::specialKey(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TweakBarManager::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_specialKeyReleased(lua_State *L) {
		if (!_lg_typecheck_base_specialKeyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakBarManager::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::TweakBarManager::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::TweakBarManager* self=Luna< ork::Object >::checkSubType< proland::TweakBarManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakBarManager::base_specialKeyReleased(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakBarManager::specialKeyReleased(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

proland::TweakBarManager* LunaTraits< proland::TweakBarManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TweakBarManager::_bind_ctor(L);
}

void LunaTraits< proland::TweakBarManager >::_bind_dtor(proland::TweakBarManager* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::TweakBarManager >::className[] = "TweakBarManager";
const char LunaTraits< proland::TweakBarManager >::fullName[] = "proland::TweakBarManager";
const char LunaTraits< proland::TweakBarManager >::moduleName[] = "proland";
const char* LunaTraits< proland::TweakBarManager >::parents[] = {"ork.EventHandler", 0};
const int LunaTraits< proland::TweakBarManager >::hash = 83074507;
const int LunaTraits< proland::TweakBarManager >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TweakBarManager >::methods[] = {
	{"getNext", &luna_wrapper_proland_TweakBarManager::_bind_getNext},
	{"setNext", &luna_wrapper_proland_TweakBarManager::_bind_setNext},
	{"redisplay", &luna_wrapper_proland_TweakBarManager::_bind_redisplay},
	{"reshape", &luna_wrapper_proland_TweakBarManager::_bind_reshape},
	{"idle", &luna_wrapper_proland_TweakBarManager::_bind_idle},
	{"mouseClick", &luna_wrapper_proland_TweakBarManager::_bind_mouseClick},
	{"mouseWheel", &luna_wrapper_proland_TweakBarManager::_bind_mouseWheel},
	{"mouseMotion", &luna_wrapper_proland_TweakBarManager::_bind_mouseMotion},
	{"mousePassiveMotion", &luna_wrapper_proland_TweakBarManager::_bind_mousePassiveMotion},
	{"keyTyped", &luna_wrapper_proland_TweakBarManager::_bind_keyTyped},
	{"keyReleased", &luna_wrapper_proland_TweakBarManager::_bind_keyReleased},
	{"specialKey", &luna_wrapper_proland_TweakBarManager::_bind_specialKey},
	{"specialKeyReleased", &luna_wrapper_proland_TweakBarManager::_bind_specialKeyReleased},
	{"resetStates", &luna_wrapper_proland_TweakBarManager::_bind_resetStates},
	{"base_toString", &luna_wrapper_proland_TweakBarManager::_bind_base_toString},
	{"base_redisplay", &luna_wrapper_proland_TweakBarManager::_bind_base_redisplay},
	{"base_reshape", &luna_wrapper_proland_TweakBarManager::_bind_base_reshape},
	{"base_idle", &luna_wrapper_proland_TweakBarManager::_bind_base_idle},
	{"base_mouseClick", &luna_wrapper_proland_TweakBarManager::_bind_base_mouseClick},
	{"base_mouseWheel", &luna_wrapper_proland_TweakBarManager::_bind_base_mouseWheel},
	{"base_mouseMotion", &luna_wrapper_proland_TweakBarManager::_bind_base_mouseMotion},
	{"base_mousePassiveMotion", &luna_wrapper_proland_TweakBarManager::_bind_base_mousePassiveMotion},
	{"base_keyTyped", &luna_wrapper_proland_TweakBarManager::_bind_base_keyTyped},
	{"base_keyReleased", &luna_wrapper_proland_TweakBarManager::_bind_base_keyReleased},
	{"base_specialKey", &luna_wrapper_proland_TweakBarManager::_bind_base_specialKey},
	{"base_specialKeyReleased", &luna_wrapper_proland_TweakBarManager::_bind_base_specialKeyReleased},
	{"fromVoid", &luna_wrapper_proland_TweakBarManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TweakBarManager::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TweakBarManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TweakBarManager >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TweakBarManager::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TweakBarManager >::enumValues[] = {
	{0,0}
};


