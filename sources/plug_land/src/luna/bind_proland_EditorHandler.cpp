#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_EditorHandler.h>

class luna_wrapper_proland_EditorHandler {
public:
	typedef Luna< proland::EditorHandler > luna_t;

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

		proland::EditorHandler* self= (proland::EditorHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::EditorHandler >::push(L,self,false);
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
		//proland::EditorHandler* ptr= dynamic_cast< proland::EditorHandler* >(Luna< ork::Object >::check(L,1));
		proland::EditorHandler* ptr= luna_caster< ork::Object, proland::EditorHandler >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::EditorHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_hasEditors(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEditorCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEditor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addEditor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,4450546)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeEditor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,4450546)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setActive_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setActive_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isActive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_redisplay(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRelativeRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRelativeRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_redisplay(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::EditorHandler::EditorHandler(float relativeRadius)
	static proland::EditorHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditorHandler::EditorHandler(float relativeRadius) function, expected prototype:\nproland::EditorHandler::EditorHandler(float relativeRadius)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float relativeRadius=(float)lua_tonumber(L,1);

		return new proland::EditorHandler(relativeRadius);
	}

	// proland::EditorHandler::EditorHandler(lua_Table * data, float relativeRadius)
	static proland::EditorHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditorHandler::EditorHandler(lua_Table * data, float relativeRadius) function, expected prototype:\nproland::EditorHandler::EditorHandler(lua_Table * data, float relativeRadius)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float relativeRadius=(float)lua_tonumber(L,2);

		return new wrapper_proland_EditorHandler(L,NULL, relativeRadius);
	}

