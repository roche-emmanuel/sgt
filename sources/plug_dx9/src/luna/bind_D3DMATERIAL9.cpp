#include <plug_common.h>

class luna_wrapper_D3DMATERIAL9 {
public:
	typedef Luna< D3DMATERIAL9 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71539139) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DMATERIAL9*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DMATERIAL9* rhs =(Luna< D3DMATERIAL9 >::check(L,2));
		D3DMATERIAL9* self=(Luna< D3DMATERIAL9 >::check(L,1));
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

		D3DMATERIAL9* self= (D3DMATERIAL9*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DMATERIAL9 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71539139) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DMATERIAL9 >::check(L,1));
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

		D3DMATERIAL9* self=(Luna< D3DMATERIAL9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DMATERIAL9");
		
		return luna_dynamicCast(L,converters,"D3DMATERIAL9",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getDiffuse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAmbient(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSpecular(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEmissive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPower(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDiffuse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,79250946) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAmbient(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,79250946) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSpecular(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,79250946) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEmissive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,79250946) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPower(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// D3DCOLORVALUE D3DMATERIAL9::Diffuse()
	static int _bind_getDiffuse(lua_State *L) {
		if (!_lg_typecheck_getDiffuse(L)) {
			luaL_error(L, "luna typecheck failed in D3DCOLORVALUE D3DMATERIAL9::Diffuse() function, expected prototype:\nD3DCOLORVALUE D3DMATERIAL9::Diffuse()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DMATERIAL9* self=(Luna< D3DMATERIAL9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DCOLORVALUE D3DMATERIAL9::Diffuse(). Got : '%s'\n%s",typeid(Luna< D3DMATERIAL9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const D3DCOLORVALUE* lret = &self->Diffuse;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< D3DCOLORVALUE >::push(L,lret,false);

		return 1;
	}

	// D3DCOLORVALUE D3DMATERIAL9::Ambient()
	static int _bind_getAmbient(lua_State *L) {
		if (!_lg_typecheck_getAmbient(L)) {
			luaL_error(L, "luna typecheck failed in D3DCOLORVALUE D3DMATERIAL9::Ambient() function, expected prototype:\nD3DCOLORVALUE D3DMATERIAL9::Ambient()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DMATERIAL9* self=(Luna< D3DMATERIAL9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DCOLORVALUE D3DMATERIAL9::Ambient(). Got : '%s'\n%s",typeid(Luna< D3DMATERIAL9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const D3DCOLORVALUE* lret = &self->Ambient;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< D3DCOLORVALUE >::push(L,lret,false);

		return 1;
	}

	// D3DCOLORVALUE D3DMATERIAL9::Specular()
	static int _bind_getSpecular(lua_State *L) {
		if (!_lg_typecheck_getSpecular(L)) {
			luaL_error(L, "luna typecheck failed in D3DCOLORVALUE D3DMATERIAL9::Specular() function, expected prototype:\nD3DCOLORVALUE D3DMATERIAL9::Specular()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DMATERIAL9* self=(Luna< D3DMATERIAL9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DCOLORVALUE D3DMATERIAL9::Specular(). Got : '%s'\n%s",typeid(Luna< D3DMATERIAL9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const D3DCOLORVALUE* lret = &self->Specular;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< D3DCOLORVALUE >::push(L,lret,false);

		return 1;
	}

	// D3DCOLORVALUE D3DMATERIAL9::Emissive()
	static int _bind_getEmissive(lua_State *L) {
		if (!_lg_typecheck_getEmissive(L)) {
			luaL_error(L, "luna typecheck failed in D3DCOLORVALUE D3DMATERIAL9::Emissive() function, expected prototype:\nD3DCOLORVALUE D3DMATERIAL9::Emissive()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DMATERIAL9* self=(Luna< D3DMATERIAL9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DCOLORVALUE D3DMATERIAL9::Emissive(). Got : '%s'\n%s",typeid(Luna< D3DMATERIAL9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const D3DCOLORVALUE* lret = &self->Emissive;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< D3DCOLORVALUE >::push(L,lret,false);

		return 1;
	}

	// float D3DMATERIAL9::Power()
	static int _bind_getPower(lua_State *L) {
		if (!_lg_typecheck_getPower(L)) {
			luaL_error(L, "luna typecheck failed in float D3DMATERIAL9::Power() function, expected prototype:\nfloat D3DMATERIAL9::Power()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DMATERIAL9* self=(Luna< D3DMATERIAL9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float D3DMATERIAL9::Power(). Got : '%s'\n%s",typeid(Luna< D3DMATERIAL9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Power;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void D3DMATERIAL9::Diffuse(D3DCOLORVALUE value)
	static int _bind_setDiffuse(lua_State *L) {
		if (!_lg_typecheck_setDiffuse(L)) {
			luaL_error(L, "luna typecheck failed in void D3DMATERIAL9::Diffuse(D3DCOLORVALUE value) function, expected prototype:\nvoid D3DMATERIAL9::Diffuse(D3DCOLORVALUE value)\nClass arguments details:\narg 1 ID = 79250946\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DCOLORVALUE* value_ptr=(Luna< D3DCOLORVALUE >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in D3DMATERIAL9::Diffuse function");
		}
		D3DCOLORVALUE value=*value_ptr;

		D3DMATERIAL9* self=(Luna< D3DMATERIAL9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DMATERIAL9::Diffuse(D3DCOLORVALUE). Got : '%s'\n%s",typeid(Luna< D3DMATERIAL9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Diffuse = value;

		return 0;
	}

	// void D3DMATERIAL9::Ambient(D3DCOLORVALUE value)
	static int _bind_setAmbient(lua_State *L) {
		if (!_lg_typecheck_setAmbient(L)) {
			luaL_error(L, "luna typecheck failed in void D3DMATERIAL9::Ambient(D3DCOLORVALUE value) function, expected prototype:\nvoid D3DMATERIAL9::Ambient(D3DCOLORVALUE value)\nClass arguments details:\narg 1 ID = 79250946\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DCOLORVALUE* value_ptr=(Luna< D3DCOLORVALUE >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in D3DMATERIAL9::Ambient function");
		}
		D3DCOLORVALUE value=*value_ptr;

		D3DMATERIAL9* self=(Luna< D3DMATERIAL9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DMATERIAL9::Ambient(D3DCOLORVALUE). Got : '%s'\n%s",typeid(Luna< D3DMATERIAL9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Ambient = value;

		return 0;
	}

	// void D3DMATERIAL9::Specular(D3DCOLORVALUE value)
	static int _bind_setSpecular(lua_State *L) {
		if (!_lg_typecheck_setSpecular(L)) {
			luaL_error(L, "luna typecheck failed in void D3DMATERIAL9::Specular(D3DCOLORVALUE value) function, expected prototype:\nvoid D3DMATERIAL9::Specular(D3DCOLORVALUE value)\nClass arguments details:\narg 1 ID = 79250946\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DCOLORVALUE* value_ptr=(Luna< D3DCOLORVALUE >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in D3DMATERIAL9::Specular function");
		}
		D3DCOLORVALUE value=*value_ptr;

		D3DMATERIAL9* self=(Luna< D3DMATERIAL9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DMATERIAL9::Specular(D3DCOLORVALUE). Got : '%s'\n%s",typeid(Luna< D3DMATERIAL9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Specular = value;

		return 0;
	}

	// void D3DMATERIAL9::Emissive(D3DCOLORVALUE value)
	static int _bind_setEmissive(lua_State *L) {
		if (!_lg_typecheck_setEmissive(L)) {
			luaL_error(L, "luna typecheck failed in void D3DMATERIAL9::Emissive(D3DCOLORVALUE value) function, expected prototype:\nvoid D3DMATERIAL9::Emissive(D3DCOLORVALUE value)\nClass arguments details:\narg 1 ID = 79250946\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DCOLORVALUE* value_ptr=(Luna< D3DCOLORVALUE >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in D3DMATERIAL9::Emissive function");
		}
		D3DCOLORVALUE value=*value_ptr;

		D3DMATERIAL9* self=(Luna< D3DMATERIAL9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DMATERIAL9::Emissive(D3DCOLORVALUE). Got : '%s'\n%s",typeid(Luna< D3DMATERIAL9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Emissive = value;

		return 0;
	}

	// void D3DMATERIAL9::Power(float value)
	static int _bind_setPower(lua_State *L) {
		if (!_lg_typecheck_setPower(L)) {
			luaL_error(L, "luna typecheck failed in void D3DMATERIAL9::Power(float value) function, expected prototype:\nvoid D3DMATERIAL9::Power(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		D3DMATERIAL9* self=(Luna< D3DMATERIAL9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DMATERIAL9::Power(float). Got : '%s'\n%s",typeid(Luna< D3DMATERIAL9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Power = value;

		return 0;
	}


	// Operator binds:

};

D3DMATERIAL9* LunaTraits< D3DMATERIAL9 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< D3DMATERIAL9 >::_bind_dtor(D3DMATERIAL9* obj) {
	delete obj;
}

const char LunaTraits< D3DMATERIAL9 >::className[] = "D3DMATERIAL9";
const char LunaTraits< D3DMATERIAL9 >::fullName[] = "D3DMATERIAL9";
const char LunaTraits< D3DMATERIAL9 >::moduleName[] = "dx9";
const char* LunaTraits< D3DMATERIAL9 >::parents[] = {0};
const int LunaTraits< D3DMATERIAL9 >::hash = 71539139;
const int LunaTraits< D3DMATERIAL9 >::uniqueIDs[] = {71539139,0};

luna_RegType LunaTraits< D3DMATERIAL9 >::methods[] = {
	{"getDiffuse", &luna_wrapper_D3DMATERIAL9::_bind_getDiffuse},
	{"getAmbient", &luna_wrapper_D3DMATERIAL9::_bind_getAmbient},
	{"getSpecular", &luna_wrapper_D3DMATERIAL9::_bind_getSpecular},
	{"getEmissive", &luna_wrapper_D3DMATERIAL9::_bind_getEmissive},
	{"getPower", &luna_wrapper_D3DMATERIAL9::_bind_getPower},
	{"setDiffuse", &luna_wrapper_D3DMATERIAL9::_bind_setDiffuse},
	{"setAmbient", &luna_wrapper_D3DMATERIAL9::_bind_setAmbient},
	{"setSpecular", &luna_wrapper_D3DMATERIAL9::_bind_setSpecular},
	{"setEmissive", &luna_wrapper_D3DMATERIAL9::_bind_setEmissive},
	{"setPower", &luna_wrapper_D3DMATERIAL9::_bind_setPower},
	{"dynCast", &luna_wrapper_D3DMATERIAL9::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DMATERIAL9::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DMATERIAL9::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DMATERIAL9::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DMATERIAL9 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DMATERIAL9 >::enumValues[] = {
	{0,0}
};


