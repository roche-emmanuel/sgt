#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TweakViewHandler.h>

class luna_wrapper_proland_TweakViewHandler {
public:
	typedef Luna< proland::TweakViewHandler > luna_t;

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

		proland::TweakViewHandler* self= (proland::TweakViewHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TweakViewHandler >::push(L,self,false);
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
		//proland::TweakViewHandler* ptr= dynamic_cast< proland::TweakViewHandler* >(Luna< ork::Object >::check(L,1));
		proland::TweakViewHandler* ptr= luna_caster< ork::Object, proland::TweakViewHandler >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TweakViewHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,22464234) ) return false;
		if( (!(Luna< std::vector< proland::TweakViewHandler::Position > >::check(L,2))) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,22464234) ) return false;
		if( (!(Luna< std::vector< proland::TweakViewHandler::Position > >::check(L,3))) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TweakViewHandler::TweakViewHandler(ork::ptr< proland::BasicViewHandler > viewHandler, const std::vector< proland::TweakViewHandler::Position > & views, bool animate, bool active)
	static proland::TweakViewHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TweakViewHandler::TweakViewHandler(ork::ptr< proland::BasicViewHandler > viewHandler, const std::vector< proland::TweakViewHandler::Position > & views, bool animate, bool active) function, expected prototype:\nproland::TweakViewHandler::TweakViewHandler(ork::ptr< proland::BasicViewHandler > viewHandler, const std::vector< proland::TweakViewHandler::Position > & views, bool animate, bool active)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::BasicViewHandler > viewHandler = Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,1);
		const std::vector< proland::TweakViewHandler::Position >* views_ptr=(Luna< std::vector< proland::TweakViewHandler::Position > >::check(L,2));
		if( !views_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg views in proland::TweakViewHandler::TweakViewHandler function");
		}
		const std::vector< proland::TweakViewHandler::Position > & views=*views_ptr;
		bool animate=(bool)(lua_toboolean(L,3)==1);
		bool active=(bool)(lua_toboolean(L,4)==1);

		return new proland::TweakViewHandler(viewHandler, views, animate, active);
	}

	// proland::TweakViewHandler::TweakViewHandler(lua_Table * data, ork::ptr< proland::BasicViewHandler > viewHandler, const std::vector< proland::TweakViewHandler::Position > & views, bool animate, bool active)
	static proland::TweakViewHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::TweakViewHandler::TweakViewHandler(lua_Table * data, ork::ptr< proland::BasicViewHandler > viewHandler, const std::vector< proland::TweakViewHandler::Position > & views, bool animate, bool active) function, expected prototype:\nproland::TweakViewHandler::TweakViewHandler(lua_Table * data, ork::ptr< proland::BasicViewHandler > viewHandler, const std::vector< proland::TweakViewHandler::Position > & views, bool animate, bool active)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::BasicViewHandler > viewHandler = Luna< ork::Object >::checkSubType< proland::BasicViewHandler >(L,2);
		const std::vector< proland::TweakViewHandler::Position >* views_ptr=(Luna< std::vector< proland::TweakViewHandler::Position > >::check(L,3));
		if( !views_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg views in proland::TweakViewHandler::TweakViewHandler function");
		}
		const std::vector< proland::TweakViewHandler::Position > & views=*views_ptr;
		bool animate=(bool)(lua_toboolean(L,4)==1);
		bool active=(bool)(lua_toboolean(L,5)==1);

		return new wrapper_proland_TweakViewHandler(L,NULL, viewHandler, views, animate, active);
	}

	// Overload binder for proland::TweakViewHandler::TweakViewHandler
	static proland::TweakViewHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TweakViewHandler, cannot match any of the overloads for function TweakViewHandler:\n  TweakViewHandler(ork::ptr< proland::BasicViewHandler >, const std::vector< proland::TweakViewHandler::Position > &, bool, bool)\n  TweakViewHandler(lua_Table *, ork::ptr< proland::BasicViewHandler >, const std::vector< proland::TweakViewHandler::Position > &, bool, bool)\n");
		return NULL;
	}


	// Function binds:
	// const char * proland::TweakViewHandler::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::TweakViewHandler::base_toString() function, expected prototype:\nconst char * proland::TweakViewHandler::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakViewHandler* self=Luna< ork::Object >::checkSubType< proland::TweakViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::TweakViewHandler::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TweakViewHandler::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::TweakViewHandler::base_setActive(bool active)
	static int _bind_base_setActive(lua_State *L) {
		if (!_lg_typecheck_base_setActive(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakViewHandler::base_setActive(bool active) function, expected prototype:\nvoid proland::TweakViewHandler::base_setActive(bool active)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool active=(bool)(lua_toboolean(L,2)==1);

		proland::TweakViewHandler* self=Luna< ork::Object >::checkSubType< proland::TweakViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakViewHandler::base_setActive(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakViewHandler::setActive(active);

		return 0;
	}

	// void proland::TweakViewHandler::base_redisplay(double t, double dt, bool & needUpdate)
	static int _bind_base_redisplay(lua_State *L) {
		if (!_lg_typecheck_base_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakViewHandler::base_redisplay(double t, double dt, bool & needUpdate) function, expected prototype:\nvoid proland::TweakViewHandler::base_redisplay(double t, double dt, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakViewHandler* self=Luna< ork::Object >::checkSubType< proland::TweakViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakViewHandler::base_redisplay(double, double, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakViewHandler::redisplay(t, dt, needUpdate);

		lua_pushboolean(L,needUpdate?1:0);
		return 1;
	}

	// void proland::TweakViewHandler::base_reshape(int x, int y, bool & needUpdate)
	static int _bind_base_reshape(lua_State *L) {
		if (!_lg_typecheck_base_reshape(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakViewHandler::base_reshape(int x, int y, bool & needUpdate) function, expected prototype:\nvoid proland::TweakViewHandler::base_reshape(int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakViewHandler* self=Luna< ork::Object >::checkSubType< proland::TweakViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakViewHandler::base_reshape(int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakViewHandler::reshape(x, y, needUpdate);

		lua_pushboolean(L,needUpdate?1:0);
		return 1;
	}

	// void proland::TweakViewHandler::base_idle(bool damaged, bool & needUpdate)
	static int _bind_base_idle(lua_State *L) {
		if (!_lg_typecheck_base_idle(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakViewHandler::base_idle(bool damaged, bool & needUpdate) function, expected prototype:\nvoid proland::TweakViewHandler::base_idle(bool damaged, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool damaged=(bool)(lua_toboolean(L,2)==1);
		bool needUpdate=(bool)(lua_toboolean(L,3)==1);

		proland::TweakViewHandler* self=Luna< ork::Object >::checkSubType< proland::TweakViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakViewHandler::base_idle(bool, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TweakViewHandler::idle(damaged, needUpdate);

		lua_pushboolean(L,needUpdate?1:0);
		return 1;
	}

	// bool proland::TweakViewHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_mouseClick(lua_State *L) {
		if (!_lg_typecheck_base_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakViewHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakViewHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);
		bool needUpdate=(bool)(lua_toboolean(L,7)==1);

		proland::TweakViewHandler* self=Luna< ork::Object >::checkSubType< proland::TweakViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakViewHandler::base_mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakViewHandler::mouseClick(b, s, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakViewHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_base_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakViewHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakViewHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakViewHandler* self=Luna< ork::Object >::checkSubType< proland::TweakViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakViewHandler::base_mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakViewHandler::mouseWheel(b, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakViewHandler::base_mouseMotion(int x, int y, bool & needUpdate)
	static int _bind_base_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_base_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakViewHandler::base_mouseMotion(int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakViewHandler::base_mouseMotion(int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakViewHandler* self=Luna< ork::Object >::checkSubType< proland::TweakViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakViewHandler::base_mouseMotion(int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakViewHandler::mouseMotion(x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakViewHandler::base_mousePassiveMotion(int x, int y, bool & needUpdate)
	static int _bind_base_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_base_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakViewHandler::base_mousePassiveMotion(int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakViewHandler::base_mousePassiveMotion(int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		bool needUpdate=(bool)(lua_toboolean(L,4)==1);

		proland::TweakViewHandler* self=Luna< ork::Object >::checkSubType< proland::TweakViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakViewHandler::base_mousePassiveMotion(int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakViewHandler::mousePassiveMotion(x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakViewHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_keyTyped(lua_State *L) {
		if (!_lg_typecheck_base_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakViewHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakViewHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakViewHandler* self=Luna< ork::Object >::checkSubType< proland::TweakViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakViewHandler::base_keyTyped(unsigned char, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakViewHandler::keyTyped(c, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakViewHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_keyReleased(lua_State *L) {
		if (!_lg_typecheck_base_keyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakViewHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakViewHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakViewHandler* self=Luna< ork::Object >::checkSubType< proland::TweakViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakViewHandler::base_keyReleased(unsigned char, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakViewHandler::keyReleased(c, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakViewHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_specialKey(lua_State *L) {
		if (!_lg_typecheck_base_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakViewHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakViewHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakViewHandler* self=Luna< ork::Object >::checkSubType< proland::TweakViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakViewHandler::base_specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakViewHandler::specialKey(k, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}

	// bool proland::TweakViewHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)
	static int _bind_base_specialKeyReleased(lua_State *L) {
		if (!_lg_typecheck_base_specialKeyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TweakViewHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate) function, expected prototype:\nbool proland::TweakViewHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y, bool & needUpdate)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		bool needUpdate=(bool)(lua_toboolean(L,6)==1);

		proland::TweakViewHandler* self=Luna< ork::Object >::checkSubType< proland::TweakViewHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TweakViewHandler::base_specialKeyReleased(ork::EventHandler::key, ork::EventHandler::modifier, int, int, bool &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TweakViewHandler::specialKeyReleased(k, m, x, y, needUpdate);
		lua_pushboolean(L,lret?1:0);

		lua_pushboolean(L,needUpdate?1:0);
		return 2;
	}


	// Operator binds:

};

proland::TweakViewHandler* LunaTraits< proland::TweakViewHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TweakViewHandler::_bind_ctor(L);
}

void LunaTraits< proland::TweakViewHandler >::_bind_dtor(proland::TweakViewHandler* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::TweakViewHandler >::className[] = "TweakViewHandler";
const char LunaTraits< proland::TweakViewHandler >::fullName[] = "proland::TweakViewHandler";
const char LunaTraits< proland::TweakViewHandler >::moduleName[] = "proland";
const char* LunaTraits< proland::TweakViewHandler >::parents[] = {"proland.TweakBarHandler", 0};
const int LunaTraits< proland::TweakViewHandler >::hash = 77040994;
const int LunaTraits< proland::TweakViewHandler >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TweakViewHandler >::methods[] = {
	{"base_toString", &luna_wrapper_proland_TweakViewHandler::_bind_base_toString},
	{"base_setActive", &luna_wrapper_proland_TweakViewHandler::_bind_base_setActive},
	{"base_redisplay", &luna_wrapper_proland_TweakViewHandler::_bind_base_redisplay},
	{"base_reshape", &luna_wrapper_proland_TweakViewHandler::_bind_base_reshape},
	{"base_idle", &luna_wrapper_proland_TweakViewHandler::_bind_base_idle},
	{"base_mouseClick", &luna_wrapper_proland_TweakViewHandler::_bind_base_mouseClick},
	{"base_mouseWheel", &luna_wrapper_proland_TweakViewHandler::_bind_base_mouseWheel},
	{"base_mouseMotion", &luna_wrapper_proland_TweakViewHandler::_bind_base_mouseMotion},
	{"base_mousePassiveMotion", &luna_wrapper_proland_TweakViewHandler::_bind_base_mousePassiveMotion},
	{"base_keyTyped", &luna_wrapper_proland_TweakViewHandler::_bind_base_keyTyped},
	{"base_keyReleased", &luna_wrapper_proland_TweakViewHandler::_bind_base_keyReleased},
	{"base_specialKey", &luna_wrapper_proland_TweakViewHandler::_bind_base_specialKey},
	{"base_specialKeyReleased", &luna_wrapper_proland_TweakViewHandler::_bind_base_specialKeyReleased},
	{"fromVoid", &luna_wrapper_proland_TweakViewHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TweakViewHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TweakViewHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TweakViewHandler >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TweakViewHandler::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TweakViewHandler >::enumValues[] = {
	{0,0}
};


