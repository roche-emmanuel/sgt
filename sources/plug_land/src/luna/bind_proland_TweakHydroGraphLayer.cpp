#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TweakHydroGraphLayer.h>

class luna_wrapper_proland_TweakHydroGraphLayer {
public:
	typedef Luna< proland::TweakHydroGraphLayer > luna_t;

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

		proland::TweakHydroGraphLayer* self= (proland::TweakHydroGraphLayer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TweakHydroGraphLayer >::push(L,self,false);
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
		//proland::TweakHydroGraphLayer* ptr= dynamic_cast< proland::TweakHydroGraphLayer* >(Luna< ork::Object >::check(L,1));
		proland::TweakHydroGraphLayer* ptr= luna_caster< ork::Object, proland::TweakHydroGraphLayer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TweakHydroGraphLayer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_setActive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TweakHydroGraphLayer::TweakHydroGraphLayer(bool active)
	static proland::TweakHydroGraphLayer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TweakHydroGraphLayer::TweakHydroGraphLayer(bool active) function, expected prototype:\nproland::TweakHydroGraphLayer::TweakHydroGraphLayer(bool active)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool active=(bool)(lua_toboolean(L,1)==1);

		return new proland::TweakHydroGraphLayer(active);
	}

	// proland::TweakHydroGraphLayer::TweakHydroGraphLayer(lua_Table * data, bool active)
	static proland::TweakHydroGraphLayer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::TweakHydroGraphLayer::TweakHydroGraphLayer(lua_Table * data, bool active) function, expected prototype:\nproland::TweakHydroGraphLayer::TweakHydroGraphLayer(lua_Table * data, bool active)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool active=(bool)(lua_toboolean(L,2)==1);

