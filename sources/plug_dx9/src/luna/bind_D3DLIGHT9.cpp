#include <plug_common.h>

class luna_wrapper_D3DLIGHT9 {
public:
	typedef Luna< D3DLIGHT9 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25938411) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DLIGHT9*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DLIGHT9* rhs =(Luna< D3DLIGHT9 >::check(L,2));
		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
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

		D3DLIGHT9* self= (D3DLIGHT9*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DLIGHT9 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25938411) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DLIGHT9 >::check(L,1));
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

		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DLIGHT9");
		
		return luna_dynamicCast(L,converters,"D3DLIGHT9",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDiffuse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSpecular(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAmbient(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFalloff(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAttenuation0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAttenuation1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAttenuation2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTheta(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPhi(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDiffuse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,79250946) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSpecular(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,79250946) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAmbient(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,79250946) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8428048) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8428048) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFalloff(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAttenuation0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAttenuation1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAttenuation2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTheta(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPhi(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// D3DLIGHTTYPE D3DLIGHT9::Type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in D3DLIGHTTYPE D3DLIGHT9::Type() function, expected prototype:\nD3DLIGHTTYPE D3DLIGHT9::Type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DLIGHTTYPE D3DLIGHT9::Type(). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DLIGHTTYPE lret = self->Type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// D3DCOLORVALUE D3DLIGHT9::Diffuse()
	static int _bind_getDiffuse(lua_State *L) {
		if (!_lg_typecheck_getDiffuse(L)) {
			luaL_error(L, "luna typecheck failed in D3DCOLORVALUE D3DLIGHT9::Diffuse() function, expected prototype:\nD3DCOLORVALUE D3DLIGHT9::Diffuse()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DCOLORVALUE D3DLIGHT9::Diffuse(). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const D3DCOLORVALUE* lret = &self->Diffuse;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< D3DCOLORVALUE >::push(L,lret,false);

		return 1;
	}

	// D3DCOLORVALUE D3DLIGHT9::Specular()
	static int _bind_getSpecular(lua_State *L) {
		if (!_lg_typecheck_getSpecular(L)) {
			luaL_error(L, "luna typecheck failed in D3DCOLORVALUE D3DLIGHT9::Specular() function, expected prototype:\nD3DCOLORVALUE D3DLIGHT9::Specular()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DCOLORVALUE D3DLIGHT9::Specular(). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const D3DCOLORVALUE* lret = &self->Specular;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< D3DCOLORVALUE >::push(L,lret,false);

		return 1;
	}

	// D3DCOLORVALUE D3DLIGHT9::Ambient()
	static int _bind_getAmbient(lua_State *L) {
		if (!_lg_typecheck_getAmbient(L)) {
			luaL_error(L, "luna typecheck failed in D3DCOLORVALUE D3DLIGHT9::Ambient() function, expected prototype:\nD3DCOLORVALUE D3DLIGHT9::Ambient()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DCOLORVALUE D3DLIGHT9::Ambient(). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const D3DCOLORVALUE* lret = &self->Ambient;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< D3DCOLORVALUE >::push(L,lret,false);

		return 1;
	}

	// D3DVECTOR D3DLIGHT9::Position()
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luaL_error(L, "luna typecheck failed in D3DVECTOR D3DLIGHT9::Position() function, expected prototype:\nD3DVECTOR D3DLIGHT9::Position()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DVECTOR D3DLIGHT9::Position(). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const D3DVECTOR* lret = &self->Position;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< D3DVECTOR >::push(L,lret,false);

		return 1;
	}

	// D3DVECTOR D3DLIGHT9::Direction()
	static int _bind_getDirection(lua_State *L) {
		if (!_lg_typecheck_getDirection(L)) {
			luaL_error(L, "luna typecheck failed in D3DVECTOR D3DLIGHT9::Direction() function, expected prototype:\nD3DVECTOR D3DLIGHT9::Direction()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DVECTOR D3DLIGHT9::Direction(). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const D3DVECTOR* lret = &self->Direction;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< D3DVECTOR >::push(L,lret,false);

		return 1;
	}

	// float D3DLIGHT9::Range()
	static int _bind_getRange(lua_State *L) {
		if (!_lg_typecheck_getRange(L)) {
			luaL_error(L, "luna typecheck failed in float D3DLIGHT9::Range() function, expected prototype:\nfloat D3DLIGHT9::Range()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DLIGHT9::Range(). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Range;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DLIGHT9::Falloff()
	static int _bind_getFalloff(lua_State *L) {
		if (!_lg_typecheck_getFalloff(L)) {
			luaL_error(L, "luna typecheck failed in float D3DLIGHT9::Falloff() function, expected prototype:\nfloat D3DLIGHT9::Falloff()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DLIGHT9::Falloff(). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Falloff;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DLIGHT9::Attenuation0()
	static int _bind_getAttenuation0(lua_State *L) {
		if (!_lg_typecheck_getAttenuation0(L)) {
			luaL_error(L, "luna typecheck failed in float D3DLIGHT9::Attenuation0() function, expected prototype:\nfloat D3DLIGHT9::Attenuation0()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DLIGHT9::Attenuation0(). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Attenuation0;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DLIGHT9::Attenuation1()
	static int _bind_getAttenuation1(lua_State *L) {
		if (!_lg_typecheck_getAttenuation1(L)) {
			luaL_error(L, "luna typecheck failed in float D3DLIGHT9::Attenuation1() function, expected prototype:\nfloat D3DLIGHT9::Attenuation1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DLIGHT9::Attenuation1(). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Attenuation1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DLIGHT9::Attenuation2()
	static int _bind_getAttenuation2(lua_State *L) {
		if (!_lg_typecheck_getAttenuation2(L)) {
			luaL_error(L, "luna typecheck failed in float D3DLIGHT9::Attenuation2() function, expected prototype:\nfloat D3DLIGHT9::Attenuation2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DLIGHT9::Attenuation2(). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Attenuation2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DLIGHT9::Theta()
	static int _bind_getTheta(lua_State *L) {
		if (!_lg_typecheck_getTheta(L)) {
			luaL_error(L, "luna typecheck failed in float D3DLIGHT9::Theta() function, expected prototype:\nfloat D3DLIGHT9::Theta()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DLIGHT9::Theta(). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Theta;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float D3DLIGHT9::Phi()
	static int _bind_getPhi(lua_State *L) {
		if (!_lg_typecheck_getPhi(L)) {
			luaL_error(L, "luna typecheck failed in float D3DLIGHT9::Phi() function, expected prototype:\nfloat D3DLIGHT9::Phi()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DLIGHT9::Phi(). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Phi;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void D3DLIGHT9::Type(D3DLIGHTTYPE value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void D3DLIGHT9::Type(D3DLIGHTTYPE value) function, expected prototype:\nvoid D3DLIGHT9::Type(D3DLIGHTTYPE value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DLIGHTTYPE value=(D3DLIGHTTYPE)lua_tointeger(L,2);

		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DLIGHT9::Type(D3DLIGHTTYPE). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Type = value;

		return 0;
	}

	// void D3DLIGHT9::Diffuse(D3DCOLORVALUE value)
	static int _bind_setDiffuse(lua_State *L) {
		if (!_lg_typecheck_setDiffuse(L)) {
			luaL_error(L, "luna typecheck failed in void D3DLIGHT9::Diffuse(D3DCOLORVALUE value) function, expected prototype:\nvoid D3DLIGHT9::Diffuse(D3DCOLORVALUE value)\nClass arguments details:\narg 1 ID = 79250946\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DCOLORVALUE* value_ptr=(Luna< D3DCOLORVALUE >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in D3DLIGHT9::Diffuse function");
		}
		D3DCOLORVALUE value=*value_ptr;

		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DLIGHT9::Diffuse(D3DCOLORVALUE). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Diffuse = value;

		return 0;
	}

	// void D3DLIGHT9::Specular(D3DCOLORVALUE value)
	static int _bind_setSpecular(lua_State *L) {
		if (!_lg_typecheck_setSpecular(L)) {
			luaL_error(L, "luna typecheck failed in void D3DLIGHT9::Specular(D3DCOLORVALUE value) function, expected prototype:\nvoid D3DLIGHT9::Specular(D3DCOLORVALUE value)\nClass arguments details:\narg 1 ID = 79250946\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DCOLORVALUE* value_ptr=(Luna< D3DCOLORVALUE >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in D3DLIGHT9::Specular function");
		}
		D3DCOLORVALUE value=*value_ptr;

		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DLIGHT9::Specular(D3DCOLORVALUE). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Specular = value;

		return 0;
	}

	// void D3DLIGHT9::Ambient(D3DCOLORVALUE value)
	static int _bind_setAmbient(lua_State *L) {
		if (!_lg_typecheck_setAmbient(L)) {
			luaL_error(L, "luna typecheck failed in void D3DLIGHT9::Ambient(D3DCOLORVALUE value) function, expected prototype:\nvoid D3DLIGHT9::Ambient(D3DCOLORVALUE value)\nClass arguments details:\narg 1 ID = 79250946\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DCOLORVALUE* value_ptr=(Luna< D3DCOLORVALUE >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in D3DLIGHT9::Ambient function");
		}
		D3DCOLORVALUE value=*value_ptr;

		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DLIGHT9::Ambient(D3DCOLORVALUE). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Ambient = value;

		return 0;
	}

	// void D3DLIGHT9::Position(D3DVECTOR value)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luaL_error(L, "luna typecheck failed in void D3DLIGHT9::Position(D3DVECTOR value) function, expected prototype:\nvoid D3DLIGHT9::Position(D3DVECTOR value)\nClass arguments details:\narg 1 ID = 8428048\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DVECTOR* value_ptr=(Luna< D3DVECTOR >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in D3DLIGHT9::Position function");
		}
		D3DVECTOR value=*value_ptr;

		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DLIGHT9::Position(D3DVECTOR). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Position = value;

		return 0;
	}

	// void D3DLIGHT9::Direction(D3DVECTOR value)
	static int _bind_setDirection(lua_State *L) {
		if (!_lg_typecheck_setDirection(L)) {
			luaL_error(L, "luna typecheck failed in void D3DLIGHT9::Direction(D3DVECTOR value) function, expected prototype:\nvoid D3DLIGHT9::Direction(D3DVECTOR value)\nClass arguments details:\narg 1 ID = 8428048\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DVECTOR* value_ptr=(Luna< D3DVECTOR >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in D3DLIGHT9::Direction function");
		}
		D3DVECTOR value=*value_ptr;

		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DLIGHT9::Direction(D3DVECTOR). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Direction = value;

		return 0;
	}

	// void D3DLIGHT9::Range(float value)
	static int _bind_setRange(lua_State *L) {
		if (!_lg_typecheck_setRange(L)) {
			luaL_error(L, "luna typecheck failed in void D3DLIGHT9::Range(float value) function, expected prototype:\nvoid D3DLIGHT9::Range(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DLIGHT9::Range(float). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Range = value;

		return 0;
	}

	// void D3DLIGHT9::Falloff(float value)
	static int _bind_setFalloff(lua_State *L) {
		if (!_lg_typecheck_setFalloff(L)) {
			luaL_error(L, "luna typecheck failed in void D3DLIGHT9::Falloff(float value) function, expected prototype:\nvoid D3DLIGHT9::Falloff(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DLIGHT9::Falloff(float). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Falloff = value;

		return 0;
	}

	// void D3DLIGHT9::Attenuation0(float value)
	static int _bind_setAttenuation0(lua_State *L) {
		if (!_lg_typecheck_setAttenuation0(L)) {
			luaL_error(L, "luna typecheck failed in void D3DLIGHT9::Attenuation0(float value) function, expected prototype:\nvoid D3DLIGHT9::Attenuation0(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DLIGHT9::Attenuation0(float). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Attenuation0 = value;

		return 0;
	}

	// void D3DLIGHT9::Attenuation1(float value)
	static int _bind_setAttenuation1(lua_State *L) {
		if (!_lg_typecheck_setAttenuation1(L)) {
			luaL_error(L, "luna typecheck failed in void D3DLIGHT9::Attenuation1(float value) function, expected prototype:\nvoid D3DLIGHT9::Attenuation1(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DLIGHT9::Attenuation1(float). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Attenuation1 = value;

		return 0;
	}

	// void D3DLIGHT9::Attenuation2(float value)
	static int _bind_setAttenuation2(lua_State *L) {
		if (!_lg_typecheck_setAttenuation2(L)) {
			luaL_error(L, "luna typecheck failed in void D3DLIGHT9::Attenuation2(float value) function, expected prototype:\nvoid D3DLIGHT9::Attenuation2(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DLIGHT9::Attenuation2(float). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Attenuation2 = value;

		return 0;
	}

	// void D3DLIGHT9::Theta(float value)
	static int _bind_setTheta(lua_State *L) {
		if (!_lg_typecheck_setTheta(L)) {
			luaL_error(L, "luna typecheck failed in void D3DLIGHT9::Theta(float value) function, expected prototype:\nvoid D3DLIGHT9::Theta(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DLIGHT9::Theta(float). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Theta = value;

		return 0;
	}

	// void D3DLIGHT9::Phi(float value)
	static int _bind_setPhi(lua_State *L) {
		if (!_lg_typecheck_setPhi(L)) {
			luaL_error(L, "luna typecheck failed in void D3DLIGHT9::Phi(float value) function, expected prototype:\nvoid D3DLIGHT9::Phi(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DLIGHT9* self=(Luna< D3DLIGHT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DLIGHT9::Phi(float). Got : '%s'\n%s",typeid(Luna< D3DLIGHT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Phi = value;

		return 0;
	}


	// Operator binds:

};

D3DLIGHT9* LunaTraits< D3DLIGHT9 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< D3DLIGHT9 >::_bind_dtor(D3DLIGHT9* obj) {
	delete obj;
}

const char LunaTraits< D3DLIGHT9 >::className[] = "D3DLIGHT9";
const char LunaTraits< D3DLIGHT9 >::fullName[] = "D3DLIGHT9";
const char LunaTraits< D3DLIGHT9 >::moduleName[] = "dx9";
const char* LunaTraits< D3DLIGHT9 >::parents[] = {0};
const int LunaTraits< D3DLIGHT9 >::hash = 25938411;
const int LunaTraits< D3DLIGHT9 >::uniqueIDs[] = {25938411,0};

luna_RegType LunaTraits< D3DLIGHT9 >::methods[] = {
	{"getType", &luna_wrapper_D3DLIGHT9::_bind_getType},
	{"getDiffuse", &luna_wrapper_D3DLIGHT9::_bind_getDiffuse},
	{"getSpecular", &luna_wrapper_D3DLIGHT9::_bind_getSpecular},
	{"getAmbient", &luna_wrapper_D3DLIGHT9::_bind_getAmbient},
	{"getPosition", &luna_wrapper_D3DLIGHT9::_bind_getPosition},
	{"getDirection", &luna_wrapper_D3DLIGHT9::_bind_getDirection},
	{"getRange", &luna_wrapper_D3DLIGHT9::_bind_getRange},
	{"getFalloff", &luna_wrapper_D3DLIGHT9::_bind_getFalloff},
	{"getAttenuation0", &luna_wrapper_D3DLIGHT9::_bind_getAttenuation0},
	{"getAttenuation1", &luna_wrapper_D3DLIGHT9::_bind_getAttenuation1},
	{"getAttenuation2", &luna_wrapper_D3DLIGHT9::_bind_getAttenuation2},
	{"getTheta", &luna_wrapper_D3DLIGHT9::_bind_getTheta},
	{"getPhi", &luna_wrapper_D3DLIGHT9::_bind_getPhi},
	{"setType", &luna_wrapper_D3DLIGHT9::_bind_setType},
	{"setDiffuse", &luna_wrapper_D3DLIGHT9::_bind_setDiffuse},
	{"setSpecular", &luna_wrapper_D3DLIGHT9::_bind_setSpecular},
	{"setAmbient", &luna_wrapper_D3DLIGHT9::_bind_setAmbient},
	{"setPosition", &luna_wrapper_D3DLIGHT9::_bind_setPosition},
	{"setDirection", &luna_wrapper_D3DLIGHT9::_bind_setDirection},
	{"setRange", &luna_wrapper_D3DLIGHT9::_bind_setRange},
	{"setFalloff", &luna_wrapper_D3DLIGHT9::_bind_setFalloff},
	{"setAttenuation0", &luna_wrapper_D3DLIGHT9::_bind_setAttenuation0},
	{"setAttenuation1", &luna_wrapper_D3DLIGHT9::_bind_setAttenuation1},
	{"setAttenuation2", &luna_wrapper_D3DLIGHT9::_bind_setAttenuation2},
	{"setTheta", &luna_wrapper_D3DLIGHT9::_bind_setTheta},
	{"setPhi", &luna_wrapper_D3DLIGHT9::_bind_setPhi},
	{"dynCast", &luna_wrapper_D3DLIGHT9::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DLIGHT9::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DLIGHT9::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DLIGHT9::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DLIGHT9 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DLIGHT9 >::enumValues[] = {
	{0,0}
};


