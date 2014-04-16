#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_ObjectTileStorage_ObjectSlot.h>

class luna_wrapper_proland_ObjectTileStorage_ObjectSlot {
public:
	typedef Luna< proland::ObjectTileStorage::ObjectSlot > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::ObjectTileStorage::ObjectSlot* self=(Luna< proland::ObjectTileStorage::ObjectSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::ObjectTileStorage::ObjectSlot,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51023118) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::ObjectTileStorage::ObjectSlot*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::ObjectTileStorage::ObjectSlot* rhs =(Luna< proland::ObjectTileStorage::ObjectSlot >::check(L,2));
		proland::ObjectTileStorage::ObjectSlot* self=(Luna< proland::ObjectTileStorage::ObjectSlot >::check(L,1));
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

		proland::ObjectTileStorage::ObjectSlot* self= (proland::ObjectTileStorage::ObjectSlot*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ObjectTileStorage::ObjectSlot >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51023118) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::ObjectTileStorage::ObjectSlot >::check(L,1));
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

		proland::ObjectTileStorage::ObjectSlot* self=(Luna< proland::ObjectTileStorage::ObjectSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::ObjectTileStorage::ObjectSlot");
		
		return luna_dynamicCast(L,converters,"proland::ObjectTileStorage::ObjectSlot",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< ork::Object >::checkSubType< proland::TileStorage >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< proland::TileStorage >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Object >(L,2) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::ObjectTileStorage::ObjectSlot::ObjectSlot(proland::TileStorage * owner)
	static proland::ObjectTileStorage::ObjectSlot* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::ObjectTileStorage::ObjectSlot::ObjectSlot(proland::TileStorage * owner) function, expected prototype:\nproland::ObjectTileStorage::ObjectSlot::ObjectSlot(proland::TileStorage * owner)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileStorage* owner=(Luna< ork::Object >::checkSubType< proland::TileStorage >(L,1));

		return new proland::ObjectTileStorage::ObjectSlot(owner);
	}

	// proland::ObjectTileStorage::ObjectSlot::ObjectSlot(lua_Table * data, proland::TileStorage * owner)
	static proland::ObjectTileStorage::ObjectSlot* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::ObjectTileStorage::ObjectSlot::ObjectSlot(lua_Table * data, proland::TileStorage * owner) function, expected prototype:\nproland::ObjectTileStorage::ObjectSlot::ObjectSlot(lua_Table * data, proland::TileStorage * owner)\nClass arguments details:\narg 2 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileStorage* owner=(Luna< ork::Object >::checkSubType< proland::TileStorage >(L,2));

		return new wrapper_proland_ObjectTileStorage_ObjectSlot(L,NULL, owner);
	}

	// Overload binder for proland::ObjectTileStorage::ObjectSlot::ObjectSlot
	static proland::ObjectTileStorage::ObjectSlot* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ObjectSlot, cannot match any of the overloads for function ObjectSlot:\n  ObjectSlot(proland::TileStorage *)\n  ObjectSlot(lua_Table *, proland::TileStorage *)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::Object > proland::ObjectTileStorage::ObjectSlot::data()
	static int _bind_getData(lua_State *L) {
		if (!_lg_typecheck_getData(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Object > proland::ObjectTileStorage::ObjectSlot::data() function, expected prototype:\nork::ptr< ork::Object > proland::ObjectTileStorage::ObjectSlot::data()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ObjectTileStorage::ObjectSlot* self=(Luna< proland::ObjectTileStorage::ObjectSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Object > proland::ObjectTileStorage::ObjectSlot::data(). Got : '%s'\n%s",typeid(Luna< proland::ObjectTileStorage::ObjectSlot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Object > lret = self->data;
		Luna< ork::Object >::push(L,lret.get(),false);

		return 1;
	}

	// void proland::ObjectTileStorage::ObjectSlot::data(ork::ptr< ork::Object > value)
	static int _bind_setData(lua_State *L) {
		if (!_lg_typecheck_setData(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ObjectTileStorage::ObjectSlot::data(ork::ptr< ork::Object > value) function, expected prototype:\nvoid proland::ObjectTileStorage::ObjectSlot::data(ork::ptr< ork::Object > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Object > value = Luna< ork::Object >::checkSubType< ork::Object >(L,2);

		proland::ObjectTileStorage::ObjectSlot* self=(Luna< proland::ObjectTileStorage::ObjectSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ObjectTileStorage::ObjectSlot::data(ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< proland::ObjectTileStorage::ObjectSlot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->data = value;

		return 0;
	}


	// Operator binds:

};

proland::ObjectTileStorage::ObjectSlot* LunaTraits< proland::ObjectTileStorage::ObjectSlot >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_ObjectTileStorage_ObjectSlot::_bind_ctor(L);
}

void LunaTraits< proland::ObjectTileStorage::ObjectSlot >::_bind_dtor(proland::ObjectTileStorage::ObjectSlot* obj) {
	delete obj;
}

const char LunaTraits< proland::ObjectTileStorage::ObjectSlot >::className[] = "ObjectTileStorage_ObjectSlot";
const char LunaTraits< proland::ObjectTileStorage::ObjectSlot >::fullName[] = "proland::ObjectTileStorage::ObjectSlot";
const char LunaTraits< proland::ObjectTileStorage::ObjectSlot >::moduleName[] = "proland";
const char* LunaTraits< proland::ObjectTileStorage::ObjectSlot >::parents[] = {0};
const int LunaTraits< proland::ObjectTileStorage::ObjectSlot >::hash = 51023118;
const int LunaTraits< proland::ObjectTileStorage::ObjectSlot >::uniqueIDs[] = {51023118,0};

luna_RegType LunaTraits< proland::ObjectTileStorage::ObjectSlot >::methods[] = {
	{"getData", &luna_wrapper_proland_ObjectTileStorage_ObjectSlot::_bind_getData},
	{"setData", &luna_wrapper_proland_ObjectTileStorage_ObjectSlot::_bind_setData},
	{"dynCast", &luna_wrapper_proland_ObjectTileStorage_ObjectSlot::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_ObjectTileStorage_ObjectSlot::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_ObjectTileStorage_ObjectSlot::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ObjectTileStorage_ObjectSlot::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_ObjectTileStorage_ObjectSlot::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ObjectTileStorage::ObjectSlot >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ObjectTileStorage::ObjectSlot >::enumValues[] = {
	{0,0}
};


