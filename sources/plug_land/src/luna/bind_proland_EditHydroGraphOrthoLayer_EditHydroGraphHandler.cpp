#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler.h>

class luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler {
public:
	typedef Luna< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler > luna_t;

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

		proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* self= (proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >::push(L,self,false);
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
		//proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* ptr= dynamic_cast< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* >(Luna< ork::Object >::check(L,1));
		proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* ptr= luna_caster< ork::Object, proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,2) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,3) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
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

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_mouseWheel(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_mousePassiveMotion(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

	inline static bool _lg_typecheck_base_specialKeyReleased(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_redisplay(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_specialKey(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::EditHydroGraphHandler(proland::EditGraphOrthoLayer * e, ork::ptr< ork::ResourceManager > r, string t)
	static proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::EditHydroGraphHandler(proland::EditGraphOrthoLayer * e, ork::ptr< ork::ResourceManager > r, string t) function, expected prototype:\nproland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::EditHydroGraphHandler(proland::EditGraphOrthoLayer * e, ork::ptr< ork::ResourceManager > r, string t)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::EditGraphOrthoLayer* e=(Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1));
		ork::ptr< ork::ResourceManager > r = Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,2);
		std::string t(lua_tostring(L,3),lua_objlen(L,3));

		return new proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler(e, r, t);
	}

	// proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::EditHydroGraphHandler(lua_Table * data, proland::EditGraphOrthoLayer * e, ork::ptr< ork::ResourceManager > r, string t)
	static proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::EditHydroGraphHandler(lua_Table * data, proland::EditGraphOrthoLayer * e, ork::ptr< ork::ResourceManager > r, string t) function, expected prototype:\nproland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::EditHydroGraphHandler(lua_Table * data, proland::EditGraphOrthoLayer * e, ork::ptr< ork::ResourceManager > r, string t)\nClass arguments details:\narg 2 ID = 1381405\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::EditGraphOrthoLayer* e=(Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,2));
		ork::ptr< ork::ResourceManager > r = Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,3);
		std::string t(lua_tostring(L,4),lua_objlen(L,4));

		return new wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler(L,NULL, e, r, t);
	}

	// Overload binder for proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::EditHydroGraphHandler
	static proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function EditHydroGraphHandler, cannot match any of the overloads for function EditHydroGraphHandler:\n  EditHydroGraphHandler(proland::EditGraphOrthoLayer *, ork::ptr< ork::ResourceManager >, string)\n  EditHydroGraphHandler(lua_Table *, proland::EditGraphOrthoLayer *, ork::ptr< ork::ResourceManager >, string)\n");
		return NULL;
	}


	// Function binds:
	// bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	static int _bind_mouseClick(lua_State *L) {
		if (!_lg_typecheck_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);

		proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseClick(b, s, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::mouseMotion(int x, int y)
	static int _bind_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::mouseMotion(int x, int y) function, expected prototype:\nbool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::mouseMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::mouseMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_toString() function, expected prototype:\nconst char * proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->EditHydroGraphHandler::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_reshape(int x, int y)
	static int _bind_base_reshape(lua_State *L) {
		if (!_lg_typecheck_base_reshape(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_reshape(int x, int y) function, expected prototype:\nvoid proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_reshape(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_reshape(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditHydroGraphHandler::reshape(x, y);

		return 0;
	}

	// void proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_idle(bool damaged)
	static int _bind_base_idle(lua_State *L) {
		if (!_lg_typecheck_base_idle(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_idle(bool damaged) function, expected prototype:\nvoid proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_idle(bool damaged)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool damaged=(bool)(lua_toboolean(L,2)==1);

		proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_idle(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditHydroGraphHandler::idle(damaged);

		return 0;
	}

	// bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_base_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditHydroGraphHandler::mouseWheel(b, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_mousePassiveMotion(int x, int y)
	static int _bind_base_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_base_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_mousePassiveMotion(int x, int y) function, expected prototype:\nbool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_mousePassiveMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_mousePassiveMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditHydroGraphHandler::mousePassiveMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_keyReleased(lua_State *L) {
		if (!_lg_typecheck_base_keyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_keyReleased(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditHydroGraphHandler::keyReleased(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_specialKeyReleased(lua_State *L) {
		if (!_lg_typecheck_base_specialKeyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_specialKeyReleased(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditHydroGraphHandler::specialKeyReleased(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_redisplay(double t, double dt)
	static int _bind_base_redisplay(lua_State *L) {
		if (!_lg_typecheck_base_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_redisplay(double t, double dt) function, expected prototype:\nvoid proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_redisplay(double t, double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);

		proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_redisplay(double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditHydroGraphHandler::redisplay(t, dt);

		return 0;
	}

	// bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_keyTyped(lua_State *L) {
		if (!_lg_typecheck_base_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_keyTyped(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditHydroGraphHandler::keyTyped(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_specialKey(lua_State *L) {
		if (!_lg_typecheck_base_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditHydroGraphHandler::specialKey(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_mouseClick(lua_State *L) {
		if (!_lg_typecheck_base_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);

		proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditHydroGraphHandler::mouseClick(b, s, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_mouseMotion(int x, int y)
	static int _bind_base_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_base_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_mouseMotion(int x, int y) function, expected prototype:\nbool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_mouseMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler::base_mouseMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditHydroGraphHandler::mouseMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* LunaTraits< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_bind_ctor(L);
}

void LunaTraits< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >::_bind_dtor(proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >::className[] = "EditHydroGraphOrthoLayer_EditHydroGraphHandler";
const char LunaTraits< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >::fullName[] = "proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler";
const char LunaTraits< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >::moduleName[] = "proland";
const char* LunaTraits< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >::parents[] = {"proland.EditGraphOrthoLayer_EditGraphHandler", 0};
const int LunaTraits< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >::hash = 11831277;
const int LunaTraits< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >::methods[] = {
	{"mouseClick", &luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_bind_mouseClick},
	{"mouseMotion", &luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_bind_mouseMotion},
	{"base_toString", &luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_bind_base_toString},
	{"base_reshape", &luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_bind_base_reshape},
	{"base_idle", &luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_bind_base_idle},
	{"base_mouseWheel", &luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_bind_base_mouseWheel},
	{"base_mousePassiveMotion", &luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_bind_base_mousePassiveMotion},
	{"base_keyReleased", &luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_bind_base_keyReleased},
	{"base_specialKeyReleased", &luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_bind_base_specialKeyReleased},
	{"base_redisplay", &luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_bind_base_redisplay},
	{"base_keyTyped", &luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_bind_base_keyTyped},
	{"base_specialKey", &luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_bind_base_specialKey},
	{"base_mouseClick", &luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_bind_base_mouseClick},
	{"base_mouseMotion", &luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_bind_base_mouseMotion},
	{"fromVoid", &luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_EditHydroGraphOrthoLayer_EditHydroGraphHandler::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >::enumValues[] = {
	{0,0}
};


