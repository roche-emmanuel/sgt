#include <plug_common.h>

class luna_wrapper_proland_TileCache_Tile {
public:
	typedef Luna< proland::TileCache::Tile > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,10515563) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::TileCache::Tile*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileCache::Tile* rhs =(Luna< proland::TileCache::Tile >::check(L,2));
		proland::TileCache::Tile* self=(Luna< proland::TileCache::Tile >::check(L,1));
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

		proland::TileCache::Tile* self= (proland::TileCache::Tile*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TileCache::Tile >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,10515563) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::TileCache::Tile >::check(L,1));
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

		proland::TileCache::Tile* self=(Luna< proland::TileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::TileCache::Tile");
		
		return luna_dynamicCast(L,converters,"proland::TileCache::Tile",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,5) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,72091111)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getData(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getId_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getId_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTId_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTId_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getProducerId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTx(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TileCache::Tile::Tile(int producerId, int level, int tx, int ty, ork::ptr< ork::Task > task, proland::TileStorage::Slot * data)
	static proland::TileCache::Tile* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile::Tile(int producerId, int level, int tx, int ty, ork::ptr< ork::Task > task, proland::TileStorage::Slot * data) function, expected prototype:\nproland::TileCache::Tile::Tile(int producerId, int level, int tx, int ty, ork::ptr< ork::Task > task, proland::TileStorage::Slot * data)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = 72091111\n\n%s",luna_dumpStack(L).c_str());
		}

		int producerId=(int)lua_tointeger(L,1);
		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,5);
		proland::TileStorage::Slot* data=(Luna< proland::TileStorage::Slot >::check(L,6));

		return new proland::TileCache::Tile(producerId, level, tx, ty, task, data);
	}


	// Function binds:
	// proland::TileStorage::Slot * proland::TileCache::Tile::getData(bool check = true)
	static int _bind_getData(lua_State *L) {
		if (!_lg_typecheck_getData(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileStorage::Slot * proland::TileCache::Tile::getData(bool check = true) function, expected prototype:\nproland::TileStorage::Slot * proland::TileCache::Tile::getData(bool check = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool check=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		proland::TileCache::Tile* self=(Luna< proland::TileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileStorage::Slot * proland::TileCache::Tile::getData(bool). Got : '%s'\n%s",typeid(Luna< proland::TileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileStorage::Slot * lret = self->getData(check);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileStorage::Slot >::push(L,lret,false);

		return 1;
	}

	// proland::TileCache::Tile::Id proland::TileCache::Tile::getId() const
	static int _bind_getId_overload_1(lua_State *L) {
		if (!_lg_typecheck_getId_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile::Id proland::TileCache::Tile::getId() const function, expected prototype:\nproland::TileCache::Tile::Id proland::TileCache::Tile::getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileCache::Tile* self=(Luna< proland::TileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile::Id proland::TileCache::Tile::getId() const. Got : '%s'\n%s",typeid(Luna< proland::TileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile::Id stack_lret = self->getId();
		proland::TileCache::Tile::Id* lret = new proland::TileCache::Tile::Id(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile::Id >::push(L,lret,true);

		return 1;
	}

	// static proland::TileCache::Tile::Id proland::TileCache::Tile::getId(int level, int tx, int ty)
	static int _bind_getId_overload_2(lua_State *L) {
		if (!_lg_typecheck_getId_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static proland::TileCache::Tile::Id proland::TileCache::Tile::getId(int level, int tx, int ty) function, expected prototype:\nstatic proland::TileCache::Tile::Id proland::TileCache::Tile::getId(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,1);
		int tx=(int)lua_tointeger(L,2);
		int ty=(int)lua_tointeger(L,3);

		proland::TileCache::Tile::Id stack_lret = proland::TileCache::Tile::getId(level, tx, ty);
		proland::TileCache::Tile::Id* lret = new proland::TileCache::Tile::Id(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile::Id >::push(L,lret,true);

		return 1;
	}

	// Overload binder for proland::TileCache::Tile::getId
	static int _bind_getId(lua_State *L) {
		if (_lg_typecheck_getId_overload_1(L)) return _bind_getId_overload_1(L);
		if (_lg_typecheck_getId_overload_2(L)) return _bind_getId_overload_2(L);

		luaL_error(L, "error in function getId, cannot match any of the overloads for function getId:\n  getId()\n  getId(int, int, int)\n");
		return 0;
	}

	// proland::TileCache::Tile::TId proland::TileCache::Tile::getTId() const
	static int _bind_getTId_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTId_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile::TId proland::TileCache::Tile::getTId() const function, expected prototype:\nproland::TileCache::Tile::TId proland::TileCache::Tile::getTId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileCache::Tile* self=(Luna< proland::TileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile::TId proland::TileCache::Tile::getTId() const. Got : '%s'\n%s",typeid(Luna< proland::TileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile::TId stack_lret = self->getTId();
		proland::TileCache::Tile::TId* lret = new proland::TileCache::Tile::TId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile::TId >::push(L,lret,true);

		return 1;
	}

	// static proland::TileCache::Tile::TId proland::TileCache::Tile::getTId(int producerId, int level, int tx, int ty)
	static int _bind_getTId_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTId_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static proland::TileCache::Tile::TId proland::TileCache::Tile::getTId(int producerId, int level, int tx, int ty) function, expected prototype:\nstatic proland::TileCache::Tile::TId proland::TileCache::Tile::getTId(int producerId, int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int producerId=(int)lua_tointeger(L,1);
		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TileCache::Tile::TId stack_lret = proland::TileCache::Tile::getTId(producerId, level, tx, ty);
		proland::TileCache::Tile::TId* lret = new proland::TileCache::Tile::TId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile::TId >::push(L,lret,true);

		return 1;
	}

	// Overload binder for proland::TileCache::Tile::getTId
	static int _bind_getTId(lua_State *L) {
		if (_lg_typecheck_getTId_overload_1(L)) return _bind_getTId_overload_1(L);
		if (_lg_typecheck_getTId_overload_2(L)) return _bind_getTId_overload_2(L);

		luaL_error(L, "error in function getTId, cannot match any of the overloads for function getTId:\n  getTId()\n  getTId(int, int, int, int)\n");
		return 0;
	}

	// const int proland::TileCache::Tile::producerId()
	static int _bind_getProducerId(lua_State *L) {
		if (!_lg_typecheck_getProducerId(L)) {
			luaL_error(L, "luna typecheck failed in const int proland::TileCache::Tile::producerId() function, expected prototype:\nconst int proland::TileCache::Tile::producerId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileCache::Tile* self=(Luna< proland::TileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const int proland::TileCache::Tile::producerId(). Got : '%s'\n%s",typeid(Luna< proland::TileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->producerId;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const int proland::TileCache::Tile::level()
	static int _bind_getLevel(lua_State *L) {
		if (!_lg_typecheck_getLevel(L)) {
			luaL_error(L, "luna typecheck failed in const int proland::TileCache::Tile::level() function, expected prototype:\nconst int proland::TileCache::Tile::level()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileCache::Tile* self=(Luna< proland::TileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const int proland::TileCache::Tile::level(). Got : '%s'\n%s",typeid(Luna< proland::TileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->level;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const int proland::TileCache::Tile::tx()
	static int _bind_getTx(lua_State *L) {
		if (!_lg_typecheck_getTx(L)) {
			luaL_error(L, "luna typecheck failed in const int proland::TileCache::Tile::tx() function, expected prototype:\nconst int proland::TileCache::Tile::tx()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileCache::Tile* self=(Luna< proland::TileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const int proland::TileCache::Tile::tx(). Got : '%s'\n%s",typeid(Luna< proland::TileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->tx;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const int proland::TileCache::Tile::ty()
	static int _bind_getTy(lua_State *L) {
		if (!_lg_typecheck_getTy(L)) {
			luaL_error(L, "luna typecheck failed in const int proland::TileCache::Tile::ty() function, expected prototype:\nconst int proland::TileCache::Tile::ty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileCache::Tile* self=(Luna< proland::TileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const int proland::TileCache::Tile::ty(). Got : '%s'\n%s",typeid(Luna< proland::TileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->ty;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const ork::ptr< ork::Task > proland::TileCache::Tile::task()
	static int _bind_getTask(lua_State *L) {
		if (!_lg_typecheck_getTask(L)) {
			luaL_error(L, "luna typecheck failed in const ork::ptr< ork::Task > proland::TileCache::Tile::task() function, expected prototype:\nconst ork::ptr< ork::Task > proland::TileCache::Tile::task()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileCache::Tile* self=(Luna< proland::TileCache::Tile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const ork::ptr< ork::Task > proland::TileCache::Tile::task(). Got : '%s'\n%s",typeid(Luna< proland::TileCache::Tile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::ptr< ork::Task > lret = self->task;
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

proland::TileCache::Tile* LunaTraits< proland::TileCache::Tile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TileCache_Tile::_bind_ctor(L);
}

void LunaTraits< proland::TileCache::Tile >::_bind_dtor(proland::TileCache::Tile* obj) {
	delete obj;
}

const char LunaTraits< proland::TileCache::Tile >::className[] = "TileCache_Tile";
const char LunaTraits< proland::TileCache::Tile >::fullName[] = "proland::TileCache::Tile";
const char LunaTraits< proland::TileCache::Tile >::moduleName[] = "proland";
const char* LunaTraits< proland::TileCache::Tile >::parents[] = {0};
const int LunaTraits< proland::TileCache::Tile >::hash = 10515563;
const int LunaTraits< proland::TileCache::Tile >::uniqueIDs[] = {10515563,0};

luna_RegType LunaTraits< proland::TileCache::Tile >::methods[] = {
	{"getData", &luna_wrapper_proland_TileCache_Tile::_bind_getData},
	{"getId", &luna_wrapper_proland_TileCache_Tile::_bind_getId},
	{"getTId", &luna_wrapper_proland_TileCache_Tile::_bind_getTId},
	{"getProducerId", &luna_wrapper_proland_TileCache_Tile::_bind_getProducerId},
	{"getLevel", &luna_wrapper_proland_TileCache_Tile::_bind_getLevel},
	{"getTx", &luna_wrapper_proland_TileCache_Tile::_bind_getTx},
	{"getTy", &luna_wrapper_proland_TileCache_Tile::_bind_getTy},
	{"getTask", &luna_wrapper_proland_TileCache_Tile::_bind_getTask},
	{"dynCast", &luna_wrapper_proland_TileCache_Tile::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_TileCache_Tile::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_TileCache_Tile::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TileCache_Tile::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TileCache::Tile >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TileCache::Tile >::enumValues[] = {
	{0,0}
};


