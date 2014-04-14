#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_ViewManager.h>

class luna_wrapper_proland_ViewManager {
public:
	typedef Luna< proland::ViewManager > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::ViewManager* self=(Luna< proland::ViewManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::ViewManager,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2915545) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::ViewManager*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::ViewManager* rhs =(Luna< proland::ViewManager >::check(L,2));
		proland::ViewManager* self=(Luna< proland::ViewManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		proland::ViewManager* self= (proland::ViewManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ViewManager >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2915545) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::ViewManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		proland::ViewManager* self=(Luna< proland::ViewManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::ViewManager");
		
		return luna_dynamicCast(L,converters,"proland::ViewManager",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getScene(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewController(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldCoordinates(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::ViewManager::ViewManager(lua_Table * data)
	static proland::ViewManager* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::ViewManager::ViewManager(lua_Table * data) function, expected prototype:\nproland::ViewManager::ViewManager(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_ViewManager(L,NULL);
	}


	// Function binds:
	// ork::ptr< ork::SceneManager > proland::ViewManager::getScene()
	static int _bind_getScene(lua_State *L) {
		if (!_lg_typecheck_getScene(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::SceneManager > proland::ViewManager::getScene() function, expected prototype:\nork::ptr< ork::SceneManager > proland::ViewManager::getScene()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ViewManager* self=(Luna< proland::ViewManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::SceneManager > proland::ViewManager::getScene(). Got : '%s'\n%s",typeid(Luna< proland::ViewManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::SceneManager > lret = self->getScene();
		Luna< ork::SceneManager >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< proland::TerrainViewController > proland::ViewManager::getViewController()
	static int _bind_getViewController(lua_State *L) {
		if (!_lg_typecheck_getViewController(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TerrainViewController > proland::ViewManager::getViewController() function, expected prototype:\nork::ptr< proland::TerrainViewController > proland::ViewManager::getViewController()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ViewManager* self=(Luna< proland::ViewManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TerrainViewController > proland::ViewManager::getViewController(). Got : '%s'\n%s",typeid(Luna< proland::ViewManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TerrainViewController > lret = self->getViewController();
		Luna< proland::TerrainViewController >::push(L,lret.get(),false);

		return 1;
	}

	// ork::vec3d proland::ViewManager::getWorldCoordinates(int x, int y)
	static int _bind_getWorldCoordinates(lua_State *L) {
		if (!_lg_typecheck_getWorldCoordinates(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::ViewManager::getWorldCoordinates(int x, int y) function, expected prototype:\nork::vec3d proland::ViewManager::getWorldCoordinates(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::ViewManager* self=(Luna< proland::ViewManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::ViewManager::getWorldCoordinates(int, int). Got : '%s'\n%s",typeid(Luna< proland::ViewManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->getWorldCoordinates(x, y);
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

proland::ViewManager* LunaTraits< proland::ViewManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_ViewManager::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// ork::ptr< ork::SceneManager > proland::ViewManager::getScene()
	// ork::ptr< proland::TerrainViewController > proland::ViewManager::getViewController()
	// ork::vec3d proland::ViewManager::getWorldCoordinates(int x, int y)
}

void LunaTraits< proland::ViewManager >::_bind_dtor(proland::ViewManager* obj) {
	delete obj;
}

const char LunaTraits< proland::ViewManager >::className[] = "ViewManager";
const char LunaTraits< proland::ViewManager >::fullName[] = "proland::ViewManager";
const char LunaTraits< proland::ViewManager >::moduleName[] = "proland";
const char* LunaTraits< proland::ViewManager >::parents[] = {0};
const int LunaTraits< proland::ViewManager >::hash = 2915545;
const int LunaTraits< proland::ViewManager >::uniqueIDs[] = {2915545,0};

luna_RegType LunaTraits< proland::ViewManager >::methods[] = {
	{"getScene", &luna_wrapper_proland_ViewManager::_bind_getScene},
	{"getViewController", &luna_wrapper_proland_ViewManager::_bind_getViewController},
	{"getWorldCoordinates", &luna_wrapper_proland_ViewManager::_bind_getWorldCoordinates},
	{"dynCast", &luna_wrapper_proland_ViewManager::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_ViewManager::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_ViewManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ViewManager::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_ViewManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ViewManager >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ViewManager >::enumValues[] = {
	{0,0}
};