		return new wrapper_proland_TweakHydroGraphLayer(L,NULL, active);
	}

	// Overload binder for proland::TweakHydroGraphLayer::TweakHydroGraphLayer
	static proland::TweakHydroGraphLayer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TweakHydroGraphLayer, cannot match any of the overloads for function TweakHydroGraphLayer:\n  TweakHydroGraphLayer(bool)\n  TweakHydroGraphLayer(lua_Table *, bool)\n");
		return NULL;
	}


	// Function binds:
	// const char * proland::TweakHydroGraphLayer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::TweakHydroGraphLayer::base_toString() function, expected prototype:\nconst char * proland::TweakHydroGraphLayer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakHydroGraphLayer* self=Luna< ork::Object >::checkSubType< proland::TweakHydroGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::TweakHydroGraphLayer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TweakHydroGraphLayer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::TweakHydroGraphLayer::base_reshape(int x, int y, bool & needUpdate)
	static int _bind_base_reshape(lua_State *L) {
		if (!_lg_typecheck_base_reshape(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakHydroGraphLayer::base_reshape(int x, int y, bool & needUpdate) function, expected prototype:\nvoid proland::TweakHydroGraphLayer::base_reshape(int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakHydroGraphLayer* self=Luna< ork::Object >::checkSubType< proland::TweakHydroGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakHydroGraphLayer::base_reshape(int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakHydroGraphLayer::reshape(x, y, needUpdate);

		lua_pushboolean(L,needUpdate?1:0);
		return 1;
	}

	// void proland::TweakHydroGraphLayer::base_idle(bool damaged, bool & needUpdate)
	static int _bind_base_idle(lua_State *L) {
		if (!_lg_typecheck_base_idle(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakHydroGraphLayer::base_idle(bool damaged, bool & needUpdate) function, expected prototype:\nvoid proland::TweakHydroGraphLayer::base_idle(bool damaged, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool damaged=(bool)(lua_toboolean(L,2)==1);
		bool needUpdate=(bool)(lua_toboolean(L,3)==1);

		proland::TweakHydroGraphLayer* self=Luna< ork::Object >::checkSubType< proland::TweakHydroGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakHydroGraphLayer::base_idle(bool, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakHydroGraphLayer::idle(damaged, needUpdate);

		lua_pushboolean(L,needUpdate?1:0);
		return 1;
	}

	// bool proland::TweakHydroGraphLayer::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_base_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakHydroGraphLayer::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakHydroGraphLayer::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakHydroGraphLayer* self=Luna< ork::Object >::checkSubType< proland::TweakHydroGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakHydroGraphLayer::base_mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakHydroGraphLayer::mouseWheel(b, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakHydroGraphLayer::base_mouseMotion(int x, int y, bool & needUpdate)
	static int _bind_base_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_base_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakHydroGraphLayer::base_mouseMotion(int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakHydroGraphLayer::base_mouseMotion(int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakHydroGraphLayer* self=Luna< ork::Object >::checkSubType< proland::TweakHydroGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakHydroGraphLayer::base_mouseMotion(int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakHydroGraphLayer::mouseMotion(x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakHydroGraphLayer::base_mousePassiveMotion(int x, int y, bool & needUpdate)
	static int _bind_base_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_base_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakHydroGraphLayer::base_mousePassiveMotion(int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakHydroGraphLayer::base_mousePassiveMotion(int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakHydroGraphLayer* self=Luna< ork::Object >::checkSubType< proland::TweakHydroGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakHydroGraphLayer::base_mousePassiveMotion(int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakHydroGraphLayer::mousePassiveMotion(x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakHydroGraphLayer::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_keyTyped(lua_State *L) {
		if (!_lg_typecheck_base_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakHydroGraphLayer::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakHydroGraphLayer::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakHydroGraphLayer* self=Luna< ork::Object >::checkSubType< proland::TweakHydroGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakHydroGraphLayer::base_keyTyped(unsigned char, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakHydroGraphLayer::keyTyped(c, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakHydroGraphLayer::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_keyReleased(lua_State *L) {
		if (!_lg_typecheck_base_keyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakHydroGraphLayer::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakHydroGraphLayer::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakHydroGraphLayer* self=Luna< ork::Object >::checkSubType< proland::TweakHydroGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakHydroGraphLayer::base_keyReleased(unsigned char, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakHydroGraphLayer::keyReleased(c, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakHydroGraphLayer::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_specialKey(lua_State *L) {
		if (!_lg_typecheck_base_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakHydroGraphLayer::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakHydroGraphLayer::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakHydroGraphLayer* self=Luna< ork::Object >::checkSubType< proland::TweakHydroGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakHydroGraphLayer::base_specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakHydroGraphLayer::specialKey(k, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakHydroGraphLayer::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_specialKeyReleased(lua_State *L) {
		if (!_lg_typecheck_base_specialKeyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakHydroGraphLayer::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakHydroGraphLayer::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakHydroGraphLayer* self=Luna< ork::Object >::checkSubType< proland::TweakHydroGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakHydroGraphLayer::base_specialKeyReleased(ork::EventHandler::key, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakHydroGraphLayer::specialKeyReleased(k, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// void proland::TweakHydroGraphLayer::base_setActive(bool active)
	static int _bind_base_setActive(lua_State *L) {
		if (!_lg_typecheck_base_setActive(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakHydroGraphLayer::base_setActive(bool active) function, expected prototype:\nvoid proland::TweakHydroGraphLayer::base_setActive(bool active)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool active=(bool)(lua_toboolean(L,2)==1);

		proland::TweakHydroGraphLayer* self=Luna< ork::Object >::checkSubType< proland::TweakHydroGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakHydroGraphLayer::base_setActive(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakHydroGraphLayer::setActive(active);

		return 0;
	}

	// void proland::TweakHydroGraphLayer::base_redisplay(double t, double dt, bool & needUpdate)
	static int _bind_base_redisplay(lua_State *L) {
		if (!_lg_typecheck_base_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakHydroGraphLayer::base_redisplay(double t, double dt, bool & needUpdate) function, expected prototype:\nvoid proland::TweakHydroGraphLayer::base_redisplay(double t, double dt, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakHydroGraphLayer* self=Luna< ork::Object >::checkSubType< proland::TweakHydroGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakHydroGraphLayer::base_redisplay(double, double, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakHydroGraphLayer::redisplay(t, dt, needUpdate);

		lua_pushboolean(L,needUpdate?1:0);
		return 1;
	}

	// bool proland::TweakHydroGraphLayer::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_mouseClick(lua_State *L) {
		if (!_lg_typecheck_base_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakHydroGraphLayer::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakHydroGraphLayer::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);
		bool needUpdate=(bool)(lua_toboolean(L,7)==1);

		proland::TweakHydroGraphLayer* self=Luna< ork::Object >::checkSubType< proland::TweakHydroGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakHydroGraphLayer::base_mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakHydroGraphLayer::mouseClick(b, s, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}


	// Operator binds:

};

proland::TweakHydroGraphLayer* LunaTraits< proland::TweakHydroGraphLayer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TweakHydroGraphLayer::_bind_ctor(L);
}

void LunaTraits< proland::TweakHydroGraphLayer >::_bind_dtor(proland::TweakHydroGraphLayer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::TweakHydroGraphLayer >::className[] = "TweakHydroGraphLayer";
const char LunaTraits< proland::TweakHydroGraphLayer >::fullName[] = "proland::TweakHydroGraphLayer";
const char LunaTraits< proland::TweakHydroGraphLayer >::moduleName[] = "proland";
const char* LunaTraits< proland::TweakHydroGraphLayer >::parents[] = {"proland.TweakGraphLayer", 0};
const int LunaTraits< proland::TweakHydroGraphLayer >::hash = 84038362;
const int LunaTraits< proland::TweakHydroGraphLayer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TweakHydroGraphLayer >::methods[] = {
	{"base_toString", &luna_wrapper_proland_TweakHydroGraphLayer::_bind_base_toString},
	{"base_reshape", &luna_wrapper_proland_TweakHydroGraphLayer::_bind_base_reshape},
	{"base_idle", &luna_wrapper_proland_TweakHydroGraphLayer::_bind_base_idle},
	{"base_mouseWheel", &luna_wrapper_proland_TweakHydroGraphLayer::_bind_base_mouseWheel},
	{"base_mouseMotion", &luna_wrapper_proland_TweakHydroGraphLayer::_bind_base_mouseMotion},
	{"base_mousePassiveMotion", &luna_wrapper_proland_TweakHydroGraphLayer::_bind_base_mousePassiveMotion},
	{"base_keyTyped", &luna_wrapper_proland_TweakHydroGraphLayer::_bind_base_keyTyped},
	{"base_keyReleased", &luna_wrapper_proland_TweakHydroGraphLayer::_bind_base_keyReleased},
	{"base_specialKey", &luna_wrapper_proland_TweakHydroGraphLayer::_bind_base_specialKey},
	{"base_specialKeyReleased", &luna_wrapper_proland_TweakHydroGraphLayer::_bind_base_specialKeyReleased},
	{"base_setActive", &luna_wrapper_proland_TweakHydroGraphLayer::_bind_base_setActive},
	{"base_redisplay", &luna_wrapper_proland_TweakHydroGraphLayer::_bind_base_redisplay},
	{"base_mouseClick", &luna_wrapper_proland_TweakHydroGraphLayer::_bind_base_mouseClick},
	{"fromVoid", &luna_wrapper_proland_TweakHydroGraphLayer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TweakHydroGraphLayer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TweakHydroGraphLayer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TweakHydroGraphLayer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TweakHydroGraphLayer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TweakHydroGraphLayer >::enumValues[] = {
	{0,0}
};


