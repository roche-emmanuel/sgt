#include <plug_common.h>

class luna_wrapper_proland_AtmoParameters {
public:
	typedef Luna< proland::AtmoParameters > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84217978) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::AtmoParameters*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::AtmoParameters* rhs =(Luna< proland::AtmoParameters >::check(L,2));
		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
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

		proland::AtmoParameters* self= (proland::AtmoParameters*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::AtmoParameters >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84217978) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::AtmoParameters >::check(L,1));
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

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::AtmoParameters");
		
		return luna_dynamicCast(L,converters,"proland::AtmoParameters",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getRg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_TRANSMITTANCE_W(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_TRANSMITTANCE_H(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_SKY_W(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_SKY_H(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_RES_R(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_RES_MU(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_RES_MU_S(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_RES_NU(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_AVERAGE_GROUND_REFLECTANCE(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHR(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBetaR(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHM(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBetaMSca(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBetaMEx(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMieG(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRg(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRL(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_TRANSMITTANCE_W(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_TRANSMITTANCE_H(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_SKY_W(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_SKY_H(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_RES_R(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_RES_MU(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_RES_MU_S(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_RES_NU(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_AVERAGE_GROUND_REFLECTANCE(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHR(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBetaR(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHM(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBetaMSca(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBetaMEx(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304271) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMieG(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::AtmoParameters::AtmoParameters()
	static proland::AtmoParameters* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::AtmoParameters::AtmoParameters() function, expected prototype:\nproland::AtmoParameters::AtmoParameters()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::AtmoParameters();
	}


	// Function binds:
	// float proland::AtmoParameters::Rg()
	static int _bind_getRg(lua_State *L) {
		if (!_lg_typecheck_getRg(L)) {
			luaL_error(L, "luna typecheck failed in float proland::AtmoParameters::Rg() function, expected prototype:\nfloat proland::AtmoParameters::Rg()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::AtmoParameters::Rg(). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Rg;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::AtmoParameters::Rt()
	static int _bind_getRt(lua_State *L) {
		if (!_lg_typecheck_getRt(L)) {
			luaL_error(L, "luna typecheck failed in float proland::AtmoParameters::Rt() function, expected prototype:\nfloat proland::AtmoParameters::Rt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::AtmoParameters::Rt(). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Rt;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::AtmoParameters::RL()
	static int _bind_getRL(lua_State *L) {
		if (!_lg_typecheck_getRL(L)) {
			luaL_error(L, "luna typecheck failed in float proland::AtmoParameters::RL() function, expected prototype:\nfloat proland::AtmoParameters::RL()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::AtmoParameters::RL(). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->RL;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::AtmoParameters::TRANSMITTANCE_W()
	static int _bind_get_TRANSMITTANCE_W(lua_State *L) {
		if (!_lg_typecheck_get_TRANSMITTANCE_W(L)) {
			luaL_error(L, "luna typecheck failed in int proland::AtmoParameters::TRANSMITTANCE_W() function, expected prototype:\nint proland::AtmoParameters::TRANSMITTANCE_W()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::AtmoParameters::TRANSMITTANCE_W(). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->TRANSMITTANCE_W;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::AtmoParameters::TRANSMITTANCE_H()
	static int _bind_get_TRANSMITTANCE_H(lua_State *L) {
		if (!_lg_typecheck_get_TRANSMITTANCE_H(L)) {
			luaL_error(L, "luna typecheck failed in int proland::AtmoParameters::TRANSMITTANCE_H() function, expected prototype:\nint proland::AtmoParameters::TRANSMITTANCE_H()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::AtmoParameters::TRANSMITTANCE_H(). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->TRANSMITTANCE_H;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::AtmoParameters::SKY_W()
	static int _bind_get_SKY_W(lua_State *L) {
		if (!_lg_typecheck_get_SKY_W(L)) {
			luaL_error(L, "luna typecheck failed in int proland::AtmoParameters::SKY_W() function, expected prototype:\nint proland::AtmoParameters::SKY_W()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::AtmoParameters::SKY_W(). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->SKY_W;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::AtmoParameters::SKY_H()
	static int _bind_get_SKY_H(lua_State *L) {
		if (!_lg_typecheck_get_SKY_H(L)) {
			luaL_error(L, "luna typecheck failed in int proland::AtmoParameters::SKY_H() function, expected prototype:\nint proland::AtmoParameters::SKY_H()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::AtmoParameters::SKY_H(). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->SKY_H;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::AtmoParameters::RES_R()
	static int _bind_get_RES_R(lua_State *L) {
		if (!_lg_typecheck_get_RES_R(L)) {
			luaL_error(L, "luna typecheck failed in int proland::AtmoParameters::RES_R() function, expected prototype:\nint proland::AtmoParameters::RES_R()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::AtmoParameters::RES_R(). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->RES_R;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::AtmoParameters::RES_MU()
	static int _bind_get_RES_MU(lua_State *L) {
		if (!_lg_typecheck_get_RES_MU(L)) {
			luaL_error(L, "luna typecheck failed in int proland::AtmoParameters::RES_MU() function, expected prototype:\nint proland::AtmoParameters::RES_MU()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::AtmoParameters::RES_MU(). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->RES_MU;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::AtmoParameters::RES_MU_S()
	static int _bind_get_RES_MU_S(lua_State *L) {
		if (!_lg_typecheck_get_RES_MU_S(L)) {
			luaL_error(L, "luna typecheck failed in int proland::AtmoParameters::RES_MU_S() function, expected prototype:\nint proland::AtmoParameters::RES_MU_S()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::AtmoParameters::RES_MU_S(). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->RES_MU_S;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::AtmoParameters::RES_NU()
	static int _bind_get_RES_NU(lua_State *L) {
		if (!_lg_typecheck_get_RES_NU(L)) {
			luaL_error(L, "luna typecheck failed in int proland::AtmoParameters::RES_NU() function, expected prototype:\nint proland::AtmoParameters::RES_NU()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::AtmoParameters::RES_NU(). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->RES_NU;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::AtmoParameters::AVERAGE_GROUND_REFLECTANCE()
	static int _bind_get_AVERAGE_GROUND_REFLECTANCE(lua_State *L) {
		if (!_lg_typecheck_get_AVERAGE_GROUND_REFLECTANCE(L)) {
			luaL_error(L, "luna typecheck failed in float proland::AtmoParameters::AVERAGE_GROUND_REFLECTANCE() function, expected prototype:\nfloat proland::AtmoParameters::AVERAGE_GROUND_REFLECTANCE()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::AtmoParameters::AVERAGE_GROUND_REFLECTANCE(). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->AVERAGE_GROUND_REFLECTANCE;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::AtmoParameters::HR()
	static int _bind_getHR(lua_State *L) {
		if (!_lg_typecheck_getHR(L)) {
			luaL_error(L, "luna typecheck failed in float proland::AtmoParameters::HR() function, expected prototype:\nfloat proland::AtmoParameters::HR()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::AtmoParameters::HR(). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->HR;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec3f proland::AtmoParameters::betaR()
	static int _bind_getBetaR(lua_State *L) {
		if (!_lg_typecheck_getBetaR(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f proland::AtmoParameters::betaR() function, expected prototype:\nork::vec3f proland::AtmoParameters::betaR()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f proland::AtmoParameters::betaR(). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec3f* lret = &self->betaR;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,false);

		return 1;
	}

	// float proland::AtmoParameters::HM()
	static int _bind_getHM(lua_State *L) {
		if (!_lg_typecheck_getHM(L)) {
			luaL_error(L, "luna typecheck failed in float proland::AtmoParameters::HM() function, expected prototype:\nfloat proland::AtmoParameters::HM()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::AtmoParameters::HM(). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->HM;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec3f proland::AtmoParameters::betaMSca()
	static int _bind_getBetaMSca(lua_State *L) {
		if (!_lg_typecheck_getBetaMSca(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f proland::AtmoParameters::betaMSca() function, expected prototype:\nork::vec3f proland::AtmoParameters::betaMSca()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f proland::AtmoParameters::betaMSca(). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec3f* lret = &self->betaMSca;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,false);

		return 1;
	}

	// ork::vec3f proland::AtmoParameters::betaMEx()
	static int _bind_getBetaMEx(lua_State *L) {
		if (!_lg_typecheck_getBetaMEx(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3f proland::AtmoParameters::betaMEx() function, expected prototype:\nork::vec3f proland::AtmoParameters::betaMEx()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3f proland::AtmoParameters::betaMEx(). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec3f* lret = &self->betaMEx;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3f >::push(L,lret,false);

		return 1;
	}

	// float proland::AtmoParameters::mieG()
	static int _bind_getMieG(lua_State *L) {
		if (!_lg_typecheck_getMieG(L)) {
			luaL_error(L, "luna typecheck failed in float proland::AtmoParameters::mieG() function, expected prototype:\nfloat proland::AtmoParameters::mieG()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::AtmoParameters::mieG(). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->mieG;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::AtmoParameters::Rg(float value)
	static int _bind_setRg(lua_State *L) {
		if (!_lg_typecheck_setRg(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoParameters::Rg(float value) function, expected prototype:\nvoid proland::AtmoParameters::Rg(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoParameters::Rg(float). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Rg = value;

		return 0;
	}

	// void proland::AtmoParameters::Rt(float value)
	static int _bind_setRt(lua_State *L) {
		if (!_lg_typecheck_setRt(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoParameters::Rt(float value) function, expected prototype:\nvoid proland::AtmoParameters::Rt(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoParameters::Rt(float). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Rt = value;

		return 0;
	}

	// void proland::AtmoParameters::RL(float value)
	static int _bind_setRL(lua_State *L) {
		if (!_lg_typecheck_setRL(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoParameters::RL(float value) function, expected prototype:\nvoid proland::AtmoParameters::RL(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoParameters::RL(float). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RL = value;

		return 0;
	}

	// void proland::AtmoParameters::TRANSMITTANCE_W(int value)
	static int _bind_set_TRANSMITTANCE_W(lua_State *L) {
		if (!_lg_typecheck_set_TRANSMITTANCE_W(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoParameters::TRANSMITTANCE_W(int value) function, expected prototype:\nvoid proland::AtmoParameters::TRANSMITTANCE_W(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoParameters::TRANSMITTANCE_W(int). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TRANSMITTANCE_W = value;

		return 0;
	}

	// void proland::AtmoParameters::TRANSMITTANCE_H(int value)
	static int _bind_set_TRANSMITTANCE_H(lua_State *L) {
		if (!_lg_typecheck_set_TRANSMITTANCE_H(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoParameters::TRANSMITTANCE_H(int value) function, expected prototype:\nvoid proland::AtmoParameters::TRANSMITTANCE_H(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoParameters::TRANSMITTANCE_H(int). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TRANSMITTANCE_H = value;

		return 0;
	}

	// void proland::AtmoParameters::SKY_W(int value)
	static int _bind_set_SKY_W(lua_State *L) {
		if (!_lg_typecheck_set_SKY_W(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoParameters::SKY_W(int value) function, expected prototype:\nvoid proland::AtmoParameters::SKY_W(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoParameters::SKY_W(int). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SKY_W = value;

		return 0;
	}

	// void proland::AtmoParameters::SKY_H(int value)
	static int _bind_set_SKY_H(lua_State *L) {
		if (!_lg_typecheck_set_SKY_H(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoParameters::SKY_H(int value) function, expected prototype:\nvoid proland::AtmoParameters::SKY_H(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoParameters::SKY_H(int). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SKY_H = value;

		return 0;
	}

	// void proland::AtmoParameters::RES_R(int value)
	static int _bind_set_RES_R(lua_State *L) {
		if (!_lg_typecheck_set_RES_R(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoParameters::RES_R(int value) function, expected prototype:\nvoid proland::AtmoParameters::RES_R(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoParameters::RES_R(int). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RES_R = value;

		return 0;
	}

	// void proland::AtmoParameters::RES_MU(int value)
	static int _bind_set_RES_MU(lua_State *L) {
		if (!_lg_typecheck_set_RES_MU(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoParameters::RES_MU(int value) function, expected prototype:\nvoid proland::AtmoParameters::RES_MU(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoParameters::RES_MU(int). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RES_MU = value;

		return 0;
	}

	// void proland::AtmoParameters::RES_MU_S(int value)
	static int _bind_set_RES_MU_S(lua_State *L) {
		if (!_lg_typecheck_set_RES_MU_S(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoParameters::RES_MU_S(int value) function, expected prototype:\nvoid proland::AtmoParameters::RES_MU_S(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoParameters::RES_MU_S(int). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RES_MU_S = value;

		return 0;
	}

	// void proland::AtmoParameters::RES_NU(int value)
	static int _bind_set_RES_NU(lua_State *L) {
		if (!_lg_typecheck_set_RES_NU(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoParameters::RES_NU(int value) function, expected prototype:\nvoid proland::AtmoParameters::RES_NU(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoParameters::RES_NU(int). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RES_NU = value;

		return 0;
	}

	// void proland::AtmoParameters::AVERAGE_GROUND_REFLECTANCE(float value)
	static int _bind_set_AVERAGE_GROUND_REFLECTANCE(lua_State *L) {
		if (!_lg_typecheck_set_AVERAGE_GROUND_REFLECTANCE(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoParameters::AVERAGE_GROUND_REFLECTANCE(float value) function, expected prototype:\nvoid proland::AtmoParameters::AVERAGE_GROUND_REFLECTANCE(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoParameters::AVERAGE_GROUND_REFLECTANCE(float). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AVERAGE_GROUND_REFLECTANCE = value;

		return 0;
	}

	// void proland::AtmoParameters::HR(float value)
	static int _bind_setHR(lua_State *L) {
		if (!_lg_typecheck_setHR(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoParameters::HR(float value) function, expected prototype:\nvoid proland::AtmoParameters::HR(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoParameters::HR(float). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HR = value;

		return 0;
	}

	// void proland::AtmoParameters::betaR(ork::vec3f value)
	static int _bind_setBetaR(lua_State *L) {
		if (!_lg_typecheck_setBetaR(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoParameters::betaR(ork::vec3f value) function, expected prototype:\nvoid proland::AtmoParameters::betaR(ork::vec3f value)\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3f* value_ptr=(Luna< ork::vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::AtmoParameters::betaR function");
		}
		ork::vec3f value=*value_ptr;

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoParameters::betaR(ork::vec3f). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->betaR = value;

		return 0;
	}

	// void proland::AtmoParameters::HM(float value)
	static int _bind_setHM(lua_State *L) {
		if (!_lg_typecheck_setHM(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoParameters::HM(float value) function, expected prototype:\nvoid proland::AtmoParameters::HM(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoParameters::HM(float). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HM = value;

		return 0;
	}

	// void proland::AtmoParameters::betaMSca(ork::vec3f value)
	static int _bind_setBetaMSca(lua_State *L) {
		if (!_lg_typecheck_setBetaMSca(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoParameters::betaMSca(ork::vec3f value) function, expected prototype:\nvoid proland::AtmoParameters::betaMSca(ork::vec3f value)\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3f* value_ptr=(Luna< ork::vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::AtmoParameters::betaMSca function");
		}
		ork::vec3f value=*value_ptr;

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoParameters::betaMSca(ork::vec3f). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->betaMSca = value;

		return 0;
	}

	// void proland::AtmoParameters::betaMEx(ork::vec3f value)
	static int _bind_setBetaMEx(lua_State *L) {
		if (!_lg_typecheck_setBetaMEx(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoParameters::betaMEx(ork::vec3f value) function, expected prototype:\nvoid proland::AtmoParameters::betaMEx(ork::vec3f value)\nClass arguments details:\narg 1 ID = 81304271\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3f* value_ptr=(Luna< ork::vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::AtmoParameters::betaMEx function");
		}
		ork::vec3f value=*value_ptr;

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoParameters::betaMEx(ork::vec3f). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->betaMEx = value;

		return 0;
	}

	// void proland::AtmoParameters::mieG(float value)
	static int _bind_setMieG(lua_State *L) {
		if (!_lg_typecheck_setMieG(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoParameters::mieG(float value) function, expected prototype:\nvoid proland::AtmoParameters::mieG(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::AtmoParameters* self=(Luna< proland::AtmoParameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoParameters::mieG(float). Got : '%s'\n%s",typeid(Luna< proland::AtmoParameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mieG = value;

		return 0;
	}


	// Operator binds:

};

proland::AtmoParameters* LunaTraits< proland::AtmoParameters >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_AtmoParameters::_bind_ctor(L);
}

void LunaTraits< proland::AtmoParameters >::_bind_dtor(proland::AtmoParameters* obj) {
	delete obj;
}

const char LunaTraits< proland::AtmoParameters >::className[] = "AtmoParameters";
const char LunaTraits< proland::AtmoParameters >::fullName[] = "proland::AtmoParameters";
const char LunaTraits< proland::AtmoParameters >::moduleName[] = "proland";
const char* LunaTraits< proland::AtmoParameters >::parents[] = {0};
const int LunaTraits< proland::AtmoParameters >::hash = 84217978;
const int LunaTraits< proland::AtmoParameters >::uniqueIDs[] = {84217978,0};

luna_RegType LunaTraits< proland::AtmoParameters >::methods[] = {
	{"getRg", &luna_wrapper_proland_AtmoParameters::_bind_getRg},
	{"getRt", &luna_wrapper_proland_AtmoParameters::_bind_getRt},
	{"getRL", &luna_wrapper_proland_AtmoParameters::_bind_getRL},
	{"get_TRANSMITTANCE_W", &luna_wrapper_proland_AtmoParameters::_bind_get_TRANSMITTANCE_W},
	{"get_TRANSMITTANCE_H", &luna_wrapper_proland_AtmoParameters::_bind_get_TRANSMITTANCE_H},
	{"get_SKY_W", &luna_wrapper_proland_AtmoParameters::_bind_get_SKY_W},
	{"get_SKY_H", &luna_wrapper_proland_AtmoParameters::_bind_get_SKY_H},
	{"get_RES_R", &luna_wrapper_proland_AtmoParameters::_bind_get_RES_R},
	{"get_RES_MU", &luna_wrapper_proland_AtmoParameters::_bind_get_RES_MU},
	{"get_RES_MU_S", &luna_wrapper_proland_AtmoParameters::_bind_get_RES_MU_S},
	{"get_RES_NU", &luna_wrapper_proland_AtmoParameters::_bind_get_RES_NU},
	{"get_AVERAGE_GROUND_REFLECTANCE", &luna_wrapper_proland_AtmoParameters::_bind_get_AVERAGE_GROUND_REFLECTANCE},
	{"getHR", &luna_wrapper_proland_AtmoParameters::_bind_getHR},
	{"getBetaR", &luna_wrapper_proland_AtmoParameters::_bind_getBetaR},
	{"getHM", &luna_wrapper_proland_AtmoParameters::_bind_getHM},
	{"getBetaMSca", &luna_wrapper_proland_AtmoParameters::_bind_getBetaMSca},
	{"getBetaMEx", &luna_wrapper_proland_AtmoParameters::_bind_getBetaMEx},
	{"getMieG", &luna_wrapper_proland_AtmoParameters::_bind_getMieG},
	{"setRg", &luna_wrapper_proland_AtmoParameters::_bind_setRg},
	{"setRt", &luna_wrapper_proland_AtmoParameters::_bind_setRt},
	{"setRL", &luna_wrapper_proland_AtmoParameters::_bind_setRL},
	{"set_TRANSMITTANCE_W", &luna_wrapper_proland_AtmoParameters::_bind_set_TRANSMITTANCE_W},
	{"set_TRANSMITTANCE_H", &luna_wrapper_proland_AtmoParameters::_bind_set_TRANSMITTANCE_H},
	{"set_SKY_W", &luna_wrapper_proland_AtmoParameters::_bind_set_SKY_W},
	{"set_SKY_H", &luna_wrapper_proland_AtmoParameters::_bind_set_SKY_H},
	{"set_RES_R", &luna_wrapper_proland_AtmoParameters::_bind_set_RES_R},
	{"set_RES_MU", &luna_wrapper_proland_AtmoParameters::_bind_set_RES_MU},
	{"set_RES_MU_S", &luna_wrapper_proland_AtmoParameters::_bind_set_RES_MU_S},
	{"set_RES_NU", &luna_wrapper_proland_AtmoParameters::_bind_set_RES_NU},
	{"set_AVERAGE_GROUND_REFLECTANCE", &luna_wrapper_proland_AtmoParameters::_bind_set_AVERAGE_GROUND_REFLECTANCE},
	{"setHR", &luna_wrapper_proland_AtmoParameters::_bind_setHR},
	{"setBetaR", &luna_wrapper_proland_AtmoParameters::_bind_setBetaR},
	{"setHM", &luna_wrapper_proland_AtmoParameters::_bind_setHM},
	{"setBetaMSca", &luna_wrapper_proland_AtmoParameters::_bind_setBetaMSca},
	{"setBetaMEx", &luna_wrapper_proland_AtmoParameters::_bind_setBetaMEx},
	{"setMieG", &luna_wrapper_proland_AtmoParameters::_bind_setMieG},
	{"dynCast", &luna_wrapper_proland_AtmoParameters::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_AtmoParameters::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_AtmoParameters::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_AtmoParameters::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::AtmoParameters >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::AtmoParameters >::enumValues[] = {
	{0,0}
};