	// Overload binder for proland::EditorHandler::EditorHandler
	static proland::EditorHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function EditorHandler, cannot match any of the overloads for function EditorHandler:\n  EditorHandler(float)\n  EditorHandler(lua_Table *, float)\n");
		return NULL;
	}


	// Function binds:
	// bool proland::EditorHandler::hasEditors()
	static int _bind_hasEditors(lua_State *L) {
		if (!_lg_typecheck_hasEditors(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditorHandler::hasEditors() function, expected prototype:\nbool proland::EditorHandler::hasEditors()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditorHandler::hasEditors(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasEditors();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int proland::EditorHandler::getEditorCount()
	static int _bind_getEditorCount(lua_State *L) {
		if (!_lg_typecheck_getEditorCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::EditorHandler::getEditorCount() function, expected prototype:\nint proland::EditorHandler::getEditorCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::EditorHandler::getEditorCount(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getEditorCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::Editor * proland::EditorHandler::getEditor(int index)
	static int _bind_getEditor(lua_State *L) {
		if (!_lg_typecheck_getEditor(L)) {
			luaL_error(L, "luna typecheck failed in proland::Editor * proland::EditorHandler::getEditor(int index) function, expected prototype:\nproland::Editor * proland::EditorHandler::getEditor(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Editor * proland::EditorHandler::getEditor(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Editor * lret = self->getEditor(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Editor >::push(L,lret,false);

		return 1;
	}

	// void proland::EditorHandler::addEditor(proland::Editor * editor)
	static int _bind_addEditor(lua_State *L) {
		if (!_lg_typecheck_addEditor(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditorHandler::addEditor(proland::Editor * editor) function, expected prototype:\nvoid proland::EditorHandler::addEditor(proland::Editor * editor)\nClass arguments details:\narg 1 ID = 4450546\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Editor* editor=(Luna< proland::Editor >::check(L,2));

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditorHandler::addEditor(proland::Editor *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addEditor(editor);

		return 0;
	}

	// void proland::EditorHandler::removeEditor(proland::Editor * editor)
	static int _bind_removeEditor(lua_State *L) {
		if (!_lg_typecheck_removeEditor(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditorHandler::removeEditor(proland::Editor * editor) function, expected prototype:\nvoid proland::EditorHandler::removeEditor(proland::Editor * editor)\nClass arguments details:\narg 1 ID = 4450546\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Editor* editor=(Luna< proland::Editor >::check(L,2));

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditorHandler::removeEditor(proland::Editor *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeEditor(editor);

		return 0;
	}

	// void proland::EditorHandler::setActive(bool active)
	static int _bind_setActive_overload_1(lua_State *L) {
		if (!_lg_typecheck_setActive_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditorHandler::setActive(bool active) function, expected prototype:\nvoid proland::EditorHandler::setActive(bool active)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool active=(bool)(lua_toboolean(L,2)==1);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditorHandler::setActive(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setActive(active);

		return 0;
	}

	// void proland::EditorHandler::setActive(string group, bool active)
	static int _bind_setActive_overload_2(lua_State *L) {
		if (!_lg_typecheck_setActive_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditorHandler::setActive(string group, bool active) function, expected prototype:\nvoid proland::EditorHandler::setActive(string group, bool active)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string group(lua_tostring(L,2),lua_objlen(L,2));
		bool active=(bool)(lua_toboolean(L,3)==1);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditorHandler::setActive(string, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setActive(group, active);

		return 0;
	}

	// Overload binder for proland::EditorHandler::setActive
	static int _bind_setActive(lua_State *L) {
		if (_lg_typecheck_setActive_overload_1(L)) return _bind_setActive_overload_1(L);
		if (_lg_typecheck_setActive_overload_2(L)) return _bind_setActive_overload_2(L);

		luaL_error(L, "error in function setActive, cannot match any of the overloads for function setActive:\n  setActive(bool)\n  setActive(string, bool)\n");
		return 0;
	}

	// bool proland::EditorHandler::isActive(string group)
	static int _bind_isActive(lua_State *L) {
		if (!_lg_typecheck_isActive(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditorHandler::isActive(string group) function, expected prototype:\nbool proland::EditorHandler::isActive(string group)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string group(lua_tostring(L,2),lua_objlen(L,2));

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditorHandler::isActive(string). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isActive(group);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::EditorHandler::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditorHandler::reset() function, expected prototype:\nvoid proland::EditorHandler::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditorHandler::reset(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// void proland::EditorHandler::redisplay(double t, double dt)
	static int _bind_redisplay(lua_State *L) {
		if (!_lg_typecheck_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditorHandler::redisplay(double t, double dt) function, expected prototype:\nvoid proland::EditorHandler::redisplay(double t, double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditorHandler::redisplay(double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->redisplay(t, dt);

		return 0;
	}

	// bool proland::EditorHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	static int _bind_mouseClick(lua_State *L) {
		if (!_lg_typecheck_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditorHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditorHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditorHandler::mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseClick(b, s, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditorHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	static int _bind_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditorHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditorHandler::mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditorHandler::mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseWheel(b, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditorHandler::mouseMotion(int x, int y)
	static int _bind_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditorHandler::mouseMotion(int x, int y) function, expected prototype:\nbool proland::EditorHandler::mouseMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditorHandler::mouseMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditorHandler::mousePassiveMotion(int x, int y)
	static int _bind_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditorHandler::mousePassiveMotion(int x, int y) function, expected prototype:\nbool proland::EditorHandler::mousePassiveMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditorHandler::mousePassiveMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mousePassiveMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::vec3d proland::EditorHandler::getPosition(int x, int y)
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::EditorHandler::getPosition(int x, int y) function, expected prototype:\nork::vec3d proland::EditorHandler::getPosition(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::EditorHandler::getPosition(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->getPosition(x, y);
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// float proland::EditorHandler::relativeRadius()
	static int _bind_getRelativeRadius(lua_State *L) {
		if (!_lg_typecheck_getRelativeRadius(L)) {
			luaL_error(L, "luna typecheck failed in float proland::EditorHandler::relativeRadius() function, expected prototype:\nfloat proland::EditorHandler::relativeRadius()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::EditorHandler::relativeRadius(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->relativeRadius;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::EditorHandler::relativeRadius(float value)
	static int _bind_setRelativeRadius(lua_State *L) {
		if (!_lg_typecheck_setRelativeRadius(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditorHandler::relativeRadius(float value) function, expected prototype:\nvoid proland::EditorHandler::relativeRadius(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditorHandler::relativeRadius(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->relativeRadius = value;

		return 0;
	}

	// const char * proland::EditorHandler::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::EditorHandler::base_toString() function, expected prototype:\nconst char * proland::EditorHandler::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::EditorHandler::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->EditorHandler::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::EditorHandler::base_reshape(int x, int y)
	static int _bind_base_reshape(lua_State *L) {
		if (!_lg_typecheck_base_reshape(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditorHandler::base_reshape(int x, int y) function, expected prototype:\nvoid proland::EditorHandler::base_reshape(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditorHandler::base_reshape(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditorHandler::reshape(x, y);

		return 0;
	}

	// void proland::EditorHandler::base_idle(bool damaged)
	static int _bind_base_idle(lua_State *L) {
		if (!_lg_typecheck_base_idle(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditorHandler::base_idle(bool damaged) function, expected prototype:\nvoid proland::EditorHandler::base_idle(bool damaged)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool damaged=(bool)(lua_toboolean(L,2)==1);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditorHandler::base_idle(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditorHandler::idle(damaged);

		return 0;
	}

	// bool proland::EditorHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_keyTyped(lua_State *L) {
		if (!_lg_typecheck_base_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditorHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditorHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditorHandler::base_keyTyped(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditorHandler::keyTyped(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditorHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_keyReleased(lua_State *L) {
		if (!_lg_typecheck_base_keyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditorHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditorHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditorHandler::base_keyReleased(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditorHandler::keyReleased(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditorHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_specialKey(lua_State *L) {
		if (!_lg_typecheck_base_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditorHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditorHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditorHandler::base_specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditorHandler::specialKey(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditorHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_specialKeyReleased(lua_State *L) {
		if (!_lg_typecheck_base_specialKeyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditorHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditorHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditorHandler::base_specialKeyReleased(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditorHandler::specialKeyReleased(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::EditorHandler::base_redisplay(double t, double dt)
	static int _bind_base_redisplay(lua_State *L) {
		if (!_lg_typecheck_base_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditorHandler::base_redisplay(double t, double dt) function, expected prototype:\nvoid proland::EditorHandler::base_redisplay(double t, double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditorHandler::base_redisplay(double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditorHandler::redisplay(t, dt);

		return 0;
	}

	// bool proland::EditorHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_mouseClick(lua_State *L) {
		if (!_lg_typecheck_base_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditorHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditorHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditorHandler::base_mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditorHandler::mouseClick(b, s, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditorHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_base_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditorHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditorHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditorHandler::base_mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditorHandler::mouseWheel(b, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditorHandler::base_mouseMotion(int x, int y)
	static int _bind_base_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_base_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditorHandler::base_mouseMotion(int x, int y) function, expected prototype:\nbool proland::EditorHandler::base_mouseMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditorHandler::base_mouseMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditorHandler::mouseMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditorHandler::base_mousePassiveMotion(int x, int y)
	static int _bind_base_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_base_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditorHandler::base_mousePassiveMotion(int x, int y) function, expected prototype:\nbool proland::EditorHandler::base_mousePassiveMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditorHandler* self=Luna< ork::Object >::checkSubType< proland::EditorHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditorHandler::base_mousePassiveMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditorHandler::mousePassiveMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

proland::EditorHandler* LunaTraits< proland::EditorHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_EditorHandler::_bind_ctor(L);
}

void LunaTraits< proland::EditorHandler >::_bind_dtor(proland::EditorHandler* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::EditorHandler >::className[] = "EditorHandler";
const char LunaTraits< proland::EditorHandler >::fullName[] = "proland::EditorHandler";
const char LunaTraits< proland::EditorHandler >::moduleName[] = "proland";
const char* LunaTraits< proland::EditorHandler >::parents[] = {"ork.EventHandler", 0};
const int LunaTraits< proland::EditorHandler >::hash = 12013625;
const int LunaTraits< proland::EditorHandler >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::EditorHandler >::methods[] = {
	{"hasEditors", &luna_wrapper_proland_EditorHandler::_bind_hasEditors},
	{"getEditorCount", &luna_wrapper_proland_EditorHandler::_bind_getEditorCount},
	{"getEditor", &luna_wrapper_proland_EditorHandler::_bind_getEditor},
	{"addEditor", &luna_wrapper_proland_EditorHandler::_bind_addEditor},
	{"removeEditor", &luna_wrapper_proland_EditorHandler::_bind_removeEditor},
	{"setActive", &luna_wrapper_proland_EditorHandler::_bind_setActive},
	{"isActive", &luna_wrapper_proland_EditorHandler::_bind_isActive},
	{"reset", &luna_wrapper_proland_EditorHandler::_bind_reset},
	{"redisplay", &luna_wrapper_proland_EditorHandler::_bind_redisplay},
	{"mouseClick", &luna_wrapper_proland_EditorHandler::_bind_mouseClick},
	{"mouseWheel", &luna_wrapper_proland_EditorHandler::_bind_mouseWheel},
	{"mouseMotion", &luna_wrapper_proland_EditorHandler::_bind_mouseMotion},
	{"mousePassiveMotion", &luna_wrapper_proland_EditorHandler::_bind_mousePassiveMotion},
	{"getPosition", &luna_wrapper_proland_EditorHandler::_bind_getPosition},
	{"getRelativeRadius", &luna_wrapper_proland_EditorHandler::_bind_getRelativeRadius},
	{"setRelativeRadius", &luna_wrapper_proland_EditorHandler::_bind_setRelativeRadius},
	{"base_toString", &luna_wrapper_proland_EditorHandler::_bind_base_toString},
	{"base_reshape", &luna_wrapper_proland_EditorHandler::_bind_base_reshape},
	{"base_idle", &luna_wrapper_proland_EditorHandler::_bind_base_idle},
	{"base_keyTyped", &luna_wrapper_proland_EditorHandler::_bind_base_keyTyped},
	{"base_keyReleased", &luna_wrapper_proland_EditorHandler::_bind_base_keyReleased},
	{"base_specialKey", &luna_wrapper_proland_EditorHandler::_bind_base_specialKey},
	{"base_specialKeyReleased", &luna_wrapper_proland_EditorHandler::_bind_base_specialKeyReleased},
	{"base_redisplay", &luna_wrapper_proland_EditorHandler::_bind_base_redisplay},
	{"base_mouseClick", &luna_wrapper_proland_EditorHandler::_bind_base_mouseClick},
	{"base_mouseWheel", &luna_wrapper_proland_EditorHandler::_bind_base_mouseWheel},
	{"base_mouseMotion", &luna_wrapper_proland_EditorHandler::_bind_base_mouseMotion},
	{"base_mousePassiveMotion", &luna_wrapper_proland_EditorHandler::_bind_base_mousePassiveMotion},
	{"fromVoid", &luna_wrapper_proland_EditorHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_EditorHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_EditorHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::EditorHandler >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_EditorHandler::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::EditorHandler >::enumValues[] = {
	{0,0}
};


