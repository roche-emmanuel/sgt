#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_HydroFlowTile.h>

class luna_wrapper_proland_HydroFlowTile {
public:
	typedef Luna< proland::HydroFlowTile > luna_t;

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

		proland::HydroFlowTile* self= (proland::HydroFlowTile*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::HydroFlowTile >::push(L,self,false);
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
		//proland::HydroFlowTile* ptr= dynamic_cast< proland::HydroFlowTile* >(Luna< ork::Object >::check(L,1));
		proland::HydroFlowTile* ptr= luna_caster< ork::Object, proland::HydroFlowTile >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::HydroFlowTile >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_addBanks(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54471397) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVelocity(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304238) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_equals(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_print(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_getVelocity(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304238) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::HydroFlowTile::HydroFlowTile(float ox, float oy, float size, float inter_power, int cacheSize, float searchRadiusFactor)
	static proland::HydroFlowTile* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::HydroFlowTile::HydroFlowTile(float ox, float oy, float size, float inter_power, int cacheSize, float searchRadiusFactor) function, expected prototype:\nproland::HydroFlowTile::HydroFlowTile(float ox, float oy, float size, float inter_power, int cacheSize, float searchRadiusFactor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float ox=(float)lua_tonumber(L,1);
		float oy=(float)lua_tonumber(L,2);
		float size=(float)lua_tonumber(L,3);
		float inter_power=(float)lua_tonumber(L,4);
		int cacheSize=(int)lua_tointeger(L,5);
		float searchRadiusFactor=(float)lua_tonumber(L,6);

		return new proland::HydroFlowTile(ox, oy, size, inter_power, cacheSize, searchRadiusFactor);
	}

	// proland::HydroFlowTile::HydroFlowTile(lua_Table * data, float ox, float oy, float size, float inter_power, int cacheSize, float searchRadiusFactor)
	static proland::HydroFlowTile* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::HydroFlowTile::HydroFlowTile(lua_Table * data, float ox, float oy, float size, float inter_power, int cacheSize, float searchRadiusFactor) function, expected prototype:\nproland::HydroFlowTile::HydroFlowTile(lua_Table * data, float ox, float oy, float size, float inter_power, int cacheSize, float searchRadiusFactor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float ox=(float)lua_tonumber(L,2);
		float oy=(float)lua_tonumber(L,3);
		float size=(float)lua_tonumber(L,4);
		float inter_power=(float)lua_tonumber(L,5);
		int cacheSize=(int)lua_tointeger(L,6);
		float searchRadiusFactor=(float)lua_tonumber(L,7);

		return new wrapper_proland_HydroFlowTile(L,NULL, ox, oy, size, inter_power, cacheSize, searchRadiusFactor);
	}

	// Overload binder for proland::HydroFlowTile::HydroFlowTile
	static proland::HydroFlowTile* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function HydroFlowTile, cannot match any of the overloads for function HydroFlowTile:\n  HydroFlowTile(float, float, float, float, int, float)\n  HydroFlowTile(lua_Table *, float, float, float, float, int, float)\n");
		return NULL;
	}


	// Function binds:
	// void proland::HydroFlowTile::addBanks(vector< ork::ptr< proland::HydroCurve > > & curves, float maxWidth)
	static int _bind_addBanks(lua_State *L) {
		if (!_lg_typecheck_addBanks(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowTile::addBanks(vector< ork::ptr< proland::HydroCurve > > & curves, float maxWidth) function, expected prototype:\nvoid proland::HydroFlowTile::addBanks(vector< ork::ptr< proland::HydroCurve > > & curves, float maxWidth)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::ptr< proland::HydroCurve > >* curves_ptr=(Luna< vector< ork::ptr< proland::HydroCurve > > >::check(L,2));
		if( !curves_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curves in proland::HydroFlowTile::addBanks function");
		}
		vector< ork::ptr< proland::HydroCurve > > & curves=*curves_ptr;
		float maxWidth=(float)lua_tonumber(L,3);

		proland::HydroFlowTile* self=Luna< ork::Object >::checkSubType< proland::HydroFlowTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowTile::addBanks(vector< ork::ptr< proland::HydroCurve > > &, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addBanks(curves, maxWidth);

		return 0;
	}

	// void proland::HydroFlowTile::getVelocity(ork::vec2d & pos, ork::vec2d & velocity, int & type)
	static int _bind_getVelocity(lua_State *L) {
		if (!_lg_typecheck_getVelocity(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowTile::getVelocity(ork::vec2d & pos, ork::vec2d & velocity, int & type) function, expected prototype:\nvoid proland::HydroFlowTile::getVelocity(ork::vec2d & pos, ork::vec2d & velocity, int & type)\nClass arguments details:\narg 1 ID = 81304238\narg 2 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* pos_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in proland::HydroFlowTile::getVelocity function");
		}
		ork::vec2d & pos=*pos_ptr;
		ork::vec2d* velocity_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !velocity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg velocity in proland::HydroFlowTile::getVelocity function");
		}
		ork::vec2d & velocity=*velocity_ptr;
		int type=(int)lua_tointeger(L,4);

		proland::HydroFlowTile* self=Luna< ork::Object >::checkSubType< proland::HydroFlowTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowTile::getVelocity(ork::vec2d &, ork::vec2d &, int &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getVelocity(pos, velocity, type);

		lua_pushnumber(L,type);
		return 1;
	}

	// bool proland::HydroFlowTile::equals(unsigned int version, float inter_power, int cacheSize, float searchRadiusFactor) const
	static int _bind_equals(lua_State *L) {
		if (!_lg_typecheck_equals(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::HydroFlowTile::equals(unsigned int version, float inter_power, int cacheSize, float searchRadiusFactor) const function, expected prototype:\nbool proland::HydroFlowTile::equals(unsigned int version, float inter_power, int cacheSize, float searchRadiusFactor) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int version=(unsigned int)lua_tointeger(L,2);
		float inter_power=(float)lua_tonumber(L,3);
		int cacheSize=(int)lua_tointeger(L,4);
		float searchRadiusFactor=(float)lua_tonumber(L,5);

		proland::HydroFlowTile* self=Luna< ork::Object >::checkSubType< proland::HydroFlowTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::HydroFlowTile::equals(unsigned int, float, int, float) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->equals(version, inter_power, cacheSize, searchRadiusFactor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::HydroFlowTile::print()
	static int _bind_print(lua_State *L) {
		if (!_lg_typecheck_print(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowTile::print() function, expected prototype:\nvoid proland::HydroFlowTile::print()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroFlowTile* self=Luna< ork::Object >::checkSubType< proland::HydroFlowTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowTile::print(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->print();

		return 0;
	}

	// const char * proland::HydroFlowTile::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::HydroFlowTile::base_toString() function, expected prototype:\nconst char * proland::HydroFlowTile::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HydroFlowTile* self=Luna< ork::Object >::checkSubType< proland::HydroFlowTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::HydroFlowTile::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->HydroFlowTile::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// int proland::HydroFlowTile::base_getType(ork::vec2d & pos)
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in int proland::HydroFlowTile::base_getType(ork::vec2d & pos) function, expected prototype:\nint proland::HydroFlowTile::base_getType(ork::vec2d & pos)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* pos_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in proland::HydroFlowTile::base_getType function");
		}
		ork::vec2d & pos=*pos_ptr;

		proland::HydroFlowTile* self=Luna< ork::Object >::checkSubType< proland::HydroFlowTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::HydroFlowTile::base_getType(ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->HydroFlowTile::getType(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::HydroFlowTile::base_getDataType(ork::vec2d & pos, int & type)
	static int _bind_base_getDataType(lua_State *L) {
		if (!_lg_typecheck_base_getDataType(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowTile::base_getDataType(ork::vec2d & pos, int & type) function, expected prototype:\nvoid proland::HydroFlowTile::base_getDataType(ork::vec2d & pos, int & type)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* pos_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in proland::HydroFlowTile::base_getDataType function");
		}
		ork::vec2d & pos=*pos_ptr;
		int type=(int)lua_tointeger(L,3);

		proland::HydroFlowTile* self=Luna< ork::Object >::checkSubType< proland::HydroFlowTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowTile::base_getDataType(ork::vec2d &, int &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroFlowTile::getDataType(pos, type);

		lua_pushnumber(L,type);
		return 1;
	}

	// void proland::HydroFlowTile::base_getVelocity(ork::vec2d & pos, ork::vec2d & velocity, int & type)
	static int _bind_base_getVelocity(lua_State *L) {
		if (!_lg_typecheck_base_getVelocity(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowTile::base_getVelocity(ork::vec2d & pos, ork::vec2d & velocity, int & type) function, expected prototype:\nvoid proland::HydroFlowTile::base_getVelocity(ork::vec2d & pos, ork::vec2d & velocity, int & type)\nClass arguments details:\narg 1 ID = 81304238\narg 2 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec2d* pos_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in proland::HydroFlowTile::base_getVelocity function");
		}
		ork::vec2d & pos=*pos_ptr;
		ork::vec2d* velocity_ptr=(Luna< ork::vec2d >::check(L,3));
		if( !velocity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg velocity in proland::HydroFlowTile::base_getVelocity function");
		}
		ork::vec2d & velocity=*velocity_ptr;
		int type=(int)lua_tointeger(L,4);

		proland::HydroFlowTile* self=Luna< ork::Object >::checkSubType< proland::HydroFlowTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowTile::base_getVelocity(ork::vec2d &, ork::vec2d &, int &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HydroFlowTile::getVelocity(pos, velocity, type);

		lua_pushnumber(L,type);
		return 1;
	}


	// Operator binds:

};

proland::HydroFlowTile* LunaTraits< proland::HydroFlowTile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_HydroFlowTile::_bind_ctor(L);
}

void LunaTraits< proland::HydroFlowTile >::_bind_dtor(proland::HydroFlowTile* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::HydroFlowTile >::className[] = "HydroFlowTile";
const char LunaTraits< proland::HydroFlowTile >::fullName[] = "proland::HydroFlowTile";
const char LunaTraits< proland::HydroFlowTile >::moduleName[] = "proland";
const char* LunaTraits< proland::HydroFlowTile >::parents[] = {"proland.FlowTile", 0};
const int LunaTraits< proland::HydroFlowTile >::hash = 49566953;
const int LunaTraits< proland::HydroFlowTile >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::HydroFlowTile >::methods[] = {
	{"addBanks", &luna_wrapper_proland_HydroFlowTile::_bind_addBanks},
	{"getVelocity", &luna_wrapper_proland_HydroFlowTile::_bind_getVelocity},
	{"equals", &luna_wrapper_proland_HydroFlowTile::_bind_equals},
	{"print", &luna_wrapper_proland_HydroFlowTile::_bind_print},
	{"base_toString", &luna_wrapper_proland_HydroFlowTile::_bind_base_toString},
	{"base_getType", &luna_wrapper_proland_HydroFlowTile::_bind_base_getType},
	{"base_getDataType", &luna_wrapper_proland_HydroFlowTile::_bind_base_getDataType},
	{"base_getVelocity", &luna_wrapper_proland_HydroFlowTile::_bind_base_getVelocity},
	{"fromVoid", &luna_wrapper_proland_HydroFlowTile::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_HydroFlowTile::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_HydroFlowTile::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::HydroFlowTile >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_HydroFlowTile::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::HydroFlowTile >::enumValues[] = {
	{"OBSTACLE", proland::HydroFlowTile::OBSTACLE},
	{"RIVER", proland::HydroFlowTile::RIVER},
	{"INVISIBLE", proland::HydroFlowTile::INVISIBLE},
	{"BANK", proland::HydroFlowTile::BANK},
	{0,0}
};


