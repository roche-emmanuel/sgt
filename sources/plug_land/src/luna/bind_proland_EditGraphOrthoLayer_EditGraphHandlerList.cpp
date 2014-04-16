#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList.h>

class luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList {
public:
	typedef Luna< proland::EditGraphOrthoLayer::EditGraphHandlerList > luna_t;

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

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self= (proland::EditGraphOrthoLayer::EditGraphHandlerList*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::EditGraphOrthoLayer::EditGraphHandlerList >::push(L,self,false);
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
		//proland::EditGraphOrthoLayer::EditGraphHandlerList* ptr= dynamic_cast< proland::EditGraphOrthoLayer::EditGraphHandlerList* >(Luna< ork::Object >::check(L,1));
		proland::EditGraphOrthoLayer::EditGraphHandlerList* ptr= luna_caster< ork::Object, proland::EditGraphOrthoLayer::EditGraphHandlerList >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::EditGraphOrthoLayer::EditGraphHandlerList >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_addHandler(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
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

	inline static bool _lg_typecheck_mouseMotion(lua_State *L) {
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

	inline static bool _lg_typecheck_specialKey(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEditedGraph(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEditedGraph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGraphCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDefaultCurveWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDefaultCurveType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaultCurveWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDefaultCurveType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTypeNames(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61351880) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWorldCoordinates(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHandlers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSelectedCurveData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHandlers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13889182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSelectedCurveData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2199838) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::EditGraphOrthoLayer::EditGraphHandlerList::EditGraphHandlerList()
	static proland::EditGraphOrthoLayer::EditGraphHandlerList* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditGraphOrthoLayer::EditGraphHandlerList::EditGraphHandlerList() function, expected prototype:\nproland::EditGraphOrthoLayer::EditGraphHandlerList::EditGraphHandlerList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::EditGraphOrthoLayer::EditGraphHandlerList();
	}

	// proland::EditGraphOrthoLayer::EditGraphHandlerList::EditGraphHandlerList(lua_Table * data)
	static proland::EditGraphOrthoLayer::EditGraphHandlerList* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditGraphOrthoLayer::EditGraphHandlerList::EditGraphHandlerList(lua_Table * data) function, expected prototype:\nproland::EditGraphOrthoLayer::EditGraphHandlerList::EditGraphHandlerList(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList(L,NULL);
	}

	// Overload binder for proland::EditGraphOrthoLayer::EditGraphHandlerList::EditGraphHandlerList
	static proland::EditGraphOrthoLayer::EditGraphHandlerList* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function EditGraphHandlerList, cannot match any of the overloads for function EditGraphHandlerList:\n  EditGraphHandlerList()\n  EditGraphHandlerList(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void proland::EditGraphOrthoLayer::EditGraphHandlerList::addHandler(proland::EditGraphOrthoLayer * e, proland::EditGraphOrthoLayer::EditGraphHandler * t)
	static int _bind_addHandler(lua_State *L) {
		if (!_lg_typecheck_addHandler(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandlerList::addHandler(proland::EditGraphOrthoLayer * e, proland::EditGraphOrthoLayer::EditGraphHandler * t) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandlerList::addHandler(proland::EditGraphOrthoLayer * e, proland::EditGraphOrthoLayer::EditGraphHandler * t)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::EditGraphOrthoLayer* e=(Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,2));
		proland::EditGraphOrthoLayer::EditGraphHandler* t=(Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,3));

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandlerList::addHandler(proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addHandler(e, t);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandlerList::removeHandler(proland::EditGraphOrthoLayer * e)
	static int _bind_removeHandler(lua_State *L) {
		if (!_lg_typecheck_removeHandler(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandlerList::removeHandler(proland::EditGraphOrthoLayer * e) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandlerList::removeHandler(proland::EditGraphOrthoLayer * e)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::EditGraphOrthoLayer* e=(Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,2));

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandlerList::removeHandler(proland::EditGraphOrthoLayer *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeHandler(e);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandlerList::redisplay(double t, double dt)
	static int _bind_redisplay(lua_State *L) {
		if (!_lg_typecheck_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandlerList::redisplay(double t, double dt) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandlerList::redisplay(double t, double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandlerList::redisplay(double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->redisplay(t, dt);

		return 0;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandlerList::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	static int _bind_mouseClick(lua_State *L) {
		if (!_lg_typecheck_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandlerList::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandlerList::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandlerList::mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseClick(b, s, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandlerList::mouseMotion(int x, int y)
	static int _bind_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandlerList::mouseMotion(int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandlerList::mouseMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandlerList::mouseMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandlerList::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_keyTyped(lua_State *L) {
		if (!_lg_typecheck_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandlerList::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandlerList::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandlerList::keyTyped(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->keyTyped(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandlerList::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_specialKey(lua_State *L) {
		if (!_lg_typecheck_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandlerList::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandlerList::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandlerList::specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->specialKey(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int proland::EditGraphOrthoLayer::EditGraphHandlerList::getEditedGraph()
	static int _bind_getEditedGraph(lua_State *L) {
		if (!_lg_typecheck_getEditedGraph(L)) {
			luaL_error(L, "luna typecheck failed in int proland::EditGraphOrthoLayer::EditGraphHandlerList::getEditedGraph() function, expected prototype:\nint proland::EditGraphOrthoLayer::EditGraphHandlerList::getEditedGraph()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::EditGraphOrthoLayer::EditGraphHandlerList::getEditedGraph(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getEditedGraph();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandlerList::setEditedGraph(int graph)
	static int _bind_setEditedGraph(lua_State *L) {
		if (!_lg_typecheck_setEditedGraph(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandlerList::setEditedGraph(int graph) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandlerList::setEditedGraph(int graph)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int graph=(int)lua_tointeger(L,2);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandlerList::setEditedGraph(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEditedGraph(graph);

		return 0;
	}

	// int proland::EditGraphOrthoLayer::EditGraphHandlerList::getGraphCount()
	static int _bind_getGraphCount(lua_State *L) {
		if (!_lg_typecheck_getGraphCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::EditGraphOrthoLayer::EditGraphHandlerList::getGraphCount() function, expected prototype:\nint proland::EditGraphOrthoLayer::EditGraphHandlerList::getGraphCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::EditGraphOrthoLayer::EditGraphHandlerList::getGraphCount(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getGraphCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::EditGraphOrthoLayer::EditGraphHandlerList::getDefaultCurveWidth()
	static int _bind_getDefaultCurveWidth(lua_State *L) {
		if (!_lg_typecheck_getDefaultCurveWidth(L)) {
			luaL_error(L, "luna typecheck failed in float proland::EditGraphOrthoLayer::EditGraphHandlerList::getDefaultCurveWidth() function, expected prototype:\nfloat proland::EditGraphOrthoLayer::EditGraphHandlerList::getDefaultCurveWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::EditGraphOrthoLayer::EditGraphHandlerList::getDefaultCurveWidth(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getDefaultCurveWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::EditGraphOrthoLayer::EditGraphHandlerList::getDefaultCurveType()
	static int _bind_getDefaultCurveType(lua_State *L) {
		if (!_lg_typecheck_getDefaultCurveType(L)) {
			luaL_error(L, "luna typecheck failed in int proland::EditGraphOrthoLayer::EditGraphHandlerList::getDefaultCurveType() function, expected prototype:\nint proland::EditGraphOrthoLayer::EditGraphHandlerList::getDefaultCurveType()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::EditGraphOrthoLayer::EditGraphHandlerList::getDefaultCurveType(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getDefaultCurveType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandlerList::setDefaultCurveWidth(float w)
	static int _bind_setDefaultCurveWidth(lua_State *L) {
		if (!_lg_typecheck_setDefaultCurveWidth(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandlerList::setDefaultCurveWidth(float w) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandlerList::setDefaultCurveWidth(float w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float w=(float)lua_tonumber(L,2);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandlerList::setDefaultCurveWidth(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDefaultCurveWidth(w);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandlerList::setDefaultCurveType(int t)
	static int _bind_setDefaultCurveType(lua_State *L) {
		if (!_lg_typecheck_setDefaultCurveType(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandlerList::setDefaultCurveType(int t) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandlerList::setDefaultCurveType(int t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int t=(int)lua_tointeger(L,2);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandlerList::setDefaultCurveType(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDefaultCurveType(t);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandlerList::getTypeNames(vector< string > & e)
	static int _bind_getTypeNames(lua_State *L) {
		if (!_lg_typecheck_getTypeNames(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandlerList::getTypeNames(vector< string > & e) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandlerList::getTypeNames(vector< string > & e)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< string >* e_ptr=(Luna< vector< string > >::check(L,2));
		if( !e_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg e in proland::EditGraphOrthoLayer::EditGraphHandlerList::getTypeNames function");
		}
		vector< string > & e=*e_ptr;

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandlerList::getTypeNames(vector< string > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getTypeNames(e);

		return 0;
	}

	// ork::vec3d proland::EditGraphOrthoLayer::EditGraphHandlerList::getWorldCoordinates(proland::EditGraphOrthoLayer * editor, int x, int y)
	static int _bind_getWorldCoordinates(lua_State *L) {
		if (!_lg_typecheck_getWorldCoordinates(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::EditGraphOrthoLayer::EditGraphHandlerList::getWorldCoordinates(proland::EditGraphOrthoLayer * editor, int x, int y) function, expected prototype:\nork::vec3d proland::EditGraphOrthoLayer::EditGraphHandlerList::getWorldCoordinates(proland::EditGraphOrthoLayer * editor, int x, int y)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::EditGraphOrthoLayer* editor=(Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,2));
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::EditGraphOrthoLayer::EditGraphHandlerList::getWorldCoordinates(proland::EditGraphOrthoLayer *, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->getWorldCoordinates(editor, x, y);
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > proland::EditGraphOrthoLayer::EditGraphHandlerList::handlers()
	static int _bind_getHandlers(lua_State *L) {
		if (!_lg_typecheck_getHandlers(L)) {
			luaL_error(L, "luna typecheck failed in map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > proland::EditGraphOrthoLayer::EditGraphHandlerList::handlers() function, expected prototype:\nmap< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > proland::EditGraphOrthoLayer::EditGraphHandlerList::handlers()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > proland::EditGraphOrthoLayer::EditGraphHandlerList::handlers(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * >* lret = &self->handlers;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > >::push(L,lret,false);

		return 1;
	}

	// proland::EditGraphOrthoLayer::SelectionData proland::EditGraphOrthoLayer::EditGraphHandlerList::selectedCurveData()
	static int _bind_getSelectedCurveData(lua_State *L) {
		if (!_lg_typecheck_getSelectedCurveData(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditGraphOrthoLayer::SelectionData proland::EditGraphOrthoLayer::EditGraphHandlerList::selectedCurveData() function, expected prototype:\nproland::EditGraphOrthoLayer::SelectionData proland::EditGraphOrthoLayer::EditGraphHandlerList::selectedCurveData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::EditGraphOrthoLayer::SelectionData proland::EditGraphOrthoLayer::EditGraphHandlerList::selectedCurveData(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const proland::EditGraphOrthoLayer::SelectionData* lret = &self->selectedCurveData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::EditGraphOrthoLayer::SelectionData >::push(L,lret,false);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandlerList::handlers(map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > value)
	static int _bind_setHandlers(lua_State *L) {
		if (!_lg_typecheck_setHandlers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandlerList::handlers(map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandlerList::handlers(map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * >* value_ptr=(Luna< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::EditGraphOrthoLayer::EditGraphHandlerList::handlers function");
		}
		map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > value=*value_ptr;

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandlerList::handlers(map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->handlers = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandlerList::selectedCurveData(proland::EditGraphOrthoLayer::SelectionData value)
	static int _bind_setSelectedCurveData(lua_State *L) {
		if (!_lg_typecheck_setSelectedCurveData(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandlerList::selectedCurveData(proland::EditGraphOrthoLayer::SelectionData value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandlerList::selectedCurveData(proland::EditGraphOrthoLayer::SelectionData value)\nClass arguments details:\narg 1 ID = 2199838\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::EditGraphOrthoLayer::SelectionData* value_ptr=(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::EditGraphOrthoLayer::EditGraphHandlerList::selectedCurveData function");
		}
		proland::EditGraphOrthoLayer::SelectionData value=*value_ptr;

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandlerList::selectedCurveData(proland::EditGraphOrthoLayer::SelectionData). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->selectedCurveData = value;

		return 0;
	}

	// const char * proland::EditGraphOrthoLayer::EditGraphHandlerList::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::EditGraphOrthoLayer::EditGraphHandlerList::base_toString() function, expected prototype:\nconst char * proland::EditGraphOrthoLayer::EditGraphHandlerList::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::EditGraphOrthoLayer::EditGraphHandlerList::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->EditGraphHandlerList::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandlerList::base_reshape(int x, int y)
	static int _bind_base_reshape(lua_State *L) {
		if (!_lg_typecheck_base_reshape(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandlerList::base_reshape(int x, int y) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandlerList::base_reshape(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandlerList::base_reshape(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphHandlerList::reshape(x, y);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandlerList::base_idle(bool damaged)
	static int _bind_base_idle(lua_State *L) {
		if (!_lg_typecheck_base_idle(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandlerList::base_idle(bool damaged) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandlerList::base_idle(bool damaged)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool damaged=(bool)(lua_toboolean(L,2)==1);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandlerList::base_idle(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphHandlerList::idle(damaged);

		return 0;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_base_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphHandlerList::mouseWheel(b, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_mousePassiveMotion(int x, int y)
	static int _bind_base_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_base_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_mousePassiveMotion(int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_mousePassiveMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_mousePassiveMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphHandlerList::mousePassiveMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_keyReleased(lua_State *L) {
		if (!_lg_typecheck_base_keyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_keyReleased(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphHandlerList::keyReleased(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_specialKeyReleased(lua_State *L) {
		if (!_lg_typecheck_base_specialKeyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_specialKeyReleased(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphHandlerList::specialKeyReleased(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandlerList::base_redisplay(double t, double dt)
	static int _bind_base_redisplay(lua_State *L) {
		if (!_lg_typecheck_base_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandlerList::base_redisplay(double t, double dt) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandlerList::base_redisplay(double t, double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandlerList::base_redisplay(double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphHandlerList::redisplay(t, dt);

		return 0;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_mouseClick(lua_State *L) {
		if (!_lg_typecheck_base_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphHandlerList::mouseClick(b, s, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_mouseMotion(int x, int y)
	static int _bind_base_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_base_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_mouseMotion(int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_mouseMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_mouseMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphHandlerList::mouseMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_keyTyped(lua_State *L) {
		if (!_lg_typecheck_base_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_keyTyped(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphHandlerList::keyTyped(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_specialKey(lua_State *L) {
		if (!_lg_typecheck_base_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditGraphOrthoLayer::EditGraphHandlerList* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandlerList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandlerList::base_specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphHandlerList::specialKey(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

proland::EditGraphOrthoLayer::EditGraphHandlerList* LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandlerList >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_ctor(L);
}

void LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandlerList >::_bind_dtor(proland::EditGraphOrthoLayer::EditGraphHandlerList* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandlerList >::className[] = "EditGraphOrthoLayer_EditGraphHandlerList";
const char LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandlerList >::fullName[] = "proland::EditGraphOrthoLayer::EditGraphHandlerList";
const char LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandlerList >::moduleName[] = "proland";
const char* LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandlerList >::parents[] = {"ork.EventHandler", 0};
const int LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandlerList >::hash = 35698392;
const int LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandlerList >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandlerList >::methods[] = {
	{"addHandler", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_addHandler},
	{"removeHandler", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_removeHandler},
	{"redisplay", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_redisplay},
	{"mouseClick", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_mouseClick},
	{"mouseMotion", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_mouseMotion},
	{"keyTyped", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_keyTyped},
	{"specialKey", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_specialKey},
	{"getEditedGraph", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_getEditedGraph},
	{"setEditedGraph", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_setEditedGraph},
	{"getGraphCount", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_getGraphCount},
	{"getDefaultCurveWidth", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_getDefaultCurveWidth},
	{"getDefaultCurveType", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_getDefaultCurveType},
	{"setDefaultCurveWidth", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_setDefaultCurveWidth},
	{"setDefaultCurveType", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_setDefaultCurveType},
	{"getTypeNames", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_getTypeNames},
	{"getWorldCoordinates", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_getWorldCoordinates},
	{"getHandlers", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_getHandlers},
	{"getSelectedCurveData", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_getSelectedCurveData},
	{"setHandlers", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_setHandlers},
	{"setSelectedCurveData", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_setSelectedCurveData},
	{"base_toString", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_base_toString},
	{"base_reshape", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_base_reshape},
	{"base_idle", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_base_idle},
	{"base_mouseWheel", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_base_mouseWheel},
	{"base_mousePassiveMotion", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_base_mousePassiveMotion},
	{"base_keyReleased", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_base_keyReleased},
	{"base_specialKeyReleased", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_base_specialKeyReleased},
	{"base_redisplay", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_base_redisplay},
	{"base_mouseClick", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_base_mouseClick},
	{"base_mouseMotion", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_base_mouseMotion},
	{"base_keyTyped", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_base_keyTyped},
	{"base_specialKey", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_base_specialKey},
	{"fromVoid", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandlerList >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandlerList::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandlerList >::enumValues[] = {
	{0,0}
};


