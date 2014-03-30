#include <plug_common.h>

class luna_wrapper_osgUtil_PerlinNoise {
public:
	typedef Luna< osgUtil::PerlinNoise > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76958174) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::PerlinNoise*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::PerlinNoise* rhs =(Luna< osgUtil::PerlinNoise >::check(L,2));
		osgUtil::PerlinNoise* self=(Luna< osgUtil::PerlinNoise >::check(L,1));
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

		osgUtil::PerlinNoise* self= (osgUtil::PerlinNoise*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::PerlinNoise >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76958174) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgUtil::PerlinNoise >::check(L,1));
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

		osgUtil::PerlinNoise* self=(Luna< osgUtil::PerlinNoise >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::PerlinNoise");
		
		return luna_dynamicCast(L,converters,"osgUtil::PerlinNoise",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetNoiseFrequency(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_noise1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PerlinNoise1D(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PerlinNoise2D(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PerlinNoise3D(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_create3DNoiseImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_create3DNoiseTexture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::PerlinNoise::PerlinNoise()
	static osgUtil::PerlinNoise* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PerlinNoise::PerlinNoise() function, expected prototype:\nosgUtil::PerlinNoise::PerlinNoise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::PerlinNoise();
	}


	// Function binds:
	// void osgUtil::PerlinNoise::SetNoiseFrequency(int frequency)
	static int _bind_SetNoiseFrequency(lua_State *L) {
		if (!_lg_typecheck_SetNoiseFrequency(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PerlinNoise::SetNoiseFrequency(int frequency) function, expected prototype:\nvoid osgUtil::PerlinNoise::SetNoiseFrequency(int frequency)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int frequency=(int)lua_tointeger(L,2);

		osgUtil::PerlinNoise* self=(Luna< osgUtil::PerlinNoise >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PerlinNoise::SetNoiseFrequency(int). Got : '%s'\n%s",typeid(Luna< osgUtil::PerlinNoise >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetNoiseFrequency(frequency);

		return 0;
	}

	// double osgUtil::PerlinNoise::noise1(double arg)
	static int _bind_noise1(lua_State *L) {
		if (!_lg_typecheck_noise1(L)) {
			luaL_error(L, "luna typecheck failed in double osgUtil::PerlinNoise::noise1(double arg) function, expected prototype:\ndouble osgUtil::PerlinNoise::noise1(double arg)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double arg=(double)lua_tonumber(L,2);

		osgUtil::PerlinNoise* self=(Luna< osgUtil::PerlinNoise >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgUtil::PerlinNoise::noise1(double). Got : '%s'\n%s",typeid(Luna< osgUtil::PerlinNoise >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->noise1(arg);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgUtil::PerlinNoise::PerlinNoise1D(double x, double alpha, double beta, int n)
	static int _bind_PerlinNoise1D(lua_State *L) {
		if (!_lg_typecheck_PerlinNoise1D(L)) {
			luaL_error(L, "luna typecheck failed in double osgUtil::PerlinNoise::PerlinNoise1D(double x, double alpha, double beta, int n) function, expected prototype:\ndouble osgUtil::PerlinNoise::PerlinNoise1D(double x, double alpha, double beta, int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double alpha=(double)lua_tonumber(L,3);
		double beta=(double)lua_tonumber(L,4);
		int n=(int)lua_tointeger(L,5);

		osgUtil::PerlinNoise* self=(Luna< osgUtil::PerlinNoise >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgUtil::PerlinNoise::PerlinNoise1D(double, double, double, int). Got : '%s'\n%s",typeid(Luna< osgUtil::PerlinNoise >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->PerlinNoise1D(x, alpha, beta, n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgUtil::PerlinNoise::PerlinNoise2D(double x, double y, double alpha, double beta, int n)
	static int _bind_PerlinNoise2D(lua_State *L) {
		if (!_lg_typecheck_PerlinNoise2D(L)) {
			luaL_error(L, "luna typecheck failed in double osgUtil::PerlinNoise::PerlinNoise2D(double x, double y, double alpha, double beta, int n) function, expected prototype:\ndouble osgUtil::PerlinNoise::PerlinNoise2D(double x, double y, double alpha, double beta, int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double alpha=(double)lua_tonumber(L,4);
		double beta=(double)lua_tonumber(L,5);
		int n=(int)lua_tointeger(L,6);

		osgUtil::PerlinNoise* self=(Luna< osgUtil::PerlinNoise >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgUtil::PerlinNoise::PerlinNoise2D(double, double, double, double, int). Got : '%s'\n%s",typeid(Luna< osgUtil::PerlinNoise >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->PerlinNoise2D(x, y, alpha, beta, n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgUtil::PerlinNoise::PerlinNoise3D(double x, double y, double z, double alpha, double beta, int n)
	static int _bind_PerlinNoise3D(lua_State *L) {
		if (!_lg_typecheck_PerlinNoise3D(L)) {
			luaL_error(L, "luna typecheck failed in double osgUtil::PerlinNoise::PerlinNoise3D(double x, double y, double z, double alpha, double beta, int n) function, expected prototype:\ndouble osgUtil::PerlinNoise::PerlinNoise3D(double x, double y, double z, double alpha, double beta, int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double z=(double)lua_tonumber(L,4);
		double alpha=(double)lua_tonumber(L,5);
		double beta=(double)lua_tonumber(L,6);
		int n=(int)lua_tointeger(L,7);

		osgUtil::PerlinNoise* self=(Luna< osgUtil::PerlinNoise >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgUtil::PerlinNoise::PerlinNoise3D(double, double, double, double, double, int). Got : '%s'\n%s",typeid(Luna< osgUtil::PerlinNoise >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->PerlinNoise3D(x, y, z, alpha, beta, n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Image * osgUtil::PerlinNoise::create3DNoiseImage(int texSize)
	static int _bind_create3DNoiseImage(lua_State *L) {
		if (!_lg_typecheck_create3DNoiseImage(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osgUtil::PerlinNoise::create3DNoiseImage(int texSize) function, expected prototype:\nosg::Image * osgUtil::PerlinNoise::create3DNoiseImage(int texSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int texSize=(int)lua_tointeger(L,2);

		osgUtil::PerlinNoise* self=(Luna< osgUtil::PerlinNoise >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osgUtil::PerlinNoise::create3DNoiseImage(int). Got : '%s'\n%s",typeid(Luna< osgUtil::PerlinNoise >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->create3DNoiseImage(texSize);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// osg::Texture3D * osgUtil::PerlinNoise::create3DNoiseTexture(int texSize)
	static int _bind_create3DNoiseTexture(lua_State *L) {
		if (!_lg_typecheck_create3DNoiseTexture(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture3D * osgUtil::PerlinNoise::create3DNoiseTexture(int texSize) function, expected prototype:\nosg::Texture3D * osgUtil::PerlinNoise::create3DNoiseTexture(int texSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int texSize=(int)lua_tointeger(L,2);

		osgUtil::PerlinNoise* self=(Luna< osgUtil::PerlinNoise >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture3D * osgUtil::PerlinNoise::create3DNoiseTexture(int). Got : '%s'\n%s",typeid(Luna< osgUtil::PerlinNoise >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture3D * lret = self->create3DNoiseTexture(texSize);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture3D >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgUtil::PerlinNoise* LunaTraits< osgUtil::PerlinNoise >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_PerlinNoise::_bind_ctor(L);
}

void LunaTraits< osgUtil::PerlinNoise >::_bind_dtor(osgUtil::PerlinNoise* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::PerlinNoise >::className[] = "PerlinNoise";
const char LunaTraits< osgUtil::PerlinNoise >::fullName[] = "osgUtil::PerlinNoise";
const char LunaTraits< osgUtil::PerlinNoise >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::PerlinNoise >::parents[] = {0};
const int LunaTraits< osgUtil::PerlinNoise >::hash = 76958174;
const int LunaTraits< osgUtil::PerlinNoise >::uniqueIDs[] = {76958174,0};

luna_RegType LunaTraits< osgUtil::PerlinNoise >::methods[] = {
	{"SetNoiseFrequency", &luna_wrapper_osgUtil_PerlinNoise::_bind_SetNoiseFrequency},
	{"noise1", &luna_wrapper_osgUtil_PerlinNoise::_bind_noise1},
	{"PerlinNoise1D", &luna_wrapper_osgUtil_PerlinNoise::_bind_PerlinNoise1D},
	{"PerlinNoise2D", &luna_wrapper_osgUtil_PerlinNoise::_bind_PerlinNoise2D},
	{"PerlinNoise3D", &luna_wrapper_osgUtil_PerlinNoise::_bind_PerlinNoise3D},
	{"create3DNoiseImage", &luna_wrapper_osgUtil_PerlinNoise::_bind_create3DNoiseImage},
	{"create3DNoiseTexture", &luna_wrapper_osgUtil_PerlinNoise::_bind_create3DNoiseTexture},
	{"dynCast", &luna_wrapper_osgUtil_PerlinNoise::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_PerlinNoise::_bind___eq},
	{"fromVoid", &luna_wrapper_osgUtil_PerlinNoise::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_PerlinNoise::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::PerlinNoise >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::PerlinNoise >::enumValues[] = {
	{0,0}
};


