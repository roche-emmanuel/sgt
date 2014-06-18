#include <plug_common.h>

class luna_wrapper_D3DSURFACE_DESC {
public:
	typedef Luna< D3DSURFACE_DESC > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76481686) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DSURFACE_DESC*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DSURFACE_DESC* rhs =(Luna< D3DSURFACE_DESC >::check(L,2));
		D3DSURFACE_DESC* self=(Luna< D3DSURFACE_DESC >::check(L,1));
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

		D3DSURFACE_DESC* self= (D3DSURFACE_DESC*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DSURFACE_DESC >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76481686) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DSURFACE_DESC >::check(L,1));
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

		D3DSURFACE_DESC* self=(Luna< D3DSURFACE_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DSURFACE_DESC");
		
		return luna_dynamicCast(L,converters,"D3DSURFACE_DESC",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPool(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMultiSampleType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMultiSampleQuality(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMultiSampleType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMultiSampleQuality(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// D3DSURFACE_DESC::D3DSURFACE_DESC()
	static D3DSURFACE_DESC* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in D3DSURFACE_DESC::D3DSURFACE_DESC() function, expected prototype:\nD3DSURFACE_DESC::D3DSURFACE_DESC()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new D3DSURFACE_DESC();
	}


	// Function binds:
	// D3DFORMAT D3DSURFACE_DESC::Format()
	static int _bind_getFormat(lua_State *L) {
		if (!_lg_typecheck_getFormat(L)) {
			luaL_error(L, "luna typecheck failed in D3DFORMAT D3DSURFACE_DESC::Format() function, expected prototype:\nD3DFORMAT D3DSURFACE_DESC::Format()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DSURFACE_DESC* self=(Luna< D3DSURFACE_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DFORMAT D3DSURFACE_DESC::Format(). Got : '%s'\n%s",typeid(Luna< D3DSURFACE_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DFORMAT lret = self->Format;
		lua_pushnumber(L,lret);

		return 1;
	}

	// D3DRESOURCETYPE D3DSURFACE_DESC::Type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in D3DRESOURCETYPE D3DSURFACE_DESC::Type() function, expected prototype:\nD3DRESOURCETYPE D3DSURFACE_DESC::Type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DSURFACE_DESC* self=(Luna< D3DSURFACE_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DRESOURCETYPE D3DSURFACE_DESC::Type(). Got : '%s'\n%s",typeid(Luna< D3DSURFACE_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DRESOURCETYPE lret = self->Type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DSURFACE_DESC::Usage()
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DSURFACE_DESC::Usage() function, expected prototype:\nunsigned long D3DSURFACE_DESC::Usage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DSURFACE_DESC* self=(Luna< D3DSURFACE_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DSURFACE_DESC::Usage(). Got : '%s'\n%s",typeid(Luna< D3DSURFACE_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Usage;
		lua_pushnumber(L,lret);

		return 1;
	}

	// D3DPOOL D3DSURFACE_DESC::Pool()
	static int _bind_getPool(lua_State *L) {
		if (!_lg_typecheck_getPool(L)) {
			luaL_error(L, "luna typecheck failed in D3DPOOL D3DSURFACE_DESC::Pool() function, expected prototype:\nD3DPOOL D3DSURFACE_DESC::Pool()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DSURFACE_DESC* self=(Luna< D3DSURFACE_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DPOOL D3DSURFACE_DESC::Pool(). Got : '%s'\n%s",typeid(Luna< D3DSURFACE_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DPOOL lret = self->Pool;
		lua_pushnumber(L,lret);

		return 1;
	}

	// D3DMULTISAMPLE_TYPE D3DSURFACE_DESC::MultiSampleType()
	static int _bind_getMultiSampleType(lua_State *L) {
		if (!_lg_typecheck_getMultiSampleType(L)) {
			luaL_error(L, "luna typecheck failed in D3DMULTISAMPLE_TYPE D3DSURFACE_DESC::MultiSampleType() function, expected prototype:\nD3DMULTISAMPLE_TYPE D3DSURFACE_DESC::MultiSampleType()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DSURFACE_DESC* self=(Luna< D3DSURFACE_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DMULTISAMPLE_TYPE D3DSURFACE_DESC::MultiSampleType(). Got : '%s'\n%s",typeid(Luna< D3DSURFACE_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DMULTISAMPLE_TYPE lret = self->MultiSampleType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DSURFACE_DESC::MultiSampleQuality()
	static int _bind_getMultiSampleQuality(lua_State *L) {
		if (!_lg_typecheck_getMultiSampleQuality(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DSURFACE_DESC::MultiSampleQuality() function, expected prototype:\nunsigned long D3DSURFACE_DESC::MultiSampleQuality()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DSURFACE_DESC* self=(Luna< D3DSURFACE_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DSURFACE_DESC::MultiSampleQuality(). Got : '%s'\n%s",typeid(Luna< D3DSURFACE_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MultiSampleQuality;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DSURFACE_DESC::Width()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DSURFACE_DESC::Width() function, expected prototype:\nunsigned int D3DSURFACE_DESC::Width()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DSURFACE_DESC* self=(Luna< D3DSURFACE_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DSURFACE_DESC::Width(). Got : '%s'\n%s",typeid(Luna< D3DSURFACE_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Width;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DSURFACE_DESC::Height()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DSURFACE_DESC::Height() function, expected prototype:\nunsigned int D3DSURFACE_DESC::Height()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DSURFACE_DESC* self=(Luna< D3DSURFACE_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DSURFACE_DESC::Height(). Got : '%s'\n%s",typeid(Luna< D3DSURFACE_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Height;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void D3DSURFACE_DESC::Format(D3DFORMAT value)
	static int _bind_setFormat(lua_State *L) {
		if (!_lg_typecheck_setFormat(L)) {
			luaL_error(L, "luna typecheck failed in void D3DSURFACE_DESC::Format(D3DFORMAT value) function, expected prototype:\nvoid D3DSURFACE_DESC::Format(D3DFORMAT value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DFORMAT value=(D3DFORMAT)lua_tointeger(L,2);

		D3DSURFACE_DESC* self=(Luna< D3DSURFACE_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DSURFACE_DESC::Format(D3DFORMAT). Got : '%s'\n%s",typeid(Luna< D3DSURFACE_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Format = value;

		return 0;
	}

	// void D3DSURFACE_DESC::Type(D3DRESOURCETYPE value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void D3DSURFACE_DESC::Type(D3DRESOURCETYPE value) function, expected prototype:\nvoid D3DSURFACE_DESC::Type(D3DRESOURCETYPE value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DRESOURCETYPE value=(D3DRESOURCETYPE)lua_tointeger(L,2);

		D3DSURFACE_DESC* self=(Luna< D3DSURFACE_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DSURFACE_DESC::Type(D3DRESOURCETYPE). Got : '%s'\n%s",typeid(Luna< D3DSURFACE_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Type = value;

		return 0;
	}

	// void D3DSURFACE_DESC::Usage(unsigned long value)
	static int _bind_setUsage(lua_State *L) {
		if (!_lg_typecheck_setUsage(L)) {
			luaL_error(L, "luna typecheck failed in void D3DSURFACE_DESC::Usage(unsigned long value) function, expected prototype:\nvoid D3DSURFACE_DESC::Usage(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DSURFACE_DESC* self=(Luna< D3DSURFACE_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DSURFACE_DESC::Usage(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DSURFACE_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Usage = value;

		return 0;
	}

	// void D3DSURFACE_DESC::Pool(D3DPOOL value)
	static int _bind_setPool(lua_State *L) {
		if (!_lg_typecheck_setPool(L)) {
			luaL_error(L, "luna typecheck failed in void D3DSURFACE_DESC::Pool(D3DPOOL value) function, expected prototype:\nvoid D3DSURFACE_DESC::Pool(D3DPOOL value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DPOOL value=(D3DPOOL)lua_tointeger(L,2);

		D3DSURFACE_DESC* self=(Luna< D3DSURFACE_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DSURFACE_DESC::Pool(D3DPOOL). Got : '%s'\n%s",typeid(Luna< D3DSURFACE_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Pool = value;

		return 0;
	}

	// void D3DSURFACE_DESC::MultiSampleType(D3DMULTISAMPLE_TYPE value)
	static int _bind_setMultiSampleType(lua_State *L) {
		if (!_lg_typecheck_setMultiSampleType(L)) {
			luaL_error(L, "luna typecheck failed in void D3DSURFACE_DESC::MultiSampleType(D3DMULTISAMPLE_TYPE value) function, expected prototype:\nvoid D3DSURFACE_DESC::MultiSampleType(D3DMULTISAMPLE_TYPE value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DMULTISAMPLE_TYPE value=(D3DMULTISAMPLE_TYPE)lua_tointeger(L,2);

		D3DSURFACE_DESC* self=(Luna< D3DSURFACE_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DSURFACE_DESC::MultiSampleType(D3DMULTISAMPLE_TYPE). Got : '%s'\n%s",typeid(Luna< D3DSURFACE_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MultiSampleType = value;

		return 0;
	}

	// void D3DSURFACE_DESC::MultiSampleQuality(unsigned long value)
	static int _bind_setMultiSampleQuality(lua_State *L) {
		if (!_lg_typecheck_setMultiSampleQuality(L)) {
			luaL_error(L, "luna typecheck failed in void D3DSURFACE_DESC::MultiSampleQuality(unsigned long value) function, expected prototype:\nvoid D3DSURFACE_DESC::MultiSampleQuality(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DSURFACE_DESC* self=(Luna< D3DSURFACE_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DSURFACE_DESC::MultiSampleQuality(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DSURFACE_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MultiSampleQuality = value;

		return 0;
	}

	// void D3DSURFACE_DESC::Width(unsigned int value)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luaL_error(L, "luna typecheck failed in void D3DSURFACE_DESC::Width(unsigned int value) function, expected prototype:\nvoid D3DSURFACE_DESC::Width(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DSURFACE_DESC* self=(Luna< D3DSURFACE_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DSURFACE_DESC::Width(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DSURFACE_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Width = value;

		return 0;
	}

	// void D3DSURFACE_DESC::Height(unsigned int value)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luaL_error(L, "luna typecheck failed in void D3DSURFACE_DESC::Height(unsigned int value) function, expected prototype:\nvoid D3DSURFACE_DESC::Height(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DSURFACE_DESC* self=(Luna< D3DSURFACE_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DSURFACE_DESC::Height(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DSURFACE_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Height = value;

		return 0;
	}


	// Operator binds:

};

D3DSURFACE_DESC* LunaTraits< D3DSURFACE_DESC >::_bind_ctor(lua_State *L) {
	return luna_wrapper_D3DSURFACE_DESC::_bind_ctor(L);
}

void LunaTraits< D3DSURFACE_DESC >::_bind_dtor(D3DSURFACE_DESC* obj) {
	delete obj;
}

const char LunaTraits< D3DSURFACE_DESC >::className[] = "D3DSURFACE_DESC";
const char LunaTraits< D3DSURFACE_DESC >::fullName[] = "D3DSURFACE_DESC";
const char LunaTraits< D3DSURFACE_DESC >::moduleName[] = "dx9";
const char* LunaTraits< D3DSURFACE_DESC >::parents[] = {0};
const int LunaTraits< D3DSURFACE_DESC >::hash = 76481686;
const int LunaTraits< D3DSURFACE_DESC >::uniqueIDs[] = {76481686,0};

luna_RegType LunaTraits< D3DSURFACE_DESC >::methods[] = {
	{"getFormat", &luna_wrapper_D3DSURFACE_DESC::_bind_getFormat},
	{"getType", &luna_wrapper_D3DSURFACE_DESC::_bind_getType},
	{"getUsage", &luna_wrapper_D3DSURFACE_DESC::_bind_getUsage},
	{"getPool", &luna_wrapper_D3DSURFACE_DESC::_bind_getPool},
	{"getMultiSampleType", &luna_wrapper_D3DSURFACE_DESC::_bind_getMultiSampleType},
	{"getMultiSampleQuality", &luna_wrapper_D3DSURFACE_DESC::_bind_getMultiSampleQuality},
	{"getWidth", &luna_wrapper_D3DSURFACE_DESC::_bind_getWidth},
	{"getHeight", &luna_wrapper_D3DSURFACE_DESC::_bind_getHeight},
	{"setFormat", &luna_wrapper_D3DSURFACE_DESC::_bind_setFormat},
	{"setType", &luna_wrapper_D3DSURFACE_DESC::_bind_setType},
	{"setUsage", &luna_wrapper_D3DSURFACE_DESC::_bind_setUsage},
	{"setPool", &luna_wrapper_D3DSURFACE_DESC::_bind_setPool},
	{"setMultiSampleType", &luna_wrapper_D3DSURFACE_DESC::_bind_setMultiSampleType},
	{"setMultiSampleQuality", &luna_wrapper_D3DSURFACE_DESC::_bind_setMultiSampleQuality},
	{"setWidth", &luna_wrapper_D3DSURFACE_DESC::_bind_setWidth},
	{"setHeight", &luna_wrapper_D3DSURFACE_DESC::_bind_setHeight},
	{"dynCast", &luna_wrapper_D3DSURFACE_DESC::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DSURFACE_DESC::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DSURFACE_DESC::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DSURFACE_DESC::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DSURFACE_DESC >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DSURFACE_DESC >::enumValues[] = {
	{0,0}
};


