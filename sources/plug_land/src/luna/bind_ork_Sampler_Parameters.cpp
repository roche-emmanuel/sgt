#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Sampler_Parameters.h>

class luna_wrapper_ork_Sampler_Parameters {
public:
	typedef Luna< ork::Sampler::Parameters > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Sampler::Parameters,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84580371) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Sampler::Parameters*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Sampler::Parameters* rhs =(Luna< ork::Sampler::Parameters >::check(L,2));
		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
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

		ork::Sampler::Parameters* self= (ork::Sampler::Parameters*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Sampler::Parameters >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84580371) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Sampler::Parameters >::check(L,1));
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

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Sampler::Parameters");
		
		return luna_dynamicCast(L,converters,"ork::Sampler::Parameters",name);
	}


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
	inline static bool _lg_typecheck_wrapS_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_wrapS_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_wrapT_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_wrapT_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_wrapR_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_wrapR_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_min_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_min_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mag_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_mag_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_borderType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_lodMin_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_lodMin_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_lodMax_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_lodMax_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_lodBias_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_lodBias_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compareFunc_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compareFunc_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_maxAnisotropyEXT_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_maxAnisotropyEXT_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_borderi(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_borderf(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_borderIi(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_borderIui(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_wrapS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_wrapT(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_wrapR(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_min(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_mag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_borderi(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_borderf(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_borderIi(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_borderIui(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_lodMin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_lodMax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_lodBias(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_compareFunc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_maxAnisotropyEXT(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,84580371) ) return false;
		return true;
	}


	// Constructor binds:
	// ork::Sampler::Parameters::Parameters()
	static ork::Sampler::Parameters* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters::Parameters() function, expected prototype:\nork::Sampler::Parameters::Parameters()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::Sampler::Parameters();
	}

	// ork::Sampler::Parameters::Parameters(lua_Table * data)
	static ork::Sampler::Parameters* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters::Parameters(lua_Table * data) function, expected prototype:\nork::Sampler::Parameters::Parameters(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ork_Sampler_Parameters(L,NULL);
	}

	// Overload binder for ork::Sampler::Parameters::Parameters
	static ork::Sampler::Parameters* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Parameters, cannot match any of the overloads for function Parameters:\n  Parameters()\n  Parameters(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// ork::TextureWrap ork::Sampler::Parameters::wrapS() const
	static int _bind_wrapS_overload_1(lua_State *L) {
		if (!_lg_typecheck_wrapS_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::TextureWrap ork::Sampler::Parameters::wrapS() const function, expected prototype:\nork::TextureWrap ork::Sampler::Parameters::wrapS() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::TextureWrap ork::Sampler::Parameters::wrapS() const. Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::TextureWrap lret = self->wrapS();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::wrapS(ork::TextureWrap wrapS)
	static int _bind_wrapS_overload_2(lua_State *L) {
		if (!_lg_typecheck_wrapS_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::wrapS(ork::TextureWrap wrapS) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::wrapS(ork::TextureWrap wrapS)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::TextureWrap wrapS=(ork::TextureWrap)lua_tointeger(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::wrapS(ork::TextureWrap). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->wrapS(wrapS);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// Overload binder for ork::Sampler::Parameters::wrapS
	static int _bind_wrapS(lua_State *L) {
		if (_lg_typecheck_wrapS_overload_1(L)) return _bind_wrapS_overload_1(L);
		if (_lg_typecheck_wrapS_overload_2(L)) return _bind_wrapS_overload_2(L);

		luaL_error(L, "error in function wrapS, cannot match any of the overloads for function wrapS:\n  wrapS()\n  wrapS(ork::TextureWrap)\n");
		return 0;
	}

	// ork::TextureWrap ork::Sampler::Parameters::wrapT() const
	static int _bind_wrapT_overload_1(lua_State *L) {
		if (!_lg_typecheck_wrapT_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::TextureWrap ork::Sampler::Parameters::wrapT() const function, expected prototype:\nork::TextureWrap ork::Sampler::Parameters::wrapT() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::TextureWrap ork::Sampler::Parameters::wrapT() const. Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::TextureWrap lret = self->wrapT();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::wrapT(ork::TextureWrap wrapT)
	static int _bind_wrapT_overload_2(lua_State *L) {
		if (!_lg_typecheck_wrapT_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::wrapT(ork::TextureWrap wrapT) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::wrapT(ork::TextureWrap wrapT)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::TextureWrap wrapT=(ork::TextureWrap)lua_tointeger(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::wrapT(ork::TextureWrap). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->wrapT(wrapT);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// Overload binder for ork::Sampler::Parameters::wrapT
	static int _bind_wrapT(lua_State *L) {
		if (_lg_typecheck_wrapT_overload_1(L)) return _bind_wrapT_overload_1(L);
		if (_lg_typecheck_wrapT_overload_2(L)) return _bind_wrapT_overload_2(L);

		luaL_error(L, "error in function wrapT, cannot match any of the overloads for function wrapT:\n  wrapT()\n  wrapT(ork::TextureWrap)\n");
		return 0;
	}

	// ork::TextureWrap ork::Sampler::Parameters::wrapR() const
	static int _bind_wrapR_overload_1(lua_State *L) {
		if (!_lg_typecheck_wrapR_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::TextureWrap ork::Sampler::Parameters::wrapR() const function, expected prototype:\nork::TextureWrap ork::Sampler::Parameters::wrapR() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::TextureWrap ork::Sampler::Parameters::wrapR() const. Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::TextureWrap lret = self->wrapR();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::wrapR(ork::TextureWrap wrapR)
	static int _bind_wrapR_overload_2(lua_State *L) {
		if (!_lg_typecheck_wrapR_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::wrapR(ork::TextureWrap wrapR) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::wrapR(ork::TextureWrap wrapR)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::TextureWrap wrapR=(ork::TextureWrap)lua_tointeger(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::wrapR(ork::TextureWrap). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->wrapR(wrapR);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// Overload binder for ork::Sampler::Parameters::wrapR
	static int _bind_wrapR(lua_State *L) {
		if (_lg_typecheck_wrapR_overload_1(L)) return _bind_wrapR_overload_1(L);
		if (_lg_typecheck_wrapR_overload_2(L)) return _bind_wrapR_overload_2(L);

		luaL_error(L, "error in function wrapR, cannot match any of the overloads for function wrapR:\n  wrapR()\n  wrapR(ork::TextureWrap)\n");
		return 0;
	}

	// ork::TextureFilter ork::Sampler::Parameters::min() const
	static int _bind_min_overload_1(lua_State *L) {
		if (!_lg_typecheck_min_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::TextureFilter ork::Sampler::Parameters::min() const function, expected prototype:\nork::TextureFilter ork::Sampler::Parameters::min() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::TextureFilter ork::Sampler::Parameters::min() const. Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::TextureFilter lret = self->min();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::min(ork::TextureFilter min)
	static int _bind_min_overload_2(lua_State *L) {
		if (!_lg_typecheck_min_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::min(ork::TextureFilter min) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::min(ork::TextureFilter min)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::TextureFilter min=(ork::TextureFilter)lua_tointeger(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::min(ork::TextureFilter). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->min(min);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// Overload binder for ork::Sampler::Parameters::min
	static int _bind_min(lua_State *L) {
		if (_lg_typecheck_min_overload_1(L)) return _bind_min_overload_1(L);
		if (_lg_typecheck_min_overload_2(L)) return _bind_min_overload_2(L);

		luaL_error(L, "error in function min, cannot match any of the overloads for function min:\n  min()\n  min(ork::TextureFilter)\n");
		return 0;
	}

	// ork::TextureFilter ork::Sampler::Parameters::mag() const
	static int _bind_mag_overload_1(lua_State *L) {
		if (!_lg_typecheck_mag_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::TextureFilter ork::Sampler::Parameters::mag() const function, expected prototype:\nork::TextureFilter ork::Sampler::Parameters::mag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::TextureFilter ork::Sampler::Parameters::mag() const. Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::TextureFilter lret = self->mag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::mag(ork::TextureFilter mag)
	static int _bind_mag_overload_2(lua_State *L) {
		if (!_lg_typecheck_mag_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::mag(ork::TextureFilter mag) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::mag(ork::TextureFilter mag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::TextureFilter mag=(ork::TextureFilter)lua_tointeger(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::mag(ork::TextureFilter). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->mag(mag);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// Overload binder for ork::Sampler::Parameters::mag
	static int _bind_mag(lua_State *L) {
		if (_lg_typecheck_mag_overload_1(L)) return _bind_mag_overload_1(L);
		if (_lg_typecheck_mag_overload_2(L)) return _bind_mag_overload_2(L);

		luaL_error(L, "error in function mag, cannot match any of the overloads for function mag:\n  mag()\n  mag(ork::TextureFilter)\n");
		return 0;
	}

	// unsigned int ork::Sampler::Parameters::borderType() const
	static int _bind_borderType(lua_State *L) {
		if (!_lg_typecheck_borderType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int ork::Sampler::Parameters::borderType() const function, expected prototype:\nunsigned int ork::Sampler::Parameters::borderType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int ork::Sampler::Parameters::borderType() const. Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->borderType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ork::Sampler::Parameters::lodMin() const
	static int _bind_lodMin_overload_1(lua_State *L) {
		if (!_lg_typecheck_lodMin_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float ork::Sampler::Parameters::lodMin() const function, expected prototype:\nfloat ork::Sampler::Parameters::lodMin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::Sampler::Parameters::lodMin() const. Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->lodMin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::lodMin(float lodMin)
	static int _bind_lodMin_overload_2(lua_State *L) {
		if (!_lg_typecheck_lodMin_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::lodMin(float lodMin) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::lodMin(float lodMin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float lodMin=(float)lua_tonumber(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::lodMin(float). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->lodMin(lodMin);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// Overload binder for ork::Sampler::Parameters::lodMin
	static int _bind_lodMin(lua_State *L) {
		if (_lg_typecheck_lodMin_overload_1(L)) return _bind_lodMin_overload_1(L);
		if (_lg_typecheck_lodMin_overload_2(L)) return _bind_lodMin_overload_2(L);

		luaL_error(L, "error in function lodMin, cannot match any of the overloads for function lodMin:\n  lodMin()\n  lodMin(float)\n");
		return 0;
	}

	// float ork::Sampler::Parameters::lodMax() const
	static int _bind_lodMax_overload_1(lua_State *L) {
		if (!_lg_typecheck_lodMax_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float ork::Sampler::Parameters::lodMax() const function, expected prototype:\nfloat ork::Sampler::Parameters::lodMax() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::Sampler::Parameters::lodMax() const. Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->lodMax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::lodMax(float lodMax)
	static int _bind_lodMax_overload_2(lua_State *L) {
		if (!_lg_typecheck_lodMax_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::lodMax(float lodMax) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::lodMax(float lodMax)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float lodMax=(float)lua_tonumber(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::lodMax(float). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->lodMax(lodMax);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// Overload binder for ork::Sampler::Parameters::lodMax
	static int _bind_lodMax(lua_State *L) {
		if (_lg_typecheck_lodMax_overload_1(L)) return _bind_lodMax_overload_1(L);
		if (_lg_typecheck_lodMax_overload_2(L)) return _bind_lodMax_overload_2(L);

		luaL_error(L, "error in function lodMax, cannot match any of the overloads for function lodMax:\n  lodMax()\n  lodMax(float)\n");
		return 0;
	}

	// float ork::Sampler::Parameters::lodBias() const
	static int _bind_lodBias_overload_1(lua_State *L) {
		if (!_lg_typecheck_lodBias_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float ork::Sampler::Parameters::lodBias() const function, expected prototype:\nfloat ork::Sampler::Parameters::lodBias() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::Sampler::Parameters::lodBias() const. Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->lodBias();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::lodBias(float lodBias)
	static int _bind_lodBias_overload_2(lua_State *L) {
		if (!_lg_typecheck_lodBias_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::lodBias(float lodBias) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::lodBias(float lodBias)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float lodBias=(float)lua_tonumber(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::lodBias(float). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->lodBias(lodBias);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// Overload binder for ork::Sampler::Parameters::lodBias
	static int _bind_lodBias(lua_State *L) {
		if (_lg_typecheck_lodBias_overload_1(L)) return _bind_lodBias_overload_1(L);
		if (_lg_typecheck_lodBias_overload_2(L)) return _bind_lodBias_overload_2(L);

		luaL_error(L, "error in function lodBias, cannot match any of the overloads for function lodBias:\n  lodBias()\n  lodBias(float)\n");
		return 0;
	}

	// ork::Function ork::Sampler::Parameters::compareFunc() const
	static int _bind_compareFunc_overload_1(lua_State *L) {
		if (!_lg_typecheck_compareFunc_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::Function ork::Sampler::Parameters::compareFunc() const function, expected prototype:\nork::Function ork::Sampler::Parameters::compareFunc() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Function ork::Sampler::Parameters::compareFunc() const. Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::Function lret = self->compareFunc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::compareFunc(ork::Function compareFunc)
	static int _bind_compareFunc_overload_2(lua_State *L) {
		if (!_lg_typecheck_compareFunc_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::compareFunc(ork::Function compareFunc) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::compareFunc(ork::Function compareFunc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Function compareFunc=(ork::Function)lua_tointeger(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::compareFunc(ork::Function). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->compareFunc(compareFunc);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// Overload binder for ork::Sampler::Parameters::compareFunc
	static int _bind_compareFunc(lua_State *L) {
		if (_lg_typecheck_compareFunc_overload_1(L)) return _bind_compareFunc_overload_1(L);
		if (_lg_typecheck_compareFunc_overload_2(L)) return _bind_compareFunc_overload_2(L);

		luaL_error(L, "error in function compareFunc, cannot match any of the overloads for function compareFunc:\n  compareFunc()\n  compareFunc(ork::Function)\n");
		return 0;
	}

	// float ork::Sampler::Parameters::maxAnisotropyEXT() const
	static int _bind_maxAnisotropyEXT_overload_1(lua_State *L) {
		if (!_lg_typecheck_maxAnisotropyEXT_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float ork::Sampler::Parameters::maxAnisotropyEXT() const function, expected prototype:\nfloat ork::Sampler::Parameters::maxAnisotropyEXT() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float ork::Sampler::Parameters::maxAnisotropyEXT() const. Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->maxAnisotropyEXT();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::maxAnisotropyEXT(float maxAnisotropy)
	static int _bind_maxAnisotropyEXT_overload_2(lua_State *L) {
		if (!_lg_typecheck_maxAnisotropyEXT_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::maxAnisotropyEXT(float maxAnisotropy) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::maxAnisotropyEXT(float maxAnisotropy)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float maxAnisotropy=(float)lua_tonumber(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::maxAnisotropyEXT(float). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->maxAnisotropyEXT(maxAnisotropy);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// Overload binder for ork::Sampler::Parameters::maxAnisotropyEXT
	static int _bind_maxAnisotropyEXT(lua_State *L) {
		if (_lg_typecheck_maxAnisotropyEXT_overload_1(L)) return _bind_maxAnisotropyEXT_overload_1(L);
		if (_lg_typecheck_maxAnisotropyEXT_overload_2(L)) return _bind_maxAnisotropyEXT_overload_2(L);

		luaL_error(L, "error in function maxAnisotropyEXT, cannot match any of the overloads for function maxAnisotropyEXT:\n  maxAnisotropyEXT()\n  maxAnisotropyEXT(float)\n");
		return 0;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::borderi(int r = 0, int g = 0, int b = 0, int a = 0)
	static int _bind_borderi(lua_State *L) {
		if (!_lg_typecheck_borderi(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::borderi(int r = 0, int g = 0, int b = 0, int a = 0) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::borderi(int r = 0, int g = 0, int b = 0, int a = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int r=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int g=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int b=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int a=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::borderi(int, int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->borderi(r, g, b, a);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::borderf(float r = 0.0f, float g = 0.0f, float b = 0.0f, float a = 0.0f)
	static int _bind_borderf(lua_State *L) {
		if (!_lg_typecheck_borderf(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::borderf(float r = 0.0f, float g = 0.0f, float b = 0.0f, float a = 0.0f) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::borderf(float r = 0.0f, float g = 0.0f, float b = 0.0f, float a = 0.0f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float r=luatop>1 ? (float)lua_tonumber(L,2) : (float)0.0f;
		float g=luatop>2 ? (float)lua_tonumber(L,3) : (float)0.0f;
		float b=luatop>3 ? (float)lua_tonumber(L,4) : (float)0.0f;
		float a=luatop>4 ? (float)lua_tonumber(L,5) : (float)0.0f;

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::borderf(float, float, float, float). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->borderf(r, g, b, a);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::borderIi(int r = 0, int g = 0, int b = 0, int a = 0)
	static int _bind_borderIi(lua_State *L) {
		if (!_lg_typecheck_borderIi(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::borderIi(int r = 0, int g = 0, int b = 0, int a = 0) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::borderIi(int r = 0, int g = 0, int b = 0, int a = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int r=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int g=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int b=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int a=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::borderIi(int, int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->borderIi(r, g, b, a);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::borderIui(unsigned int r = 0, unsigned int g = 0, unsigned int b = 0, unsigned int a = 0)
	static int _bind_borderIui(lua_State *L) {
		if (!_lg_typecheck_borderIui(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::borderIui(unsigned int r = 0, unsigned int g = 0, unsigned int b = 0, unsigned int a = 0) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::borderIui(unsigned int r = 0, unsigned int g = 0, unsigned int b = 0, unsigned int a = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int r=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;
		unsigned int g=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;
		unsigned int b=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)0;
		unsigned int a=luatop>4 ? (unsigned int)lua_tointeger(L,5) : (unsigned int)0;

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::borderIui(unsigned int, unsigned int, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->borderIui(r, g, b, a);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::base_wrapS(ork::TextureWrap wrapS)
	static int _bind_base_wrapS(lua_State *L) {
		if (!_lg_typecheck_base_wrapS(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::base_wrapS(ork::TextureWrap wrapS) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::base_wrapS(ork::TextureWrap wrapS)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::TextureWrap wrapS=(ork::TextureWrap)lua_tointeger(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::base_wrapS(ork::TextureWrap). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->Parameters::wrapS(wrapS);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::base_wrapT(ork::TextureWrap wrapT)
	static int _bind_base_wrapT(lua_State *L) {
		if (!_lg_typecheck_base_wrapT(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::base_wrapT(ork::TextureWrap wrapT) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::base_wrapT(ork::TextureWrap wrapT)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::TextureWrap wrapT=(ork::TextureWrap)lua_tointeger(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::base_wrapT(ork::TextureWrap). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->Parameters::wrapT(wrapT);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::base_wrapR(ork::TextureWrap wrapR)
	static int _bind_base_wrapR(lua_State *L) {
		if (!_lg_typecheck_base_wrapR(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::base_wrapR(ork::TextureWrap wrapR) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::base_wrapR(ork::TextureWrap wrapR)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::TextureWrap wrapR=(ork::TextureWrap)lua_tointeger(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::base_wrapR(ork::TextureWrap). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->Parameters::wrapR(wrapR);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::base_min(ork::TextureFilter min)
	static int _bind_base_min(lua_State *L) {
		if (!_lg_typecheck_base_min(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::base_min(ork::TextureFilter min) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::base_min(ork::TextureFilter min)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::TextureFilter min=(ork::TextureFilter)lua_tointeger(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::base_min(ork::TextureFilter). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->Parameters::min(min);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::base_mag(ork::TextureFilter mag)
	static int _bind_base_mag(lua_State *L) {
		if (!_lg_typecheck_base_mag(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::base_mag(ork::TextureFilter mag) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::base_mag(ork::TextureFilter mag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::TextureFilter mag=(ork::TextureFilter)lua_tointeger(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::base_mag(ork::TextureFilter). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->Parameters::mag(mag);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::base_borderi(int r = 0, int g = 0, int b = 0, int a = 0)
	static int _bind_base_borderi(lua_State *L) {
		if (!_lg_typecheck_base_borderi(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::base_borderi(int r = 0, int g = 0, int b = 0, int a = 0) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::base_borderi(int r = 0, int g = 0, int b = 0, int a = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int r=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int g=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int b=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int a=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::base_borderi(int, int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->Parameters::borderi(r, g, b, a);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::base_borderf(float r = 0.0f, float g = 0.0f, float b = 0.0f, float a = 0.0f)
	static int _bind_base_borderf(lua_State *L) {
		if (!_lg_typecheck_base_borderf(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::base_borderf(float r = 0.0f, float g = 0.0f, float b = 0.0f, float a = 0.0f) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::base_borderf(float r = 0.0f, float g = 0.0f, float b = 0.0f, float a = 0.0f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float r=luatop>1 ? (float)lua_tonumber(L,2) : (float)0.0f;
		float g=luatop>2 ? (float)lua_tonumber(L,3) : (float)0.0f;
		float b=luatop>3 ? (float)lua_tonumber(L,4) : (float)0.0f;
		float a=luatop>4 ? (float)lua_tonumber(L,5) : (float)0.0f;

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::base_borderf(float, float, float, float). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->Parameters::borderf(r, g, b, a);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::base_borderIi(int r = 0, int g = 0, int b = 0, int a = 0)
	static int _bind_base_borderIi(lua_State *L) {
		if (!_lg_typecheck_base_borderIi(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::base_borderIi(int r = 0, int g = 0, int b = 0, int a = 0) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::base_borderIi(int r = 0, int g = 0, int b = 0, int a = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int r=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int g=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int b=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int a=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::base_borderIi(int, int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->Parameters::borderIi(r, g, b, a);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::base_borderIui(unsigned int r = 0, unsigned int g = 0, unsigned int b = 0, unsigned int a = 0)
	static int _bind_base_borderIui(lua_State *L) {
		if (!_lg_typecheck_base_borderIui(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::base_borderIui(unsigned int r = 0, unsigned int g = 0, unsigned int b = 0, unsigned int a = 0) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::base_borderIui(unsigned int r = 0, unsigned int g = 0, unsigned int b = 0, unsigned int a = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int r=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;
		unsigned int g=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;
		unsigned int b=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)0;
		unsigned int a=luatop>4 ? (unsigned int)lua_tointeger(L,5) : (unsigned int)0;

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::base_borderIui(unsigned int, unsigned int, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->Parameters::borderIui(r, g, b, a);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::base_lodMin(float lodMin)
	static int _bind_base_lodMin(lua_State *L) {
		if (!_lg_typecheck_base_lodMin(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::base_lodMin(float lodMin) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::base_lodMin(float lodMin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float lodMin=(float)lua_tonumber(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::base_lodMin(float). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->Parameters::lodMin(lodMin);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::base_lodMax(float lodMax)
	static int _bind_base_lodMax(lua_State *L) {
		if (!_lg_typecheck_base_lodMax(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::base_lodMax(float lodMax) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::base_lodMax(float lodMax)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float lodMax=(float)lua_tonumber(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::base_lodMax(float). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->Parameters::lodMax(lodMax);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::base_lodBias(float lodBias)
	static int _bind_base_lodBias(lua_State *L) {
		if (!_lg_typecheck_base_lodBias(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::base_lodBias(float lodBias) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::base_lodBias(float lodBias)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float lodBias=(float)lua_tonumber(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::base_lodBias(float). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->Parameters::lodBias(lodBias);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::base_compareFunc(ork::Function compareFunc)
	static int _bind_base_compareFunc(lua_State *L) {
		if (!_lg_typecheck_base_compareFunc(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::base_compareFunc(ork::Function compareFunc) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::base_compareFunc(ork::Function compareFunc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Function compareFunc=(ork::Function)lua_tointeger(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::base_compareFunc(ork::Function). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->Parameters::compareFunc(compareFunc);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}

	// ork::Sampler::Parameters & ork::Sampler::Parameters::base_maxAnisotropyEXT(float maxAnisotropy)
	static int _bind_base_maxAnisotropyEXT(lua_State *L) {
		if (!_lg_typecheck_base_maxAnisotropyEXT(L)) {
			luaL_error(L, "luna typecheck failed in ork::Sampler::Parameters & ork::Sampler::Parameters::base_maxAnisotropyEXT(float maxAnisotropy) function, expected prototype:\nork::Sampler::Parameters & ork::Sampler::Parameters::base_maxAnisotropyEXT(float maxAnisotropy)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float maxAnisotropy=(float)lua_tonumber(L,2);

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::Sampler::Parameters & ork::Sampler::Parameters::base_maxAnisotropyEXT(float). Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::Sampler::Parameters* lret = &self->Parameters::maxAnisotropyEXT(maxAnisotropy);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::Sampler::Parameters >::push(L,lret,false);

		return 1;
	}


	// Operator binds:
	// bool ork::Sampler::Parameters::operator<(const ork::Sampler::Parameters & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Sampler::Parameters::operator<(const ork::Sampler::Parameters & v) const function, expected prototype:\nbool ork::Sampler::Parameters::operator<(const ork::Sampler::Parameters & v) const\nClass arguments details:\narg 1 ID = 84580371\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::Sampler::Parameters* v_ptr=(Luna< ork::Sampler::Parameters >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in ork::Sampler::Parameters::operator< function");
		}
		const ork::Sampler::Parameters & v=*v_ptr;

		ork::Sampler::Parameters* self=(Luna< ork::Sampler::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Sampler::Parameters::operator<(const ork::Sampler::Parameters &) const. Got : '%s'\n%s",typeid(Luna< ork::Sampler::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

ork::Sampler::Parameters* LunaTraits< ork::Sampler::Parameters >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Sampler_Parameters::_bind_ctor(L);
}

void LunaTraits< ork::Sampler::Parameters >::_bind_dtor(ork::Sampler::Parameters* obj) {
	delete obj;
}

const char LunaTraits< ork::Sampler::Parameters >::className[] = "Sampler_Parameters";
const char LunaTraits< ork::Sampler::Parameters >::fullName[] = "ork::Sampler::Parameters";
const char LunaTraits< ork::Sampler::Parameters >::moduleName[] = "ork";
const char* LunaTraits< ork::Sampler::Parameters >::parents[] = {0};
const int LunaTraits< ork::Sampler::Parameters >::hash = 84580371;
const int LunaTraits< ork::Sampler::Parameters >::uniqueIDs[] = {84580371,0};

luna_RegType LunaTraits< ork::Sampler::Parameters >::methods[] = {
	{"wrapS", &luna_wrapper_ork_Sampler_Parameters::_bind_wrapS},
	{"wrapT", &luna_wrapper_ork_Sampler_Parameters::_bind_wrapT},
	{"wrapR", &luna_wrapper_ork_Sampler_Parameters::_bind_wrapR},
	{"min", &luna_wrapper_ork_Sampler_Parameters::_bind_min},
	{"mag", &luna_wrapper_ork_Sampler_Parameters::_bind_mag},
	{"borderType", &luna_wrapper_ork_Sampler_Parameters::_bind_borderType},
	{"lodMin", &luna_wrapper_ork_Sampler_Parameters::_bind_lodMin},
	{"lodMax", &luna_wrapper_ork_Sampler_Parameters::_bind_lodMax},
	{"lodBias", &luna_wrapper_ork_Sampler_Parameters::_bind_lodBias},
	{"compareFunc", &luna_wrapper_ork_Sampler_Parameters::_bind_compareFunc},
	{"maxAnisotropyEXT", &luna_wrapper_ork_Sampler_Parameters::_bind_maxAnisotropyEXT},
	{"borderi", &luna_wrapper_ork_Sampler_Parameters::_bind_borderi},
	{"borderf", &luna_wrapper_ork_Sampler_Parameters::_bind_borderf},
	{"borderIi", &luna_wrapper_ork_Sampler_Parameters::_bind_borderIi},
	{"borderIui", &luna_wrapper_ork_Sampler_Parameters::_bind_borderIui},
	{"base_wrapS", &luna_wrapper_ork_Sampler_Parameters::_bind_base_wrapS},
	{"base_wrapT", &luna_wrapper_ork_Sampler_Parameters::_bind_base_wrapT},
	{"base_wrapR", &luna_wrapper_ork_Sampler_Parameters::_bind_base_wrapR},
	{"base_min", &luna_wrapper_ork_Sampler_Parameters::_bind_base_min},
	{"base_mag", &luna_wrapper_ork_Sampler_Parameters::_bind_base_mag},
	{"base_borderi", &luna_wrapper_ork_Sampler_Parameters::_bind_base_borderi},
	{"base_borderf", &luna_wrapper_ork_Sampler_Parameters::_bind_base_borderf},
	{"base_borderIi", &luna_wrapper_ork_Sampler_Parameters::_bind_base_borderIi},
	{"base_borderIui", &luna_wrapper_ork_Sampler_Parameters::_bind_base_borderIui},
	{"base_lodMin", &luna_wrapper_ork_Sampler_Parameters::_bind_base_lodMin},
	{"base_lodMax", &luna_wrapper_ork_Sampler_Parameters::_bind_base_lodMax},
	{"base_lodBias", &luna_wrapper_ork_Sampler_Parameters::_bind_base_lodBias},
	{"base_compareFunc", &luna_wrapper_ork_Sampler_Parameters::_bind_base_compareFunc},
	{"base_maxAnisotropyEXT", &luna_wrapper_ork_Sampler_Parameters::_bind_base_maxAnisotropyEXT},
	{"__lt", &luna_wrapper_ork_Sampler_Parameters::_bind___lt},
	{"dynCast", &luna_wrapper_ork_Sampler_Parameters::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Sampler_Parameters::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_Sampler_Parameters::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Sampler_Parameters::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Sampler_Parameters::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Sampler::Parameters >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Sampler::Parameters >::enumValues[] = {
	{0,0}
};


