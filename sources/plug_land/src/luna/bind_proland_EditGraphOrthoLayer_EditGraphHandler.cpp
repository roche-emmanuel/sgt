#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_EditGraphOrthoLayer_EditGraphHandler.h>

class luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler {
public:
	typedef Luna< proland::EditGraphOrthoLayer::EditGraphHandler > luna_t;

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

		proland::EditGraphOrthoLayer::EditGraphHandler* self= (proland::EditGraphOrthoLayer::EditGraphHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::EditGraphOrthoLayer::EditGraphHandler >::push(L,self,false);
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
		//proland::EditGraphOrthoLayer::EditGraphHandler* ptr= dynamic_cast< proland::EditGraphOrthoLayer::EditGraphHandler* >(Luna< ork::Object >::check(L,1));
		proland::EditGraphOrthoLayer::EditGraphHandler* ptr= luna_caster< ork::Object, proland::EditGraphOrthoLayer::EditGraphHandler >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::EditGraphOrthoLayer::EditGraphHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,2) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
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
	inline static bool _lg_typecheck_undo(lua_State *L) {
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

	inline static bool _lg_typecheck_getWorldCoordinates(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScreenCoordinates(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getT(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTerrain(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTerrainNode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEditor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEdited(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNewPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrevPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLastScreenPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInitialized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLastUpdate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDisplayPointsProgram(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWindowSizeU(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setT(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTerrain(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTerrainNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setManager(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEditor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEdited(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNewPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPrevPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLastScreenPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304243) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInitialized(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLastUpdate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDisplayPointsProgram(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56225570) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWindowSizeU(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45755873) ) return false;
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
	// proland::EditGraphOrthoLayer::EditGraphHandler::EditGraphHandler()
	static proland::EditGraphOrthoLayer::EditGraphHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditGraphOrthoLayer::EditGraphHandler::EditGraphHandler() function, expected prototype:\nproland::EditGraphOrthoLayer::EditGraphHandler::EditGraphHandler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::EditGraphOrthoLayer::EditGraphHandler();
	}

	// proland::EditGraphOrthoLayer::EditGraphHandler::EditGraphHandler(proland::EditGraphOrthoLayer * e, ork::ptr< ork::ResourceManager > r, string t)
	static proland::EditGraphOrthoLayer::EditGraphHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditGraphOrthoLayer::EditGraphHandler::EditGraphHandler(proland::EditGraphOrthoLayer * e, ork::ptr< ork::ResourceManager > r, string t) function, expected prototype:\nproland::EditGraphOrthoLayer::EditGraphHandler::EditGraphHandler(proland::EditGraphOrthoLayer * e, ork::ptr< ork::ResourceManager > r, string t)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::EditGraphOrthoLayer* e=(Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1));
		ork::ptr< ork::ResourceManager > r = Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,2);
		std::string t(lua_tostring(L,3),lua_objlen(L,3));

		return new proland::EditGraphOrthoLayer::EditGraphHandler(e, r, t);
	}

	// proland::EditGraphOrthoLayer::EditGraphHandler::EditGraphHandler(lua_Table * data)
	static proland::EditGraphOrthoLayer::EditGraphHandler* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditGraphOrthoLayer::EditGraphHandler::EditGraphHandler(lua_Table * data) function, expected prototype:\nproland::EditGraphOrthoLayer::EditGraphHandler::EditGraphHandler(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_EditGraphOrthoLayer_EditGraphHandler(L,NULL);
	}

	// proland::EditGraphOrthoLayer::EditGraphHandler::EditGraphHandler(lua_Table * data, proland::EditGraphOrthoLayer * e, ork::ptr< ork::ResourceManager > r, string t)
	static proland::EditGraphOrthoLayer::EditGraphHandler* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditGraphOrthoLayer::EditGraphHandler::EditGraphHandler(lua_Table * data, proland::EditGraphOrthoLayer * e, ork::ptr< ork::ResourceManager > r, string t) function, expected prototype:\nproland::EditGraphOrthoLayer::EditGraphHandler::EditGraphHandler(lua_Table * data, proland::EditGraphOrthoLayer * e, ork::ptr< ork::ResourceManager > r, string t)\nClass arguments details:\narg 2 ID = 1381405\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::EditGraphOrthoLayer* e=(Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,2));
		ork::ptr< ork::ResourceManager > r = Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,3);
		std::string t(lua_tostring(L,4),lua_objlen(L,4));

		return new wrapper_proland_EditGraphOrthoLayer_EditGraphHandler(L,NULL, e, r, t);
	}

	// Overload binder for proland::EditGraphOrthoLayer::EditGraphHandler::EditGraphHandler
	static proland::EditGraphOrthoLayer::EditGraphHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function EditGraphHandler, cannot match any of the overloads for function EditGraphHandler:\n  EditGraphHandler()\n  EditGraphHandler(proland::EditGraphOrthoLayer *, ork::ptr< ork::ResourceManager >, string)\n  EditGraphHandler(lua_Table *)\n  EditGraphHandler(lua_Table *, proland::EditGraphOrthoLayer *, ork::ptr< ork::ResourceManager >, string)\n");
		return NULL;
	}


	// Function binds:
	// bool proland::EditGraphOrthoLayer::EditGraphHandler::undo()
	static int _bind_undo(lua_State *L) {
		if (!_lg_typecheck_undo(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandler::undo() function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandler::undo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandler::undo(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->undo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::redisplay(double t, double dt)
	static int _bind_redisplay(lua_State *L) {
		if (!_lg_typecheck_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::redisplay(double t, double dt) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::redisplay(double t, double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::redisplay(double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->redisplay(t, dt);

		return 0;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	static int _bind_mouseClick(lua_State *L) {
		if (!_lg_typecheck_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandler::mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandler::mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseClick(b, s, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandler::mouseMotion(int x, int y)
	static int _bind_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandler::mouseMotion(int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandler::mouseMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandler::mouseMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_keyTyped(lua_State *L) {
		if (!_lg_typecheck_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandler::keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandler::keyTyped(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->keyTyped(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_specialKey(lua_State *L) {
		if (!_lg_typecheck_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandler::specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandler::specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->specialKey(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::vec3d proland::EditGraphOrthoLayer::EditGraphHandler::getWorldCoordinates(int x, int y)
	static int _bind_getWorldCoordinates(lua_State *L) {
		if (!_lg_typecheck_getWorldCoordinates(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::EditGraphOrthoLayer::EditGraphHandler::getWorldCoordinates(int x, int y) function, expected prototype:\nork::vec3d proland::EditGraphOrthoLayer::EditGraphHandler::getWorldCoordinates(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::EditGraphOrthoLayer::EditGraphHandler::getWorldCoordinates(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->getWorldCoordinates(x, y);
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// ork::vec3i proland::EditGraphOrthoLayer::EditGraphHandler::getScreenCoordinates(double x, double y, double z)
	static int _bind_getScreenCoordinates(lua_State *L) {
		if (!_lg_typecheck_getScreenCoordinates(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3i proland::EditGraphOrthoLayer::EditGraphHandler::getScreenCoordinates(double x, double y, double z) function, expected prototype:\nork::vec3i proland::EditGraphOrthoLayer::EditGraphHandler::getScreenCoordinates(double x, double y, double z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double z=(double)lua_tonumber(L,4);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3i proland::EditGraphOrthoLayer::EditGraphHandler::getScreenCoordinates(double, double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3i stack_lret = self->getScreenCoordinates(x, y, z);
		ork::vec3i* lret = new ork::vec3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3i >::push(L,lret,true);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::update()
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::update() function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::update(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update();

		return 0;
	}

	// string proland::EditGraphOrthoLayer::EditGraphHandler::t()
	static int _bind_getT(lua_State *L) {
		if (!_lg_typecheck_getT(L)) {
			luaL_error(L, "luna typecheck failed in string proland::EditGraphOrthoLayer::EditGraphHandler::t() function, expected prototype:\nstring proland::EditGraphOrthoLayer::EditGraphHandler::t()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call string proland::EditGraphOrthoLayer::EditGraphHandler::t(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		string lret = self->t;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// ork::SceneNode * proland::EditGraphOrthoLayer::EditGraphHandler::terrain()
	static int _bind_getTerrain(lua_State *L) {
		if (!_lg_typecheck_getTerrain(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneNode * proland::EditGraphOrthoLayer::EditGraphHandler::terrain() function, expected prototype:\nork::SceneNode * proland::EditGraphOrthoLayer::EditGraphHandler::terrain()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::SceneNode * proland::EditGraphOrthoLayer::EditGraphHandler::terrain(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::SceneNode * lret = self->terrain;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::SceneNode >::push(L,lret,false);

		return 1;
	}

	// proland::TerrainNode * proland::EditGraphOrthoLayer::EditGraphHandler::terrainNode()
	static int _bind_getTerrainNode(lua_State *L) {
		if (!_lg_typecheck_getTerrainNode(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainNode * proland::EditGraphOrthoLayer::EditGraphHandler::terrainNode() function, expected prototype:\nproland::TerrainNode * proland::EditGraphOrthoLayer::EditGraphHandler::terrainNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TerrainNode * proland::EditGraphOrthoLayer::EditGraphHandler::terrainNode(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TerrainNode * lret = self->terrainNode;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TerrainNode >::push(L,lret,false);

		return 1;
	}

	// ork::ResourceManager * proland::EditGraphOrthoLayer::EditGraphHandler::manager()
	static int _bind_getManager(lua_State *L) {
		if (!_lg_typecheck_getManager(L)) {
			luaL_error(L, "luna typecheck failed in ork::ResourceManager * proland::EditGraphOrthoLayer::EditGraphHandler::manager() function, expected prototype:\nork::ResourceManager * proland::EditGraphOrthoLayer::EditGraphHandler::manager()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ResourceManager * proland::EditGraphOrthoLayer::EditGraphHandler::manager(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ResourceManager * lret = self->manager;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::ResourceManager >::push(L,lret,false);

		return 1;
	}

	// proland::EditGraphOrthoLayer * proland::EditGraphOrthoLayer::EditGraphHandler::editor()
	static int _bind_getEditor(lua_State *L) {
		if (!_lg_typecheck_getEditor(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditGraphOrthoLayer * proland::EditGraphOrthoLayer::EditGraphHandler::editor() function, expected prototype:\nproland::EditGraphOrthoLayer * proland::EditGraphOrthoLayer::EditGraphHandler::editor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::EditGraphOrthoLayer * proland::EditGraphOrthoLayer::EditGraphHandler::editor(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::EditGraphOrthoLayer * lret = self->editor;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::EditGraphOrthoLayer >::push(L,lret,false);

		return 1;
	}

	// int proland::EditGraphOrthoLayer::EditGraphHandler::mode()
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luaL_error(L, "luna typecheck failed in int proland::EditGraphOrthoLayer::EditGraphHandler::mode() function, expected prototype:\nint proland::EditGraphOrthoLayer::EditGraphHandler::mode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::EditGraphOrthoLayer::EditGraphHandler::mode(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->mode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandler::edited()
	static int _bind_getEdited(lua_State *L) {
		if (!_lg_typecheck_getEdited(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandler::edited() function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandler::edited()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandler::edited(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->edited;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::vec3d proland::EditGraphOrthoLayer::EditGraphHandler::newPos()
	static int _bind_getNewPos(lua_State *L) {
		if (!_lg_typecheck_getNewPos(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::EditGraphOrthoLayer::EditGraphHandler::newPos() function, expected prototype:\nork::vec3d proland::EditGraphOrthoLayer::EditGraphHandler::newPos()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::EditGraphOrthoLayer::EditGraphHandler::newPos(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec3d* lret = &self->newPos;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,false);

		return 1;
	}

	// ork::vec3d proland::EditGraphOrthoLayer::EditGraphHandler::prevPos()
	static int _bind_getPrevPos(lua_State *L) {
		if (!_lg_typecheck_getPrevPos(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::EditGraphOrthoLayer::EditGraphHandler::prevPos() function, expected prototype:\nork::vec3d proland::EditGraphOrthoLayer::EditGraphHandler::prevPos()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::EditGraphOrthoLayer::EditGraphHandler::prevPos(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec3d* lret = &self->prevPos;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,false);

		return 1;
	}

	// ork::vec2i proland::EditGraphOrthoLayer::EditGraphHandler::lastScreenPos()
	static int _bind_getLastScreenPos(lua_State *L) {
		if (!_lg_typecheck_getLastScreenPos(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2i proland::EditGraphOrthoLayer::EditGraphHandler::lastScreenPos() function, expected prototype:\nork::vec2i proland::EditGraphOrthoLayer::EditGraphHandler::lastScreenPos()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2i proland::EditGraphOrthoLayer::EditGraphHandler::lastScreenPos(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec2i* lret = &self->lastScreenPos;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2i >::push(L,lret,false);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandler::initialized()
	static int _bind_getInitialized(lua_State *L) {
		if (!_lg_typecheck_getInitialized(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandler::initialized() function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandler::initialized()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandler::initialized(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->initialized;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double proland::EditGraphOrthoLayer::EditGraphHandler::lastUpdate()
	static int _bind_getLastUpdate(lua_State *L) {
		if (!_lg_typecheck_getLastUpdate(L)) {
			luaL_error(L, "luna typecheck failed in double proland::EditGraphOrthoLayer::EditGraphHandler::lastUpdate() function, expected prototype:\ndouble proland::EditGraphOrthoLayer::EditGraphHandler::lastUpdate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::EditGraphOrthoLayer::EditGraphHandler::lastUpdate(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->lastUpdate;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::static_ptr< ork::Program > proland::EditGraphOrthoLayer::EditGraphHandler::displayPointsProgram()
	static int _bind_getDisplayPointsProgram(lua_State *L) {
		if (!_lg_typecheck_getDisplayPointsProgram(L)) {
			luaL_error(L, "luna typecheck failed in ork::static_ptr< ork::Program > proland::EditGraphOrthoLayer::EditGraphHandler::displayPointsProgram() function, expected prototype:\nork::static_ptr< ork::Program > proland::EditGraphOrthoLayer::EditGraphHandler::displayPointsProgram()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::static_ptr< ork::Program > proland::EditGraphOrthoLayer::EditGraphHandler::displayPointsProgram(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::static_ptr< ork::Program >* lret = &self->displayPointsProgram;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::static_ptr< ork::Program > >::push(L,lret,false);

		return 1;
	}

	// ork::static_ptr< ork::Uniform2f > proland::EditGraphOrthoLayer::EditGraphHandler::windowSizeU()
	static int _bind_getWindowSizeU(lua_State *L) {
		if (!_lg_typecheck_getWindowSizeU(L)) {
			luaL_error(L, "luna typecheck failed in ork::static_ptr< ork::Uniform2f > proland::EditGraphOrthoLayer::EditGraphHandler::windowSizeU() function, expected prototype:\nork::static_ptr< ork::Uniform2f > proland::EditGraphOrthoLayer::EditGraphHandler::windowSizeU()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::static_ptr< ork::Uniform2f > proland::EditGraphOrthoLayer::EditGraphHandler::windowSizeU(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::static_ptr< ork::Uniform2f >* lret = &self->windowSizeU;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::static_ptr< ork::Uniform2f > >::push(L,lret,false);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::t(string value)
	static int _bind_setT(lua_State *L) {
		if (!_lg_typecheck_setT(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::t(string value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::t(string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::t(string). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->t = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::terrain(ork::SceneNode * value)
	static int _bind_setTerrain(lua_State *L) {
		if (!_lg_typecheck_setTerrain(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::terrain(ork::SceneNode * value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::terrain(ork::SceneNode * value)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::SceneNode* value=(Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2));

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::terrain(ork::SceneNode *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->terrain = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::terrainNode(proland::TerrainNode * value)
	static int _bind_setTerrainNode(lua_State *L) {
		if (!_lg_typecheck_setTerrainNode(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::terrainNode(proland::TerrainNode * value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::terrainNode(proland::TerrainNode * value)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TerrainNode* value=(Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,2));

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::terrainNode(proland::TerrainNode *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->terrainNode = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::manager(ork::ResourceManager * value)
	static int _bind_setManager(lua_State *L) {
		if (!_lg_typecheck_setManager(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::manager(ork::ResourceManager * value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::manager(ork::ResourceManager * value)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ResourceManager* value=(Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,2));

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::manager(ork::ResourceManager *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->manager = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::editor(proland::EditGraphOrthoLayer * value)
	static int _bind_setEditor(lua_State *L) {
		if (!_lg_typecheck_setEditor(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::editor(proland::EditGraphOrthoLayer * value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::editor(proland::EditGraphOrthoLayer * value)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::EditGraphOrthoLayer* value=(Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,2));

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::editor(proland::EditGraphOrthoLayer *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->editor = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::mode(int value)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::mode(int value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::mode(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::mode(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mode = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::edited(bool value)
	static int _bind_setEdited(lua_State *L) {
		if (!_lg_typecheck_setEdited(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::edited(bool value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::edited(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::edited(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->edited = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::newPos(ork::vec3d value)
	static int _bind_setNewPos(lua_State *L) {
		if (!_lg_typecheck_setNewPos(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::newPos(ork::vec3d value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::newPos(ork::vec3d value)\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3d* value_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::EditGraphOrthoLayer::EditGraphHandler::newPos function");
		}
		ork::vec3d value=*value_ptr;

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::newPos(ork::vec3d). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->newPos = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::prevPos(ork::vec3d value)
	static int _bind_setPrevPos(lua_State *L) {
		if (!_lg_typecheck_setPrevPos(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::prevPos(ork::vec3d value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::prevPos(ork::vec3d value)\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3d* value_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::EditGraphOrthoLayer::EditGraphHandler::prevPos function");
		}
		ork::vec3d value=*value_ptr;

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::prevPos(ork::vec3d). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->prevPos = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::lastScreenPos(ork::vec2i value)
	static int _bind_setLastScreenPos(lua_State *L) {
		if (!_lg_typecheck_setLastScreenPos(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::lastScreenPos(ork::vec2i value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::lastScreenPos(ork::vec2i value)\nClass arguments details:\narg 1 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2i* value_ptr=(Luna< ork::vec2i >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::EditGraphOrthoLayer::EditGraphHandler::lastScreenPos function");
		}
		ork::vec2i value=*value_ptr;

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::lastScreenPos(ork::vec2i). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->lastScreenPos = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::initialized(bool value)
	static int _bind_setInitialized(lua_State *L) {
		if (!_lg_typecheck_setInitialized(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::initialized(bool value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::initialized(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::initialized(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->initialized = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::lastUpdate(double value)
	static int _bind_setLastUpdate(lua_State *L) {
		if (!_lg_typecheck_setLastUpdate(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::lastUpdate(double value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::lastUpdate(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::lastUpdate(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->lastUpdate = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::displayPointsProgram(ork::static_ptr< ork::Program > value)
	static int _bind_setDisplayPointsProgram(lua_State *L) {
		if (!_lg_typecheck_setDisplayPointsProgram(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::displayPointsProgram(ork::static_ptr< ork::Program > value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::displayPointsProgram(ork::static_ptr< ork::Program > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::static_ptr< ork::Program >* value_ptr=(Luna< ork::static_ptr< ork::Program > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::EditGraphOrthoLayer::EditGraphHandler::displayPointsProgram function");
		}
		ork::static_ptr< ork::Program > value=*value_ptr;

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::displayPointsProgram(ork::static_ptr< ork::Program >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->displayPointsProgram = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::windowSizeU(ork::static_ptr< ork::Uniform2f > value)
	static int _bind_setWindowSizeU(lua_State *L) {
		if (!_lg_typecheck_setWindowSizeU(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::windowSizeU(ork::static_ptr< ork::Uniform2f > value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::windowSizeU(ork::static_ptr< ork::Uniform2f > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::static_ptr< ork::Uniform2f >* value_ptr=(Luna< ork::static_ptr< ork::Uniform2f > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::EditGraphOrthoLayer::EditGraphHandler::windowSizeU function");
		}
		ork::static_ptr< ork::Uniform2f > value=*value_ptr;

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::windowSizeU(ork::static_ptr< ork::Uniform2f >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->windowSizeU = value;

		return 0;
	}

	// const char * proland::EditGraphOrthoLayer::EditGraphHandler::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::EditGraphOrthoLayer::EditGraphHandler::base_toString() function, expected prototype:\nconst char * proland::EditGraphOrthoLayer::EditGraphHandler::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::EditGraphOrthoLayer::EditGraphHandler::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->EditGraphHandler::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::base_reshape(int x, int y)
	static int _bind_base_reshape(lua_State *L) {
		if (!_lg_typecheck_base_reshape(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::base_reshape(int x, int y) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::base_reshape(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::base_reshape(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphHandler::reshape(x, y);

		return 0;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::base_idle(bool damaged)
	static int _bind_base_idle(lua_State *L) {
		if (!_lg_typecheck_base_idle(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::base_idle(bool damaged) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::base_idle(bool damaged)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool damaged=(bool)(lua_toboolean(L,2)==1);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::base_idle(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphHandler::idle(damaged);

		return 0;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_base_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandler::base_mouseWheel(ork::EventHandler::wheel b, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::wheel b=(ork::EventHandler::wheel)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandler::base_mouseWheel(ork::EventHandler::wheel, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphHandler::mouseWheel(b, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandler::base_mousePassiveMotion(int x, int y)
	static int _bind_base_mousePassiveMotion(lua_State *L) {
		if (!_lg_typecheck_base_mousePassiveMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandler::base_mousePassiveMotion(int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandler::base_mousePassiveMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandler::base_mousePassiveMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphHandler::mousePassiveMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_keyReleased(lua_State *L) {
		if (!_lg_typecheck_base_keyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandler::base_keyReleased(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandler::base_keyReleased(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphHandler::keyReleased(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_specialKeyReleased(lua_State *L) {
		if (!_lg_typecheck_base_specialKeyReleased(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandler::base_specialKeyReleased(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandler::base_specialKeyReleased(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphHandler::specialKeyReleased(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::EditGraphHandler::base_redisplay(double t, double dt)
	static int _bind_base_redisplay(lua_State *L) {
		if (!_lg_typecheck_base_redisplay(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::EditGraphHandler::base_redisplay(double t, double dt) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::EditGraphHandler::base_redisplay(double t, double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::EditGraphHandler::base_redisplay(double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditGraphHandler::redisplay(t, dt);

		return 0;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_mouseClick(lua_State *L) {
		if (!_lg_typecheck_base_mouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandler::base_mouseClick(ork::EventHandler::button b, ork::EventHandler::state s, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::button b=(ork::EventHandler::button)lua_tointeger(L,2);
		ork::EventHandler::state s=(ork::EventHandler::state)lua_tointeger(L,3);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandler::base_mouseClick(ork::EventHandler::button, ork::EventHandler::state, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphHandler::mouseClick(b, s, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandler::base_mouseMotion(int x, int y)
	static int _bind_base_mouseMotion(lua_State *L) {
		if (!_lg_typecheck_base_mouseMotion(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandler::base_mouseMotion(int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandler::base_mouseMotion(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandler::base_mouseMotion(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphHandler::mouseMotion(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_keyTyped(lua_State *L) {
		if (!_lg_typecheck_base_keyTyped(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandler::base_keyTyped(unsigned char c, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandler::base_keyTyped(unsigned char, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphHandler::keyTyped(c, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditGraphOrthoLayer::EditGraphHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)
	static int _bind_base_specialKey(lua_State *L) {
		if (!_lg_typecheck_base_specialKey(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditGraphOrthoLayer::EditGraphHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y) function, expected prototype:\nbool proland::EditGraphOrthoLayer::EditGraphHandler::base_specialKey(ork::EventHandler::key k, ork::EventHandler::modifier m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::EventHandler::key k=(ork::EventHandler::key)lua_tointeger(L,2);
		ork::EventHandler::modifier m=(ork::EventHandler::modifier)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		proland::EditGraphOrthoLayer::EditGraphHandler* self=Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer::EditGraphHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditGraphOrthoLayer::EditGraphHandler::base_specialKey(ork::EventHandler::key, ork::EventHandler::modifier, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditGraphHandler::specialKey(k, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

proland::EditGraphOrthoLayer::EditGraphHandler* LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_ctor(L);
}

void LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandler >::_bind_dtor(proland::EditGraphOrthoLayer::EditGraphHandler* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandler >::className[] = "EditGraphOrthoLayer_EditGraphHandler";
const char LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandler >::fullName[] = "proland::EditGraphOrthoLayer::EditGraphHandler";
const char LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandler >::moduleName[] = "proland";
const char* LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandler >::parents[] = {"ork.EventHandler", 0};
const int LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandler >::hash = 68276913;
const int LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandler >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandler >::methods[] = {
	{"undo", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_undo},
	{"redisplay", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_redisplay},
	{"mouseClick", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_mouseClick},
	{"mouseMotion", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_mouseMotion},
	{"keyTyped", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_keyTyped},
	{"specialKey", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_specialKey},
	{"getWorldCoordinates", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_getWorldCoordinates},
	{"getScreenCoordinates", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_getScreenCoordinates},
	{"update", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_update},
	{"getT", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_getT},
	{"getTerrain", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_getTerrain},
	{"getTerrainNode", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_getTerrainNode},
	{"getManager", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_getManager},
	{"getEditor", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_getEditor},
	{"getMode", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_getMode},
	{"getEdited", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_getEdited},
	{"getNewPos", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_getNewPos},
	{"getPrevPos", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_getPrevPos},
	{"getLastScreenPos", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_getLastScreenPos},
	{"getInitialized", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_getInitialized},
	{"getLastUpdate", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_getLastUpdate},
	{"getDisplayPointsProgram", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_getDisplayPointsProgram},
	{"getWindowSizeU", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_getWindowSizeU},
	{"setT", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_setT},
	{"setTerrain", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_setTerrain},
	{"setTerrainNode", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_setTerrainNode},
	{"setManager", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_setManager},
	{"setEditor", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_setEditor},
	{"setMode", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_setMode},
	{"setEdited", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_setEdited},
	{"setNewPos", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_setNewPos},
	{"setPrevPos", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_setPrevPos},
	{"setLastScreenPos", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_setLastScreenPos},
	{"setInitialized", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_setInitialized},
	{"setLastUpdate", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_setLastUpdate},
	{"setDisplayPointsProgram", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_setDisplayPointsProgram},
	{"setWindowSizeU", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_setWindowSizeU},
	{"base_toString", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_base_toString},
	{"base_reshape", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_base_reshape},
	{"base_idle", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_base_idle},
	{"base_mouseWheel", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_base_mouseWheel},
	{"base_mousePassiveMotion", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_base_mousePassiveMotion},
	{"base_keyReleased", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_base_keyReleased},
	{"base_specialKeyReleased", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_base_specialKeyReleased},
	{"base_redisplay", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_base_redisplay},
	{"base_mouseClick", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_base_mouseClick},
	{"base_mouseMotion", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_base_mouseMotion},
	{"base_keyTyped", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_base_keyTyped},
	{"base_specialKey", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_base_specialKey},
	{"fromVoid", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandler >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_EditGraphOrthoLayer_EditGraphHandler::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandler >::enumValues[] = {
	{"DEFAULT_MODE", proland::EditGraphOrthoLayer::EditGraphHandler::DEFAULT_MODE},
	{"EDIT_MODE", proland::EditGraphOrthoLayer::EditGraphHandler::EDIT_MODE},
	{"SMOOTHING_POINT", proland::EditGraphOrthoLayer::EditGraphHandler::SMOOTHING_POINT},
	{"CREATING_SMOOTH_CURVE", proland::EditGraphOrthoLayer::EditGraphHandler::CREATING_SMOOTH_CURVE},
	{"END_SMOOTH_CURVE", proland::EditGraphOrthoLayer::EditGraphHandler::END_SMOOTH_CURVE},
	{0,0}
};


