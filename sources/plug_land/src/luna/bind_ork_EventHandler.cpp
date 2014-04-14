#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_EventHandler.h>

class luna_wrapper_ork_EventHandler {
public:
	typedef Luna< ork::EventHandler > luna_t;

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

		ork::EventHandler* self= (ork::EventHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::EventHandler >::push(L,self,false);
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
		//ork::EventHandler* ptr= dynamic_cast< ork::EventHandler* >(Luna< ork::Object >::check(L,1));
		ork::EventHandler* ptr= luna_caster< ork::Object, ork::EventHandler >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::EventHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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
	// ork::EventHandler::EventHandler(const char * type)
	static ork::EventHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::EventHandler::EventHandler(const char * type) function, expected prototype:\nork::EventHandler::EventHandler(const char * type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,1);

		return new ork::EventHandler(type);
	}

	// ork::EventHandler::EventHandler(lua_Table * data, const char * type)
	static ork::EventHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::EventHandler::EventHandler(lua_Table * data, const char * type) function, expected prototype:\nork::EventHandler::EventHandler(lua_Table * data, const char * type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,2);

		return new wrapper_ork_EventHandler(L,NULL, type);
	}

	// Overload binder for ork::EventHandler::EventHandler
	static ork::EventHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function EventHandler, cannot match any of the overloads for function EventHandler:\n  EventHandler(const char *)\n  EventHandler(lua_Table *, const char *)\n");
		return NULL;
	}


	// Function binds:
	// void ork::EventHandler::redisplay(double t, double dt)
	static int _bind_redisplay(lua_State *L) {
		if (!_lg_typecheck_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void ork::EventHandler::redisplay(double t, double dt) function, expected prototype:\nvoid ork::EventHandler::redisplay(double t, double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::EventHandler::redisplay(double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->redisplay(t, dt);

		return 0;
	}

	// void ork::EventHandler::reshape(int x, int y)
	static int _bind_reshape(lua_State *L) {
		if (!_lg_typecheck_reshape(L)) {
			luaL_error(L, "luna typecheck failed in void ork::EventHandler::reshape(int x, int y) function, expected prototype:\nvoid ork::EventHandler::reshape(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::EventHandler::reshape(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reshape(x, y);

		return 0;
	}

	// void ork::EventHandler::idle(bool damaged)
	static int _bind_idle(lua_State *L) {
		if (!_lg_typecheck_idle(L)) {
			luaL_error(L, "luna typecheck failed in void ork::EventHandler::idle(bool damaged) function, expected prototype:\nvoid ork::EventHandler::idle(bool damaged)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool damaged=(bool)(lua_toboolean(L,2)==1);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::EventHandler::idle(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->idle(damaged);

		return 0;
	}

	// bool ork::EventHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	static int _bind_mouseClick(lua_State *L) {
		if (!_lg_typecheck_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::EventHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool ork::EventHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::EventHandler::mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseClick(b, s, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::EventHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	static int _bind_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::EventHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool ork::EventHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::EventHandler::mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseWheel(b, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::EventHandler::mouseMotion(int x, int y)
	static int _bind_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::EventHandler::mouseMotion(int x, int y) function, expected prototype:\nbool ork::EventHandler::mouseMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::EventHandler::mouseMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::EventHandler::mousePassiveMotion(int x, int y)
	static int _bind_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::EventHandler::mousePassiveMotion(int x, int y) function, expected prototype:\nbool ork::EventHandler::mousePassiveMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::EventHandler::mousePassiveMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mousePassiveMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::EventHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_keyTyped(lua_State *L) {
		if (!_lg_typecheck_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::EventHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool ork::EventHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::EventHandler::keyTyped(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->keyTyped(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::EventHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_keyReleased(lua_State *L) {
		if (!_lg_typecheck_keyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::EventHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool ork::EventHandler::keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::EventHandler::keyReleased(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->keyReleased(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::EventHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_specialKey(lua_State *L) {
		if (!_lg_typecheck_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::EventHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool ork::EventHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::EventHandler::specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->specialKey(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::EventHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_specialKeyReleased(lua_State *L) {
		if (!_lg_typecheck_specialKeyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::EventHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool ork::EventHandler::specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::EventHandler::specialKeyReleased(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->specialKeyReleased(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * ork::EventHandler::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::EventHandler::base_toString() function, expected prototype:\nconst char * ork::EventHandler::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::EventHandler::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->EventHandler::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void ork::EventHandler::base_redisplay(double t, double dt)
	static int _bind_base_redisplay(lua_State *L) {
		if (!_lg_typecheck_base_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void ork::EventHandler::base_redisplay(double t, double dt) function, expected prototype:\nvoid ork::EventHandler::base_redisplay(double t, double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::EventHandler::base_redisplay(double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EventHandler::redisplay(t, dt);

		return 0;
	}

	// void ork::EventHandler::base_reshape(int x, int y)
	static int _bind_base_reshape(lua_State *L) {
		if (!_lg_typecheck_base_reshape(L)) {
			luaL_error(L, "luna typecheck failed in void ork::EventHandler::base_reshape(int x, int y) function, expected prototype:\nvoid ork::EventHandler::base_reshape(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::EventHandler::base_reshape(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EventHandler::reshape(x, y);

		return 0;
	}

	// void ork::EventHandler::base_idle(bool damaged)
	static int _bind_base_idle(lua_State *L) {
		if (!_lg_typecheck_base_idle(L)) {
			luaL_error(L, "luna typecheck failed in void ork::EventHandler::base_idle(bool damaged) function, expected prototype:\nvoid ork::EventHandler::base_idle(bool damaged)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool damaged=(bool)(lua_toboolean(L,2)==1);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::EventHandler::base_idle(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EventHandler::idle(damaged);

		return 0;
	}

	// bool ork::EventHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_mouseClick(lua_State *L) {
		if (!_lg_typecheck_base_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::EventHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool ork::EventHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::EventHandler::base_mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EventHandler::mouseClick(b, s, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::EventHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_base_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::EventHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool ork::EventHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::EventHandler::base_mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EventHandler::mouseWheel(b, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::EventHandler::base_mouseMotion(int x, int y)
	static int _bind_base_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_base_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::EventHandler::base_mouseMotion(int x, int y) function, expected prototype:\nbool ork::EventHandler::base_mouseMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::EventHandler::base_mouseMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EventHandler::mouseMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::EventHandler::base_mousePassiveMotion(int x, int y)
	static int _bind_base_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_base_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::EventHandler::base_mousePassiveMotion(int x, int y) function, expected prototype:\nbool ork::EventHandler::base_mousePassiveMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::EventHandler::base_mousePassiveMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EventHandler::mousePassiveMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::EventHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_keyTyped(lua_State *L) {
		if (!_lg_typecheck_base_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::EventHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool ork::EventHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::EventHandler::base_keyTyped(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EventHandler::keyTyped(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::EventHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_keyReleased(lua_State *L) {
		if (!_lg_typecheck_base_keyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::EventHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool ork::EventHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::EventHandler::base_keyReleased(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EventHandler::keyReleased(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::EventHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_specialKey(lua_State *L) {
		if (!_lg_typecheck_base_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::EventHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool ork::EventHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::EventHandler::base_specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EventHandler::specialKey(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::EventHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_specialKeyReleased(lua_State *L) {
		if (!_lg_typecheck_base_specialKeyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::EventHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool ork::EventHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		ork::EventHandler* self=Luna< ork::Object >::checkSubType< ork::EventHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::EventHandler::base_specialKeyReleased(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EventHandler::specialKeyReleased(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

ork::EventHandler* LunaTraits< ork::EventHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_EventHandler::_bind_ctor(L);
}

void LunaTraits< ork::EventHandler >::_bind_dtor(ork::EventHandler* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::EventHandler >::className[] = "EventHandler";
const char LunaTraits< ork::EventHandler >::fullName[] = "ork::EventHandler";
const char LunaTraits< ork::EventHandler >::moduleName[] = "ork";
const char* LunaTraits< ork::EventHandler >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::EventHandler >::hash = 70368285;
const int LunaTraits< ork::EventHandler >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::EventHandler >::methods[] = {
	{"redisplay", &luna_wrapper_ork_EventHandler::_bind_redisplay},
	{"reshape", &luna_wrapper_ork_EventHandler::_bind_reshape},
	{"idle", &luna_wrapper_ork_EventHandler::_bind_idle},
	{"mouseClick", &luna_wrapper_ork_EventHandler::_bind_mouseClick},
	{"mouseWheel", &luna_wrapper_ork_EventHandler::_bind_mouseWheel},
	{"mouseMotion", &luna_wrapper_ork_EventHandler::_bind_mouseMotion},
	{"mousePassiveMotion", &luna_wrapper_ork_EventHandler::_bind_mousePassiveMotion},
	{"keyTyped", &luna_wrapper_ork_EventHandler::_bind_keyTyped},
	{"keyReleased", &luna_wrapper_ork_EventHandler::_bind_keyReleased},
	{"specialKey", &luna_wrapper_ork_EventHandler::_bind_specialKey},
	{"specialKeyReleased", &luna_wrapper_ork_EventHandler::_bind_specialKeyReleased},
	{"base_toString", &luna_wrapper_ork_EventHandler::_bind_base_toString},
	{"base_redisplay", &luna_wrapper_ork_EventHandler::_bind_base_redisplay},
	{"base_reshape", &luna_wrapper_ork_EventHandler::_bind_base_reshape},
	{"base_idle", &luna_wrapper_ork_EventHandler::_bind_base_idle},
	{"base_mouseClick", &luna_wrapper_ork_EventHandler::_bind_base_mouseClick},
	{"base_mouseWheel", &luna_wrapper_ork_EventHandler::_bind_base_mouseWheel},
	{"base_mouseMotion", &luna_wrapper_ork_EventHandler::_bind_base_mouseMotion},
	{"base_mousePassiveMotion", &luna_wrapper_ork_EventHandler::_bind_base_mousePassiveMotion},
	{"base_keyTyped", &luna_wrapper_ork_EventHandler::_bind_base_keyTyped},
	{"base_keyReleased", &luna_wrapper_ork_EventHandler::_bind_base_keyReleased},
	{"base_specialKey", &luna_wrapper_ork_EventHandler::_bind_base_specialKey},
	{"base_specialKeyReleased", &luna_wrapper_ork_EventHandler::_bind_base_specialKeyReleased},
	{"fromVoid", &luna_wrapper_ork_EventHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_EventHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_EventHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::EventHandler >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_EventHandler::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::EventHandler >::enumValues[] = {
	{"LEFT_BUTTON", ork::EventHandler::LEFT_BUTTON},
	{"MIDDLE_BUTTON", ork::EventHandler::MIDDLE_BUTTON},
	{"RIGHT_BUTTON", ork::EventHandler::RIGHT_BUTTON},
	{"WHEEL_UP", ork::EventHandler::WHEEL_UP},
	{"WHEEL_DOWN", ork::EventHandler::WHEEL_DOWN},
	{"DOWN", ork::EventHandler::DOWN},
	{"UP", ork::EventHandler::UP},
	{"SHIFT", ork::EventHandler::SHIFT},
	{"CTRL", ork::EventHandler::CTRL},
	{"ALT", ork::EventHandler::ALT},
	{"KEY_F1", ork::EventHandler::KEY_F1},
	{"KEY_F2", ork::EventHandler::KEY_F2},
	{"KEY_F3", ork::EventHandler::KEY_F3},
	{"KEY_F4", ork::EventHandler::KEY_F4},
	{"KEY_F5", ork::EventHandler::KEY_F5},
	{"KEY_F6", ork::EventHandler::KEY_F6},
	{"KEY_F7", ork::EventHandler::KEY_F7},
	{"KEY_F8", ork::EventHandler::KEY_F8},
	{"KEY_F9", ork::EventHandler::KEY_F9},
	{"KEY_F10", ork::EventHandler::KEY_F10},
	{"KEY_F11", ork::EventHandler::KEY_F11},
	{"KEY_F12", ork::EventHandler::KEY_F12},
	{"KEY_LEFT", ork::EventHandler::KEY_LEFT},
	{"KEY_UP", ork::EventHandler::KEY_UP},
	{"KEY_RIGHT", ork::EventHandler::KEY_RIGHT},
	{"KEY_DOWN", ork::EventHandler::KEY_DOWN},
	{"KEY_PAGE_UP", ork::EventHandler::KEY_PAGE_UP},
	{"KEY_PAGE_DOWN", ork::EventHandler::KEY_PAGE_DOWN},
	{"KEY_HOME", ork::EventHandler::KEY_HOME},
	{"KEY_END", ork::EventHandler::KEY_END},
	{"KEY_INSERT", ork::EventHandler::KEY_INSERT},
	{0,0}
};


