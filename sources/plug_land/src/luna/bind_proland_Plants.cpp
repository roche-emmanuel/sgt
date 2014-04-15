#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_Plants.h>

class luna_wrapper_proland_Plants {
public:
	typedef Luna< proland::Plants > luna_t;

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

		proland::Plants* self= (proland::Plants*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::Plants >::push(L,self,false);
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
		//proland::Plants* ptr= dynamic_cast< proland::Plants* >(Luna< ork::Object >::check(L,1));
		proland::Plants* ptr= luna_caster< ork::Object, proland::Plants >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::Plants >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getMinLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinDensity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxDensity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTileCacheSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPatternCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPoissonRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPattern(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addPattern(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSelectProg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getShadowProg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRenderProg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSelectProg(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setShadowProg(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRenderProg(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::Plants::Plants(int minLevel, int maxLevel, int minDensity, int maxDensity, int tileCacheSize, float maxDistance)
	static proland::Plants* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::Plants::Plants(int minLevel, int maxLevel, int minDensity, int maxDensity, int tileCacheSize, float maxDistance) function, expected prototype:\nproland::Plants::Plants(int minLevel, int maxLevel, int minDensity, int maxDensity, int tileCacheSize, float maxDistance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int minLevel=(int)lua_tointeger(L,1);
		int maxLevel=(int)lua_tointeger(L,2);
		int minDensity=(int)lua_tointeger(L,3);
		int maxDensity=(int)lua_tointeger(L,4);
		int tileCacheSize=(int)lua_tointeger(L,5);
		float maxDistance=(float)lua_tonumber(L,6);

		return new proland::Plants(minLevel, maxLevel, minDensity, maxDensity, tileCacheSize, maxDistance);
	}

	// proland::Plants::Plants(lua_Table * data, int minLevel, int maxLevel, int minDensity, int maxDensity, int tileCacheSize, float maxDistance)
	static proland::Plants* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::Plants::Plants(lua_Table * data, int minLevel, int maxLevel, int minDensity, int maxDensity, int tileCacheSize, float maxDistance) function, expected prototype:\nproland::Plants::Plants(lua_Table * data, int minLevel, int maxLevel, int minDensity, int maxDensity, int tileCacheSize, float maxDistance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int minLevel=(int)lua_tointeger(L,2);
		int maxLevel=(int)lua_tointeger(L,3);
		int minDensity=(int)lua_tointeger(L,4);
		int maxDensity=(int)lua_tointeger(L,5);
		int tileCacheSize=(int)lua_tointeger(L,6);
		float maxDistance=(float)lua_tonumber(L,7);

		return new wrapper_proland_Plants(L,NULL, minLevel, maxLevel, minDensity, maxDensity, tileCacheSize, maxDistance);
	}

	// Overload binder for proland::Plants::Plants
	static proland::Plants* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Plants, cannot match any of the overloads for function Plants:\n  Plants(int, int, int, int, int, float)\n  Plants(lua_Table *, int, int, int, int, int, float)\n");
		return NULL;
	}


	// Function binds:
	// int proland::Plants::getMinLevel()
	static int _bind_getMinLevel(lua_State *L) {
		if (!_lg_typecheck_getMinLevel(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Plants::getMinLevel() function, expected prototype:\nint proland::Plants::getMinLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Plants* self=Luna< ork::Object >::checkSubType< proland::Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Plants::getMinLevel(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getMinLevel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::Plants::getMaxLevel()
	static int _bind_getMaxLevel(lua_State *L) {
		if (!_lg_typecheck_getMaxLevel(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Plants::getMaxLevel() function, expected prototype:\nint proland::Plants::getMaxLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Plants* self=Luna< ork::Object >::checkSubType< proland::Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Plants::getMaxLevel(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getMaxLevel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::Plants::getMinDensity()
	static int _bind_getMinDensity(lua_State *L) {
		if (!_lg_typecheck_getMinDensity(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Plants::getMinDensity() function, expected prototype:\nint proland::Plants::getMinDensity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Plants* self=Luna< ork::Object >::checkSubType< proland::Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Plants::getMinDensity(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getMinDensity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::Plants::getMaxDensity()
	static int _bind_getMaxDensity(lua_State *L) {
		if (!_lg_typecheck_getMaxDensity(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Plants::getMaxDensity() function, expected prototype:\nint proland::Plants::getMaxDensity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Plants* self=Luna< ork::Object >::checkSubType< proland::Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Plants::getMaxDensity(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getMaxDensity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::Plants::getTileCacheSize()
	static int _bind_getTileCacheSize(lua_State *L) {
		if (!_lg_typecheck_getTileCacheSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Plants::getTileCacheSize() function, expected prototype:\nint proland::Plants::getTileCacheSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Plants* self=Luna< ork::Object >::checkSubType< proland::Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Plants::getTileCacheSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTileCacheSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::Plants::getMaxDistance()
	static int _bind_getMaxDistance(lua_State *L) {
		if (!_lg_typecheck_getMaxDistance(L)) {
			luaL_error(L, "luna typecheck failed in float proland::Plants::getMaxDistance() function, expected prototype:\nfloat proland::Plants::getMaxDistance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Plants* self=Luna< ork::Object >::checkSubType< proland::Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::Plants::getMaxDistance(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getMaxDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::Plants::getPatternCount()
	static int _bind_getPatternCount(lua_State *L) {
		if (!_lg_typecheck_getPatternCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::Plants::getPatternCount() function, expected prototype:\nint proland::Plants::getPatternCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Plants* self=Luna< ork::Object >::checkSubType< proland::Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::Plants::getPatternCount(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getPatternCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::Plants::getPoissonRadius()
	static int _bind_getPoissonRadius(lua_State *L) {
		if (!_lg_typecheck_getPoissonRadius(L)) {
			luaL_error(L, "luna typecheck failed in float proland::Plants::getPoissonRadius() function, expected prototype:\nfloat proland::Plants::getPoissonRadius()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Plants* self=Luna< ork::Object >::checkSubType< proland::Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::Plants::getPoissonRadius(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getPoissonRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::ptr< ork::MeshBuffers > proland::Plants::getPattern(int index)
	static int _bind_getPattern(lua_State *L) {
		if (!_lg_typecheck_getPattern(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::MeshBuffers > proland::Plants::getPattern(int index) function, expected prototype:\nork::ptr< ork::MeshBuffers > proland::Plants::getPattern(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		proland::Plants* self=Luna< ork::Object >::checkSubType< proland::Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::MeshBuffers > proland::Plants::getPattern(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::MeshBuffers > lret = self->getPattern(index);
		Luna< ork::MeshBuffers >::push(L,lret.get(),false);

		return 1;
	}

	// void proland::Plants::addPattern(ork::ptr< ork::MeshBuffers > pattern)
	static int _bind_addPattern(lua_State *L) {
		if (!_lg_typecheck_addPattern(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Plants::addPattern(ork::ptr< ork::MeshBuffers > pattern) function, expected prototype:\nvoid proland::Plants::addPattern(ork::ptr< ork::MeshBuffers > pattern)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::MeshBuffers > pattern = Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,2);

		proland::Plants* self=Luna< ork::Object >::checkSubType< proland::Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Plants::addPattern(ork::ptr< ork::MeshBuffers >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addPattern(pattern);

		return 0;
	}

	// void proland::Plants::setMaxDistance(float maxDistance)
	static int _bind_setMaxDistance(lua_State *L) {
		if (!_lg_typecheck_setMaxDistance(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Plants::setMaxDistance(float maxDistance) function, expected prototype:\nvoid proland::Plants::setMaxDistance(float maxDistance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float maxDistance=(float)lua_tonumber(L,2);

		proland::Plants* self=Luna< ork::Object >::checkSubType< proland::Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Plants::setMaxDistance(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMaxDistance(maxDistance);

		return 0;
	}

	// ork::ptr< ork::Program > proland::Plants::selectProg()
	static int _bind_getSelectProg(lua_State *L) {
		if (!_lg_typecheck_getSelectProg(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Program > proland::Plants::selectProg() function, expected prototype:\nork::ptr< ork::Program > proland::Plants::selectProg()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Plants* self=Luna< ork::Object >::checkSubType< proland::Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Program > proland::Plants::selectProg(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Program > lret = self->selectProg;
		Luna< ork::Program >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Program > proland::Plants::shadowProg()
	static int _bind_getShadowProg(lua_State *L) {
		if (!_lg_typecheck_getShadowProg(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Program > proland::Plants::shadowProg() function, expected prototype:\nork::ptr< ork::Program > proland::Plants::shadowProg()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Plants* self=Luna< ork::Object >::checkSubType< proland::Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Program > proland::Plants::shadowProg(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Program > lret = self->shadowProg;
		Luna< ork::Program >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Program > proland::Plants::renderProg()
	static int _bind_getRenderProg(lua_State *L) {
		if (!_lg_typecheck_getRenderProg(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Program > proland::Plants::renderProg() function, expected prototype:\nork::ptr< ork::Program > proland::Plants::renderProg()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Plants* self=Luna< ork::Object >::checkSubType< proland::Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Program > proland::Plants::renderProg(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Program > lret = self->renderProg;
		Luna< ork::Program >::push(L,lret.get(),false);

		return 1;
	}

	// void proland::Plants::selectProg(ork::ptr< ork::Program > value)
	static int _bind_setSelectProg(lua_State *L) {
		if (!_lg_typecheck_setSelectProg(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Plants::selectProg(ork::ptr< ork::Program > value) function, expected prototype:\nvoid proland::Plants::selectProg(ork::ptr< ork::Program > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > value = Luna< ork::Object >::checkSubType< ork::Program >(L,2);

		proland::Plants* self=Luna< ork::Object >::checkSubType< proland::Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Plants::selectProg(ork::ptr< ork::Program >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->selectProg = value;

		return 0;
	}

	// void proland::Plants::shadowProg(ork::ptr< ork::Program > value)
	static int _bind_setShadowProg(lua_State *L) {
		if (!_lg_typecheck_setShadowProg(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Plants::shadowProg(ork::ptr< ork::Program > value) function, expected prototype:\nvoid proland::Plants::shadowProg(ork::ptr< ork::Program > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > value = Luna< ork::Object >::checkSubType< ork::Program >(L,2);

		proland::Plants* self=Luna< ork::Object >::checkSubType< proland::Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Plants::shadowProg(ork::ptr< ork::Program >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->shadowProg = value;

		return 0;
	}

	// void proland::Plants::renderProg(ork::ptr< ork::Program > value)
	static int _bind_setRenderProg(lua_State *L) {
		if (!_lg_typecheck_setRenderProg(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Plants::renderProg(ork::ptr< ork::Program > value) function, expected prototype:\nvoid proland::Plants::renderProg(ork::ptr< ork::Program > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > value = Luna< ork::Object >::checkSubType< ork::Program >(L,2);

		proland::Plants* self=Luna< ork::Object >::checkSubType< proland::Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Plants::renderProg(ork::ptr< ork::Program >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->renderProg = value;

		return 0;
	}

	// const char * proland::Plants::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::Plants::base_toString() function, expected prototype:\nconst char * proland::Plants::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Plants* self=Luna< ork::Object >::checkSubType< proland::Plants >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::Plants::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Plants::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

proland::Plants* LunaTraits< proland::Plants >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_Plants::_bind_ctor(L);
}

void LunaTraits< proland::Plants >::_bind_dtor(proland::Plants* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::Plants >::className[] = "Plants";
const char LunaTraits< proland::Plants >::fullName[] = "proland::Plants";
const char LunaTraits< proland::Plants >::moduleName[] = "proland";
const char* LunaTraits< proland::Plants >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::Plants >::hash = 26515392;
const int LunaTraits< proland::Plants >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::Plants >::methods[] = {
	{"getMinLevel", &luna_wrapper_proland_Plants::_bind_getMinLevel},
	{"getMaxLevel", &luna_wrapper_proland_Plants::_bind_getMaxLevel},
	{"getMinDensity", &luna_wrapper_proland_Plants::_bind_getMinDensity},
	{"getMaxDensity", &luna_wrapper_proland_Plants::_bind_getMaxDensity},
	{"getTileCacheSize", &luna_wrapper_proland_Plants::_bind_getTileCacheSize},
	{"getMaxDistance", &luna_wrapper_proland_Plants::_bind_getMaxDistance},
	{"getPatternCount", &luna_wrapper_proland_Plants::_bind_getPatternCount},
	{"getPoissonRadius", &luna_wrapper_proland_Plants::_bind_getPoissonRadius},
	{"getPattern", &luna_wrapper_proland_Plants::_bind_getPattern},
	{"addPattern", &luna_wrapper_proland_Plants::_bind_addPattern},
	{"setMaxDistance", &luna_wrapper_proland_Plants::_bind_setMaxDistance},
	{"getSelectProg", &luna_wrapper_proland_Plants::_bind_getSelectProg},
	{"getShadowProg", &luna_wrapper_proland_Plants::_bind_getShadowProg},
	{"getRenderProg", &luna_wrapper_proland_Plants::_bind_getRenderProg},
	{"setSelectProg", &luna_wrapper_proland_Plants::_bind_setSelectProg},
	{"setShadowProg", &luna_wrapper_proland_Plants::_bind_setShadowProg},
	{"setRenderProg", &luna_wrapper_proland_Plants::_bind_setRenderProg},
	{"base_toString", &luna_wrapper_proland_Plants::_bind_base_toString},
	{"fromVoid", &luna_wrapper_proland_Plants::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_Plants::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_Plants::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::Plants >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_Plants::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::Plants >::enumValues[] = {
	{0,0}
};


