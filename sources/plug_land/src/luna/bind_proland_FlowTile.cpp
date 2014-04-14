#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_FlowTile.h>

class luna_wrapper_proland_FlowTile {
public:
	typedef Luna< proland::FlowTile > luna_t;

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

		proland::FlowTile* self= (proland::FlowTile*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::FlowTile >::push(L,self,false);
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
		//proland::FlowTile* ptr= dynamic_cast< proland::FlowTile* >(Luna< ork::Object >::check(L,1));
		proland::FlowTile* ptr= luna_caster< ork::Object, proland::FlowTile >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::FlowTile >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVelocity(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304238) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDataType(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDataType(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::FlowTile::FlowTile(lua_Table * data, float ox, float oy, float size)
	static proland::FlowTile* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::FlowTile::FlowTile(lua_Table * data, float ox, float oy, float size) function, expected prototype:\nproland::FlowTile::FlowTile(lua_Table * data, float ox, float oy, float size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float ox=(float)lua_tonumber(L,2);
		float oy=(float)lua_tonumber(L,3);
		float size=(float)lua_tonumber(L,4);

		return new wrapper_proland_FlowTile(L,NULL, ox, oy, size);
	}


	// Function binds:
	// int proland::FlowTile::getType(ork::vec2d & pos)
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in int proland::FlowTile::getType(ork::vec2d & pos) function, expected prototype:\nint proland::FlowTile::getType(ork::vec2d & pos)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* pos_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in proland::FlowTile::getType function");
		}
		ork::vec2d & pos=*pos_ptr;

		proland::FlowTile* self=Luna< ork::Object >::checkSubType< proland::FlowTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::FlowTile::getType(ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getType(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::FlowTile::getVelocity(ork::vec2d & pos, ork::vec2d & velocity, int & type)
	static int _bind_getVelocity(lua_State *L) {
		if (!_lg_typecheck_getVelocity(L)) {
			luaL_error(L, "luna typecheck failed in void proland::FlowTile::getVelocity(ork::vec2d & pos, ork::vec2d & velocity, int & type) function, expected prototype:\nvoid proland::FlowTile::getVelocity(ork::vec2d & pos, ork::vec2d & velocity, int & type)\nClass arguments details:\narg 1 ID = 81304238\narg 2 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* pos_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in proland::FlowTile::getVelocity function");
		}
		ork::vec2d & pos=*pos_ptr;
		ork::vec2d* velocity_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !velocity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg velocity in proland::FlowTile::getVelocity function");
		}
		ork::vec2d & velocity=*velocity_ptr;
		int type=(int)lua_tointeger(L,4);

		proland::FlowTile* self=Luna< ork::Object >::checkSubType< proland::FlowTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::FlowTile::getVelocity(ork::vec2d &, ork::vec2d &, int &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getVelocity(pos, velocity, type);

		lua_pushnumber(L,type);
		return 1;
	}

	// void proland::FlowTile::getDataType(ork::vec2d & pos, int & type)
	static int _bind_getDataType(lua_State *L) {
		if (!_lg_typecheck_getDataType(L)) {
			luaL_error(L, "luna typecheck failed in void proland::FlowTile::getDataType(ork::vec2d & pos, int & type) function, expected prototype:\nvoid proland::FlowTile::getDataType(ork::vec2d & pos, int & type)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* pos_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in proland::FlowTile::getDataType function");
		}
		ork::vec2d & pos=*pos_ptr;
		int type=(int)lua_tointeger(L,3);

		proland::FlowTile* self=Luna< ork::Object >::checkSubType< proland::FlowTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::FlowTile::getDataType(ork::vec2d &, int &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getDataType(pos, type);

		lua_pushnumber(L,type);
		return 1;
	}

	// bool proland::FlowTile::contains(float x, float y)
	static int _bind_contains(lua_State *L) {
		if (!_lg_typecheck_contains(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::FlowTile::contains(float x, float y) function, expected prototype:\nbool proland::FlowTile::contains(float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		proland::FlowTile* self=Luna< ork::Object >::checkSubType< proland::FlowTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::FlowTile::contains(float, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * proland::FlowTile::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::FlowTile::base_toString() function, expected prototype:\nconst char * proland::FlowTile::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::FlowTile* self=Luna< ork::Object >::checkSubType< proland::FlowTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::FlowTile::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->FlowTile::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// int proland::FlowTile::base_getType(ork::vec2d & pos)
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in int proland::FlowTile::base_getType(ork::vec2d & pos) function, expected prototype:\nint proland::FlowTile::base_getType(ork::vec2d & pos)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* pos_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in proland::FlowTile::base_getType function");
		}
		ork::vec2d & pos=*pos_ptr;

		proland::FlowTile* self=Luna< ork::Object >::checkSubType< proland::FlowTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::FlowTile::base_getType(ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->FlowTile::getType(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::FlowTile::base_getDataType(ork::vec2d & pos, int & type)
	static int _bind_base_getDataType(lua_State *L) {
		if (!_lg_typecheck_base_getDataType(L)) {
			luaL_error(L, "luna typecheck failed in void proland::FlowTile::base_getDataType(ork::vec2d & pos, int & type) function, expected prototype:\nvoid proland::FlowTile::base_getDataType(ork::vec2d & pos, int & type)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* pos_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in proland::FlowTile::base_getDataType function");
		}
		ork::vec2d & pos=*pos_ptr;
		int type=(int)lua_tointeger(L,3);

		proland::FlowTile* self=Luna< ork::Object >::checkSubType< proland::FlowTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::FlowTile::base_getDataType(ork::vec2d &, int &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FlowTile::getDataType(pos, type);

		lua_pushnumber(L,type);
		return 1;
	}


	// Operator binds:

};

proland::FlowTile* LunaTraits< proland::FlowTile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_FlowTile::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void proland::FlowTile::getVelocity(ork::vec2d & pos, ork::vec2d & velocity, int & type)
}

void LunaTraits< proland::FlowTile >::_bind_dtor(proland::FlowTile* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::FlowTile >::className[] = "FlowTile";
const char LunaTraits< proland::FlowTile >::fullName[] = "proland::FlowTile";
const char LunaTraits< proland::FlowTile >::moduleName[] = "proland";
const char* LunaTraits< proland::FlowTile >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::FlowTile >::hash = 63347919;
const int LunaTraits< proland::FlowTile >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::FlowTile >::methods[] = {
	{"getType", &luna_wrapper_proland_FlowTile::_bind_getType},
	{"getVelocity", &luna_wrapper_proland_FlowTile::_bind_getVelocity},
	{"getDataType", &luna_wrapper_proland_FlowTile::_bind_getDataType},
	{"contains", &luna_wrapper_proland_FlowTile::_bind_contains},
	{"base_toString", &luna_wrapper_proland_FlowTile::_bind_base_toString},
	{"base_getType", &luna_wrapper_proland_FlowTile::_bind_base_getType},
	{"base_getDataType", &luna_wrapper_proland_FlowTile::_bind_base_getDataType},
	{"fromVoid", &luna_wrapper_proland_FlowTile::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_FlowTile::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_FlowTile::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::FlowTile >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_FlowTile::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::FlowTile >::enumValues[] = {
	{"UNKNOWN", proland::FlowTile::UNKNOWN},
	{"INSIDE", proland::FlowTile::INSIDE},
	{"LEAVING", proland::FlowTile::LEAVING},
	{"NEAR", proland::FlowTile::NEAR},
	{"OUTSIDE", proland::FlowTile::OUTSIDE},
	{"LEAVING_DOMAIN", proland::FlowTile::LEAVING_DOMAIN},
	{"OUTSIDE_DOMAIN", proland::FlowTile::OUTSIDE_DOMAIN},
	{"ON_SKY", proland::FlowTile::ON_SKY},
	{0,0}
};


