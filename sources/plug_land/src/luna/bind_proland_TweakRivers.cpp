#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TweakRivers.h>

class luna_wrapper_proland_TweakRivers {
public:
	typedef Luna< proland::TweakRivers > luna_t;

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

		proland::TweakRivers* self= (proland::TweakRivers*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TweakRivers >::push(L,self,false);
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
		//proland::TweakRivers* ptr= dynamic_cast< proland::TweakRivers* >(Luna< ork::Object >::check(L,1));
		proland::TweakRivers* ptr= luna_caster< ork::Object, proland::TweakRivers >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TweakRivers >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,2) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_redisplay(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81187440)) ) return false;
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

	inline static bool _lg_typecheck_base_updateBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81187440)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TweakRivers::TweakRivers(ork::ptr< proland::DrawRiversTask > drawer, bool active)
	static proland::TweakRivers* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TweakRivers::TweakRivers(ork::ptr< proland::DrawRiversTask > drawer, bool active) function, expected prototype:\nproland::TweakRivers::TweakRivers(ork::ptr< proland::DrawRiversTask > drawer, bool active)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::DrawRiversTask > drawer = Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,1);
		bool active=(bool)(lua_toboolean(L,2)==1);

		return new proland::TweakRivers(drawer, active);
	}

	// proland::TweakRivers::TweakRivers(lua_Table * data, ork::ptr< proland::DrawRiversTask > drawer, bool active)
	static proland::TweakRivers* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::TweakRivers::TweakRivers(lua_Table * data, ork::ptr< proland::DrawRiversTask > drawer, bool active) function, expected prototype:\nproland::TweakRivers::TweakRivers(lua_Table * data, ork::ptr< proland::DrawRiversTask > drawer, bool active)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::DrawRiversTask > drawer = Luna< ork::Object >::checkSubType< proland::DrawRiversTask >(L,2);
		bool active=(bool)(lua_toboolean(L,3)==1);

		return new wrapper_proland_TweakRivers(L,NULL, drawer, active);
	}

	// Overload binder for proland::TweakRivers::TweakRivers
	static proland::TweakRivers* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TweakRivers, cannot match any of the overloads for function TweakRivers:\n  TweakRivers(ork::ptr< proland::DrawRiversTask >, bool)\n  TweakRivers(lua_Table *, ork::ptr< proland::DrawRiversTask >, bool)\n");
		return NULL;
	}


	// Function binds:
	// void proland::TweakRivers::redisplay(double t, double dt, bool & needUpdate)
	static int _bind_redisplay(lua_State *L) {
		if (!_lg_typecheck_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakRivers::redisplay(double t, double dt, bool & needUpdate) function, expected prototype:\nvoid proland::TweakRivers::redisplay(double t, double dt, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakRivers* self=Luna< ork::Object >::checkSubType< proland::TweakRivers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakRivers::redisplay(double, double, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->redisplay(t, dt, needUpdate);

		lua_pushboolean(L,needUpdate?1:0);
		return 1;
	}

	// void proland::TweakRivers::updateBar(TwBar * bar)
	static int _bind_updateBar(lua_State *L) {
		if (!_lg_typecheck_updateBar(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakRivers::updateBar(TwBar * bar) function, expected prototype:\nvoid proland::TweakRivers::updateBar(TwBar * bar)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,2));

		proland::TweakRivers* self=Luna< ork::Object >::checkSubType< proland::TweakRivers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakRivers::updateBar(TwBar *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->updateBar(bar);

		return 0;
	}

	// const char * proland::TweakRivers::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::TweakRivers::base_toString() function, expected prototype:\nconst char * proland::TweakRivers::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakRivers* self=Luna< ork::Object >::checkSubType< proland::TweakRivers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::TweakRivers::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TweakRivers::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::TweakRivers::base_setActive(bool active)
	static int _bind_base_setActive(lua_State *L) {
		if (!_lg_typecheck_base_setActive(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakRivers::base_setActive(bool active) function, expected prototype:\nvoid proland::TweakRivers::base_setActive(bool active)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool active=(bool)(lua_toboolean(L,2)==1);

		proland::TweakRivers* self=Luna< ork::Object >::checkSubType< proland::TweakRivers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakRivers::base_setActive(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakRivers::setActive(active);

		return 0;
	}

	// void proland::TweakRivers::base_reshape(int x, int y, bool & needUpdate)
	static int _bind_base_reshape(lua_State *L) {
		if (!_lg_typecheck_base_reshape(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakRivers::base_reshape(int x, int y, bool & needUpdate) function, expected prototype:\nvoid proland::TweakRivers::base_reshape(int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakRivers* self=Luna< ork::Object >::checkSubType< proland::TweakRivers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakRivers::base_reshape(int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakRivers::reshape(x, y, needUpdate);

		lua_pushboolean(L,needUpdate?1:0);
		return 1;
	}

	// void proland::TweakRivers::base_idle(bool damaged, bool & needUpdate)
	static int _bind_base_idle(lua_State *L) {
		if (!_lg_typecheck_base_idle(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakRivers::base_idle(bool damaged, bool & needUpdate) function, expected prototype:\nvoid proland::TweakRivers::base_idle(bool damaged, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool damaged=(bool)(lua_toboolean(L,2)==1);
		bool needUpdate=(bool)(lua_toboolean(L,3)==1);

		proland::TweakRivers* self=Luna< ork::Object >::checkSubType< proland::TweakRivers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakRivers::base_idle(bool, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakRivers::idle(damaged, needUpdate);

		lua_pushboolean(L,needUpdate?1:0);
		return 1;
	}

	// bool proland::TweakRivers::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_mouseClick(lua_State *L) {
		if (!_lg_typecheck_base_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakRivers::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakRivers::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);
		bool needUpdate=(bool)(lua_toboolean(L,7)==1);

		proland::TweakRivers* self=Luna< ork::Object >::checkSubType< proland::TweakRivers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakRivers::base_mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakRivers::mouseClick(b, s, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakRivers::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_base_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakRivers::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakRivers::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakRivers* self=Luna< ork::Object >::checkSubType< proland::TweakRivers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakRivers::base_mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakRivers::mouseWheel(b, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakRivers::base_mouseMotion(int x, int y, bool & needUpdate)
	static int _bind_base_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_base_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakRivers::base_mouseMotion(int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakRivers::base_mouseMotion(int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakRivers* self=Luna< ork::Object >::checkSubType< proland::TweakRivers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakRivers::base_mouseMotion(int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakRivers::mouseMotion(x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakRivers::base_mousePassiveMotion(int x, int y, bool & needUpdate)
	static int _bind_base_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_base_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakRivers::base_mousePassiveMotion(int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakRivers::base_mousePassiveMotion(int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakRivers* self=Luna< ork::Object >::checkSubType< proland::TweakRivers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakRivers::base_mousePassiveMotion(int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakRivers::mousePassiveMotion(x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakRivers::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_keyTyped(lua_State *L) {
		if (!_lg_typecheck_base_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakRivers::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakRivers::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakRivers* self=Luna< ork::Object >::checkSubType< proland::TweakRivers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakRivers::base_keyTyped(unsigned char, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakRivers::keyTyped(c, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakRivers::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_keyReleased(lua_State *L) {
		if (!_lg_typecheck_base_keyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakRivers::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakRivers::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakRivers* self=Luna< ork::Object >::checkSubType< proland::TweakRivers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakRivers::base_keyReleased(unsigned char, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakRivers::keyReleased(c, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakRivers::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_specialKey(lua_State *L) {
		if (!_lg_typecheck_base_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakRivers::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakRivers::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakRivers* self=Luna< ork::Object >::checkSubType< proland::TweakRivers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakRivers::base_specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakRivers::specialKey(k, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakRivers::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_specialKeyReleased(lua_State *L) {
		if (!_lg_typecheck_base_specialKeyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakRivers::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakRivers::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakRivers* self=Luna< ork::Object >::checkSubType< proland::TweakRivers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakRivers::base_specialKeyReleased(ork::EventHandler::key, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakRivers::specialKeyReleased(k, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// void proland::TweakRivers::base_redisplay(double t, double dt, bool & needUpdate)
	static int _bind_base_redisplay(lua_State *L) {
		if (!_lg_typecheck_base_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakRivers::base_redisplay(double t, double dt, bool & needUpdate) function, expected prototype:\nvoid proland::TweakRivers::base_redisplay(double t, double dt, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakRivers* self=Luna< ork::Object >::checkSubType< proland::TweakRivers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakRivers::base_redisplay(double, double, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakRivers::redisplay(t, dt, needUpdate);

		lua_pushboolean(L,needUpdate?1:0);
		return 1;
	}

	// void proland::TweakRivers::base_updateBar(TwBar * bar)
	static int _bind_base_updateBar(lua_State *L) {
		if (!_lg_typecheck_base_updateBar(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakRivers::base_updateBar(TwBar * bar) function, expected prototype:\nvoid proland::TweakRivers::base_updateBar(TwBar * bar)\nClass arguments details:\narg 1 ID = 81187440\n\n%s",luna_dumpStack(L).c_str());
		}

		TwBar* bar=(Luna< TwBar >::check(L,2));

		proland::TweakRivers* self=Luna< ork::Object >::checkSubType< proland::TweakRivers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakRivers::base_updateBar(TwBar *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakRivers::updateBar(bar);

		return 0;
	}


	// Operator binds:

};

proland::TweakRivers* LunaTraits< proland::TweakRivers >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TweakRivers::_bind_ctor(L);
}

void LunaTraits< proland::TweakRivers >::_bind_dtor(proland::TweakRivers* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::TweakRivers >::className[] = "TweakRivers";
const char LunaTraits< proland::TweakRivers >::fullName[] = "proland::TweakRivers";
const char LunaTraits< proland::TweakRivers >::moduleName[] = "proland";
const char* LunaTraits< proland::TweakRivers >::parents[] = {"proland.TweakBarHandler", 0};
const int LunaTraits< proland::TweakRivers >::hash = 56265131;
const int LunaTraits< proland::TweakRivers >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TweakRivers >::methods[] = {
	{"redisplay", &luna_wrapper_proland_TweakRivers::_bind_redisplay},
	{"updateBar", &luna_wrapper_proland_TweakRivers::_bind_updateBar},
	{"base_toString", &luna_wrapper_proland_TweakRivers::_bind_base_toString},
	{"base_setActive", &luna_wrapper_proland_TweakRivers::_bind_base_setActive},
	{"base_reshape", &luna_wrapper_proland_TweakRivers::_bind_base_reshape},
	{"base_idle", &luna_wrapper_proland_TweakRivers::_bind_base_idle},
	{"base_mouseClick", &luna_wrapper_proland_TweakRivers::_bind_base_mouseClick},
	{"base_mouseWheel", &luna_wrapper_proland_TweakRivers::_bind_base_mouseWheel},
	{"base_mouseMotion", &luna_wrapper_proland_TweakRivers::_bind_base_mouseMotion},
	{"base_mousePassiveMotion", &luna_wrapper_proland_TweakRivers::_bind_base_mousePassiveMotion},
	{"base_keyTyped", &luna_wrapper_proland_TweakRivers::_bind_base_keyTyped},
	{"base_keyReleased", &luna_wrapper_proland_TweakRivers::_bind_base_keyReleased},
	{"base_specialKey", &luna_wrapper_proland_TweakRivers::_bind_base_specialKey},
	{"base_specialKeyReleased", &luna_wrapper_proland_TweakRivers::_bind_base_specialKeyReleased},
	{"base_redisplay", &luna_wrapper_proland_TweakRivers::_bind_base_redisplay},
	{"base_updateBar", &luna_wrapper_proland_TweakRivers::_bind_base_updateBar},
	{"fromVoid", &luna_wrapper_proland_TweakRivers::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TweakRivers::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TweakRivers::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TweakRivers >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TweakRivers::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TweakRivers >::enumValues[] = {
	{0,0}
};


